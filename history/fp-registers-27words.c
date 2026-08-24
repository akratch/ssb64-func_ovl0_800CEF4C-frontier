/* Superseded evidence source; see history/README.md.
   Compile by prepending the project context (see scratch/README.md). */
extern u16 gSinTable[0x800];
#define lbParticleReadFloatBE bytecode_read_f32
#define lbParticleReadUShort bytecode_read_u16

#define LBPARTICLE_FLAG_ATTACH            0x8000

#define LBPARTICLE_SET_ATTACH(id)       (LBPARTICLE_FLAG_ATTACH | ((id) << 0xC))

#define LBPARTICLE_GET_ATTACH(id)       (((id) & 0x7000) >> 0xC)

#define SINTABLE_RAD_TO_ID(x)      ((s32)((x) * ((f32)ARRAY_COUNT(gSinTable) / PI32)))
#define SINTABLE_MASK_ID (ARRAY_COUNT(gSinTable) - 1)

#define lbGetSinCosUShort(sin, cos, angle, id)        \
{                                                     \
    id = SINTABLE_RAD_TO_ID(angle) & 0xFFF;           \
                                                      \
    sin = gSinTable[id & SINTABLE_MASK_ID];           \
                                                      \
    if (id & 0x800)                                   \
    {                                                 \
        sin = -sin;                                   \
    }                                                 \
    id += 0x400;                                      \
                                                      \
    cos = gSinTable[id & SINTABLE_MASK_ID];           \
                                                      \
    if (id & 0x800)                                   \
    {                                                 \
        cos = -cos;                                   \
    }                                                 \
}

void func_ovl0_800CE188(void*);

u8 *lbParticleReadFloatBE(u8*, f32*);
u8 *lbParticleReadUShort(u8*, u16*);

void func_ovl0_800CEC34(void*, f32);
void func_ovl0_800CEEB8(void*, void*, f32);
void* func_ovl0_800CE6B8(void*, s32, s32);

// bss
static void *sLBParticleStructsAllocFree;
static void *sLBParticleStructsAllocLinks[16];
static void *sLBParticleGeneratorsAllocFree;
static DObj *sLBParticleAttachDObjs[8];

static u16 sLBParticleStructsUsedNum;

efParticle* func_ovl0_800CEF4C(efParticle *this_ptcl, efParticle *other_ptcl, s32 bank_id)
{
    efParticle *current_ptcl;
    efParticle *next_ptcl;
    efGenerator *gtor;
    u8 *csr; // s1
    u8 command; // s0
    u16 bytecode_timer;
    u16 angle_id;
    u16 bytecode_csr;
    s32 svar1;  // sp88?
    s32 svar2;
    u8 opcode;
    f32 fvar; // s3
    f32 sp7C;
    f32 temp1, temp2;
    f32 sp70[1];
    f32 var_f14;
    f32 unused2[1];
    f32 f0, f1;
    f32 sx1, sx2; // sp5C, sp58
    f32 cx1, cx2; // f16=>sp54, f12=>sp50
    u16 angle_id_2;
    f32 sx4; 
    f32 cx4[1];
    f32 sx3, cx3; // f18, f0=>sp44
    
    if (this_ptcl->flags & 0x800)
    {
        return this_ptcl->next;
    }
    if (this_ptcl->bytecode_timer != 0)
    {
        this_ptcl->bytecode_timer--;
        
        if (this_ptcl->bytecode_timer == 0)
        {
            csr = &this_ptcl->bytecode[this_ptcl->bytecode_csr];
            
            do
            {
                command = *csr++;
                
                if (command >= 0x80)
                {
                    bytecode_timer = 0;

                    opcode = (command & 0xF8);
                    
                    if (opcode > 0x98)
                    {
                        opcode = (command & 0xF0);

                        if ((opcode != 0xC0) && (opcode != 0xD0))
                        {
                            opcode = command;
                        }
                    }
                    switch (opcode)
                    {
                    case 0x80:
                        if (command & 1) 
                        { 
                            csr = lbParticleReadFloatBE(csr, &this_ptcl->pos.x);
                        }
                        if (command & 2) 
                        { 
                            csr = lbParticleReadFloatBE(csr, &this_ptcl->pos.y);
                        }
                        if (command & 4)
                        { 
                            csr = lbParticleReadFloatBE(csr, &this_ptcl->pos.z);
                        }
                        break;
                        
                    case 0x88:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBE(csr, &fvar);
                            this_ptcl->pos.x += fvar;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBE(csr, &fvar);
                            this_ptcl->pos.y += fvar;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBE(csr, &fvar);
                            this_ptcl->pos.z += fvar;
                        }
                        break;
                        
                    case 0x90:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBE(csr, &this_ptcl->vel.x);
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBE(csr, &this_ptcl->vel.y);
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBE(csr, &this_ptcl->vel.z);
                        }
                        break;
                        
                    case 0x98:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBE(csr, &fvar);
                            this_ptcl->vel.x += fvar;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBE(csr, &fvar);
                            this_ptcl->vel.y += fvar;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBE(csr, &fvar);
                            this_ptcl->vel.z += fvar;
                        }
                        break;
                        
                    case 0xA0:
                        csr = lbParticleReadUShort(csr, &this_ptcl->unk_ptcl_0xE);
                        csr = lbParticleReadFloatBE(csr, &this_ptcl->unk_ptcl_0x44);

                        if (this_ptcl->unk_ptcl_0xE == 1)
                        {
                            this_ptcl->unk_ptcl_0x40 = this_ptcl->unk_ptcl_0x44;
                            this_ptcl->unk_ptcl_0xE = 0;
                        }
                        break;
                        
                    case 0xA1:
                        this_ptcl->flags = *csr++;
                        break;
                        
                    case 0xA2:
                        csr = lbParticleReadFloatBE(csr, &this_ptcl->gravity);
                        
                        if (this_ptcl->gravity == 0.0F)
                        {
                            this_ptcl->flags &= ~0x1;
                        }
                        else this_ptcl->flags |= 0x1;
                        break;
                        
                    case 0xA3:
                        csr = lbParticleReadFloatBE(csr, &this_ptcl->friction);
                            
                        if (this_ptcl->friction == 1.0F)
                        {
                            this_ptcl->flags &= ~0x2;
                        }
                        else this_ptcl->flags |= 0x2;
                        break;
                        
                    case 0xA4:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_ptcl = func_ovl0_800CE6B8(this_ptcl, this_ptcl->bank_id, svar1);
                            
                        if (current_ptcl != NULL)
                        {
                            current_ptcl->pos.x = this_ptcl->pos.x;
                            current_ptcl->pos.y = this_ptcl->pos.y;
                            current_ptcl->pos.z = this_ptcl->pos.z;
                            current_ptcl->generator_id = this_ptcl->generator_id;
                            current_ptcl->gtor = this_ptcl->gtor;
                            current_ptcl->tfrm = this_ptcl->tfrm;
                                
                            if (current_ptcl->tfrm != NULL)
                            {
                                current_ptcl->tfrm->users_num++;
                            }
                            func_ovl0_800CEF4C(current_ptcl, this_ptcl, this_ptcl->bank_id >> 3);
                        }  
                        break;
                
                    case 0xA5:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        gtor = func_ovl0_800D35DC(this_ptcl->bank_id, svar1);
                            
                        if (gtor != NULL)
                        {
                            gtor->pos.x = this_ptcl->pos.x;
                            gtor->pos.y = this_ptcl->pos.y;
                            gtor->pos.z = this_ptcl->pos.z;
                            gtor->generator_id = this_ptcl->generator_id;
                            gtor->tfrm = this_ptcl->tfrm;
                                
                            if (gtor->tfrm != NULL)
                            {
                                gtor->tfrm->users_num++;
                            }
                        }    
                        break;
                        
                    case 0xA6:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        this_ptcl->lifetime = svar1 + (s32) (svar2 * rand_f32());
                        break;
                        
                    case 0xA7:
                        svar1 = *csr++;
                        svar2 = rand_f32() * 100.0F;

                        if (svar1 < svar2)
                        {
                            break;
                        }
                        else this_ptcl->lifetime = 1;
                        goto loop_break;
                        
                    case 0xA8:    
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        this_ptcl->pos.x += fvar * rand_f32();

                        csr = lbParticleReadFloatBE(csr, &fvar);
                        this_ptcl->pos.y += fvar * rand_f32();

                        csr = lbParticleReadFloatBE(csr, &fvar);
                        this_ptcl->pos.z += fvar * rand_f32();
                        break;
                        
                    case 0xA9:
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        func_ovl0_800CEC34(this_ptcl, fvar);
                        break;
                        
                    case 0xAA:                        
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        svar1 += (s32) (svar2 * rand_f32());

                        current_ptcl = func_ovl0_800CE6B8(this_ptcl, this_ptcl->bank_id, svar1);
                            
                        if (current_ptcl != NULL)
                        {
                            current_ptcl->pos.x = this_ptcl->pos.x;
                            current_ptcl->pos.y = this_ptcl->pos.y;
                            current_ptcl->pos.z = this_ptcl->pos.z;
                            current_ptcl->generator_id = this_ptcl->generator_id;
                            current_ptcl->gtor = this_ptcl->gtor;
                            current_ptcl->tfrm = this_ptcl->tfrm;

                            if (current_ptcl->tfrm != NULL)
                            {
                                current_ptcl->tfrm->users_num++;
                            }
                            func_ovl0_800CEF4C(current_ptcl, this_ptcl, this_ptcl->bank_id >> 3);
                        }
                        break;
                        
                    case 0xAB:    
                        csr = lbParticleReadFloatBE(csr, &fvar);
                            
                        this_ptcl->vel.x *= fvar;
                        this_ptcl->vel.y *= fvar;
                        this_ptcl->vel.z *= fvar;
                        break;
                        
                    case 0xAC:    
                        csr = lbParticleReadUShort(csr, &this_ptcl->unk_ptcl_0xE);
                        csr = lbParticleReadFloatBE(csr, &this_ptcl->unk_ptcl_0x44);
                        csr = lbParticleReadFloatBE(csr, &fvar);
                            
                        this_ptcl->unk_ptcl_0x44 += fvar * rand_f32();
                            
                        if (this_ptcl->unk_ptcl_0xE == 1) 
                        {
                            this_ptcl->unk_ptcl_0x40 = this_ptcl->unk_ptcl_0x44;
                            this_ptcl->unk_ptcl_0xE = 0;
                        }
                        break;
                        
                    case 0xAD:
                        this_ptcl->flags |= 0x80;
                        break;
                        
                    case 0xAE:
                        this_ptcl->flags &= ~(0x40 | 0x20);
                        break;
                        
                    case 0xAF:            
                        this_ptcl->flags &= ~0x40;
                        this_ptcl->flags |= 0x20;
                        break;
                        
                    case 0xB0:
                        this_ptcl->flags &= ~0x20;
                        this_ptcl->flags |= 0x40;
                        break;
                            
                    case 0xB1:
                        this_ptcl->flags |= (0x40 | 0x20);
                        break;
                        
                    case 0xB2:
                        this_ptcl->flags |= 0x200;
                        break;
                        
                    case 0xB3:
                        this_ptcl->flags &= ~0x400;
                        break;
                        
                    case 0xB4:
                        this_ptcl->flags |= 0x400;
                        break;
                    
                    case 0xB5:
                        this_ptcl->flags |= 0x100;
                        break;
                        
                    case 0xB6:
                        this_ptcl->flags &= ~0x100;
                        break;
                        
                    case 0xB7:
                        svar1 = *csr++;
                        func_ovl0_800CEDBC(this_ptcl, sLBParticleAttachDObjs[svar1 - 1]);
                        break;
                        
                    case 0xB8:
                        svar1 = *csr++;
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        func_ovl0_800CEEB8(this_ptcl, sLBParticleAttachDObjs[svar1 - 1], fvar);
                        break;
                        
                    case 0xB9:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_ptcl = func_ovl0_800CE6B8(this_ptcl, this_ptcl->bank_id, svar1);

                        if (current_ptcl != NULL)
                        {
                            current_ptcl->pos.x = this_ptcl->pos.x;
                            current_ptcl->pos.y = this_ptcl->pos.y;
                            current_ptcl->pos.z = this_ptcl->pos.z;
                            current_ptcl->vel.x = this_ptcl->vel.x;
                            current_ptcl->vel.y = this_ptcl->vel.y;
                            current_ptcl->vel.z = this_ptcl->vel.z;
                            current_ptcl->generator_id = this_ptcl->generator_id;
                            current_ptcl->gtor = this_ptcl->gtor;
                            current_ptcl->tfrm = this_ptcl->tfrm;
                                
                            if (current_ptcl->tfrm != NULL)
                            {
                                current_ptcl->tfrm->users_num++;
                            }
                            func_ovl0_800CEF4C(current_ptcl, this_ptcl, this_ptcl->bank_id >> 3);
                        }
                        break;
                        
                    case 0xBA:
                        fvar = *csr++;
                            
                        this_ptcl->unk_ptcl_0x4C.r += fvar * rand_f32();
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x4C.g += fvar * rand_f32();
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x4C.b += fvar * rand_f32();
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x4C.a += fvar * rand_f32();
                            
                        if (this_ptcl->unk_ptcl_0x10 == 0)
                        {
                            // this has lwl and lwr, so maybe it's a struct?
                            this_ptcl->primcolor = this_ptcl->unk_ptcl_0x4C;
                        }
                        break;
                        
                    case 0xBB:
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x54.r += fvar * rand_f32();
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x54.g += fvar * rand_f32();
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x54.b += fvar * rand_f32();
                        fvar = *csr++;
                        this_ptcl->unk_ptcl_0x54.a += fvar * rand_f32();

                        if (this_ptcl->unk_ptcl_0x12 == 0)
                        {
                            // this has lwl and lwr, so maybe it's a struct?
                            this_ptcl->envcolor = this_ptcl->unk_ptcl_0x54;
                        }
                        break;
                        
                    case 0xBC:    
                        this_ptcl->data_id = *csr++;
                        fvar = *csr++;
                        this_ptcl->data_id += fvar * rand_f32();
                        break;
                        
                    case 0xBD:    
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        csr = lbParticleReadFloatBE(csr, &sp7C);

                        fvar += sp7C * rand_f32();

                        sp7C = sqrtf(SQUARE(this_ptcl->vel.x) + SQUARE(this_ptcl->vel.y) + SQUARE(this_ptcl->vel.z));
                        
                        fvar /= sp7C;

                        this_ptcl->vel.x *= fvar;
                        this_ptcl->vel.y *= fvar;
                        this_ptcl->vel.z *= fvar;
                        break;
                        
                    case 0xBE:    
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        this_ptcl->vel.x *= fvar;
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        this_ptcl->vel.y *= fvar;
                        csr = lbParticleReadFloatBE(csr, &fvar);
                        this_ptcl->vel.z *= fvar;
                        break;
                        
                        case 0xBF:
                        svar1 = *csr++ - 1;
                        this_ptcl->flags |= LBPARTICLE_SET_ATTACH(svar1);
                        break;
                        
                    case 0xC0:
                        csr  = lbParticleReadUShort(csr, &this_ptcl->unk_ptcl_0x10);
                        this_ptcl->unk_ptcl_0x4C = this_ptcl->primcolor;
                            
                        if (command & 1)
                        {
                            this_ptcl->unk_ptcl_0x4C.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_ptcl->unk_ptcl_0x4C.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_ptcl->unk_ptcl_0x4C.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_ptcl->unk_ptcl_0x4C.a = *csr++;
                        }
                        if (this_ptcl->unk_ptcl_0x10 == 1)
                        {
                            this_ptcl->primcolor = this_ptcl->unk_ptcl_0x4C;
                            
                            this_ptcl->unk_ptcl_0x10 = 0;
                        }
                        break;
                        
                    case 0xD0:
                        csr  = lbParticleReadUShort(csr, &this_ptcl->unk_ptcl_0x12);
                        this_ptcl->unk_ptcl_0x54 = this_ptcl->envcolor;
                            
                        if (command & 1)
                        {
                            this_ptcl->unk_ptcl_0x54.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_ptcl->unk_ptcl_0x54.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_ptcl->unk_ptcl_0x54.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_ptcl->unk_ptcl_0x54.a = *csr++;
                        }
                        if (this_ptcl->unk_ptcl_0x12 == 1)
                        {
                            this_ptcl->envcolor = this_ptcl->unk_ptcl_0x54;
                            this_ptcl->unk_ptcl_0x12 = 0;
                        }
                        break;
                        
                    case 0xFA:
                        this_ptcl->link_id = *csr++;
                        this_ptcl->subroutine_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_ptcl->bytecode);
                        break;
                        
                    case 0xFB:
                        this_ptcl->link_id--;
                            
                        if (this_ptcl->link_id != 0)
                        {
                            csr = (u8*) (this_ptcl->bytecode + this_ptcl->subroutine_ptr);
                        }
                        break;
                        
                    case 0xFC:
                        this_ptcl->branch_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_ptcl->bytecode);
                        break;
                        
                    case 0xFD:
                        csr = (u8*) (this_ptcl->bytecode + this_ptcl->branch_ptr);
                        break;
                        
                    case 0xFE:
                    case 0xFF:
                        this_ptcl->lifetime = 1;
                        goto loop_break;
                    }
                }
                else
                {
                    bytecode_timer = command & 0x1F;
                    
                    if (command & 0x20)
                    {
                        bytecode_timer = *csr++ + (bytecode_timer << 8);
                    }
                    if ((command & 0xC0) && ((command & 0xC0) == 0x40))
                    {
                        this_ptcl->data_id = *csr++;
                    }
                }
            }
            while (bytecode_timer == 0);
            
        loop_break:
            bytecode_csr = ((uintptr_t)csr - (uintptr_t)this_ptcl->bytecode);
            
            this_ptcl->bytecode_csr = bytecode_csr;
            this_ptcl->bytecode_timer = bytecode_timer;
        }
    }
    if (this_ptcl->unk_ptcl_0xE)
    {
        this_ptcl->unk_ptcl_0x40 += (this_ptcl->unk_ptcl_0x44 - this_ptcl->unk_ptcl_0x40) / this_ptcl->unk_ptcl_0xE;

        this_ptcl->unk_ptcl_0xE--;
    }
    if (this_ptcl->unk_ptcl_0x10) 
    {
        this_ptcl->primcolor.r = ((this_ptcl->primcolor.r << 16) + ((this_ptcl->unk_ptcl_0x4C.r - this_ptcl->primcolor.r) * (65536 / this_ptcl->unk_ptcl_0x10))) >> 16;
        this_ptcl->primcolor.g = ((this_ptcl->primcolor.g << 16) + ((this_ptcl->unk_ptcl_0x4C.g - this_ptcl->primcolor.g) * (65536 / this_ptcl->unk_ptcl_0x10))) >> 16;
        this_ptcl->primcolor.b = ((this_ptcl->primcolor.b << 16) + ((this_ptcl->unk_ptcl_0x4C.b - this_ptcl->primcolor.b) * (65536 / this_ptcl->unk_ptcl_0x10))) >> 16;
        this_ptcl->primcolor.a = ((this_ptcl->primcolor.a << 16) + ((this_ptcl->unk_ptcl_0x4C.a - this_ptcl->primcolor.a) * (65536 / this_ptcl->unk_ptcl_0x10))) >> 16;

        this_ptcl->unk_ptcl_0x10--;
    }
    if (this_ptcl->unk_ptcl_0x12) 
    {
        this_ptcl->envcolor.r = ((this_ptcl->envcolor.r << 16) + ((this_ptcl->unk_ptcl_0x54.r - this_ptcl->envcolor.r) * (65536 / this_ptcl->unk_ptcl_0x12))) >> 16;
        this_ptcl->envcolor.g = ((this_ptcl->envcolor.g << 16) + ((this_ptcl->unk_ptcl_0x54.g - this_ptcl->envcolor.g) * (65536 / this_ptcl->unk_ptcl_0x12))) >> 16;
        this_ptcl->envcolor.b = ((this_ptcl->envcolor.b << 16) + ((this_ptcl->unk_ptcl_0x54.b - this_ptcl->envcolor.b) * (65536 / this_ptcl->unk_ptcl_0x12))) >> 16;
        this_ptcl->envcolor.a = ((this_ptcl->envcolor.a << 16) + ((this_ptcl->unk_ptcl_0x54.a - this_ptcl->envcolor.a) * (65536 / this_ptcl->unk_ptcl_0x12))) >> 16;
            
        this_ptcl->unk_ptcl_0x12--;        
    }
    this_ptcl->lifetime--;
    
    if (this_ptcl->lifetime == 0)
    {
        if (other_ptcl == NULL)
        {
            sLBParticleStructsAllocLinks[bank_id] = this_ptcl->next;
        }
        else other_ptcl->next = this_ptcl->next;
        
        next_ptcl = this_ptcl->next;
        
        if ((this_ptcl->gtor != NULL) && (this_ptcl->flags & 4) && (this_ptcl->gtor->kind == 2))
        {
            this_ptcl->gtor->generator_vars.unk_gtor_vars.halfword--;
        }
        if (this_ptcl->tfrm != NULL) 
        {
            this_ptcl->tfrm->users_num--;
            
            if (this_ptcl->tfrm->users_num == 0) 
            {
                func_ovl0_800CE188(this_ptcl->tfrm);

                if (other_ptcl == NULL) 
                {
                    if (next_ptcl != sLBParticleStructsAllocLinks[bank_id])
                    {
                        next_ptcl = sLBParticleStructsAllocLinks[bank_id];
                    }
                }
            }
        }
        this_ptcl->next = sLBParticleStructsAllocFree;
        sLBParticleStructsAllocFree = this_ptcl;
        sLBParticleStructsUsedNum--;

        return next_ptcl;
    }
    if (this_ptcl->flags & 4)
    {
        gtor = this_ptcl->gtor;

        // sx1 = ?, sp5C
        // cx1 = f16, sp54
        lbGetSinCosUShort(sx1, cx1, this_ptcl->gravity, angle_id);
        // sx2 = ?, sp58
        // cx2 = f12, sp50
        lbGetSinCosUShort(sx2, cx2, this_ptcl->friction, angle_id);
        
        sx1 *= (1.0F / 32768.0F);
        cx1 *= (1.0F / 32768.0F);
        sx2 *= (1.0F / 32768.0F);
        cx2 *= (1.0F / 32768.0F);

        this_ptcl->vel.z += gtor->generator_vars.unk_gtor_vars.f;
        sp70[0] = ABSF(gtor->unk_gtor_0x38);

        // sx3 = f18, ?
        // cx3 = f0, ?
        { angle_id_2 = SINTABLE_RAD_TO_ID(ABSF(gtor->unk_gtor_0x3C)) & 0xFFF; sx3 = gSinTable[angle_id_2 & SINTABLE_MASK_ID]; if (angle_id_2 & 0x800) { sx3 = -sx3; } if (!var_f14); if (!var_f14); angle_id_2 += 0x400; cx3 = gSinTable[angle_id_2 & SINTABLE_MASK_ID]; if (angle_id_2 & 0x800) { cx3 = -cx3; } }

        temp2 = this_ptcl->vel.z;
        sp70[0] += temp2 * (sx3 / cx3);
        sp70[0] *= this_ptcl->vel.y;
        
        this_ptcl->vel.x += gtor->unk_gtor_0x2C;

        // sx4 = f18, ?
        // cx4 = f0, sp44
        lbGetSinCosUShort(sx4, cx4[0], this_ptcl->vel.x, angle_id);
        
        sp70[0] *= (1.0F / 32768.0F);

        f0 = cx4[0] * sp70[0];
        this_ptcl->pos.x = ((cx4[0] * sp70[0] * cx2) + (temp2 * sx2)) + gtor->pos.x;
        f1 = sp70[0] * sx4;
        temp1 = -f0;
        this_ptcl->pos.y = (((((temp1 * sx1) * sx2) + (f1 * cx1)) + ((temp2 * sx1) * cx2)) + gtor->pos.y);
        if (!f1);
        if (!f1);
        if (!temp1);
        if (!temp1);
        if (!f0);
        this_ptcl->pos.z = ((((-(f1 * sx1)) + ((temp1 * cx1) * sx2)) + ((temp2 * cx1) * cx2)) + gtor->pos.z);
    }
    else
    {
        if (this_ptcl->flags & 1)
        {
            this_ptcl->vel.y -= this_ptcl->gravity;
        }
        if (this_ptcl->flags & 2)
        {
            this_ptcl->vel.x *= this_ptcl->friction;
            this_ptcl->vel.y *= this_ptcl->friction;
            this_ptcl->vel.z *= this_ptcl->friction;
        }
        this_ptcl->pos.x += this_ptcl->vel.x;
        this_ptcl->pos.y += this_ptcl->vel.y;
        this_ptcl->pos.z += this_ptcl->vel.z;
    }
    if (this_ptcl->flags & 0x8000)
    {
        svar1 = LBPARTICLE_GET_ATTACH(this_ptcl->flags);

        if (sLBParticleAttachDObjs[svar1] != NULL)
        {
            sLBParticleAttachDObjs[svar1]->translate.vec.f.x = this_ptcl->pos.x;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.y = this_ptcl->pos.y;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.z = this_ptcl->pos.z;
        }
    }
    return this_ptcl->next;
}