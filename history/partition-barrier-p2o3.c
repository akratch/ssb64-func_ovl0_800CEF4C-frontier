/* Superseded evidence source; see history/README.md.
   Compile by prepending the project context (see scratch/README.md). */
#define lbParticleReadFloatBigEnd bytecode_read_f32
#define lbParticleUpdateStruct func_ovl0_800CEF4C
#define syUtilsRandFloat rand_f32
#define lbParticleReadUShort bytecode_read_u16
#define lbParticleMakeChildScriptID func_ovl0_800CE6B8
#define lbParticleMakeGenerator func_ovl0_800D35DC
#define lbParticleRotateVel func_ovl0_800CEC34
#define sLBParticleAttachDObjs D_ovl0_800D639C
#define lbParticleSetDistVelDObj func_ovl0_800CEDBC
#define lbParticleAddDistVelMagDObj func_ovl0_800CEEB8
#define sLBParticleStructsAllocLinks D_ovl0_800D6358
#define lbParticleEjectTransform func_ovl0_800CE188
#define sLBParticleStructsAllocFree D_ovl0_800D6350
#define gLBParticleStructsUsedNum D_ovl0_800D6448
#define gSYSinTable gSinTable
// #define lbParticleSetDistVelDObj func_ovl0_800CE6B8
extern f32 syUtilsRandFloat(void);
extern void lbParticleRotateVel(LBParticle *pc, f32 angle);
extern void lbParticleAddDistVelMagDObj(LBParticle *pc, DObj *dobj, f32 magnitude);
DObj *sLBParticleAttachDObjs[8];
LBParticle *sLBParticleStructsAllocLinks[16];
LBParticle *sLBParticleStructsAllocFree;
u16 gLBParticleStructsUsedNum;
extern u16 gSYSinTable[0x800];

LBParticle* lbParticleUpdateStruct(LBParticle *this_pc, LBParticle *other_pc, s32 bank_id)
{
    LBParticle *current_pc;
    LBParticle *next_pc;
    LBGenerator *gn;
    u8 *csr; // s1
    u8 command; // s0
    u16 bytecode_timer;
    u16 angle_id;
    u16 bytecode_csr;
    s32 svar1;  // sp88?
    s32 svar2;
    u8 opcode;
    f32 fvar1; // s3
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
    
    if (this_pc->flags & LBPARTICLE_FLAG_PAUSE)
    {
        return this_pc->next;
    }
    if (this_pc->bytecode_timer != 0)
    {
        this_pc->bytecode_timer--;
        
        if (this_pc->bytecode_timer == 0)
        {
            csr = &this_pc->bytecode[this_pc->bytecode_csr];
            
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

                    if (opcode >= 209)
                    {
                    if (opcode && opcode && opcode);
                    switch (opcode)
                    {
                    case LBPARTICLE_OPCODE_SETLOOP:    
                        this_pc->loop_count = *csr++;
                        this_pc->loop_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_pc->bytecode);
                        break;
                        
                    case LBPARTICLE_OPCODE_LOOP:    
                        this_pc->loop_count--;
                            
                        if (this_pc->loop_count != 0)
                        {
                            csr = (u8*) (this_pc->bytecode + this_pc->loop_ptr);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETRETURN:            
                        this_pc->return_ptr = (u16) ((uintptr_t)csr - (uintptr_t)this_pc->bytecode);
                        break;
                        
                    case LBPARTICLE_OPCODE_RETURN:
                        csr = (u8*) (this_pc->bytecode + this_pc->return_ptr);
                        break;
                        
                    case LBPARTICLE_OPCODE_DEAD:
                    case LBPARTICLE_OPCODE_END:
                        this_pc->lifetime = 1;
                        goto loop_break;
                    }
                    }
                    else
                    {
                    switch (opcode)
                    {
                    case LBPARTICLE_OPCODE_SETPOS:
                        if (command & 1) 
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_pc->pos.x);
                        }
                        if (command & 2) 
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_pc->pos.y);
                        }
                        if (command & 4)
                        { 
                            csr = lbParticleReadFloatBigEnd(csr, &this_pc->pos.z);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDPOS:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_pc->pos.x += fvar1;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_pc->pos.y += fvar1;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_pc->pos.z += fvar1;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVEL:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_pc->vel.x);
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_pc->vel.y);
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &this_pc->vel.z);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDVEL:
                        if (command & 1)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_pc->vel.x += fvar1;
                        }
                        if (command & 2)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_pc->vel.y += fvar1;
                        }
                        if (command & 4)
                        {
                            csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            this_pc->vel.z += fvar1;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETSIZELERP:
                        csr = lbParticleReadUShort(csr, &this_pc->size_target_length);
                        csr = lbParticleReadFloatBigEnd(csr, &this_pc->size_target);

                        if (this_pc->size_target_length == 1)
                        {
                            this_pc->size = this_pc->size_target;
                            this_pc->size_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETFLAG:
                        this_pc->flags = *csr++;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETGRAVITY:
                        csr = lbParticleReadFloatBigEnd(csr, &this_pc->gravity);
                        
                        if (this_pc->gravity == 0.0F)
                        {
                            this_pc->flags &= ~LBPARTICLE_FLAG_GRAVITY;
                        }
                        else this_pc->flags |= LBPARTICLE_FLAG_GRAVITY;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETFRICTION:
                        csr = lbParticleReadFloatBigEnd(csr, &this_pc->friction);
                            
                        if (this_pc->friction == 1.0F)
                        {
                            this_pc->flags &= ~LBPARTICLE_FLAG_FRICTION;
                        }
                        else this_pc->flags |= LBPARTICLE_FLAG_FRICTION;
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKESCRIPT:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_pc = lbParticleMakeChildScriptID(this_pc, this_pc->bank_id, svar1);
                            
                        if (current_pc != NULL)
                        {
                            current_pc->pos.x = this_pc->pos.x;
                            current_pc->pos.y = this_pc->pos.y;
                            current_pc->pos.z = this_pc->pos.z;
                            current_pc->generator_id = this_pc->generator_id;
                            current_pc->gn = this_pc->gn;
                            current_pc->xf = this_pc->xf;
                                
                            if (current_pc->xf != NULL)
                            {
                                current_pc->xf->users_num++;
                            }
                            lbParticleUpdateStruct(current_pc, this_pc, this_pc->bank_id >> 3);
                        }  
                        break;
                
                    case LBPARTICLE_OPCODE_MAKEGENERATOR:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        gn = lbParticleMakeGenerator(this_pc->bank_id, svar1);
                            
                        if (gn != NULL)
                        {
                            gn->pos.x = this_pc->pos.x;
                            gn->pos.y = this_pc->pos.y;
                            gn->pos.z = this_pc->pos.z;
                            gn->generator_id = this_pc->generator_id;
                            gn->xf = this_pc->xf;
                                
                            if (gn->xf != NULL)
                            {
                                gn->xf->users_num++;
                            }
                        }    
                        break;
                        
                    case LBPARTICLE_OPCODE_SETLIFERAND:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        this_pc->lifetime = svar1 + (s32) (svar2 * syUtilsRandFloat());
                        break;
                        
                    case LBPARTICLE_OPCODE_TRYDEADRAND:
                        svar1 = *csr++;
                        svar2 = syUtilsRandFloat() * 100.0F;

                        if (svar1 < svar2)
                        {
                            break;
                        }
                        else this_pc->lifetime = 1;
                        goto loop_break;
                        
                    case LBPARTICLE_OPCODE_ADDVELRAND:    
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_pc->pos.x += fvar1 * syUtilsRandFloat();

                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_pc->pos.y += fvar1 * syUtilsRandFloat();

                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_pc->pos.z += fvar1 * syUtilsRandFloat();
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVELANGLE:
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        lbParticleRotateVel(this_pc, fvar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKERAND:                        
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        svar2 = *csr++;
                        svar2 <<= 8;
                        svar2 += *csr++;

                        svar1 += (s32) (svar2 * syUtilsRandFloat());

                        current_pc = lbParticleMakeChildScriptID(this_pc, this_pc->bank_id, svar1);
                            
                        if (current_pc != NULL)
                        {
                            current_pc->pos.x = this_pc->pos.x;
                            current_pc->pos.y = this_pc->pos.y;
                            current_pc->pos.z = this_pc->pos.z;
                            current_pc->generator_id = this_pc->generator_id;
                            current_pc->gn = this_pc->gn;
                            current_pc->xf = this_pc->xf;

                            if (current_pc->xf != NULL)
                            {
                                current_pc->xf->users_num++;
                            }
                            lbParticleUpdateStruct(current_pc, this_pc, this_pc->bank_id >> 3);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_MULVELUFORM: 
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            
                        this_pc->vel.x *= fvar1;
                        this_pc->vel.y *= fvar1;
                        this_pc->vel.z *= fvar1;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETSIZERAND:    
                        csr = lbParticleReadUShort(csr, &this_pc->size_target_length);
                        csr = lbParticleReadFloatBigEnd(csr, &this_pc->size_target);
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                            
                        this_pc->size_target += fvar1 * syUtilsRandFloat();
                            
                        if (this_pc->size_target_length == 1) 
                        {
                            this_pc->size = this_pc->size_target;
                            this_pc->size_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ENVCOLOR:
                        this_pc->flags |= LBPARTICLE_FLAG_ENVCOLOR;
                        break;
                        
                    case LBPARTICLE_OPCODE_NOMASKST:
                        this_pc->flags &= ~(LBPARTICLE_FLAG_MASKT | LBPARTICLE_FLAG_MASKS);
                        break;
                        
                    case LBPARTICLE_OPCODE_MASKS:            
                        this_pc->flags &= ~LBPARTICLE_FLAG_MASKT;
                        this_pc->flags |= LBPARTICLE_FLAG_MASKS;
                        break;
                        
                    case LBPARTICLE_OPCODE_MASKT:
                        this_pc->flags &= ~LBPARTICLE_FLAG_MASKS;
                        this_pc->flags |= LBPARTICLE_FLAG_MASKT;
                        break;
                            
                    case LBPARTICLE_OPCODE_MASKST:
                        this_pc->flags |= (LBPARTICLE_FLAG_MASKT | LBPARTICLE_FLAG_MASKS);
                        break;
                        
                    case LBPARTICLE_OPCODE_ALPHABLEND:
                        this_pc->flags |= LBPARTICLE_FLAG_ALPHABLEND;
                        break;
                        
                    case LBPARTICLE_OPCODE_NODITHER:
                        this_pc->flags &= ~LBPARTICLE_FLAG_DITHER;
                        break;
                        
                    case LBPARTICLE_OPCODE_DITHER:
                        this_pc->flags |= LBPARTICLE_FLAG_DITHER;
                        break;
                    
                    case LBPARTICLE_OPCODE_NONOISE:
                        this_pc->flags |= LBPARTICLE_FLAG_NOISE;
                        break;
                        
                    case LBPARTICLE_OPCODE_NOISE:
                        this_pc->flags &= ~LBPARTICLE_FLAG_NOISE;
                        break;
                        
                    case LBPARTICLE_OPCODE_SETDISTVEL:
                        svar1 = *csr++;
                        lbParticleSetDistVelDObj(this_pc, sLBParticleAttachDObjs[svar1]);
                        break;
                        
                    case LBPARTICLE_OPCODE_ADDDISTVELMAG:
                        svar1 = *csr++;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        lbParticleAddDistVelMagDObj(this_pc, sLBParticleAttachDObjs[svar1], fvar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_MAKEID:
                        svar1 = *csr++;
                        svar1 <<= 8;
                        svar1 += *csr++;

                        current_pc = lbParticleMakeChildScriptID(this_pc, this_pc->bank_id, svar1);

                        if (current_pc != NULL)
                        {
                            current_pc->pos.x = this_pc->pos.x;
                            current_pc->pos.y = this_pc->pos.y;
                            current_pc->pos.z = this_pc->pos.z;
                            current_pc->vel.x = this_pc->vel.x;
                            current_pc->vel.y = this_pc->vel.y;
                            current_pc->vel.z = this_pc->vel.z;
                            current_pc->generator_id = this_pc->generator_id;
                            current_pc->gn = this_pc->gn;
                            current_pc->xf = this_pc->xf;
                                
                            if (current_pc->xf != NULL)
                            {
                                current_pc->xf->users_num++;
                            }
                            lbParticleUpdateStruct(current_pc, this_pc, this_pc->bank_id >> 3);
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_PRIMBLENDRAND:
                        fvar1 = *csr++;
                        this_pc->target_primcolor.r += fvar1 * syUtilsRandFloat();
                        fvar1 = *csr++;
                        this_pc->target_primcolor.g += fvar1 * syUtilsRandFloat();
                        fvar1 = *csr++;
                        this_pc->target_primcolor.b += fvar1 * syUtilsRandFloat();
                        fvar1 = *csr++;
                        this_pc->target_primcolor.a += fvar1 * syUtilsRandFloat();
                            
                        if (this_pc->primcolor_target_length == 0)
                        {
                            /* struct copy */
                            this_pc->primcolor = this_pc->target_primcolor;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_ENVBLENDRAND:
                        fvar1 = *csr++;
                        this_pc->target_envcolor.r += fvar1 * syUtilsRandFloat();
                        fvar1 = *csr++;
                        this_pc->target_envcolor.g += fvar1 * syUtilsRandFloat();
                        fvar1 = *csr++;
                        this_pc->target_envcolor.b += fvar1 * syUtilsRandFloat();
                        fvar1 = *csr++;
                        this_pc->target_envcolor.a += fvar1 * syUtilsRandFloat();

                        if (this_pc->envcolor_target_length == 0)
                        {
                            /* struct copy */
                            this_pc->envcolor = this_pc->target_envcolor;
                        }
                        break;
                        
                    case 0xBC:    
                        this_pc->frame_id = *csr++;
                        fvar1 = *csr++;
                        this_pc->frame_id += fvar1 * syUtilsRandFloat();
                        break;
                        
                    case LBPARTICLE_OPCODE_SETVELMAG:
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        csr = lbParticleReadFloatBigEnd(csr, &sp7C);

                        fvar1 += sp7C * syUtilsRandFloat();

                        temp2 = this_pc->vel.z;
                        sp7C = sqrtf(SQUARE(this_pc->vel.x) + SQUARE(this_pc->vel.y) + SQUARE(temp2));

                        fvar1 /= sp7C;

                        this_pc->vel.x *= fvar1;
                        this_pc->vel.y *= fvar1;
                        this_pc->vel.z *= fvar1;
                        break;
                        
                    case LBPARTICLE_OPCODE_MULVELAXIS:    
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_pc->vel.x *= fvar1;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_pc->vel.y *= fvar1;
                        csr = lbParticleReadFloatBigEnd(csr, &fvar1);
                        this_pc->vel.z *= fvar1;
                        break;
                        
                        case LBPARTICLE_OPCODE_SETATTACHID:
                        svar1 = *csr++ - 1;
                        this_pc->flags |= LBPARTICLE_SET_ATTACH_ID(svar1);
                        break;
                        
                    case LBPARTICLE_OPCODE_SETPRIMBLEND:
                        csr  = lbParticleReadUShort(csr, &this_pc->primcolor_target_length);
                        this_pc->target_primcolor = this_pc->primcolor;
                            
                        if (command & 1)
                        {
                            this_pc->target_primcolor.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_pc->target_primcolor.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_pc->target_primcolor.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_pc->target_primcolor.a = *csr++;
                        }
                        if (this_pc->primcolor_target_length == 1)
                        {
                            this_pc->primcolor = this_pc->target_primcolor;
                            
                            this_pc->primcolor_target_length = 0;
                        }
                        break;
                        
                    case LBPARTICLE_OPCODE_SETENVBLEND:
                        csr = lbParticleReadUShort(csr, &this_pc->envcolor_target_length);
                        this_pc->target_envcolor = this_pc->envcolor;
                            
                        if (command & 1)
                        {
                            this_pc->target_envcolor.r = *csr++;
                        }
                        if (command & 2)
                        {
                            this_pc->target_envcolor.g = *csr++;
                        }
                        if (command & 4)
                        {
                            this_pc->target_envcolor.b = *csr++;
                        }
                        if (command & 8)
                        {
                            this_pc->target_envcolor.a = *csr++;
                        }
                        if (this_pc->envcolor_target_length == 1)
                        {
                            this_pc->envcolor = this_pc->target_envcolor;
                            this_pc->envcolor_target_length = 0;
                        }
                        break;
                        
                    }
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
                        // Advance 
                        this_pc->frame_id = *csr++;
                    }
                }
            }
            while (bytecode_timer == 0);
            
        loop_break:
            bytecode_csr = (u8*) ((uintptr_t)csr - (uintptr_t)this_pc->bytecode);
            
            this_pc->bytecode_csr = bytecode_csr;
            this_pc->bytecode_timer = bytecode_timer;
        }
    }
    if (this_pc->size_target_length)
    {
        this_pc->size += (this_pc->size_target - this_pc->size) / this_pc->size_target_length;

        this_pc->size_target_length--;
    }
    if (this_pc->primcolor_target_length) 
    {
        this_pc->primcolor.r =
        ((this_pc->primcolor.r << 16) + ((this_pc->target_primcolor.r - this_pc->primcolor.r) * (65536 / this_pc->primcolor_target_length))) >> 16;

        this_pc->primcolor.g =
        ((this_pc->primcolor.g << 16) + ((this_pc->target_primcolor.g - this_pc->primcolor.g) * (65536 / this_pc->primcolor_target_length))) >> 16;

        this_pc->primcolor.b =
        ((this_pc->primcolor.b << 16) + ((this_pc->target_primcolor.b - this_pc->primcolor.b) * (65536 / this_pc->primcolor_target_length))) >> 16;

        this_pc->primcolor.a =
        ((this_pc->primcolor.a << 16) + ((this_pc->target_primcolor.a - this_pc->primcolor.a) * (65536 / this_pc->primcolor_target_length))) >> 16;

        this_pc->primcolor_target_length--;
    }
    if (this_pc->envcolor_target_length) 
    {
        this_pc->envcolor.r =
        ((this_pc->envcolor.r << 16) + ((this_pc->target_envcolor.r - this_pc->envcolor.r) * (65536 / this_pc->envcolor_target_length))) >> 16;

        this_pc->envcolor.g =
        ((this_pc->envcolor.g << 16) + ((this_pc->target_envcolor.g - this_pc->envcolor.g) * (65536 / this_pc->envcolor_target_length))) >> 16;

        this_pc->envcolor.b =
        ((this_pc->envcolor.b << 16) + ((this_pc->target_envcolor.b - this_pc->envcolor.b) * (65536 / this_pc->envcolor_target_length))) >> 16;

        this_pc->envcolor.a =
        ((this_pc->envcolor.a << 16) + ((this_pc->target_envcolor.a - this_pc->envcolor.a) * (65536 / this_pc->envcolor_target_length))) >> 16;
            
        this_pc->envcolor_target_length--;        
    }
    this_pc->lifetime--;
    
    if (this_pc->lifetime == 0)
    {
        if (other_pc == NULL)
        {
            sLBParticleStructsAllocLinks[bank_id] = this_pc->next;
        }
        else other_pc->next = this_pc->next;
        
        next_pc = this_pc->next;
        
        if ((this_pc->gn != NULL) && (this_pc->flags & LBPARTICLE_FLAG_VORTEX) && (this_pc->gn->kind == nLBParticleKindVortex))
        {
            this_pc->gn->generator_vars.vortex.lifetime--;
        }
        if (this_pc->xf != NULL) 
        {
            this_pc->xf->users_num--;
            
            if (this_pc->xf->users_num == 0) 
            {
                lbParticleEjectTransform(this_pc->xf);

                if (other_pc == NULL) 
                {
                    if (next_pc != sLBParticleStructsAllocLinks[bank_id])
                    {
                        next_pc = sLBParticleStructsAllocLinks[bank_id];
                    }
                }
            }
        }
        this_pc->next = sLBParticleStructsAllocFree;
        sLBParticleStructsAllocFree = this_pc;
        gLBParticleStructsUsedNum--;

        return next_pc;
    }
    if (this_pc->flags & LBPARTICLE_FLAG_VORTEX)
    {
        gn = this_pc->gn;

        syGetSinCosUShort(sx1, cx1, this_pc->gravity, angle_id);
        syGetSinCosUShort(sx2, cx2, this_pc->friction, angle_id);
        
        sx1 *= (1.0F / 32768.0F);
        cx1 *= (1.0F / 32768.0F);
        sx2 *= (1.0F / 32768.0F);
        cx2 *= (1.0F / 32768.0F);

        this_pc->vel.z += gn->generator_vars.vortex.f;

        sp70[0] = ABSF(gn->unk_gn_0x38);

        syGetSinCosUShort(sx3, f0, ABSF(gn->unk_gn_0x3C), angle_id_2);

        temp2 = this_pc->vel.z;
        sp70[0] += this_pc->vel.z * (sx3 / f0);
        sp70[0] *= this_pc->vel.y;

        this_pc->vel.x += gn->gravity;

        angle_id = SINTABLE_RAD_TO_ID(this_pc->vel.x) & 0xFFF;
        sx3 = gSYSinTable[angle_id & 0x7FF];
        if (angle_id & 0x800) { sx3 = -sx3; }
        angle_id += 0x400;
        f0 = gSYSinTable[angle_id & 0x7FF]; cx4[0] = f0; if (angle_id & 0x800) { f0 = -f0; cx4[0] = f0; }

        sp70[0] *= (1.0F / 32768.0F);

        f0 = cx4[0] * sp70[0];
        this_pc->pos.x = ((cx4[0] * sp70[0] * cx2) + (temp2 * sx2)) + gn->pos.x;
        f1 = sp70[0] * sx3;
        temp1 = -f0;
        f0 = f1;
        this_pc->pos.y = (((((temp1 * sx1) * sx2) + (f1 * cx1)) + ((temp2 * sx1) * cx2)) + gn->pos.y);
        this_pc->pos.z = (((((temp1 * cx1) * sx2) - (f1 * sx1)) + ((temp2 * cx1) * cx2)) + gn->pos.z);
    }
    else
    {
        if (this_pc->flags & LBPARTICLE_FLAG_GRAVITY)
        {
            this_pc->vel.y -= this_pc->gravity;
        }
        if (this_pc->flags & LBPARTICLE_FLAG_FRICTION)
        {
            this_pc->vel.x *= this_pc->friction;
            this_pc->vel.y *= this_pc->friction;
            this_pc->vel.z *= this_pc->friction;
        }
        this_pc->pos.x += this_pc->vel.x;
        this_pc->pos.y += this_pc->vel.y;
        this_pc->pos.z += this_pc->vel.z;
    }
    if (this_pc->flags & LBPARTICLE_FLAG_ATTACH)
    {
        svar1 = LBPARTICLE_GET_ATTACH_ID(this_pc->flags);

        if (sLBParticleAttachDObjs[svar1] != NULL)
        {
            sLBParticleAttachDObjs[svar1]->translate.vec.f.x = this_pc->pos.x;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.y = this_pc->pos.y;
            sLBParticleAttachDObjs[svar1]->translate.vec.f.z = this_pc->pos.z;
        }
    }
    return this_pc->next;
}
