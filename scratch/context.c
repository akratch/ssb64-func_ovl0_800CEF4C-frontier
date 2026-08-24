#define gsSPDisplayList(dl) gsDma1p( G_DL,dl,0,G_DL_PUSH)
#define SR_CE 0x00020000
#define SR_CH 0x00040000
#define AOBJ_MATFLAG_LFRAC AOBJ_MAT_BIT(nGCAnimTrackSetLFrac)
#define gDPSetTextureConvert(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTCONV, 3, type)
#define ftMotionCommandResetColAnim() GC_FIELDSET(nFTMotionEventResetColAnim, 26, 6)
#define alSeqpGetChannelPriority alSeqpGetChlPriority
#define PI_DMA_BUFFER_SIZE 128
#define MI_INTR_MASK_CLR_SI 0x0004
#define gDPLoadMultiBlock_4bS(pkt,timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, 0 ); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define GLUE2(a,b) GLUE(a, b)
#define PFS_ERR_INCONSISTENT 3
#define gsSPSetGeometryMode(word) gsSPGeometryMode(0,(word))
#define gmColEventCastAdvance(event,type) ((type*)(event)++)
#define SR_DE 0x00010000
#define GMCOMMON_FIGHTERS_PLAYABLE_NUM 12
#define G_RM_AA_ZB_OPA_DECAL RM_AA_ZB_OPA_DECAL(1)
#define gsSPTextureRectangle(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), gsImmp1(G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))), gsImmp1(G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)))
#define CAMERA_FLAG_BOUND_LEFT (1 << nGMCameraBoundLeft)
#define AL_PHASE_DECAY 1
#define LBPARTICLE_FLAG_PAUSE 0x800
#define M_PI_F ((f32)M_PI)
#define IM_RD 0x40
#define LBBACKUP_UNLOCK_MASK_NEWCOMERS (LBBACKUP_UNLOCK_MASK_LUIGI | LBBACKUP_UNLOCK_MASK_PURIN | LBBACKUP_UNLOCK_MASK_CAPTAIN | LBBACKUP_UNLOCK_MASK_NESS)
#define gsSPBranchLessZ(dl,vtx,zval,near,far,flag) gsSPBranchLessZrg(dl, vtx, zval, near, far, flag, 0, G_MAXZ)
#define G_BRANCH_Z 0x04
#define ERR_OSPISTARTDMA_PIMGR 28
#define IS_KSEGDM(x) ((u32)(x) >= K0BASE && (u32)(x) < K2BASE)
#define SP_SET_YIELD SP_SET_SIG0
#define gsDPSetScissor(mode,ulx,uly,lrx,lry) { _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((float)(ulx)*4.0F), 12, 12) | _SHIFTL((int)((float)(uly)*4.0F), 0, 12), _SHIFTL(mode, 24, 2) | _SHIFTL((int)((float)(lrx)*4.0F), 12, 12) | _SHIFTL((int)((float)(lry)*4.0F), 0, 12) }
#define gSPLight(pkt,l,n) gDma2p((pkt),G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,(n)*24+24)
#define OS_VI_GAMMA_DITHER_ON 0x0004
#define G_RM_AA_ZB_OPA_TERR2 RM_AA_ZB_OPA_TERR(2)
#define RM_AA_ZB_TEX_EDGE(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define PFS_ID_BANK_256K 0
#define SR_FR 0x04000000
#define G_MTX_MUL 0x00
#define ERR_OSPIRAWSTARTDMA_RANGE 25
#define OS_IM_RCP 0x00000401
#define G_MWO_CLIP_RPY 0x1c
#define OS_PFS_VERSION_HI (OS_PFS_VERSION >> 8)
#define gSPTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)));}
#define alCSPGetPan alCSPGetChlPan
#define G_POPMTX 0xd8
#define ERR_OSPROFILEINIT_SIZ 65
#define FTCOMPUTER_COMMAND_MOVEAUTO (nFTComputerCommandMoveAuto << FTCOMPUTER_COMMAND_TIMER_BITS)
#define OS_MESG_PRI_HIGH 1
#define G_CC_BLENDIA2 ENVIRONMENT, SHADE, COMBINED, SHADE, COMBINED, 0, SHADE, 0
#define G_RM_AA_TEX_TERR2 RM_AA_TEX_TERR(2)
#define G_RM_AA_OPA_TERR2 RM_AA_OPA_TERR(2)
#define G_IM_SIZ_4b_LOAD_BLOCK G_IM_SIZ_16b
#define RM_AA_SUB_SURF(clk) AA_EN | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define SP_STATUS_CPUSIGNAL SP_STATUS_SIG4
#define GIO_GIO_INTR_REG (GIO_BASE_REG + 0x000)
#define RM_RA_ZB_OPA_DECAL(clk) AA_EN | Z_CMP | CVG_DST_WRAP | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gSPLoadGeometryMode(pkt,word) gSPGeometryMode((pkt),-1,(word))
#define EFFECT_FLAG_SPECIALLINK 0x8
#define COBJ_FLAG_IDENTIFIER (1 << 3)
#define G_RM_ADD2 RM_ADD(2)
#define G_RDPPIPESYNC 0xe7
#define OS_EVENT_COUNTER 3
#define ftMotionCommandEffectItemHoldS2(ox,oy) (GC_FIELDSET(ox, 16, 16) | GC_FIELDSET(oy, 0, 16))
#define GMSTAFFROLL_OPEN_PARENTHESIS_PARA_FONT_INDEX 0x47
#define KDM_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define aobjEvent32Jump(addr) aobjEvent32(nGCAnimEvent32Jump, 0, 0), (u32)(addr)
#define aobjEvent32SetVal0RateBlock(flags_mask,d) aobjEvent32(nGCAnimEvent32SetVal0RateBlock, (flags_mask), (d))
#define LBPARTICLE_OPCODE_DEAD 0xFE
#define FTCOMPUTER_COMMAND_BUTTON_START_PRESS (nFTComputerCommandButtonStartPress << FTCOMPUTER_COMMAND_TIMER_BITS)
#define TLBLO_PFNSHIFT 6
#define CONT_OVERRUN_ERROR 0x4
#define CVG_DST_WRAP 0x100
#define G_IM_SIZ_DD 5
#define OS_VI_MPAL_HPN1 36
#define OS_VI_MPAL_HPN2 40
#define FTANIM_FLAG_NONE 0x00000000
#define ERR_ALSNDPDEALLOCATE 107
#define TRUE 1
#define OS_PFS_VERSION_LO (OS_PFS_VERSION & 255)
#define SObjGetStruct(gobj) ((SObj*)(gobj)->obj)
#define OS_EVENT_RDB_LOG_DONE 16
#define G_RM_AA_SUB_TERR2 RM_AA_SUB_TERR(2)
#define SP_SET_HALT 0x00002
#define SINVALID 0x00000000
#define ftMotionCommandGotoS2(addr) ((uintptr_t)addr)
#define OS_VI_DITHER_FILTER_OFF 0x0080
#define OS_VI_BIT_NONINTERLACE 0x0001
#define ftMotionCommandSetHitStatusPartAll(val) (GC_FIELDSET(nFTMotionEventSetHitStatusPartAll, 26, 6) | GC_FIELDSET(val, 0, 26))
#define CONT_RIGHT 0x0100
#define GMSTAFFROLL_DOUBLE_QUOTES_PARA_FONT_INDEX 0x43
#define FTPARTS_HURT_NUM_MAX 11
#define OS_IM_RDBREAD 0x00004401
#define G_CCMUX_TEXEL0_ALPHA 8
#define FTSLOPECONTOUR_FLAG_LFOOT (1 << nFTSlopeContourLFoot)
#define SP_CLR_TASKDONE SP_CLR_SIG2
#define OS_IM_RDBWRITE 0x00002401
#define AL_PAN_LEFT 0
#define SP_STATUS_DMA_BUSY 0x004
#define gDPLoadTLUT(pkt,count,tmemaddr,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, tmemaddr, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, ((count)-1)); gDPPipeSync(pkt); }
#define aobjEvent32SetExtValBlock(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetExtValBlock, (flags_mask), (dur))
#define EXC_II EXC_CODE(10)
#define C0_RFE 0x10
#define SP_SCALE 0x00000010
#define G_TL_LOD (1 << G_MDSFT_TEXTLOD)
#define ftMotionCommandSetHitStatusAll(val) (GC_FIELDSET(nFTMotionEventSetHitStatusAll, 26, 6) | GC_FIELDSET(val, 0, 26))
#define _OBJMANAGER_H_ 
#define SYSCHEDULER_BUFFER_NULL ((void*)-1)
#define ERR_ALSEQNOTMIDI 114
#define C0_PRID 15
#define TLBLO_D 0x4
#define EXC_FPE EXC_CODE(15)
#define TLBLO_G 0x1
#define OS_PHYSICAL_TO_K0(x) (void*)(((u32)(x) + 0x80000000))
#define SP_ARGUMENT 0x00000800
#define gDPLoadMultiTile(pkt,timg,tmem,rtile,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz, width, timg); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define UINT_LEAST64_MAX __UINT_LEAST64_MAX__
#define OS_ERROR_FMT "/usr/lib/PR/error.fmt"
#define TLBLO_V 0x2
#define LBPARTICLE_OPCODE_MAKEGENERATOR 0xA5
#define gsSPLookAtX(l) gsDma2p( G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATX)
#define G_SETCOMBINE 0xfc
#define gsDPFullSync() gsDPNoParam(G_RDPFULLSYNC)
#define G_FILLRECT 0xf6
#define VI_V_SYNC_REG (VI_BASE_REG + 0x18)
#define _OBJTYPES_H_ 
#define DPC_END_REG (DPC_BASE_REG + 0x04)
#define C0_READI 0x1
#define FTINPUT_STICKBUFFER_TICS_MAX (U8_MAX - 1)
#define gsDPSetColor(c,d) { _SHIFTL(c, 24, 8), (unsigned int)(d) }
#define LBPARTICLE_OPCODE_END 0xFF
#define ftMotionCommandSetFlag0(val) (GC_FIELDSET(nFTMotionEventSetFlag0, 26, 6) | GC_FIELDSET(val, 0, 26))
#define GU_PARSE_STRING_TYPE 6
#define A_RIGHT 0x00
#define ftMotionCommandSubroutineS1() GC_FIELDSET(nFTMotionEventSubroutine, 26, 6)
#define OS_EVENT_SP 4
#define F32_MAX 3.40282346639e+38F
#define IS_KSEG0(x) ((u32)(x) >= K0BASE && (u32)(x) < K1BASE)
#define gsSPInsertMatrix(where,num) ERROR!! gsSPInsertMatrix is no longer supported.
#define LBPARTICLE_OPCODE_MASKT 0xB0
#define A_MIX 0x10
#define CVG_DST_CLAMP 0
#define WATCHLO_VALIDMASK 0xfffffffb
#define PI_RD_LEN_REG (PI_BASE_REG + 0x08)
#define G_RM_XLU_SURF2 RM_XLU_SURF(2)
#define IS_KSEG1(x) ((u32)(x) >= K1BASE && (u32)(x) < K2BASE)
#define LBPARTICLE_OPCODE_ALPHABLEND 0xB2
#define G_RM_ZB_XLU_DECAL RM_ZB_XLU_DECAL(1)
#define DPC_STATUS_XBUS_DMEM_DMA 0x001
#define _GMDEF_H_ 
#define INT16_MAX __INT16_MAX__
#define G_CC_BLENDRGBDECALA TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, TEXEL0
#define _GBI_H_ 
#define PPARITY_MASK 0x0001
#define OS_PFS_VERSION 0x0200
#define gSPCullDisplayList(pkt,vstart,vend) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_CULLDL, 24, 8) | _SHIFTL((vstart)*2, 0, 16); _g->words.w1 = _SHIFTL((vend)*2, 0, 16); }
#define AOBJ_MATFLAG_SCAV AOBJ_MAT_BIT(nGCAnimTrackScaV)
#define PFS_READ 0
#define ALIGNED(x) __attribute__((aligned(x)))
#define G_CYC_COPY (2 << G_MDSFT_CYCLETYPE)
#define syMatrixAdvance(mtx,mtx_heap,type) (mtx = mtx_heap.ptr, mtx_heap.ptr = (void*) ((type*) mtx_heap.ptr + 1))
#define SYS_TRIG_RAND_H 
#define A_MIXER 12
#define SR_RP 0x08000000
#define OS_IM_COUNTER 0x00008401
#define ERR_ALSNDPSETPRIORITY 111
#define G_CCMUX_COMBINED 0
#define A_SETLOOP 15
#define G_MV_PMTX 6
#define VI_ORIGIN_REG (VI_BASE_REG + 0x04)
#define EXC_OV EXC_CODE(12)
#define PFS_CREATE 2
#define SR_SR 0x00100000
#define GAME_FAULT_SEND 14
#define SR_SX 0x00000040
#define aobjEvent32EndRaw(flags_val,payload_val) aobjEvent32(nGCAnimEvent32End, (flags_val), (payload_val))
#define AI_MIN_BIT_RATE 2
#define SYVECTOR_INV_Y (1 << nSYVectorInvY)
#define G_CC_DECALRGB2 0, 0, 0, COMBINED, 0, 0, 0, SHADE
#define ftMotionCommandSetFlag3(val) (GC_FIELDSET(nFTMotionEventSetFlag3, 26, 6) | GC_FIELDSET(val, 0, 26))
#define ERR_OSSTARTTHREAD 3
#define G_CC_DECALRGBA 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0
#define SR_TS 0x00200000
#define FTANIM_FLAG_SUBMOTION_SCRIPT 0x00000010
#define gsDPSetFogColor(r,g,b,a) sDPRGBColor(G_SETFOGCOLOR, r,g,b,a)
#define Z_TRIG CONT_G
#define RI_LATENCY_REG (RI_BASE_REG + 0x14)
#define aSegment(pkt,s,b) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_SEGMENT, 24, 8); _a->words.w1 = _SHIFTL(s, 24, 8) | _SHIFTL(b, 0, 24); }
#define _gsDPLoadTextureBlockTile(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define gSPBranchList(pkt,dl) gDma1p(pkt,G_DL,dl,0,G_DL_NOPUSH)
#define RI_COUNT_REG RI_REFRESH_REG
#define BIQUAD(x) ((x) * (x) * (x) * (x))
#define AOBJ_MAT_BIT(track) (1u << ((track) - nGCAnimTrackMaterialStart))
#define OS_TV_MPAL 2
#define SYVECTOR_AXIS_Y (1 << nSYVectorAxisY)
#define gsDPSetBlendColor(r,g,b,a) sDPRGBColor(G_SETBLENDCOLOR, r,g,b,a)
#define SR_UX 0x00000020
#define PFS_ONE_PAGE 8
#define G_CC_1CYUV2RGB TEXEL0, K4, K5, TEXEL0, 0, 0, 0, SHADE
#define PADDR_SHIFT 4
#define gsDPSetAlphaDither(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, mode)
#define MI_CLR_EBUS 0x0200
#define INT8_MIN (-INT8_MAX - 1)
#define aSaveBuffer(pkt,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_SAVEBUFF, 24, 8); _a->words.w1 = (unsigned int)(s); }
#define G_MDSFT_TEXTCONV 9
#define ERR_OSRECVMESG 8
#define G_CC_MODULATERGBA G_CC_MODULATEIA
#define CONT_ADDR_CRC_ER 0x04
#define ftMotionCommandEffectS1(jid,eid,flag) (GC_FIELDSET(nFTMotionEventEffect, 26, 6) | GC_FIELDSET(jid, 19, 7) | GC_FIELDSET(eid, 10, 9) | GC_FIELDSET(flag, 0, 10))
#define CONT_CARD_ON 0x01
#define CONT_START 0x1000
#define MOBJ_FLAG_NONE (0)
#define gDPLoadTile(pkt,t,uls,ult,lrs,lrt) gDPLoadTileGeneric(pkt, G_LOADTILE, t, uls, ult, lrs, lrt)
#define RI_BASE_REG 0x04700000
#define MQ_GET_COUNT(mq) ((mq)->validCount)
#define ERR_OSJAMMESG 7
#define ERR_OSPISTARTDMA_DIR 30
#define OS_EVENT_SW1 0
#define G_TEXRECT 0xe4
#define CONFIG_COHRNT_EXLWR 0x00000005
#define OS_VI_BIT_NTSC 0x0400
#define ERR_OSMAPTLB_INDEX 10
#define gsDPSetOtherMode(mode0,mode1) { _SHIFTL(G_RDPSETOTHERMODE,24,8)|_SHIFTL(mode0,0,24), (unsigned int)(mode1) }
#define F32_MIN (-F32_MAX)
#define CONFIG_SB_SHFT 22
#define _OBJHELPER_H_ 
#define G_RM_ZB_PCL_SURF2 RM_ZB_PCL_SURF(2)
#define GOBJ_FLAG_NOANIM (1 << 1)
#define AL_BANK_VERSION 0x4231
#define DTOR32 ((float)DTOR64)
#define ERR_ALCSEQZEROVEL 129
#define MAXCONTROLLERS 4
#define G_TF_POINT (0 << G_MDSFT_TEXTFILT)
#define VI_MPAL_CLOCK 48628316
#define _OBJDEF_H_ 
#define G_MTX_NOPUSH 0x00
#define _SHIFTL(v,s,w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define LBPARTICLE_OPCODE_SETFRICTION 0xA3
#define MI_INTR_MASK_SET_AI 0x0020
#define LBPARTICLE_OPCODE_ADDVEL 0x98
#define G_CC_HILITERGB2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, SHADE
#define __LIB_AUDIO__ 
#define G_TX_LOADTILE 7
#define G_TL_TILE (0 << G_MDSFT_TEXTLOD)
#define AL_PHASE_ATTACK 0
#define MI_CLR_RDRAM 0x1000
#define aobjEvent32SetExtVal(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetExtVal, (flags_mask), (dur))
#define FTCOMPUTER_COMMAND_BUTTON_A_RELEASE (nFTComputerCommandButtonARelease << FTCOMPUTER_COMMAND_TIMER_BITS)
#define GIO_GIO_SYNC_REG (GIO_BASE_REG + 0x400)
#define C0_SR 12
#define SP_FRACPOS 0x00000100
#define ERR_OSPROFILEINIT_ALN 63
#define G_RM_OPA_CI2 RM_OPA_CI(2)
#define aobjEvent32SetVal(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetVal, (flags_mask), (dur))
#define G_SC_ODD_INTERLACE 3
#define G_RM_AA_ZB_PCL_SURF2 RM_AA_ZB_PCL_SURF(2)
#define G_MOVEWORD 0xdb
#define G_RM_RA_ZB_OPA_INTER2 RM_RA_ZB_OPA_INTER(2)
#define FTOFRAC8(x) ((int)MIN(((x) * (128.0f)), 127.0f) & 0xff)
#define SYVECTOR_DOT_3D(v,w) ((v->x * w->x) + (v->y * w->y) + (v->z * w->z))
#define G_IM_SIZ_32b_BYTES 4
#define MQ_IS_FULL(mq) (MQ_GET_COUNT(mq) >= (mq)->msgCount)
#define DPS_TBIST_REG (DPS_BASE_REG + 0x00)
#define G_RM_CLD_SURF2 RM_CLD_SURF(2)
#define SP_SET_SSTEP 0x00040
#define DPC_BASE_REG 0x04100000
#define ERR_OSDPSETNEXTBUFFER_SIZE 18
#define G_RM_AA_ZB_TEX_INTER2 RM_AA_ZB_TEX_INTER(2)
#define LBBACKUP_UNLOCK_MASK_LUIGI (1 << nLBBackupUnlockLuigi)
#define LBPARTICLE_OPCODE_RETURN 0xFD
#define MI_INTR_MASK_SET_DP 0x0800
#define SP_SET_INTR_BREAK 0x00100
#define G_RM_AA_ZB_XLU_LINE2 RM_AA_ZB_XLU_LINE(2)
#define ftMotionCommandClearAttackCollID(id) (GC_FIELDSET(nFTMotionEventClearAttackCollID, 26, 6) | GC_FIELDSET(id, 0, 26))
#define GU_BLINKRDP_HILITE 1
#define OS_PRIORITY_PIMGR 150
#define G_RM_AA_ZB_XLU_SURF RM_AA_ZB_XLU_SURF(1)
#define AOBJ_ANIM_END (F32_MIN / 3.0F)
#define CONFIG_EC_3_2 0x7
#define SP_DMA_FULL_REG (SP_BASE_REG + 0x14)
#define VI_CTRL_SERRATE_ON 0x00040
#define VI_V_VIDEO_REG VI_V_START_REG
#define gmColCommandBlendColor1(frames,r,g,b,a) gmColCommandBlendColor1S1(frames), gmColCommandBlendColor1S2(r, g, b, a)
#define RCP_IMASKSHIFT 16
#define G_IMMCMDSIZ 64
#define ftMotionCommandSetParallelScriptS2(addr) ((uintptr_t)addr)
#define LBPARTICLE_OPCODE_SETRETURN 0xFC
#define INT_FAST8_MAX __INT_FAST8_MAX__
#define ERR_ALSNDP_NO_VOICE 105
#define LBPARTICLE_OPCODE_SETVELMAG 0xBD
#define G_RM_AA_XLU_LINE2 RM_AA_XLU_LINE(2)
#define G_MODIFYVTX 0x02
#define DEF_DIR_PAGES 2
#define ERR_OSPROFILESTOP_FLAG 68
#define ERR_OSCREATEPIMANAGER 35
#define WCHAR_MAX __WCHAR_MAX__
#define G_RM_AA_ZB_SUB_TERR RM_AA_ZB_SUB_TERR(1)
#define PI_DOM2_ADDR1 0x05000000
#define LBPARTICLE_OPCODE_ADDPOS 0x88
#define PI_DOM2_ADDR2 0x08000000
#define CVG_DST_SAVE 0x300
#define gsDPSetTextureFilter(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, type)
#define PFS_FILE_EXT_LEN 4
#define AOBJ_MATFLAG_SCAU AOBJ_MAT_BIT(nGCAnimTrackScaU)
#define C_HINV 0x10
#define OS_RG_ALIGN_DEFAULT OS_RG_ALIGN_8B
#define HOST_PROF_ACK 13
#define gmColCommandEffectItemHoldS2(off_x,off_y) (GC_FIELDSET(off_x, 16, 16) | GC_FIELDSET(off_y, 0, 16))
#define G_MTX_PUSH 0x01
#define OS_VI_MPAL_HAF1 39
#define gDPLoadSync(pkt) gDPNoParam(pkt, G_RDPLOADSYNC)
#define CACHERR_ED 0x20000000
#define G_RM_OPA_SURF RM_OPA_SURF(1)
#define LBBACKUP_MASK_FIGHTER(kind) (1 << (kind))
#define gmColCommandEffectItemHoldS3(off_z,rng_x) (GC_FIELDSET(off_z, 16, 16) | GC_FIELDSET(rng_x, 0, 16))
#define CACHERR_EE 0x04000000
#define OS_EVENT_SP_BREAK 11
#define FR_POS_FRUSTRATIO_1 0x0000ffff
#define gsDPTileSync() gsDPNoParam(G_RDPTILESYNC)
#define ERR_OSSPTASKLOAD_OUT 58
#define FTOFIX32(x) (long)((x) * (float)0x00010000)
#define RM_AA_ZB_XLU_SURF(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define AOBJ_CAMFLAG_ATY AOBJ_CAM_BIT(nGCAnimTrackAtY)
#define AOBJ_CAMFLAG_ATZ AOBJ_CAM_BIT(nGCAnimTrackAtZ)
#define ERR_ALSEQP_NO_SOUND 100
#define gmColCommandBlendColor2S1(frames) (GC_FIELDSET(nGMColEventBlendColor1, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define R_JPAD CONT_RIGHT
#define GU_PARSE_GBI_TYPE 1
#define gDPSetTextureFilter(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTFILT, 2, type)
#define G_RDP_TRI_FILL_MASK 0x08
#define G_MVO_L1 (3*24)
#define G_MVO_L2 (4*24)
#define G_MVO_L3 (5*24)
#define G_MVO_L4 (6*24)
#define G_MVO_L5 (7*24)
#define G_MVO_L7 (9*24)
#define gsSP2Triangles(v00,v01,v02,flag0,v10,v11,v12,flag1) { (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Triangle_w1f(v00, v01, v02, flag0)), __gsSP1Triangle_w1f(v10, v11, v12, flag1) }
#define G_CC_BLENDRGBA TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, SHADE
#define DPC_CLR_XBUS_DMEM_DMA 0x0001
#define G_VTX 0x01
#define ftMotionEventCast(event,type) ((type*)(event)->p_script)
#define G_CC_HILITERGBDECALA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, TEXEL0
#define DPC_CLOCK_REG (DPC_BASE_REG + 0x10)
#define SVINDEXMASK 0x00000380
#define G_SETTILESIZE 0xf2
#define LBBACKUP_ERROR_1PGAMEMARIO (1 << nLBBackupError1PGameMario)
#define gsDPLoadMultiTile_4b(timg,tmem,rtile,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_8b, ((width)>>1), timg), gsDPSetTile(fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define OS_EVENT_CART 2
#define gsSPNoOp() gsDma0p(G_SPNOOP, 0, 0)
#define BOWTIE_VAL 0
#define G_TRI_SHADE_ZBUFF 0xcd
#define SP_SET_SIG1 0x01000
#define SP_SET_SIG2 0x04000
#define SP_SET_SIG3 0x10000
#define SP_SET_SIG4 0x40000
#define SP_SET_SIG6 0x400000
#define SP_SET_SIG7 0x1000000
#define M_VIDTASK 3
#define OS_YIELD_AUDIO_SIZE 0x400
#define RM_ZB_OPA_SURF(clk) Z_CMP | Z_UPD | CVG_DST_FULL | ALPHA_CVG_SEL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define PFS_ERR_NO_GBCART 12
#define RDRAM_BASE_REG 0x03F00000
#define AL_CMIDI_BLOCK_CODE 0xFE
#define ERR_OSPIRAWREADIO 19
#define G_MAXZ 0x03ff
#define G_MWO_MATRIX_YZ_YW_F 0x2c
#define G_MWO_MATRIX_YZ_YW_I 0x0c
#define G_MDSFT_BLENDMASK 0
#define RM_ZB_OVL_SURF(clk) Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define AI_MIN_DAC_RATE 132
#define ERR_OSAISETFREQUENCY 14
#define INT_LEAST8_MAX __INT_LEAST8_MAX__
#define gsSPViewport(v) gsDma2p( G_MOVEMEM, (v), sizeof(Vp), G_MV_VIEWPORT, 0)
#define EEPROM_TYPE_4K 0x01
#define GAME_LOG_SEND 7
#define RM_AA_TEX_TERR(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_MDSFT_RENDERMODE 3
#define INT_FAST8_MIN (-INT_FAST8_MAX - 1)
#define ftMotionCommandEffectS4(ry,rz) (GC_FIELDSET(ry, 16, 16) | GC_FIELDSET(rz, 0, 16))
#define FTCOMPUTER_STICK_AUTOHALF (0x80)
#define INT_LEAST16_MAX __INT_LEAST16_MAX__
#define ERR_ALSNDPSETSOUND 110
#define OS_PM_1M 0x01fe000
#define gSPForceMatrix(pkt,mptr) { gDma2p((pkt),G_MOVEMEM,(mptr),sizeof(Mtx),G_MV_MATRIX,0); gMoveWd((pkt), G_MW_FORCEMTX,0,0x00010000); }
#define WCHAR_MIN __WCHAR_MIN__
#define gmColCommandEffectItemHoldS1(joint,effect_id,flag) (GC_FIELDSET(nGMColEventEffectItemHoldOffset, 26, 6) | GC_FIELDSET(joint, 19, 7) | GC_FIELDSET(effect_id, 10, 9) | GC_FIELDSET(flag, 0, 10))
#define gmColCommandEffectItemHoldS4(rng_y,rng_z) (GC_FIELDSET(rng_y, 16, 16) | GC_FIELDSET(rng_z, 0, 16))
#define gsDPLoadMultiBlock_4bS(timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1,0), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define PI_DOMAIN1 0
#define PI_DOMAIN2 1
#define G_RM_AA_OPA_SURF RM_AA_OPA_SURF(1)
#define FTSTATUS_PRESERVE_FASTFALL (1 << nFTStatusPreserveFastFall)
#define FTANIM_FLAG_ANIMJOINT 0x00000008
#define C_CDX 0xc
#define G_CCMUX_SCALE 6
#define SR_RE 0x02000000
#define OS_TASK_LOADABLE 0x0004
#define UINT_LEAST8_MAX __UINT_LEAST8_MAX__
#define BOOT_ADDRESS_EMU 0x20010000
#define ERR_ALSEQPUNMAP 123
#define AI_DRAM_ADDR_REG (AI_BASE_REG + 0x00)
#define gSPPopMatrix(pkt,n) gSPPopMatrixN((pkt), (n), 1)
#define RDRAM_REF_INTERVAL_REG (RDRAM_BASE_REG + 0x10)
#define PI_BSD_DOM1_LAT_REG (PI_BASE_REG + 0x14)
#define gMoveWd(pkt,index,offset,data) gDma1p((pkt), G_MOVEWORD, data, offset, index)
#define INT64_MAX __INT64_MAX__
#define G_TRI_SHADE_TXTR_ZBUFF 0xcf
#define MI_INTR_MASK_SET_PI 0x0200
#define C0_TAGLO 28
#define SP_SET_RSPSIGNAL SP_SET_SIG3
#define INT_LEAST32_MIN (-INT_LEAST32_MAX - 1)
#define gsDPSetKeyR(cR,sR,wR) { _SHIFTL(G_SETKEYR, 24, 8), _SHIFTL(wR, 16, 12) | _SHIFTL(cR, 8, 8) | _SHIFTL(sR, 0, 8) }
#define G_MWO_FOG 0x00
#define GIO_BASE_REG 0x18000000
#define SQUARE(x) ((x) * (x))
#define XUT_VEC (K0BASE+0x80)
#define G_IM_SIZ_32b_LOAD_BLOCK G_IM_SIZ_32b
#define OS_PM_4K 0x0000000
#define PI_BSD_DOM2_PWD_REG (PI_BASE_REG + 0x28)
#define OS_PM_4M 0x07fe000
#define AL_DEFAULT_PRIORITY 5
#define SP_WR_LEN_REG (SP_BASE_REG + 0x0C)
#define OS_PRIORITY_IDLE 0
#define AL_USEC_PER_FRAME 16000
#define G_RM_AA_TEX_EDGE RM_AA_TEX_EDGE(1)
#define TLBCTXT_VPNSHIFT 4
#define K2SIZE 0x20000000
#define OS_MESG_TYPE_BASE (10)
#define G_GEOMETRYMODE 0xd9
#define OS_PM_256K 0x007e000
#define aLoadADPCM(pkt,c,d) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_LOADADPCM, 24, 8) | _SHIFTL(c, 0, 24); _a->words.w1 = (unsigned int)d; }
#define VI_CURRENT_REG (VI_BASE_REG + 0x10)
#define ftMotionPlayVoice(fgm_id) (GC_FIELDSET(nFTMotionEventPlayVoiceStoreInfo, 26, 6) | GC_FIELDSET(fgm_id, 0, 26))
#define ftMotionCommandSetDamageThrownS2(addr) ((uintptr_t)addr)
#define gDPFullSync(pkt) gDPNoParam(pkt, G_RDPFULLSYNC)
#define LBPARTICLE_FLAG_DITHER 0x400
#define AL_SEQBANK_VERSION 'S1'
#define AOBJ_EXTFLAG_BLENDCOLOR AOBJ_EXT_BIT(nGCAnimTrackBlendColor)
#define PFS_INITIALIZED 0x1
#define ftMotionCommandSubroutine(addr) ftMotionCommandSubroutineS1(), ftMotionCommandSubroutineS2(addr)
#define UINT16_C(c) __UINT16_C(c)
#define FTCATCHKIND_MASK_KIRBYSPECIALN (1 << nFTCatchKindKirbySpecialN)
#define GBL_c1(m1a,m1b,m2a,m2b) (m1a) << 30 | (m1b) << 26 | (m2a) << 22 | (m2b) << 18
#define MI_INTR_MASK_SET_SI 0x0008
#define gdSPDefLights6(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5,r6,g6,b6,x6,y6,z6) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}, {{ {r6,g6,b6},0,{r6,g6,b6},0,{x6,y6,z6},0}}} }
#define MI_INTR_MASK_SET_SP 0x0002
#define gDPSetColorDither(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_RGBDITHER, 2, mode)
#define ALIGN(s,align) (((u32)(s) + ((align)-1)) & ~((align)-1))
#define __gsSPLine3D_w1f(v0,v1,wd,flag) (((flag) == 0) ? __gsSPLine3D_w1(v0, v1, wd): __gsSPLine3D_w1(v1, v0, wd))
#define gSPBranchLessZraw(pkt,dl,vtx,zval) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(dl); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_BRANCH_Z,24,8)| _SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12)); _g->words.w1 = (unsigned int)(zval); }
#define CONT_ABSOLUTE 0x0001
#define GU_PARSERDP_VERBOSE 1
#define S32_MIN 0x80000000
#define CHNL_ERR_NORESP 0x80
#define ALIGNSZ (sizeof(long long))
#define SYVECTOR_INV_Z (1 << nSYVectorInvZ)
#define G_RM_AA_ZB_OPA_TERR RM_AA_ZB_OPA_TERR(1)
#define aobjEvent32SetValRateBlock(flags_mask,d) aobjEvent32(nGCAnimEvent32SetValRateBlock, (flags_mask), (d))
#define G_TRI_SHADE 0xcc
#define SP_Z 0x00000008
#define CONT_EEPROM_BUSY 0x80
#define G_CK_KEY (1 << G_MDSFT_COMBKEY)
#define TLBPGMASK_64K 0x1e000
#define gDPSetTile(pkt,fmt,siz,line,tmem,tile,palette,cmt,maskt,shiftt,cms,masks,shifts) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9); _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) |_SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4); }
#define TLBRAND_RANDSHIFT 0
#define G_IM_SIZ_4b_SHIFT 2
#define AL_FX_BIGROOM 2
#define AOBJ_MATFLAG_TEXIDNEXT AOBJ_MAT_BIT(nGCAnimTrackTextureIDNext)
#define PFS_ID_PAGE PFS_ONE_PAGE * 0
#define OS_CYCLES_TO_NSEC(c) (((u64)(c) * (1000000000LL / 15625000LL)) / (OS_CPU_COUNTER / 15625000LL))
#define aobjEvent32Wait(frames) aobjEvent32(nGCAnimEvent32Wait, 0, (frames))
#define G_TRI2 0x06
#define G_RM_ZB_XLU_SURF RM_ZB_XLU_SURF(1)
#define VI_CTRL_ANTIALIAS_MASK 0x00300
#define MI_INTR_MASK_SET_VI 0x0080
#define RAMROM_RELEASE_OFFSET 0xc
#define EXC_WATCH EXC_CODE(23)
#define aPan(pkt,f,d,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = (_SHIFTL(A_PAN, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(d, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define G_DL_NOPUSH 0x01
#define L_JPAD CONT_LEFT
#define AOBJ_CAMFLAG_EYEX AOBJ_CAM_BIT(nGCAnimTrackEyeX)
#define GRDPCMD(x) (0xff-(x))
#define G_IM_SIZ_8b 1
#define gSP2Triangles(pkt,v00,v01,v02,flag0,v10,v11,v12,flag1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TRI2, 24, 8)| __gsSP1Triangle_w1f(v00, v01, v02, flag0)); _g->words.w1 = __gsSP1Triangle_w1f(v10, v11, v12, flag1); }
#define FPCSR_FU 0x00000008
#define ERR_OSWRITEHOST_ADDR 72
#define FTCOMPUTER_COMMAND_BUTTON_Z_PRESS (nFTComputerCommandButtonZPress << FTCOMPUTER_COMMAND_TIMER_BITS)
#define F_TIME_TO_TICS(q,u) ((int)((q) * (u)))
#define RCP_STAT_PRINT rmonPrintf("current=%x start=%x end=%x dpstat=%x spstat=%x\n", IO_READ(DPC_CURRENT_REG), IO_READ(DPC_START_REG), IO_READ(DPC_END_REG), IO_READ(DPC_STATUS_REG), IO_READ(SP_STATUS_REG))
#define SSB64_TYPES_H 
#define ERR_OSPROFILESTART_TIME 66
#define G_CC_YUV2RGB TEXEL1, K4, K5, TEXEL1, 0, 0, 0, 0
#define gsSPLoadUcodeEx(uc_start,uc_dstart,uc_dsize) { _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(uc_dstart), }, { _SHIFTL(G_LOAD_UCODE,24,8)| _SHIFTL((int)(uc_dsize)-1,0,16), (unsigned int)(uc_start), }
#define gSPDmaWrite(pkt,dmem,dram,size) gSPDma_io((pkt),1,(dmem),(dram),(size))
#define SR_IBIT2 0x00000200
#define OS_VI_BIT_POINTSAMPLE 0x0020
#define DPC_STATUS_START_GCLK 0x008
#define ERR_ALSEQOVERRUN 131
#define SP_STATUS_RSPSIGNAL SP_STATUS_SIG3
#define SP_TEXSHUF 0x00000200
#define OS_TASK_USR0 0x0010
#define I_HRS_TO_SEC(q) ((int)((q)*TIME_MIN))
#define gsDPLoadMultiBlock_4b(timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define aobjEvent32SetExtValAfter(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetExtValAfter, (flags_mask), (dur))
#define VI_H_START_REG (VI_BASE_REG + 0x24)
#define G_MWO_NUMLIGHT 0x00
#define VI_H_VIDEO_REG VI_H_START_REG
#define MI_INTR_PI 0x10
#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define gsSPMvpRecalc() gsImmp21(G_SPECIAL_1, 0, 1, 0)
#define DPC_BUFBUSY_REG (DPC_BASE_REG + 0x14)
#define G_RM_AA_ZB_XLU_DECAL RM_AA_ZB_XLU_DECAL(1)
#define PI64 3.14159265358979323846
#define SP_CLR_HALT 0x00001
#define C0_WATCHHI 19
#define F_CLC_DTOR32(x) ((float)(((x) * PI32) / 180.0F))
#define G_SETBLENDCOLOR 0xf9
#define ERR_OSPROFILEINIT_STR 61
#define G_RM_PASS GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define RI_RERROR_REG (RI_BASE_REG + 0x18)
#define AOBJ_EXTFLAG_PRIMCOLOR AOBJ_EXT_BIT(nGCAnimTrackPrimColor)
#define CACHERR_PIDX_MASK 0x00000007
#define VI_INTR_REG (VI_BASE_REG + 0x0C)
#define gsDma0p(c,s,l) { _SHIFTL((c), 24, 8) | _SHIFTL((l), 0, 24), (unsigned int)(s) }
#define VI_PAL_CLOCK 49656530
#define LBPARTICLE_GET_ATTACH_ID(id) (((id) & 0x7000) >> 0xC)
#define AI_DACRATE_REG (AI_BASE_REG + 0x10)
#define COMBINE_INTEGRAL(a,b) (((a)&0xffff0000) | (((b) >> 16)))
#define FTSTATUS_PRESERVE_HITSTATUS (1 << nFTStatusPreserveHitStatus)
#define OS_APP_NMI_BUFSIZE 64
#define PIF_RAM_END 0x1FC007FF
#define ERR_OSGETTIME 74
#define gDPSetTextureDetail(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTDETAIL, 2, type)
#define RI_CURRENT_LOAD_REG (RI_BASE_REG + 0x08)
#define G_CCMUX_ENV_ALPHA 12
#define GMSTAFFROLL_ASCII_LETTER_TO_FONT_INDEX(c) ((c) > 'Z' ? ((c) - 0x47) : ((c) - 0x41))
#define FTSTATUS_CHARACTERS_NULL 0xA2C2A
#define RMON_STACKSIZE 0x1000
#define NO_SOUND_ERR_MASK 0x01
#define AL_MAX_PRIORITY 127
#define gsSPLookAt(la) gsSPLookAtX(la), gsSPLookAtY((char *)(la)+16)
#define OS_IM_CART 0x00000c01
#define G_MV_POINT 12
#define G_MWO_POINT_ST 0x14
#define C0_RAND 1
#define CONT_A 0x8000
#define aobjEvent32SetTargetRate(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetTargetRate, (flags_mask), (dur))
#define CONT_B 0x4000
#define MI_INTR_MASK_REG (MI_BASE_REG + 0x0C)
#define G_SHADE 0x00000004
#define __STDC_HOSTED__ 0
#define CONT_C 0x0002
#define aobjEvent32SetInterp(kind,flags_mask) aobjEvent32(nGCAnimEvent32SetInterp, (flags_mask), (kind))
#define AOBJ_CAMFLAG_ATI AOBJ_CAM_BIT(nGCAnimTrackAtI)
#define ftMotionCommandSetThrowS2(addr) ((uintptr_t)addr)
#define E_VEC (K0BASE+0x180)
#define FTANIM_FLAG_TRANSN_JOINT 0x80000000
#define FTCOMPUTER_EVENT_STICK_X(x,t) FTCOMPUTER_EVENT_INSTRUCTION(nFTComputerCommandStickX, t), (x)
#define HOST_DATA_ACK 17
#define SR_CU0 0x10000000
#define SR_CU1 0x20000000
#define SR_CU3 0x80000000
#define _LBDEF_H_ 
#define G_RM_RA_OPA_SURF RM_RA_OPA_SURF(1)
#define gmColCommandBlendColor2S2(r,g,b,a) (GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))
#define C0_WATCHLO 18
#define SP_CLR_INTR 0x00008
#define gSPPerspNormalize(pkt,s) gMoveWd(pkt, G_MW_PERSPNORM, 0, (s))
#define _SHIFTR(v,s,w) ((unsigned int)(((unsigned int)(v) >> (s)) & ((0x01 << (w)) - 1)))
#define HOST_PRINTF_ACK 6
#define I_MIN_TO_TICS(q) ((int)((q)*TIME_MIN))
#define LBPARTICLE_FLAG_FRICTION 0x2
#define ERR_OSMALLOC 52
#define G_IM_FMT_IA 3
#define RM_AA_OPA_TERR(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_CC_MODULATERGBDECALA_PRIM G_CC_MODULATEIDECALA_PRIM
#define C0_WRITER 0x6
#define FTCOMPUTER_COMMAND_DEFAULT_MAX (nFTComputerCommandEnumCount << FTCOMPUTER_COMMAND_TIMER_BITS)
#define FTSTATUS_PRESERVE_HIT (1 << nFTStatusPreserveHit)
#define GAME_EXIT 16
#define DPS_BASE_REG 0x04200000
#define RM_AA_ZB_SUB_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define L_CBUTTONS CONT_C
#define gsDPSetConvert(k0,k1,k2,k3,k4,k5) { (_SHIFTL(G_SETCONVERT, 24, 8) | _SHIFTL(k0, 13, 9) | _SHIFTL(k1, 4, 9) | _SHIFTL(k2, 5, 4)), (_SHIFTL(k2, 27, 5) | _SHIFTL(k3, 18, 9) | _SHIFTL(k4, 9, 9) | _SHIFTL(k5, 0, 9)) }
#define FTDISPLAY_DLLINK_DEFAULT 9
#define PFS_INODE_SIZE_PER_PAGE 128
#define TLBLO_UNCACHED 0x10
#define LBPARTICLE_OPCODE_MAKEID 0xB9
#define A_LEFT 0x02
#define AL_PAN_RIGHT 127
#define GU_PARSE_ABI_TYPE 5
#define G_CC_MODULATEIA2 COMBINED, 0, SHADE, 0, COMBINED, 0, SHADE, 0
#define FTCATCHKIND_MASK_TARUCANN (1 << nFTCatchKindTaruCann)
#define EEP16K_MAXBLOCKS 256
#define OS_VI_DIVOT_ON 0x0010
#define G_LIGHTING 0x00020000
#define CONFIG_EC 0x70000000
#define G_TC_FILT (6 << G_MDSFT_TEXTCONV)
#define EXC_CPU EXC_CODE(11)
#define FTCOMPUTER_EVENT_END() (FTCOMPUTER_COMMAND_END)
#define gDPSetCombineMode(pkt,a,b) gDPSetCombineLERP(pkt, a, b)
#define VI_NTSC_CLOCK 48681812
#define INT32_MIN (-INT32_MAX - 1)
#define gsDPLoadTLUT_pal16(pal,dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, (256+(((pal)&0xf)*16)), G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, 15), gsDPPipeSync()
#define G_IM_SIZ_4b_INCR 3
#define gsDPSetCombine(muxs0,muxs1) { _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(muxs0, 0, 24), (unsigned int)(muxs1) }
#define SP_FASTCOPY 0x00000020
#define PI_BSD_DOM1_RLS_REG (PI_BASE_REG + 0x20)
#define G_BL_CLR_BL 2
#define _GU_H_ 
#define ERR_ALSYN_NO_UPDATE 106
#define EXC_SYSCALL EXC_CODE(8)
#define G_CC_BLENDI ENVIRONMENT, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define D_JPAD CONT_DOWN
#define G_TRI1 0x05
#define RCP_IMASK 0x003f0000
#define K1SIZE 0x20000000
#define gsDPSetKeyGB(cG,sG,wG,cB,sB,wB) { (_SHIFTL(G_SETKEYGB, 24, 8) | _SHIFTL(wG, 12, 12) | _SHIFTL(wB, 0, 12)), (_SHIFTL(cG, 24, 8) | _SHIFTL(sG, 16, 8) | _SHIFTL(cB, 8, 8) | _SHIFTL(sB, 0, 8)) }
#define G_RM_AA_ZB_TEX_TERR2 RM_AA_ZB_TEX_TERR(2)
#define C0_MAJREVMASK 0xf0
#define LBPARTICLE_FLAG_ALPHABLEND 0x200
#define FPCSR_RM_RM 0x00000003
#define FPCSR_RM_RN 0x00000000
#define FPCSR_RM_RP 0x00000002
#define __gsSP1Triangle_w1(v0,v1,v2) (_SHIFTL((v0)*2,16,8)|_SHIFTL((v1)*2,8,8)|_SHIFTL((v2)*2,0,8))
#define FPCSR_RM_RZ 0x00000001
#define VI_CTRL_GAMMA_ON 0x00008
#define EXC_VCED EXC_CODE(31)
#define gsSPTexture(s,t,level,tile,on) { (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL(BOWTIE_VAL,16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)), (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)) }
#define EXC_VCEI EXC_CODE(14)
#define C0_WRITEI 0x2
#define ERR_ALSEQNUMTRACKS 116
#define DPC_STATUS_CMD_BUSY 0x040
#define _LIBRARY_H_ 
#define F_CST_RTOD32(x) ((float)((x) * RTOD32))
#define ftMotionCommandSetAttackCollSize(id,sz) (GC_FIELDSET(nFTMotionEventSetAttackCollSize, 26, 6) | GC_FIELDSET(id, 23, 3) | GC_FIELDSET(sz, 7, 16))
#define ftMotionCommandSetDamageCollPartIDS2(ox,oy) (GC_FIELDSET(ox, 16, 16) | GC_FIELDSET(oy, 0, 16))
#define MOBJ_FLAG_PALETTE (1 << 2)
#define G_TX_LDBLK_MAX_TXL 2047
#define G_MWO_MATRIX_YX_YY_F 0x28
#define G_RM_RA_ZB_OPA_INTER RM_RA_ZB_OPA_INTER(1)
#define C0_COUNT 9
#define SADDR_SHIFT 4
#define OS_CLOCK_RATE 62500000LL
#define SP_IMEM_START 0x04001000
#define G_TEXTURE 0xd7
#define RM_AA_OPA_SURF(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define ERR_OSCREATEMESGQUEUE 5
#define AOBJ_MATFLAG_SCRV AOBJ_MAT_BIT(nGCAnimTrackScrV)
#define gSPSegment(pkt,segment,base) gMoveWd(pkt, G_MW_SEGMENT, (segment)*4, base)
#define PIF_RAM_START 0x1FC007C0
#define CHNL_ERR_FRAME 0x80
#define gSPSetLights0(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_0); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.a,2); }
#define AI_LEN_REG (AI_BASE_REG + 0x04)
#define alCSPSetPan alCSPSetChlPan
#define OS_VI_GAMMA_ON 0x0001
#define gDma0p(pkt,c,s,l) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8) | _SHIFTL((l), 0, 24); _g->words.w1 = (unsigned int)(s); }
#define gmColCommandSetSkeletonID(skeleton_id) (GC_FIELDSET(nGMColEventSetSkeletonID, 26, 6) | GC_FIELDSET(skeleton_id, 0, 26))
#define FTANIM_FLAG_YROTN_JOINT 0x20000000
#define ftMotionCommandLoopBegin(count) (GC_FIELDSET(nFTMotionEventLoopBegin, 26, 6) | GC_FIELDSET(count, 0, 26))
#define RDRAM_0_DEVICE_ID 0
#define RDRAM_DEVICE_MANUF_REG (RDRAM_BASE_REG + 0x24)
#define ACMD_SIZE 32
#define FPCSR_CE 0x00020000
#define ERR_OSCREATEVIMANAGER 49
#define FPCSR_CI 0x00001000
#define G_BL_1 2
#define FPCSR_CU 0x00002000
#define FPCSR_CV 0x00010000
#define FPCSR_CZ 0x00008000
#define RM_AA_ZB_OPA_DECAL(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gDma1p(pkt,c,s,l,p) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) | _SHIFTL((l), 0, 16)); _g->words.w1 = (unsigned int)(s); }
#define G_MW_NUMLIGHT 0x02
#define TLBCTXT_VPNMASK 0x7ffff0
#define PFS_SECTOR_SIZE (PFS_INODE_SIZE_PER_PAGE/PFS_SECTOR_PER_BANK)
#define gDPSetAlphaDither(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_ALPHADITHER, 2, mode)
#define gDma2p(pkt,c,adrs,len,idx,ofs) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c),24,8)|_SHIFTL(((len)-1)/8,19,5)| _SHIFTL((ofs)/8,8,8)|_SHIFTL((idx),0,8)); _g->words.w1 = (unsigned int)(adrs); }
#define BOOT_ADDRESS_ULTRA 0x80000400
#define G_LOADTLUT 0xf0
#define RM_AA_DEC_LINE(clk) AA_EN | IM_RD | CVG_DST_FULL | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define EXC_RADE EXC_CODE(4)
#define BUF_CTRL_SIZE ALIGNSZ
#define FPCSR_EI 0x00000080
#define AA_EN 0x8
#define FPCSR_EO 0x00000200
#define LBPARTICLE_OPCODE_SETFLAG 0xA1
#define gsDPTextureRectangleFlip(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), }, { _SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16), _SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16) }
#define FPCSR_EU 0x00000100
#define FPCSR_EZ 0x00000400
#define OS_EVENT_CPU_BREAK 10
#define IS_KUSEG(x) ((u32)(x) < K0BASE)
#define K0_TO_K1(x) ((u32)(x)|0xA0000000)
#define gmColCommandSetColor2S2(r,g,b,a) (GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))
#define FPCSR_FI 0x00000004
#define C0_CAUSE 13
#define SYVECTOR_INV_X (1 << nSYVectorInvX)
#define PI_DOMAIN2_REG PI_BSD_DOM2_LAT_REG
#define FPCSR_FS 0x01000000
#define FPCSR_FV 0x00000040
#define gSPSetLights6(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_6); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.l[5],6); gSPLight(pkt,&name.a,7); }
#define FPCSR_FZ 0x00000020
#define RTOD64 (180 / PI64)
#define MI_SET_RDRAM 0x2000
#define gsImmp21(c,p0,p1,dat) { _SHIFTL((c), 24, 8) | _SHIFTL((p0), 8, 16) | _SHIFTL((p1), 0, 8), (unsigned int) (dat) }
#define QUART_PI32 0.7853982F
#define ftMotionCommandSetAirJumpMax(val) (GC_FIELDSET(nFTMotionEventSetAirJumpMax, 26, 6) | GC_FIELDSET(val, 0, 26))
#define _ULTRA64_H_ 
#define G_RM_RA_OPA_SURF2 RM_RA_OPA_SURF(2)
#define _RAMROM_H 
#define gsDPSetPrimColor(m,l,r,g,b,a) { (_SHIFTL(G_SETPRIMCOLOR, 24, 8) | _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8)), (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)) }
#define ERR_ALSEQSYSEX 119
#define syGetSinCosUShort(sin,cos,angle,id) { id = SINTABLE_RAD_TO_ID(angle) & 0xFFF; sin = gSYSinTable[id & 0x7FF]; if (id & 0x800) { sin = -sin; } id += 0x400; cos = gSYSinTable[id & 0x7FF]; if (id & 0x800) { cos = -cos; } }
#define CONT_JOYPORT 0x0004
#define G_SETTIMG 0xfd
#define G_CK_NONE (0 << G_MDSFT_COMBKEY)
#define G_RM_AA_PCL_SURF2 RM_AA_PCL_SURF(2)
#define SP_HIDDEN 0x00000004
#define SP_STATUS_HALT 0x001
#define PI_DOM_PGS_OFS 0x08
#define GU_PARSEGBI_NONEST 2
#define GU_PARSERDP_DUMPONLY 32
#define OS_MESG_TYPE_LOOPBACK (OS_MESG_TYPE_BASE + 0)
#define LEO_BLOCK_MODE 1
#define MI_INTR_MASK_SI 0x02
#define gSPModifyVertex(pkt,vtx,where,val) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_MODIFYVTX,24,8)| _SHIFTL((where),16,8)|_SHIFTL((vtx)*2,0,16)); _g->words.w1 = (unsigned int)(val); }
#define AI_STATUS_FIFO_FULL 0x80000000
#define RAMROM_PRINTF_ADDR (RAMROM_MSG_ADDR + (4 * RAMROM_BUF_SIZE))
#define ALFailIf(condition,error) if (condition) { return; }
#define _gsDPLoadTextureBlock_4b(timg,tmem,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define SP_CLR_CPUSIGNAL SP_CLR_SIG4
#define G_TX_DXT_FRAC 11
#define SP_STATUS_YIELDED SP_STATUS_SIG1
#define gDPSetTexturePersp(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTPERSP, 1, type)
#define gSPVertex(pkt,v,n,v0) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_VTX,24,8)|_SHIFTL((n),12,8)|_SHIFTL((v0)+(n),1,7); _g->words.w1 = (unsigned int)(v); }
#define SP_STATUS_BROKE 0x002
#define gSPSprite2DBase(pkt,s) gDma1p(pkt, G_SPRITE2D_BASE, s, sizeof(uSprite), 0)
#define aobjEvent32SetValAfterBlock(flags_mask,d) aobjEvent32(nGCAnimEvent32SetValAfterBlock, (flags_mask), (d))
#define gsSPBranchLessZraw(dl,vtx,zval) { _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(dl), }, { _SHIFTL(G_BRANCH_Z,24,8)|_SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12), (unsigned int)(zval), }
#define ERR_OSSENDMESG 6
#define OS_VI_MPAL_LPN1 28
#define INT64_C(c) __INT64_C(c)
#define ERR_OSPISTARTDMA_RANGE 34
#define C_IWBINV 0x0
#define SP_PC_REG 0x04080000
#define FTPARTS_FLAG_TOGGLEFOG 0x80
#define CAUSE_CESHIFT 28
#define AOBJ_EXTFLAG_ENVCOLOR AOBJ_EXT_BIT(nGCAnimTrackEnvColor)
#define gsSPPopMatrixN(n,num) gsDma2p( G_POPMTX,(num)*64,64,2,0)
#define gDPSetCombine(pkt,muxs0,muxs1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(muxs0, 0, 24); _g->words.w1 = (unsigned int)(muxs1); }
#define LBPARTICLE_OPCODE_SETSIZELERP 0xA0
#define gmColCommandClearColorAll() GC_FIELDSET(nGMColEventClearColorAll, 26, 6)
#define RDRAM_RESET_MODE 0
#define FTCOMPUTER_COMMAND_BUTTON_L_RELEASE (nFTComputerCommandButtonLRelease << FTCOMPUTER_COMMAND_TIMER_BITS)
#define OS_MIN_STACKSIZE 72
#define G_MVO_L6 (8*24)
#define G_RM_AA_XLU_SURF RM_AA_XLU_SURF(1)
#define DEVICE_TYPE_INIT 7
#define OS_TASK_YIELDED 0x0001
#define CONFIG_IC_SHFT 9
#define LBPARTICLE_OPCODE_SETLIFERAND 0xA6
#define SP_TEXSHIFT 0x00000080
#define CAUSE_IPSHIFT 8
#define LBBACKUP_GROUND_MASK_ALL ( LBBACKUP_MASK_STAGE(nGRKindCastle) | LBBACKUP_MASK_STAGE(nGRKindSector) | LBBACKUP_MASK_STAGE(nGRKindJungle) | LBBACKUP_MASK_STAGE(nGRKindZebes) | LBBACKUP_MASK_STAGE(nGRKindHyrule) | LBBACKUP_MASK_STAGE(nGRKindYoster) | LBBACKUP_MASK_STAGE(nGRKindPupupu) | LBBACKUP_MASK_STAGE(nGRKindYamabuki) )
#define gDPSetCombineLERP(pkt,a0,b0,c0,d0,Aa0,Ab0,Ac0,Ad0,a1,b1,c1,d1,Aa1,Ab1,Ac1,Ad1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(GCCc0w0(G_CCMUX_ ##a0, G_CCMUX_ ##c0, G_ACMUX_ ##Aa0, G_ACMUX_ ##Ac0) | GCCc1w0(G_CCMUX_ ##a1, G_CCMUX_ ##c1), 0, 24); _g->words.w1 = (unsigned int)(GCCc0w1(G_CCMUX_ ##b0, G_CCMUX_ ##d0, G_ACMUX_ ##Ab0, G_ACMUX_ ##Ad0) | GCCc1w1(G_CCMUX_ ##b1, G_ACMUX_ ##Aa1, G_ACMUX_ ##Ac1, G_CCMUX_ ##d1, G_ACMUX_ ##Ab1, G_ACMUX_ ##Ad1)); }
#define VI_V_START_REG (VI_BASE_REG + 0x28)
#define gsSP1Triangle(v0,v1,v2,flag) { _SHIFTL(G_TRI1, 24, 8)|__gsSP1Triangle_w1f(v0, v1, v2, flag), 0 }
#define gDPLoadTextureBlockYuv(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT) -1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * 1)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_RM_AA_ZB_PCL_SURF RM_AA_ZB_PCL_SURF(1)
#define G_ZS_PIXEL (0 << G_MDSFT_ZSRCSEL)
#define G_CC_PRIMITIVE 0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE
#define GPACK_FILL16(w) (((w) << 16) | ((w) << 0))
#define _OBJFUNCTIONS_H_ 
#define LBPARTICLE_SET_ATTACH_ID(id) (LBPARTICLE_FLAG_ATTACH | ((id) << 0xC))
#define OS_IM_SW2 0x00000601
#define G_MWO_POINT_XYSCREEN 0x18
#define NullUcodeInfo { NULL, NULL }
#define UINT8_C(c) __UINT8_C(c)
#define G_MWO_MATRIX_XZ_XW_F 0x24
#define gmColCommandSetLight(angle1,angle2) (GC_FIELDSET(nGMColEventSetLight, 26, 6) | GC_FIELDSET(angle1, 13, 13) | GC_FIELDSET(angle2, 0, 13))
#define G_MWO_MATRIX_XZ_XW_I 0x04
#define gSPFogPosition(pkt,min,max) gMoveWd(pkt, G_MW_FOG, G_MWO_FOG, (_SHIFTL((128000/((max)-(min))),16,16) | _SHIFTL(((500-(min))*256/((max)-(min))),0,16)))
#define G_NOOP 0x00
#define PI_DOM1_ADDR3 0x1FD00000
#define _gsDPLoadTextureBlock(timg,tmem,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define SP_CLR_SIG0 0x00200
#define SP_CLR_SIG1 0x00800
#define SP_CLR_SIG2 0x02000
#define SP_CLR_SIG3 0x08000
#define SP_CLR_SIG4 0x20000
#define SP_CLR_SIG6 0x200000
#define SP_CLR_SIG7 0x800000
#define ftMotionCommandResetDamageCollPartAll() GC_FIELDSET(nFTMotionEventResetDamageCollPartAll, 26, 6)
#define FTPARTS_JOINT_NUM_MAX 37
#define G_IM_SIZ_16b_INCR 0
#define ERR_OSCREATETHREAD_PRI 2
#define PI_STATUS_DMA_BUSY 0x01
#define SCLEANEXCL 0x00001000
#define RMON_DBG_BUF_SIZE 2048
#define NUMLIGHTS_0 1
#define NUMLIGHTS_1 1
#define NUMLIGHTS_2 2
#define NUMLIGHTS_3 3
#define NUMLIGHTS_5 5
#define NUMLIGHTS_6 6
#define NUMLIGHTS_7 7
#define PI_DOM1_ADDR2 0x10000000
#define R_TRIG CONT_R
#define gsDPLoadTextureBlock(timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define COBJ_FLAG_DLBUFFERS (1 << 2)
#define G_RDP_TRI_TXTR_MASK 0x02
#define gDPSetBlendMask(pkt,mask) gDPNoOp(pkt)
#define PI_DOM1_ADDR1 0x06000000
#define SP_CLOUD 0x00001000
#define G_RM_AA_ZB_XLU_LINE RM_AA_ZB_XLU_LINE(1)
#define ERR_OSSPTASKLOAD_OUTSIZE 59
#define _OBJ_H_ 
#define G_TT_NONE (0 << G_MDSFT_TEXTLUT)
#define ERR_OSVISWAPBUFFER_VIMGR 48
#define gDPSetMaskImage(pkt,i) gDPSetDepthImage(pkt, i)
#define G_MW_PERSPNORM 0x0e
#define _G_CC_TWOCOLORTEX PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define G_RM_VISCVG2 RM_VISCVG(2)
#define G_RM_AA_ZB_SUB_SURF2 RM_AA_ZB_SUB_SURF(2)
#define LBBACKUP_ERROR_VSBATTLECASTLE (1 << nLBBackupErrorVSBattleCastle)
#define gmRumbleEventCastAdvance(event,type) ((type*)(event)++)
#define AI_MPAL_MIN_FREQ 3000
#define gDPSetAlphaCompare(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 2, type)
#define K1_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define PFS_MAX_BANKS 62
#define G_MWO_CLIP_RPX 0x14
#define K0SIZE 0x20000000
#define FTSTAT_OPENING1_START 0x1000F
#define gDPLoadMultiBlock_4b(pkt,timg,tmem,rtile,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_CC_HILITERGB PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, SHADE
#define RM_AA_ZB_PCL_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define KUBASE 0
#define OS_VI_NTSC_LAN1 2
#define C0_LLADDR 17
#define PFS_ID_3AREA 6
#define G_CCMUX_CENTER 6
#define OS_EVENT_THREADSTATUS 13
#define VI_CTRL_PIXEL_ADV_MASK 0x0F000
#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)
#define G_RDP_ADDR_FIXUP 3
#define COMBINE_FRACTIONAL(a,b) (((a) << 16) | ((b)&0xffff))
#define PFS_INODE_DIST_MAP (PFS_BANK_LAPPED_BY * PFS_SECTOR_PER_BANK)
#define G_RM_AA_SUB_SURF2 RM_AA_SUB_SURF(2)
#define FTKEY_EVENT_STICK(x,y,t) FTKEY_EVENT_INSTRUCTION(nFTKeyEventStick, t), (((((x) << 8) & 0xFF00) | (((y) << 0) & 0x00FF)) & U16_MAX)
#define GMSTAFFROLL_COMMA_PARA_FONT_INDEX 0x41
#define RM_AA_ZB_SUB_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define DPC_STATUS_REG (DPC_BASE_REG + 0x0C)
#define G_TX_NOMIRROR 0
#define SI_STATUS_REG (SI_BASE_REG + 0x18)
#define G_MWO_CLIP_RNY 0x0c
#define G_OFF (0)
#define ERR_OSVISETEVENT 46
#define G_BL_A_FOG 1
#define FTCATCHKIND_MASK_CAPTAINSPECIALHI (1 << nFTCatchKindCaptainSpecialHi)
#define G_MDSFT_RGBDITHER 6
#define LBPARTICLE_BANKS_NUM_MAX 8
#define SP_CLR_SIG5 0x80000
#define MI_INTR_MASK_CLR_AI 0x0010
#define RAMROM_RMON_READ_ADDR (RAMROM_MSG_ADDR + (2 * RAMROM_BUF_SIZE))
#define RDRAM_1_CONFIG 0x00400
#define OS_VI_MPAL_LAF2 35
#define FTSTATUS_PRESERVE_NONE (0)
#define G_CV_K0 175
#define AI_PAL_MAX_FREQ 376000
#define G_CV_K2 -89
#define G_CV_K3 222
#define G_CV_K5 42
#define FTANIM_FLAG_SHIELDPOSE 0x00000002
#define OS_TASK_DP_WAIT 0x0002
#define RAMROM_LOG_ADDR (RAMROM_MSG_ADDR + (5 * RAMROM_BUF_SIZE))
#define G_AD_NOTPATTERN (1 << G_MDSFT_ALPHADITHER)
#define RM_AA_ZB_XLU_LINE(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_MDSFT_CYCLETYPE 20
#define AL_DEFAULT_VOICE 0
#define gsDPSetHilite2Tile(tile,hilite,width,height) gsDPSetTileSize(tile, (hilite)->h.x2 & 0xfff, (hilite)->h.y2 & 0xfff, ((((width)-1)*4)+(hilite)->h.x2) & 0xfff, ((((height)-1)*4)+(hilite)->h.y2) & 0xfff)
#define gSPGeometryMode(pkt,c,s) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_GEOMETRYMODE,24,8)|_SHIFTL(~(u32)(c),0,24); _g->words.w1 = (u32)(s); }
#define __ULTRAERROR_H__ 
#define G_CC_MODULATEIA_PRIM TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0
#define G_CULL_BACK 0x00000400
#define ERR_OSSPTASKLOAD_DRAM 57
#define G_CC_CHROMA_KEY2 TEXEL0, CENTER, SCALE, 0, 0, 0, 0, 0
#define AL_PHASE_RELEASE 3
#define _G_CC_BLENDPEDECALA ENVIRONMENT, PRIMITIVE, TEXEL0, PRIMITIVE, 0, 0, 0, TEXEL0
#define FTANIM_FLAG_TRANSLATE_SCALES 0x00000004
#define G_MOVEMEM 0xdc
#define G_TEXTURE_IMAGE_FRAC 2
#define MI_INTR_MASK_CLR_DP 0x0400
#define gsSPClearGeometryMode(word) gsSPGeometryMode((word),0)
#define gDPWord(pkt,wordhi,wordlo) { Gfx *_g = (Gfx *)(pkt); gImmp1(pkt, G_RDPHALF_1, (unsigned int)(wordhi)); gImmp1(pkt, G_RDPHALF_2, (unsigned int)(wordlo)); }
#define NUM_DL(nb) ((nb)*DL_BM_OVERHEAD +DL_SPRITE_OVERHEAD)
#define G_CC_DECALRGB 0, 0, 0, TEXEL0, 0, 0, 0, SHADE
#define HALF_PI32 1.5707964F
#define DPC_CLR_PIPE_CTR 0x0080
#define VI_DRAM_ADDR_REG VI_ORIGIN_REG
#define gsDPParam(cmd,param) { _SHIFTL(cmd, 24, 8), (param) }
#define G_CC_MODULATEI2 COMBINED, 0, SHADE, 0, 0, 0, 0, SHADE
#define ZMODE_INTER 0x400
#define MOBJ_FLAG_TEXTURE (1 << 7)
#define CONT_UP 0x0800
#define OS_IM_SI 0x00020401
#define LBPARTICLE_OPCODE_MAKESCRIPT 0xA4
#define FTSTATUS_PRESERVE_SHUFFLETIME (1 << nFTStatusPreserveShuffleTime)
#define RDRAM_END RDRAM_1_END
#define BOOT_ADDRESS_COSIM 0x80002000
#define ERR_OSVIGETCURRENTMODE 36
#define RDRAM_0_END 0x001FFFFF
#define TLBLO_CACHSHIFT 3
#define PI_DOMAIN1_REG PI_BSD_DOM1_LAT_REG
#define G_RM_AA_SUB_TERR RM_AA_SUB_TERR(1)
#define G_CCMUX_COMBINED_ALPHA 7
#define gsSPTextureL(s,t,level,xparam,tile,on) { (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL((xparam),16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)), (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)) }
#define G_CC_MODULATERGBA2 G_CC_MODULATEIA2
#define RM_AA_XLU_SURF(clk) AA_EN | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define PFS_BANK_LAPPED_BY 8
#define OS_VI_BIT_16PIXEL 0x0040
#define OS_YIELD_DATA_SIZE 0xc00
#define gmColCommandBlendColor2(frames,r,g,b,a) gmColCommandBlendColor2S1(frames), gmColCommandBlendColor2S2(r, g, b, a)
#define G_MWO_MATRIX_ZX_ZY_F 0x30
#define gsDPSetScissorFrac(mode,ulx,uly,lrx,lry) { _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((ulx)), 12, 12) | _SHIFTL((int)((uly)), 0, 12), _SHIFTL(mode, 24, 2) | _SHIFTL((int)(lrx), 12, 12) | _SHIFTL((int)(lry), 0, 12) }
#define G_MWO_MATRIX_ZX_ZY_I 0x10
#define gsDPSetTextureConvert(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTCONV, 3, type)
#define G_RM_TEX_EDGE RM_TEX_EDGE(1)
#define G_TX_NOMASK 0
#define G_CC_MODULATEI_PRIM TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE
#define G_RM_PCL_SURF2 RM_PCL_SURF(2)
#define _LBFADE_H_ 
#define OS_CYCLES_TO_USEC(c) (((u64)(c) * (1000000LL / 15625LL)) / (OS_CPU_COUNTER / 15625LL))
#define G_MWO_aLIGHT_1 0x00
#define UINTMAX_MAX __UINTMAX_MAX__
#define TLBLO_CACHMASK 0x38
#define G_AC_THRESHOLD (1 << G_MDSFT_ALPHACOMPARE)
#define RDRAM_REF_ROW_REG (RDRAM_BASE_REG + 0x14)
#define RDRAM_1_DEVICE_ID 1
#define GPACK_ZDZ(z,dz) ((z) << 2 | (dz))
#define gsDma2p(c,adrs,len,idx,ofs) { (_SHIFTL((c),24,8)|_SHIFTL(((len)-1)/8,19,5)| _SHIFTL((ofs)/8,8,8)|_SHIFTL((idx),0,8)), (unsigned int)(adrs) }
#define G_RM_RA_ZB_OPA_SURF2 RM_RA_ZB_OPA_SURF(2)
#define CONT_TYPE_MOUSE 0x0002
#define RM_ZB_XLU_SURF(clk) Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define G_IM_FMT_YUV 1
#define AOBJ_EXTFLAG_LIGHT1COLOR AOBJ_EXT_BIT(nGCAnimTrackLight1Color)
#define ERR_OSWRITEHOST_SIZE 73
#define OS_K0_TO_PHYSICAL(x) (u32)(((char*)(x)-0x80000000))
#define G_LOAD_UCODE 0xdd
#define OS_VI_MPAL_LAN1 30
#define OS_VI_MPAL_LAN2 34
#define gmColCommandLoopEnd() GC_FIELDSET(nGMColEventLoopEnd, 26, 6)
#define VI_CTRL_ANTIALIAS_MODE_0 0x00000
#define VI_CTRL_ANTIALIAS_MODE_1 0x00100
#define VI_CTRL_ANTIALIAS_MODE_2 0x00200
#define VI_CTRL_ANTIALIAS_MODE_3 0x00300
#define ECC_VEC (K0BASE+0x100)
#define GC_COMMON_MAX_LINKS 33
#define RDRAM_LENGTH (2 * 512 * 2048)
#define gDPSetOtherMode(pkt,mode0,mode1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPSETOTHERMODE,24,8)|_SHIFTL(mode0,0,24); _g->words.w1 = (unsigned int)(mode1); }
#define SI_STATUS_RD_BUSY 0x0002
#define gDPLoadTextureTile_4b(pkt,timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define G_CULL_FRONT 0x00000200
#define DEVICE_TYPE_64DD 2
#define ERR_OSPISTARTDMA_PRI 29
#define VI_X_SCALE_REG (VI_BASE_REG + 0x30)
#define G_MWO_aLIGHT_7 0x90
#define gDPSetTextureLUT(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, type)
#define G_SETPRIMDEPTH 0xee
#define G_MW_LIGHTCOL 0x0a
#define gDPPipelineMode(pkt,mode) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, mode)
#define LBPARTICLE_MASK_GENLINK(id) (((id) + 1) * 8)
#define _GCC_WRAP_STDINT_H 
#define G_RM_AA_ZB_TEX_EDGE2 RM_AA_ZB_TEX_EDGE(2)
#define ftMotionCommandMakeAttackCollScaledS3(oy,oz) (GC_FIELDSET(oy, 16, 16) | GC_FIELDSET(oz, 0, 16))
#define G_MW_MATRIX 0x00
#define G_BL_CLR_MEM 1
#define CAMERA_FLAG_BOUND_TOP (1 << nGMCameraBoundTop)
#define DCACHE_LINEMASK (DCACHE_LINESIZE-1)
#define LBPARTICLE_OPCODE_DITHER 0xB4
#define G_RM_ZB_PCL_SURF RM_ZB_PCL_SURF(1)
#define FTCOMPUTER_EVENT_INSTRUCTION(k,t) ( ((((k) << FTCOMPUTER_COMMAND_TIMER_BITS) & FTCOMPUTER_COMMAND_OPCODE_MASK) | ((t) & FTCOMPUTER_COMMAND_TIMER_MASK)) & U8_MAX )
#define OS_LOG_FLOAT(x) (*(int*)&(x))
#define RAMROM_SIZE (0x1000000)
#define OS_MESG_TYPE_VRETRACE (OS_MESG_TYPE_BASE + 3)
#define WATCHLO_WTRAP 0x00000001
#define G_IM_SIZ_16b 2
#define C0_CACHE_ERR 27
#define TLBHI_VPN2SHIFT 13
#define EEPROM_BLOCK_SIZE 8
#define RDRAM_ADDR_SELECT_REG (RDRAM_BASE_REG + 0x20)
#define RAMROM_FONTDATA_SIZE 1152
#define gDPSetCycleType(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_CYCLETYPE, 2, type)
#define AL_HEAP_INIT 0
#define SP_STATUS_SIG0 0x080
#define SP_STATUS_SIG1 0x100
#define SP_STATUS_SIG2 0x200
#define SP_STATUS_SIG3 0x400
#define SP_STATUS_SIG4 0x800
#define SP_STATUS_SIG5 0x1000
#define SP_STATUS_SIG7 0x4000
#define CONT_EEP16K 0x4000
#define OS_EVENT_RDB_DBG_DONE 20
#define ftMotionCommandSetAttackCollOffsetS1(id,ox) (GC_FIELDSET(nFTMotionEventSetAttackCollOffset, 26, 6) | GC_FIELDSET(id, 23, 3) | GC_FIELDSET(ox, 7, 16))
#define ftMotionCommandSetAttackCollOffsetS2(oy,oz) (GC_FIELDSET(oy, 16, 16) | GC_FIELDSET(oz, 0, 16))
#define gsSPBranchLessZrg(dl,vtx,zval,near,far,flag,zmin,zmax) { _SHIFTL(G_RDPHALF_1,24,8), (unsigned int)(dl), }, { _SHIFTL(G_BRANCH_Z,24,8)|_SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12), G_DEPTOZSrg(zval, near, far, flag, zmin, zmax), }
#define G_CC_REFLECTRGB ENVIRONMENT, 0, TEXEL0, SHADE, 0, 0, 0, SHADE
#define gsSPSegment(segment,base) gsMoveWd( G_MW_SEGMENT, (segment)*4, base)
#define ftMotionCommandGoto(addr) ftMotionCommandGotoS1(), ftMotionCommandGotoS2(addr)
#define aobjEvent32JumpCmd(flags_val,payload_val) aobjEvent32(nGCAnimEvent32Jump, (flags_val), (payload_val))
#define AI_STATUS_DMA_BUSY 0x40000000
#define PFS_ERR_NOPACK 1
#define gmColCommandParallelS2(addr) ((uintptr_t)addr)
#define gSPEndDisplayList(pkt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_ENDDL, 24, 8); _g->words.w1 = 0; }
#define VI_CTRL_PIXEL_ADV_1 0x01000
#define VI_CTRL_PIXEL_ADV_3 0x03000
#define DO_PRAGMA(x) _Pragma(#x)
#define OS_IM_SW1 0x00000501
#define SEGMENT_NUMBER(a) (((unsigned int)(a) << 4) >> 28)
#define A_RATE 0x00
#define GU_PARSEGBI_FLTMTX 4
#define FTPARTS_FLAG_NOFOG 0x40
#define ftMotionCommandMakeAttackCollScaledS5(sd,fl,fk,kbb) (GC_FIELDSET(sd, 24, 8) | GC_FIELDSET(fl, 21, 3) | GC_FIELDSET(fk, 17, 4) | GC_FIELDSET(kbb, 7, 10))
#define AL_FRAME_INIT -1
#define ERR_OSCREATEREGION_ALIGN 50
#define aobjEvent32WaitRaw(flags_val,payload_val) aobjEvent32(nGCAnimEvent32Wait, (flags_val), (payload_val))
#define osSpTaskStart(tp) { osSpTaskLoad((tp)); osSpTaskStartGo((tp)); }
#define G_TEXRECTFLIP 0xe5
#define NOTE_OFF_ERR_MASK 0x02
#define MI_INTR_MASK_CLR_PI 0x0100
#define ALFlagFailIf(condition,flag,error) if (condition) { return; }
#define RAMROM_MSG_HDR_SIZE (3 * sizeof(long))
#define AI_PAL_MIN_FREQ 3050
#define RM_AA_TEX_EDGE(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define gDPLoadTLUT_pal256(pkt,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, 256, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, 255); gDPPipeSync(pkt) }
#define aSetVolume(pkt,f,v,t,r) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = (_SHIFTL(A_SETVOL, 24, 8) | _SHIFTL(f, 16, 16) | _SHIFTL(v, 0, 16)); _a->words.w1 = _SHIFTL(t, 16, 16) | _SHIFTL(r, 0, 16); }
#define ERR_OSPISTARTDMA_SIZE 33
#define AL_STOPPED 0
#define PFS_ID_2AREA 4
#define _UCODE_H_ 
#define ftMotionCommandMakeAttackCollScaledS1(aid,gid,jid,dmg,reb,ele) (GC_FIELDSET(nFTMotionEventMakeAttackCollScaled, 26, 6) | GC_FIELDSET(aid, 23, 3) | GC_FIELDSET(gid, 20, 3) | GC_FIELDSET(jid, 13, 7) | GC_FIELDSET(dmg, 5, 8) | GC_FIELDSET(reb, 4, 1) | GC_FIELDSET(ele, 0, 4))
#define OS_VI_BIT_ANTIALIAS 0x0010
#define ftMotionCommandMakeAttackCollScaledS4(ang,kbs,kbw,ga) (GC_FIELDSET(ang, 22, 10) | GC_FIELDSET(kbs, 12, 10) | GC_FIELDSET(kbw, 2, 10) | GC_FIELDSET(ga, 0, 2))
#define FTCOMPUTER_COMMAND_OPCODE_MASK (0xF0)
#define PFS_ID_BROKEN 0x4
#define RAND(x) (guRandom() % x)
#define OS_VI_NTSC_LPF1 1
#define RDRAM_CONFIG_REG (RDRAM_BASE_REG + 0x00)
#define LBPARTICLE_OPCODE_MASKS 0xAF
#define MI_MODE_INIT 0x0080
#define G_CD_NOISE (2 << G_MDSFT_RGBDITHER)
#define IS_RDRAM(x) ((unsigned)(x) >= RDRAM_START && (unsigned)(x) < RDRAM_END)
#define ERR_ALHEAPCORRUPT 126
#define UPDATE_INTERVAL (60)
#define SYVECTOR_AXIS_X (1 << nSYVectorAxisX)
#define LBPARTICLE_OPCODE_MASKST 0xB1
#define gSPTexture(pkt,s,t,level,tile,on) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL(BOWTIE_VAL,16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)); _g->words.w1 = (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)); }
#define GMCOMMON_PERCENT_DAMAGE_MAX 999
#define OS_VI_GAMMA_OFF 0x0002
#define NewUcodeInfo(ucode) { (u64*)ucode ##TextStart, (u64*)ucode ##DataStart }
#define SYVECTOR_AXIS_Z (1 << nSYVectorAxisZ)
#define CAUSE_SW1 0x00000100
#define CAUSE_SW2 0x00000200
#define MI_INTR_MASK_CLR_SP 0x0001
#define FTCOMPUTER_COMMAND_STICK_Y_VAR (nFTComputerCommandStickYVar << FTCOMPUTER_COMMAND_TIMER_BITS)
#define aMix(pkt,f,g,i,o) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = (_SHIFTL(A_MIXER, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); _a->words.w1 = _SHIFTL(i, 16, 16) | _SHIFTL(o, 0, 16); }
#define NO_VOICE_ERR_MASK 0x04
#define PI_STATUS_CLR_INTR 0x02
#define RTOD32 ((float)RTOD64)
#define VI_Y_SCALE_REG (VI_BASE_REG + 0x34)
#define FTCOMPUTER_COMMAND_BUTTON_L_PRESS (nFTComputerCommandButtonLPress << FTCOMPUTER_COMMAND_TIMER_BITS)
#define C_FILL 0x14
#define _OBJDRAW_H_ 
#define gsDPSetHilite1Tile(tile,hilite,width,height) gsDPSetTileSize(tile, (hilite)->h.x1 & 0xfff, (hilite)->h.y1 & 0xfff, ((((width)-1)*4)+(hilite)->h.x1) & 0xfff, ((((height)-1)*4)+(hilite)->h.y1) & 0xfff)
#define G_RM_ZB_OPA_SURF2 RM_ZB_OPA_SURF(2)
#define OS_IM_ALL 0x003fff01
#define OS_RG_ALIGN_16B 16
#define OS_EVENT_PRENMI 14
#define F3DEX_GBI_2 1
#define gsDPLoadTextureBlock_4bS(timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1,0), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define AL_CMIDI_CNTRL_LOOPEND 103
#define ERR_OSSETTIMER 76
#define I_SEC_TO_TICS(q) ((int)((q)*TIME_SEC))
#define OS_MESG_TYPE_COUNTER (OS_MESG_TYPE_BASE + 4)
#define LBBACKUP_ERROR_HALFSTICKRANGE (1 << nLBBackupErrorHalfStickRange)
#define G_MWO_bLIGHT_1 0x04
#define G_MWO_bLIGHT_3 0x34
#define G_MWO_bLIGHT_4 0x4c
#define G_MWO_bLIGHT_6 0x7c
#define G_MWO_bLIGHT_8 0xac
#define INT_LEAST16_MIN (-INT_LEAST16_MAX - 1)
#define ERR_OSFREE_REGION 53
#define gsDPSetRenderMode(c0,c1) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_RENDERMODE, 29, (c0) | (c1))
#define SP_SET_SIG0 0x00400
#define gDPSetTileSize(pkt,t,uls,ult,lrs,lrt) gDPLoadTileGeneric(pkt, G_SETTILESIZE, t, uls, ult, lrs, lrt)
#define ftMotionCommandSetThrowS1() GC_FIELDSET(nFTMotionEventSetThrow, 26, 6)
#define AL_HEAP_DEBUG 1
#define gsSP1Quadrangle(v0,v1,v2,v3,flag) { (_SHIFTL(G_QUAD, 24, 8)| __gsSP1Quadrangle_w1f(v0, v1, v2, v3, flag)), __gsSP1Quadrangle_w2f(v0, v1, v2, v3, flag) }
#define U32_MAX 0xFFFFFFFF
#define MI_INTR_MASK_CLR_VI 0x0040
#define gSPLine3D(pkt,v0,v1,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_LINE3D, 24, 8)| __gsSPLine3D_w1f(v0, v1, 0, flag); _g->words.w1 = 0; }
#define UT_VEC K0BASE
#define gmColEventCast(event,type) ((type*)(event))
#define UINT64_C(c) __UINT64_C(c)
#define gDPTextureRectangleFlip(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); if (pkt); _g->words.w0 = (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); _g ++; _g->words.w0 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); _g->words.w1 = (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)); }
#define gsSPBranchList(dl) gsDma1p( G_DL,dl,0,G_DL_NOPUSH)
#define FTMOTION_SCRIPT_NULL 0x80000000
#define G_MW_SEGMENT 0x06
#define AI_MPAL_MAX_FREQ 368000
#define GU_PARSEGBI_ROWMAJOR 1
#define ftMotionCommandEffectS2(ox,oy) (GC_FIELDSET(ox, 16, 16) | GC_FIELDSET(oy, 0, 16))
#define SP_SET_SIG5 0x100000
#define TLBHI_PIDMASK 0xff
#define LBPARTICLE_OPCODE_ENVCOLOR 0xAD
#define WINT_MAX __WINT_MAX__
#define G_MDSFT_ZSRCSEL 2
#define PDIRTYEXCL 0x00C0
#define FTCOMPUTER_COMMAND_STICK_X_TILT (nFTComputerCommandStickX << FTCOMPUTER_COMMAND_TIMER_BITS)
#define UINTPTR_MAX __UINTPTR_MAX__
#define ftMotionCommandMakeAttackCollS5(sd,fl,fk,kbb) (GC_FIELDSET(sd, 24, 8) | GC_FIELDSET(fl, 21, 3) | GC_FIELDSET(fk, 17, 4) | GC_FIELDSET(kbb, 7, 10))
#define RM_CLD_SURF(clk) IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define SI_STATUS_INTERRUPT 0x1000
#define LIGHT_1 1
#define LIGHT_2 2
#define LIGHT_4 4
#define LIGHT_7 7
#define G_MDSFT_TEXTDETAIL 17
#define AOBJ_FLAG_ROTXYZ (AOBJ_FLAG_ROTX | AOBJ_FLAG_ROTY | AOBJ_FLAG_ROTZ)
#define MAX_BUFCOUNT 0x8000
#define OS_TASK_USR1 0x0020
#define M2CTX 1
#define AL_CMIDI_CNTRL_LOOPSTART 102
#define gsDPLoadMultiBlockS(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt,shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, 0 ), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define ERR_OSVIGETNEXTFRAMEBUFFER 38
#define GIO_CART_INTR_REG (GIO_BASE_REG + 0x800)
#define G_RM_AA_ZB_OPA_DECAL2 RM_AA_ZB_OPA_DECAL(2)
#define LIGHT_3 3
#define RAMROM_BOOTSTRAP_OFFSET 0x40
#define G_RDP_TRI_ZBUFF_MASK 0x01
#define UINT_LEAST16_MAX __UINT_LEAST16_MAX__
#define ICACHE_SIZE 0x4000
#define OS_VI_NTSC_LPN2 4
#define gmColCommandClearLight() GC_FIELDSET(nGMColEventClearLight, 26, 6)
#define AOBJ_FLAG_TRAX AOBJ_JOINT_BIT(nGCAnimTrackTraX)
#define AOBJ_FLAG_TRAZ AOBJ_JOINT_BIT(nGCAnimTrackTraZ)
#define ERR_ALSEQNOTMIDI0 115
#define _gDPLoadTextureBlock(pkt,timg,tmem,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define LIGHT_8 8
#define G_TF_AVERAGE (3 << G_MDSFT_TEXTFILT)
#define OS_FLAG_CPU_BREAK 1
#define alSeqpGetFXMix alSeqpGetChlFXMix
#define AOBJ_MATFLAG_TEXID AOBJ_MAT_BIT(nGCAnimTrackTextureIDCurrent)
#define G_SPNOOP 0xe0
#define G_MDSFT_PIPELINE 23
#define PFS_CORRUPTED 0x2
#define LIGHT_6 6
#define gDPLoadTileGeneric(pkt,c,tile,uls,ult,lrs,lrt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12); _g->words.w1 = _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12); }
#define PFS_ERR_CONTRFAIL CONT_OVERRUN_ERROR
#define GU_PARSEGBI_DUMPONLY 32
#define gSP1Triangle(pkt,v0,v1,v2,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_TRI1, 24, 8)| __gsSP1Triangle_w1f(v0, v1, v2, flag); _g->words.w1 = 0; }
#define UINT32_MAX __UINT32_MAX__
#define G_MTX_PROJECTION 0x04
#define gmColCommandSetColor2S1() GC_FIELDSET(nGMColEventSetColor2, 26, 6)
#define SP_IBIST_DONE 0x04
#define ftMotionCommandSetTexturePartID(flag) (GC_FIELDSET(nFTMotionEventSetTexturePartID, 26, 6) | GC_FIELDSET(flag, 0, 26))
#define RDRAM_0_START 0x00000000
#define LBBACKUP_UNLOCK_MASK_NESS (1 << nLBBackupUnlockNess)
#define gSPNoOp(pkt) gDma0p(pkt, G_SPNOOP, 0, 0)
#define ftMotionCommandPlaySmashVoice(id) (GC_FIELDSET(nFTMotionEventPlaySmashVoice, 26, 6) | GC_FIELDSET(id, 0, 26))
#define C0_CONFIG 16
#define gImmp2(pkt,c,p0,p1) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = _SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8); }
#define gImmp3(pkt,c,p0,p1,p2) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = (_SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8) | _SHIFTL((p2), 0, 8)); }
#define LBBACKUP_UNLOCK_MASK_ITEMSWITCH (1 << nLBBackupUnlockItemSwitch)
#define AOBJ_CAMFLAG_FOVY AOBJ_CAM_BIT(nGCAnimTrackFovY)
#define G_AC_NONE (0 << G_MDSFT_ALPHACOMPARE)
#define OS_VI_PAL_HAF1 25
#define OS_VI_MPAL_LPF1 29
#define OS_VI_MPAL_LPF2 33
#define FTCOMPUTER_COMMAND_BUTTON_B_PRESS (nFTComputerCommandButtonBPress << FTCOMPUTER_COMMAND_TIMER_BITS)
#define U_CBUTTONS CONT_E
#define G_CCMUX_SHADE 4
#define PFS_GBPAK_INITIALIZED 0x10
#define gDPSetTextureImage(pkt,f,s,w,i) gSetImage(pkt, G_SETTIMG, f, s, w, i)
#define G_MVO_L0 (2*24)
#define NUMLIGHTS_4 4
#define gDPSetScissor(pkt,mode,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((float)(ulx)*4.0F), 12, 12) | _SHIFTL((int)((float)(uly)*4.0F), 0, 12); _g->words.w1 = _SHIFTL(mode, 24, 2) | _SHIFTL((int)((float)(lrx)*4.0F), 12, 12) | _SHIFTL((int)((float)(lry)*4.0F), 0, 12); }
#define G_RM_AA_ZB_OPA_INTER2 RM_AA_ZB_OPA_INTER(2)
#define SP_RD_LEN_REG (SP_BASE_REG + 0x08)
#define CACHERR_SIDX_MASK 0x003ffff8
#define SADDRMASK 0xFFFFE000
#define gmColCommandSubroutineS2(addr) ((uintptr_t)addr)
#define G_RDP_TRI_SHADE_MASK 0x04
#define OS_READ 0
#define WATCHHI_VALIDMASK 0x0000000f
#define SP_OVERLAP 0x00000040
#define A_NOAUX 0x00
#define GMSTAFFROLL_QUESTION_MARK_PARA_FONT_INDEX 0x46
#define LIGHT_5 5
#define AI_CONTROL_DMA_ON 0x01
#define ERR_OSCREATETHREAD_SP 1
#define RI_REFRESH_REG (RI_BASE_REG + 0x10)
#define gsImmp1(c,p0) { _SHIFTL((c), 24, 8), (unsigned int)(p0) }
#define AOBJ_CAMFLAG_ATX AOBJ_CAM_BIT(nGCAnimTrackAtX)
#define COBJ_FLAG_GFXEND (1 << 4)
#define U_JPAD CONT_UP
#define PI_BSD_DOM1_PWD_REG (PI_BASE_REG + 0x18)
#define VI_CTRL_GAMMA_DITHER_ON 0x00004
#define ERR_OSSETEVENTMESG 9
#define G_RM_AA_OPA_SURF2 RM_AA_OPA_SURF(2)
#define SP_CLR_RSPSIGNAL SP_CLR_SIG3
#define WINT_MIN __WINT_MIN__
#define gSPSetGeometryMode(pkt,word) gSPGeometryMode((pkt),0,(word))
#define gSPDmaRead(pkt,dmem,dram,size) gSPDma_io((pkt),0,(dmem),(dram),(size))
#define LBBACKUP_CHARACTER_MASK_UNLOCK ( LBBACKUP_MASK_FIGHTER(nFTKindNess) | LBBACKUP_MASK_FIGHTER(nFTKindPurin) | LBBACKUP_MASK_FIGHTER(nFTKindCaptain) | LBBACKUP_MASK_FIGHTER(nFTKindLuigi) )
#define DPC_STATUS_CBUF_READY 0x080
#define RM_OPA_SURF(clk) CVG_DST_CLAMP | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define G_IM_SIZ_8b_SHIFT 1
#define EXC_DBE EXC_CODE(7)
#define G_CCMUX_TEXEL0 1
#define G_CCMUX_TEXEL1 2
#define A_INTERLEAVE 13
#define G_ACMUX_ENVIRONMENT 5
#define ftMotionCommandHideModelPartAll() GC_FIELDSET(nFTMotionEventHideModelPartAll, 26, 6)
#define F_CLC_RTOD32(x) ((float)(((x) / PI32) * 180.0F))
#define G_MWO_MATRIX_WZ_WW_F 0x3c
#define G_MWO_MATRIX_WZ_WW_I 0x1c
#define SINTABLE_RAD_TO_ID(x) ((s32)((x) * ((f32)ARRAY_COUNT(gSYSinTable) / PI32)))
#define gSPMvpRecalc(pkt) gImmp21(pkt, G_SPECIAL_1, 0, 1, 0)
#define PFS_ERR_INVALID 5
#define G_CCMUX_LOD_FRACTION 13
#define AOBJ_EXTFLAG_LIGHT2COLOR AOBJ_EXT_BIT(nGCAnimTrackLight2Color)
#define Z_UPD 0x20
#define AL_CMIDI_LOOPEND_CODE 0x2D
#define G_TRI_TXTR_ZBUFF 0xcb
#define OS_EVENT_RDB_READ_DONE 15
#define RDRAM_GLOBAL_CONFIG 0x80000
#define SI_DRAM_ADDR_REG (SI_BASE_REG + 0x00)
#define gmColCommandEffect(joint,effect_id,flag,off_x,off_y,off_z,rng_x,rng_y,rng_z) gmColCommandEffectS1(joint, effect_id, flag), gmColCommandEffectS2(off_x, off_y), gmColCommandEffectS3(off_z, rng_x), gmColCommandEffectS4(rng_y, rng_z)
#define MI_INTR_AI 0x04
#define G_RM_XLU_SURF RM_XLU_SURF(1)
#define gSPScisTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(MAX((s16)(xh),0), 12, 12) | _SHIFTL(MAX((s16)(yh),0), 0, 12)); _g->words.w1 = (_SHIFTL((tile), 24, 3) | _SHIFTL(MAX((s16)(xl),0), 12, 12) | _SHIFTL(MAX((s16)(yl),0), 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(((s) - (((s16)(xl) < 0) ? (((s16)(dsdx) < 0) ? (MAX((((s16)(xl)*(s16)(dsdx))>>7),0)) : (MIN((((s16)(xl)*(s16)(dsdx))>>7),0))) : 0)), 16, 16) | _SHIFTL(((t) - (((s32)(yl) < 0) ? (((s16)(dtdy) < 0) ? (MAX((((s16)(yl)*(s16)(dtdy))>>7),0)) : (MIN((((s16)(yl)*(s16)(dtdy))>>7),0))) : 0)), 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL((dsdx), 16, 16) | _SHIFTL((dtdy), 0, 16))); }
#define EFFECT_ALLOC_ALIGN 0x8
#define lbRelocGetFileData(type,file,offset) ((type) ((uintptr_t)(file) + (intptr_t)(offset)))
#define aobjEvent32SetValBlock(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetValBlock, (flags_mask), (dur))
#define ICACHE_LINEMASK (ICACHE_LINESIZE-1)
#define gDPSetPrimDepth(pkt,z,dz) gDPSetColor(pkt, G_SETPRIMDEPTH, _SHIFTL(z, 16, 16) | _SHIFTL(dz, 0, 16))
#define RAMROM_GAME_OFFSET 0x1000
#define gsSPLoadGeometryMode(pkt,word) gsSPGeometryMode(-1,(word))
#define gsSPDma_io(flag,dmem,dram,size) { _SHIFTL(G_DMA_IO,24,8)|_SHIFTL((flag),23,1)| _SHIFTL((dmem)/8,13,10)|_SHIFTL((size)-1,0,12), (unsigned int)(dram) }
#define GS_SCREEN_WIDTH_DEFAULT 320
#define gsDPSetTile(fmt,siz,line,tmem,tile,palette,cmt,maskt,shiftt,cms,masks,shifts) { (_SHIFTL(G_SETTILE, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL(line, 9, 9) | _SHIFTL(tmem, 0, 9)), (_SHIFTL(tile, 24, 3) | _SHIFTL(palette, 20, 4) | _SHIFTL(cmt, 18, 2) | _SHIFTL(maskt, 14, 4) | _SHIFTL(shiftt, 10, 4) | _SHIFTL(cms, 8, 2) | _SHIFTL(masks, 4, 4) | _SHIFTL(shifts, 0, 4)) }
#define PFS_ID_1AREA 3
#define GMSTAFFROLL_AMPERSAND_PARA_FONT_INDEX 0x42
#define ERR_OSFREE_ADDR 54
#define ftMotionCommandReturn() GC_FIELDSET(nFTMotionEventReturn, 26, 6)
#define LBPARTICLE_FLAG_NOISE 0x100
#define G_CYC_2CYCLE (1 << G_MDSFT_CYCLETYPE)
#define SP_DRAM_STACK_SIZE8 (1024)
#define gsDPLoadTLUT(count,tmemaddr,dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, tmemaddr, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, ((count)-1)), gsDPPipeSync()
#define LBPARTICLE_OPCODE_PRIMBLENDRAND 0xBA
#define OS_EVENT_SW2 1
#define OS_VI_PAL_HAN1 24
#define OS_VI_MPAL_LPN2 32
#define G_MWO_CLIP_RNX 0x04
#define G_SC_EVEN_INTERLACE 2
#define U8_MAX 0xFF
#define MI_INTR_DP 0x20
#define gSPSetOtherMode(pkt,cmd,sft,len,data) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(cmd,24,8)|_SHIFTL(32-(sft)-(len),8,8)| _SHIFTL((len)-1,0,8)); _g->words.w1 = (unsigned int)(data); }
#define FTANIM_FLAG_XROTN_JOINT 0x40000000
#define G_SETFILLCOLOR 0xf7
#define G_CC_BLENDI2 ENVIRONMENT, SHADE, COMBINED, SHADE, 0, 0, 0, SHADE
#define gDPLoadTextureBlockS(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define OS_IM_PRENMI 0x00001401
#define PFS_ID_0AREA 1
#define gsDPLoadMultiTile(timg,tmem,rtile,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz, width, timg), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC), gsDPPipeSync(), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define G_CC_BLENDIA ENVIRONMENT, SHADE, TEXEL0, SHADE, TEXEL0, 0, SHADE, 0
#define ERR_OSSETTIME 75
#define NTLBENTRIES 31
#define I_CST_DTOR32(x) (( int )((x) * DTOR32))
#define OS_VI_BIT_PAL 0x0800
#define ftMotionCommandWait(frames) (GC_FIELDSET(nFTMotionEventSyncWait, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define CALC_DXT_4b(width) (((1 << G_TX_DXT_FRAC) + TXL2WORDS_4b(width) - 1) / TXL2WORDS_4b(width))
#define SP_IBIST_CHECK 0x01
#define C0_TAGHI 29
#define PFS_ERR_DEVICE 11
#define ftMotionCommandWaitAsync(frames) (GC_FIELDSET(nFTMotionEventAsyncWait, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define G_RM_AA_PCL_SURF RM_AA_PCL_SURF(1)
#define RM_ADD(clk) IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_FOG, G_BL_CLR_MEM, G_BL_1)
#define INT8_C(c) __INT8_C(c)
#define INT_FAST16_MIN (-INT_FAST16_MAX - 1)
#define gsDPLoadMultiBlock(timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define gSPSetLights1(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_1); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.a,2); }
#define gsDPPipeSync() gsDPNoParam(G_RDPPIPESYNC)
#define FILTER_WRAP 0
#define G_MW_CLIP 0x04
#define C_IINV 0x0
#define G_CYC_FILL (3 << G_MDSFT_CYCLETYPE)
#define SP_DMA_IMEM 0x1000
#define RI_MODE_REG (RI_BASE_REG + 0x00)
#define G_SPECIAL_2 0xd4
#define G_SPECIAL_3 0xd3
#define SR_IMASK 0x0000ff00
#define CACH_PI 0x0
#define gDPLoadTextureBlock(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT) -1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define MI_BASE_REG 0x04300000
#define RM_AA_ZB_XLU_DECAL(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gsSPSetLights1(name) gsSPNumLights(NUMLIGHTS_1), gsSPLight(&name.l[0],1), gsSPLight(&name.a,2)
#define INT_LEAST32_MAX __INT_LEAST32_MAX__
#define TLBHI_PIDSHIFT 0
#define G_CC_ADDRGB 1, 0, TEXEL0, SHADE, 0, 0, 0, SHADE
#define G_SETKEYR 0xeb
#define SObjGetNext(sobj) ((SObj*)(sobj)->next)
#define _FTDEF_H_ 
#define SP_CLR_BROKE 0x00004
#define F_SEC_TO_TICS(q) ((float)((q)*TIME_SEC))
#define STATIC_ASSERT(cond,msg) _Static_assert(cond, msg)
#define G_CULL_BOTH 0x00000600
#define CONFIG_BE 0x00008000
#define gdSPDefLookAt(rightx,righty,rightz,upx,upy,upz) { {{ {{0,0,0},0,{0,0,0},0,{rightx,righty,rightz},0}}, { {{0,0x80,0},0,{0,0x80,0},0,{upx,upy,upz},0}}} }
#define G_RM_AA_XLU_LINE RM_AA_XLU_LINE(1)
#define gsSPSetLights3(name) gsSPNumLights(NUMLIGHTS_3), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.a,4)
#define SR_IMASKSHIFT 8
#define OS_TASK_SP_ONLY 0x0008
#define G_BL_CLR_FOG 3
#define EXC_WADE EXC_CODE(5)
#define gSPDma_io(pkt,flag,dmem,dram,size) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_DMA_IO,24,8)|_SHIFTL((flag),23,1)| _SHIFTL((dmem)/8,13,10)|_SHIFTL((size)-1,0,12); _g->words.w1 = (unsigned int)(dram); }
#define CONFIG_CM 0x80000000
#define RM_RA_ZB_OPA_INTER(clk) AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ALPHA_CVG_SEL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_CC_BLENDPEDECALA PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0
#define CONFIG_CU 0x00000008
#define G_CYC_1CYCLE (0 << G_MDSFT_CYCLETYPE)
#define ERR_ALBNKFNEW 113
#define START_BUTTON CONT_START
#define gmColCommandEffectS3(off_z,rng_x) (GC_FIELDSET(off_z, 16, 16) | GC_FIELDSET(rng_x, 0, 16))
#define gmColCommandEffectS4(rng_y,rng_z) (GC_FIELDSET(rng_y, 16, 16) | GC_FIELDSET(rng_z, 0, 16))
#define RDRAM_0_BASE_ADDRESS (RDRAM_0_DEVICE_ID * RDRAM_LENGTH)
#define GMHITCOLLISION_FLAG_WEAPON (1 << 1)
#define CACH_SD 0x3
#define ERR_ALSNDPPLAY 109
#define CACH_SI 0x2
#define G_IM_SIZ_32b_TILE_BYTES 2
#define SR_IE 0x00000001
#define CONFIG_DB 0x00000010
#define CONFIG_DC 0x000001c0
#define LBPARTICLE_OPCODE_ADDDISTVELMAG 0xB8
#define G_CC_PASS2 0, 0, 0, COMBINED, 0, 0, 0, COMBINED
#define PFS_DATA_FULL 7
#define DOBJ_FLAG_HIDDEN (1 << 1)
#define SI_PIF_ADDR_RD64B_REG (SI_BASE_REG + 0x04)
#define OS_FLAG_FAULT 2
#define RM_ZB_XLU_DECAL(clk) Z_CMP | IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define FTCOMPUTER_EVENT_PKTHUNDER() (FTCOMPUTER_COMMAND_PKTHUNDER)
#define gDPSetCombineKey(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_COMBKEY, 1, type)
#define AOBJ_MATFLAG_SCRU AOBJ_MAT_BIT(nGCAnimTrackScrU)
#define MI_INTR_MASK_VI 0x08
#define CONFIG_EB 0x00002000
#define SP_STATUS_TASKDONE SP_STATUS_SIG2
#define LBPARTICLE_OPCODE_SETGRAVITY 0xA2
#define gSPClearGeometryMode(pkt,word) gSPGeometryMode((pkt),(word),0)
#define G_CC_BLENDPE PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, SHADE, 0
#define CONFIG_EM 0x00004000
#define F_CST_DTOR32(x) ((float)((x) * DTOR32))
#define CONFIG_EW 0x000c0000
#define C0_IMPMASK 0xff00
#define COBJ_FLAG_BRANCHSYNC (1 << 6)
#define DPRGBColor(pkt,cmd,r,g,b,a) gDPSetColor(pkt, cmd, (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)))
#define ftMotionCommandSetModelPartID(jid,mid) (GC_FIELDSET(nFTMotionEventSetModelPartID, 26, 6) | GC_FIELDSET(jid, 19, 7) | GC_FIELDSET(mid, 0, 19))
#define AL_PLAYING 1
#define OS_NUM_EVENTS 23
#define AL_FX_NONE 0
#define A_MAIN 0x00
#define G_IM_SIZ_8b_INCR 1
#define G_CC_SHADEDECALA 0, 0, 0, SHADE, 0, 0, 0, TEXEL0
#define INT_LEAST8_MIN (-INT_LEAST8_MAX - 1)
#define G_BL_0 3
#define OS_LOG_VERSION 1
#define _gDPLoadTextureBlock_4b(pkt,timg,tmem,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), tmem, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_IM_SIZ_4b_BYTES 0
#define FTCOMMON_HANDICAP_DEFAULT 9
#define gsDPLoadTile(t,uls,ult,lrs,lrt) gsDPLoadTileGeneric(G_LOADTILE, t, uls, ult, lrs, lrt)
#define G_IM_SIZ_8b_LINE_BYTES G_IM_SIZ_8b_BYTES
#define PI_STATUS_REG (PI_BASE_REG + 0x10)
#define LBPARTICLE_OPCODE_SETPOS 0x80
#define gDPSetFillColor(pkt,d) gDPSetColor(pkt, G_SETFILLCOLOR, (d))
#define _SIZE_T_DEF 
#define G_IM_SIZ_16b_SHIFT 0
#define gDPLoadTextureBlock_4bS(pkt,timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, 0 ); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define RDRAM_0_CONFIG 0x00000
#define PFS_ERR_ID_FATAL 10
#define G_CD_DISABLE (3 << G_MDSFT_RGBDITHER)
#define G_MVO_LOOKATX (0*24)
#define gsSPSetLights0(name) gsSPNumLights(NUMLIGHTS_0), gsSPLight(&name.l[0],1), gsSPLight(&name.a,2)
#define alCSPGetProgram alCSPGetChlProgram
#define gDPParam(pkt,cmd,param) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8); _g->words.w1 = (param); }
#define ERR_OSPIREADIO 26
#define FR_NEG_FRUSTRATIO_1 0x00000001
#define FR_NEG_FRUSTRATIO_2 0x00000002
#define FR_NEG_FRUSTRATIO_3 0x00000003
#define FR_NEG_FRUSTRATIO_4 0x00000004
#define FR_NEG_FRUSTRATIO_5 0x00000005
#define FR_NEG_FRUSTRATIO_6 0x00000006
#define G_ROTATE_FRAC 16
#define gsMoveWd(index,offset,data) gsDma1p( G_MOVEWORD, data, offset, index)
#define CAMERA_FLAG_BOUND_BOTTOM (1 << nGMCameraBoundBottom)
#define RM_RA_OPA_SURF(clk) AA_EN | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define alHeapAlloc(hp,elem,size) alHeapDBAlloc(0, 0, (hp), (elem), (size))
#define ftMotionEventAdvance(event,type) ((event)->p_script = (void*)((uintptr_t)(event)->p_script + (sizeof(type))))
#define PI_STATUS_RESET 0x01
#define gDPNoParam(pkt,cmd) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8); _g->words.w1 = 0; }
#define FTCOMPUTER_COMMAND_STICK_Y_TILT (nFTComputerCommandStickY << FTCOMPUTER_COMMAND_TIMER_BITS)
#define G_CC_HILITERGBA PRIMITIVE, SHADE, TEXEL0, SHADE, PRIMITIVE, SHADE, TEXEL0, SHADE
#define gsSPSetLights5(name) gsSPNumLights(NUMLIGHTS_5), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.a,6)
#define RI_WERROR_REG (RI_BASE_REG + 0x1C)
#define ERR_ALEVENTNOFREE 124
#define AOBJ_FLAG_TRAI AOBJ_JOINT_BIT(nGCAnimTrackTraI)
#define CONFIG_IB 0x00000020
#define CONFIG_IC 0x00000e00
#define gsSPGeometryMode(c,s) { (_SHIFTL(G_GEOMETRYMODE,24,8)|_SHIFTL(~(u32)(c),0,24)),(u32)(s) }
#define G_CD_ENABLE G_CD_NOISE
#define ERR_ALSEQP_OFF_VOICE 103
#define PI_BSD_DOM2_PGS_REG (PI_BASE_REG + 0x2C)
#define G_DMACMDSIZ 128
#define I_TIME_TO_TICS(h,m,s,f) (I_HRS_TO_TICS(h) + I_MIN_TO_TICS(m) + I_SEC_TO_TICS(s) + (f))
#define _RMON_H_ 
#define DPC_START_REG (DPC_BASE_REG + 0x00)
#define G_TC_CONV (0 << G_MDSFT_TEXTCONV)
#define CONT_EEPROM 0x8000
#define OS_VI_NTSC_LPN1 0
#define IO_WRITE(addr,data) (*(vu32*)PHYS_TO_K1(addr) = (u32)(data))
#define gDPFillRectangle(pkt,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL((lrx), 14, 10) | _SHIFTL((lry), 2, 10)); _g->words.w1 = (_SHIFTL((ulx), 14, 10) | _SHIFTL((uly), 2, 10));}
#define C0_CONTEXT 4
#define CONT_D 0x0004
#define CONT_E 0x0008
#define CONT_F 0x0001
#define CONT_G 0x2000
#define G_CC_HILITERGBDECALA PRIMITIVE, SHADE, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define CONT_L 0x0020
#define CONT_R 0x0010
#define gDPSetColorImage(pkt,f,s,w,i) gSetImage(pkt, G_SETCIMG, f, s, w, i)
#define EEPROM_TYPE_16K 0x02
#define ftMotionCommandSetDamageCollPartIDS3(oz,sx) (GC_FIELDSET(oz, 16, 16) | GC_FIELDSET(sx, 0, 16))
#define ftMotionCommandSetDamageCollPartIDS4(sy,sz) (GC_FIELDSET(sy, 16, 16) | GC_FIELDSET(sz, 0, 16))
#define M_HVQTASK 6
#define gSPPopMatrixN(pkt,n,num) gDma2p((pkt),G_POPMTX,(num)*64,64,2,0)
#define gsDPSetDepthSource(src) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ZSRCSEL, 1, src)
#define gsDPSetCombineKey(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_COMBKEY, 1, type)
#define G_RM_RA_ZB_OPA_DECAL2 RM_RA_ZB_OPA_DECAL(2)
#define FTCOMPUTER_COMMAND_BUTTON_A_PRESS (nFTComputerCommandButtonAPress << FTCOMPUTER_COMMAND_TIMER_BITS)
#define gsDma1p(c,s,l,p) { (_SHIFTL((c), 24, 8) | _SHIFTL((p), 16, 8) | _SHIFTL((l), 0, 16)), (unsigned int)(s) }
#define CObjGetStruct(gobj) ((CObj*)(gobj)->obj)
#define CONFIG_K0 0x00000007
#define ftMotionCommandSubroutineS2(addr) ((uintptr_t)addr)
#define G_TRI_FILL 0xc8
#define ftMotionCommandSetFlag2(val) (GC_FIELDSET(nFTMotionEventSetFlag2, 26, 6) | GC_FIELDSET(val, 0, 26))
#define EXC_WMISS EXC_CODE(3)
#define FR_POS_FRUSTRATIO_2 0x0000fffe
#define FR_POS_FRUSTRATIO_3 0x0000fffd
#define FR_POS_FRUSTRATIO_4 0x0000fffc
#define FR_POS_FRUSTRATIO_6 0x0000fffa
#define FTCATCHKIND_MASK_COMMON (1 << nFTCatchKindCommon)
#define ftMotionCommandMakeAttackCollScaled(aid,gid,jid,dmg,reb,elem,sz,ox,oy,oz,ang,kbs,kbw,ga,sd,fl,fk,kbb) ftMotionCommandMakeAttackCollScaledS1(aid, gid, jid, dmg, reb, elem), ftMotionCommandMakeAttackCollS2(sz, ox), ftMotionCommandMakeAttackCollS3(oy, oz), ftMotionCommandMakeAttackCollS4(ang, kbs, kbw, ga), ftMotionCommandMakeAttackCollS5(sd, fl, fk, kbb)
#define G_BL_A_IN 0
#define gsDPLoadTLUT_pal256(dram) gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram), gsDPTileSync(), gsDPSetTile(0, 0, 0, 256, G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0), gsDPLoadSync(), gsDPLoadTLUTCmd(G_TX_LOADTILE, 255), gsDPPipeSync()
#define AL_SUSTAIN 63
#define AOBJ_MATFLAG_TRAV AOBJ_MAT_BIT(nGCAnimTrackTraV)
#define ERR_ALSEQTRACKHDR 118
#define G_ACMUX_PRIMITIVE 3
#define gsDPLoadBlock(tile,uls,ult,lrs,dxt) { (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs,G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)) }
#define MI_INTR_SI 0x02
#define G_TD_SHARPEN (1 << G_MDSFT_TEXTDETAIL)
#define MI_INTR_SP 0x01
#define LBPARTICLE_FLAG_MASKS 0x20
#define ftMotionCommandMakeAttackCollS4(ang,kbs,kbw,ga) (GC_FIELDSET(ang, 22, 10) | GC_FIELDSET(kbs, 12, 10) | GC_FIELDSET(kbw, 2, 10) | GC_FIELDSET(ga, 0, 2))
#define DPS_TBIST_GO 0x02
#define G_CCMUX_SHADE_ALPHA 11
#define LBPARTICLE_FLAG_MASKT 0x40
#define G_CCMUX_0 31
#define AOBJ_FLAG_TRAY AOBJ_JOINT_BIT(nGCAnimTrackTraY)
#define G_CC_MODULATERGBDECALA G_CC_MODULATEIDECALA
#define RAMROM_APP_WRITE_ADDR (RAMROM_MSG_ADDR + (1 * RAMROM_BUF_SIZE))
#define gsDPSetBlendMask(mask) gsDPNoOp()
#define aResample(pkt,f,p,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = (_SHIFTL(A_RESAMPLE, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(p, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define gDPSetKeyR(pkt,cR,sR,wR) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_SETKEYR, 24, 8); _g->words.w1 = (_SHIFTL(wR, 16, 12) | _SHIFTL(cR, 8, 8) | _SHIFTL(sR, 0, 8)); }
#define VI_V_CURRENT_LINE_REG VI_CURRENT_REG
#define G_CCMUX_1 6
#define gsSPSetLights2(name) gsSPNumLights(NUMLIGHTS_2), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.a,3)
#define gsSPSetLights4(name) gsSPNumLights(NUMLIGHTS_4), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.a,5)
#define G_CCMUX_TEXEL1_ALPHA 9
#define gsSPSetLights6(name) gsSPNumLights(NUMLIGHTS_6), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.l[5],6), gsSPLight(&name.a,7)
#define gsSPSetLights7(name) gsSPNumLights(NUMLIGHTS_7), gsSPLight(&name.l[0],1), gsSPLight(&name.l[1],2), gsSPLight(&name.l[2],3), gsSPLight(&name.l[3],4), gsSPLight(&name.l[4],5), gsSPLight(&name.l[5],6), gsSPLight(&name.l[6],7), gsSPLight(&name.a,8)
#define G_PM_NPRIMITIVE (0 << G_MDSFT_PIPELINE)
#define gsDPSetAlphaCompare(type) gsSPSetOtherMode(G_SETOTHERMODE_L, G_MDSFT_ALPHACOMPARE, 2, type)
#define G_RM_AA_ZB_TEX_INTER RM_AA_ZB_TEX_INTER(1)
#define COBJ_FLAG_ZBUFFER (1 << 0)
#define RDRAM_MODE_REG (RDRAM_BASE_REG + 0x0c)
#define K0BASE 0x80000000
#define LBPARTICLE_OPCODE_NONOISE 0xB5
#define G_RM_AA_ZB_OPA_INTER RM_AA_ZB_OPA_INTER(1)
#define GC_BITFIELD(n) (1 << (n))
#define SP_SET_TASKDONE SP_SET_SIG2
#define ftMotionCommandEffectItemHold(jid,eid,flag,ox,oy,oz,rx,ry,rz) ftMotionCommandEffectItemHoldS1(jid, eid, flag), ftMotionCommandEffectItemHoldS2(ox, oy), ftMotionCommandEffectItemHoldS3(oz, rx), ftMotionCommandEffectItemHoldS4(ry, rz)
#define AI_NTSC_MIN_FREQ 3000
#define gSetImage(pkt,cmd,fmt,siz,width,i) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(cmd, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width)-1, 0, 12); _g->words.w1 = (unsigned int)(i); }
#define G_RM_AA_ZB_XLU_DECAL2 RM_AA_ZB_XLU_DECAL(2)
#define G_CC_MODULATERGBA_PRIM2 G_CC_MODULATEIA_PRIM2
#define OS_WRITE 1
#define RDRAM_1_BASE_ADDRESS (RDRAM_1_DEVICE_ID * RDRAM_LENGTH)
#define OS_VI_NTSC_LAN2 6
#define OS_VI_PAL_HPF2 27
#define _SYMATRIX_H_ 
#define G_RM_NOOP RM_NOOP(1)
#define G_IM_SIZ_16b_LINE_BYTES G_IM_SIZ_16b_BYTES
#define DPS_TBIST_CHECK 0x01
#define C_HWBINV 0x14
#define DPC_TMEM_REG (DPC_BASE_REG + 0x1C)
#define CHNL_ERR_MASK 0xC0
#define ERR_OSDPSETNEXTBUFFER_ADDR 17
#define SIG_ATOMIC_MAX __SIG_ATOMIC_MAX__
#define gsSPDmaRead(dmem,dram,size) gsSPDma_io(0,(dmem),(dram),(size))
#define gsDPLoadTextureBlockS(timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz ##_LOAD_BLOCK, 1, timg), gsDPSetTile(fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt,shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, 0 ), gsDPPipeSync(), gsDPSetTile(fmt, siz, ((((width) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define LBPARTICLE_OPCODE_SETVEL 0x90
#define SP_STATUS_SSTEP 0x020
#define GMSTAFFROLL_SLASH_PARA_FONT_INDEX 0x44
#define LBPARTICLE_OPCODE_MAKERAND 0xAA
#define LBPARTICLE_OPCODE_MULVELAXIS 0xBE
#define LBBACKUP_MASK_STAGE(kind) (1 << (kind))
#define G_MV_MATRIX 14
#define LBPARTICLE_FLAG_ATTACH 0x8000
#define G_CLIPPING 0x00800000
#define VI_V_INTR_REG VI_INTR_REG
#define CVG_X_ALPHA 0x1000
#define G_PM_1PRIMITIVE (1 << G_MDSFT_PIPELINE)
#define GOBJ_FLAG_NORUN (1 << 6)
#define SP_DRAM_STACK_SIZE64 (SP_DRAM_STACK_SIZE8 >> 3)
#define G_CCMUX_ENVIRONMENT 5
#define INT32_MAX __INT32_MAX__
#define A_VOL 0x04
#define ftMotionCommandEffectItemHoldS1(jid,eid,flag) (GC_FIELDSET(nFTMotionEventEffectItemHold, 26, 6) | GC_FIELDSET(jid, 19, 7) | GC_FIELDSET(eid, 10, 9) | GC_FIELDSET(flag, 0, 10))
#define ftMotionCommandEffectItemHoldS4(ry,rz) (GC_FIELDSET(ry, 16, 16) | GC_FIELDSET(rz, 0, 16))
#define ERR_ALSEQPUNKNOWNMIDI 122
#define CAUSE_BD 0x80000000
#define COBJ_FLAG_FILLCOLOR (1 << 1)
#define AL_FX_CUSTOM 6
#define OS_LOG_MAGIC 0x20736a73
#define AL_CMIDI_CNTRL_LOOPCOUNT_SM 104
#define FTANIM_FLAG_ANIMLOCKS 0x00000001
#define VI_LEAP_REG (VI_BASE_REG + 0x20)
#define gsSPPerspNormalize(s) gsMoveWd( G_MW_PERSPNORM, 0, (s))
#define CONFIG_SB 0x00c00000
#define CONFIG_SC 0x00020000
#define gDPSetTextureLOD(pkt,type) gSPSetOtherMode(pkt, G_SETOTHERMODE_H, G_MDSFT_TEXTLOD, 1, type)
#define CONFIG_SM 0x00010000
#define G_RM_AA_ZB_XLU_INTER2 RM_AA_ZB_XLU_INTER(2)
#define CONFIG_SW 0x00100000
#define GCCc0w0(saRGB0,mRGB0,saA0,mA0) (_SHIFTL((saRGB0), 20, 4) | _SHIFTL((mRGB0), 15, 5) | _SHIFTL((saA0), 12, 3) | _SHIFTL((mA0), 9, 3))
#define GCCc0w1(sbRGB0,aRGB0,sbA0,aA0) (_SHIFTL((sbRGB0), 28, 4) | _SHIFTL((aRGB0), 15, 3) | _SHIFTL((sbA0), 12, 3) | _SHIFTL((aA0), 9, 3))
#define S8_MIN 0x80
#define INT64_MIN (-INT64_MAX - 1)
#define ERR_OSAISETNEXTBUFFER_ENDADDR 132
#define ADPCMFSIZE 16
#define RM_AA_SUB_TERR(clk) AA_EN | IM_RD | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define FTSTATUS_PRESERVE_PLAYERTAG (1 << nFTStatusPreservePlayerTag)
#define _GMSOUND_H_ 
#define MOBJ_FLAG_BLENDCOLOR (1 << 11)
#define gImmp21(pkt,c,p0,p1,dat) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL((c), 24, 8) | _SHIFTL((p0), 8, 16) | _SHIFTL((p1), 0, 8)); _g->words.w1 = (unsigned int) (dat); }
#define RM_OPA_CI(clk) CVG_DST_CLAMP | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define G_IM_SIZ_32b 3
#define PIF_ROM_END 0x1FC007BF
#define gsSPTextureRectangleFlip(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), gsImmp1(G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))), gsImmp1(G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)))
#define OS_MESG_BLOCK 1
#define DL_SPRITE_OVERHEAD (24)
#define LBBACKUP_UNLOCK_MASK_ALL ( LBBACKUP_UNLOCK_MASK_ITEMSWITCH | LBBACKUP_UNLOCK_MASK_SOUNDTEST | LBBACKUP_UNLOCK_MASK_INISHIE | LBBACKUP_UNLOCK_MASK_PURIN | LBBACKUP_UNLOCK_MASK_CAPTAIN | LBBACKUP_UNLOCK_MASK_NESS | LBBACKUP_UNLOCK_MASK_LUIGI )
#define gsSPLightColor(n,col) gsMoveWd(G_MW_LIGHTCOL, G_MWO_a ##n, col), gsMoveWd(G_MW_LIGHTCOL, G_MWO_b ##n, col)
#define ftMotionCommandSetDamageCollPartID(jid,ox,oy,oz,sx,sy,sz) ftMotionCommandSetDamageCollPartIDS1(jid), ftMotionCommandSetDamageCollPartIDS2(ox, oy), ftMotionCommandSetDamageCollPartIDS3(oz, sx), ftMotionCommandSetDamageCollPartIDS4(sy, sz)
#define ERR_OSPIWRITEIO 27
#define AI_BITRATE_REG (AI_BASE_REG + 0x14)
#define IO_READ(addr) (*(vu32*)PHYS_TO_K1(addr))
#define RAMROM_FONTDATA_OFFSET 0xb70
#define GCONVERT5551_RGBA8888(rgba8888) ((((rgba8888)>>16) & 0xf800) | (((rgba8888)>>13) & 0x7c0) | (((rgba8888)>>10) & 0x3e) | (((rgba8888)>>7) & 0x1))
#define ERR_OSAISETNEXTBUFFER_SIZE 16
#define PI_DRAM_ADDR_REG (PI_BASE_REG + 0x00)
#define CONFIG_EC_1_1 0x6
#define SP_DMA_BUSY_REG (SP_BASE_REG + 0x18)
#define G_RM_AA_ZB_SUB_TERR2 RM_AA_ZB_SUB_TERR(2)
#define A_LOADBUFF 4
#define GDMACMD(x) (x)
#define _SP_H_ 
#define G_CC_HILITERGBPASSA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, 0, 0, 0, COMBINED
#define G_RM_AA_ZB_SUB_SURF RM_AA_ZB_SUB_SURF(1)
#define C0_BADVADDR 8
#define UINT64_MAX __UINT64_MAX__
#define S8_MAX 0x7F
#define OS_VI_PAL_HPN1 22
#define OS_VI_PAL_HPN2 26
#define G_RM_FOG_PRIM_A GBL_c1(G_BL_CLR_FOG, G_BL_A_FOG, G_BL_CLR_IN, G_BL_1MA)
#define I_CLC_DTOR32(x) (( int )(((x) * PI32) / 180.0F))
#define I_TICS_TO_SEC(q) ((int)((q) / TIME_SEC))
#define ERR_ALSEQP_NO_VOICE 101
#define G_MDSFT_COMBKEY 8
#define OS_LOG_MAX_ARGS 16
#define G_TEXTURE_ENABLE 0x00000000
#define GU_PARSE_MEM_BLOCK 4
#define gsDPSetTextureLOD(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTLOD, 1, type)
#define RDRAM_DEVICE_TYPE_REG (RDRAM_BASE_REG + 0x00)
#define OS_MESG_NOBLOCK 0
#define gSPSprite2DDraw(pkt,px,py) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SPRITE2D_DRAW, 24, 8)); _g->words.w1 = (_SHIFTL((px), 16, 16) | _SHIFTL((py), 0, 16)); }
#define _LBPARTICLE_H_ 
#define alCSPSetFXMix alCSPSetChlFXMix
#define gDPLoadTLUTCmd(pkt,tile,count) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_LOADTLUT, 24, 8); _g->words.w1 = _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10);}
#define SECC_MASK 0x0000007f
#define ftMotionCommandMakeAttackCollS1(aid,gid,jid,dmg,reb,ele) (GC_FIELDSET(nFTMotionEventMakeAttackColl, 26, 6) | GC_FIELDSET(aid, 23, 3) | GC_FIELDSET(gid, 20, 3) | GC_FIELDSET(jid, 13, 7) | GC_FIELDSET(dmg, 5, 8) | GC_FIELDSET(reb, 4, 1) | GC_FIELDSET(ele, 0, 4))
#define SIZE_EXCVEC 0x80
#define GIMMCMD(x) (G_IMMFIRST-(x))
#define gmColCommandParallel(addr) gmColCommandParallelS1, gmColCommandParallelS2(addr)
#define SP_DRAM_ADDR_REG (SP_BASE_REG + 0x04)
#define G_CC_BLENDIDECALA ENVIRONMENT, SHADE, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define ftMotionCommandSetAttackCollDamage(id,dmg) (GC_FIELDSET(nFTMotionEventSetAttackCollDamage, 26, 6) | GC_FIELDSET(id, 23, 3) | GC_FIELDSET(dmg, 15, 8))
#define C_HSV 0x1c
#define SP_SET_YIELDED SP_SET_SIG1
#define RM_VISCVG(clk) IM_RD | FORCE_BL | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_BL, G_BL_A_MEM)
#define G_MWO_aLIGHT_2 0x18
#define G_MWO_aLIGHT_3 0x30
#define G_MWO_aLIGHT_4 0x48
#define G_MWO_aLIGHT_5 0x60
#define G_MWO_aLIGHT_6 0x78
#define G_MWO_aLIGHT_8 0xa8
#define gSPSetLights2(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_2); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.a,3); }
#define gSPSetLights3(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_3); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.a,4); }
#define gSPSetLights4(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_4); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.a,5); }
#define gSPSetLights5(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_5); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.a,6); }
#define gSPSetLights7(pkt,name) { gSPNumLights(pkt,NUMLIGHTS_7); gSPLight(pkt,&name.l[0],1); gSPLight(pkt,&name.l[1],2); gSPLight(pkt,&name.l[2],3); gSPLight(pkt,&name.l[3],4); gSPLight(pkt,&name.l[4],5); gSPLight(pkt,&name.l[5],6); gSPLight(pkt,&name.l[6],7); gSPLight(pkt,&name.a,8); }
#define CONFIG_UNCACHED 0x00000002
#define AI_NTSC_MAX_FREQ 368000
#define OS_MESG_PRI_NORMAL 0
#define VI_CTRL_TYPE_16 0x00002
#define FTPHYSICS_AIRDRIFT_CLAMP_RANGE_MIN 8
#define gsSPLine3D(v0,v1,flag) { _SHIFTL(G_LINE3D, 24, 8)|__gsSPLine3D_w1f(v0, v1, 0, flag), 0 }
#define FTKEY_EVENT_INSTRUCTION(k,t) ( ((((k) << 12) & 0xF000) | ((t) & 0xFFF)) & U16_MAX )
#define gDPLoadTextureTile(pkt,timg,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz, width, timg); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define MI_SET_INIT 0x0100
#define PINVALID 0x0000
#define FTCOMPUTER_COMMAND_BUTTON_Z_RELEASE (nFTComputerCommandButtonZRelease << FTCOMPUTER_COMMAND_TIMER_BITS)
#define gsSPLoadUcodeL(ucode) gsSPLoadUcode(OS_K0_TO_PHYSICAL(&ucode ##TextStart), OS_K0_TO_PHYSICAL(&ucode ##DataStart))
#define PI_STATUS_ERROR 0x04
#define gsSPClipRatio(r) gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RNX, FR_NEG_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RNY, FR_NEG_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RPX, FR_POS_ ##r), gsMoveWd(G_MW_CLIP, G_MWO_CLIP_RPY, FR_POS_ ##r)
#define AOBJ_CAMFLAG_UPX AOBJ_CAM_BIT(nGCAnimTrackUpX)
#define _ABI_H_ 
#define G_SETKEYGB 0xea
#define gsSPVertex(v,n,v0) { (_SHIFTL(G_VTX,24,8)|_SHIFTL((n),12,8)|_SHIFTL((v0)+(n),1,7)), (unsigned int)(v) }
#define G_CD_BAYER (1 << G_MDSFT_RGBDITHER)
#define GOBJ_PRIORITY_DEFAULT S32_MIN
#define PFS_MOTOR_INITIALIZED 0x8
#define SP_CUTOUT 0x00000002
#define G_CD_MAGICSQ (0 << G_MDSFT_RGBDITHER)
#define ERR_OSPIRAWSTARTDMA_ADDR 23
#define G_CC_MODULATEIA_PRIM2 COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0
#define gDPSetPrimColor(pkt,m,l,r,g,b,a) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETPRIMCOLOR, 24, 8) | _SHIFTL(m, 8, 8) | _SHIFTL(l, 0, 8)); _g->words.w1 = (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)); }
#define G_RM_CLD_SURF RM_CLD_SURF(1)
#define C_HWB 0x18
#define _SYVECTOR_H_ 
#define GMRUMBLE_ARRAY_COLS 3
#define Z_CMP 0x10
#define PROF_MIN_INTERVAL 50
#define G_MWO_SEGMENT_2 0x02
#define G_MWO_SEGMENT_3 0x03
#define G_MWO_SEGMENT_5 0x05
#define G_LOD 0x00100000
#define G_MWO_SEGMENT_7 0x07
#define G_MWO_SEGMENT_8 0x08
#define G_MWO_SEGMENT_9 0x09
#define OS_EVENT_RDB_REQ_RAMROM 18
#define G_MWO_SEGMENT_A 0x0a
#define G_MWO_SEGMENT_B 0x0b
#define G_MWO_SEGMENT_C 0x0c
#define G_MWO_SEGMENT_D 0x0d
#define G_MWO_SEGMENT_E 0x0e
#define G_MWO_SEGMENT_F 0x0f
#define CACHERR_PIDX_SHIFT 12
#define SP_STATUS_SIG6 0x2000
#define gsDPSetTextureLUT(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTLUT, 2, type)
#define G_MWO_MATRIX_XX_XY_F 0x20
#define ERR_OSPIRAWSTARTDMA_DIR 21
#define OS_PM_16K 0x0006000
#define OS_PM_16M 0x1ffe000
#define aobjEvent32SetFlags(flags_mask,payload) aobjEvent32(nGCAnimEvent32SetFlags, (flags_mask), (payload))
#define AObjAnimAdvance(script) ((script)++)
#define AOBJ_FLAG_TRAXYZ (AOBJ_FLAG_TRAX | AOBJ_FLAG_TRAY | AOBJ_FLAG_TRAZ)
#define gsSPDmaWrite(dmem,dram,size) gsSPDma_io(1,(dmem),(dram),(size))
#define DPS_BUFTEST_DATA_REG (DPS_BASE_REG + 0x0C)
#define ERR_OSSPTASKLOAD_YIELD 60
#define OS_TV_NTSC 1
#define gSPSprite2DScaleFlip(pkt,sx,sy,fx,fy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SPRITE2D_SCALEFLIP, 24, 8) | _SHIFTL((fx), 8, 8) | _SHIFTL((fy), 0, 8)); _g->words.w1 = (_SHIFTL((sx), 16, 16) | _SHIFTL((sy), 0, 16)); }
#define SP_CLR_INTR_BREAK 0x00080
#define A_SETBUFF 8
#define INTPTR_MAX __INTPTR_MAX__
#define DPS_TBIST_DONE 0x004
#define SP_STATUS_YIELD SP_STATUS_SIG0
#define OS_MESG_TYPE_EDMAWRITE (OS_MESG_TYPE_BASE + 6)
#define DPC_STATUS_END_VALID 0x200
#define MI_CLR_DP_INTR 0x0800
#define ERR_ALMODDELAYOVERFLOW 133
#define RM_RA_ZB_OPA_SURF(clk) AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define LBPARTICLE_OPCODE_ENVBLENDRAND 0xBB
#define LBBACKUP_UNLOCK_MASK_INISHIE (1 << nLBBackupUnlockInishie)
#define ftMotionCommandEnd() GC_FIELDSET(nFTMotionEventEnd, 26, 6)
#define G_TEXTURE_GEN_LINEAR 0x00080000
#define ftMotionCommandClearAttackCollAll() GC_FIELDSET(nFTMotionEventClearAttackCollAll, 26, 6)
#define A_AUX 0x08
#define G_SPECIAL_1 0xd5
#define gsSPModifyVertex(vtx,where,val) { _SHIFTL(G_MODIFYVTX,24,8)| _SHIFTL((where),16,8)|_SHIFTL((vtx)*2,0,16), (unsigned int)(val) }
#define G_BZ_ORTHO 1
#define A_BUTTON CONT_A
#define TIME_SEC (UPDATE_INTERVAL * 1)
#define OS_VI_DITHER_FILTER_ON 0x0040
#define gSPLightColor(pkt,n,col) { gMoveWd(pkt, G_MW_LIGHTCOL, G_MWO_a ##n, col); gMoveWd(pkt, G_MW_LIGHTCOL, G_MWO_b ##n, col); }
#define FTSTATUS_CHARACTERS_DEMO(status_id) (0x20000 + (status_id))
#define DEVICE_TYPE_CART 0
#define __gsSPLine3D_w1(v0,v1,wd) (_SHIFTL((v0)*2,16,8)|_SHIFT((v1)*2,8,8)|_SHIFT((wd),0,8))
#define gsSPFogFactor(fm,fo) gsMoveWd(G_MW_FOG, G_MWO_FOG, (_SHIFTL(fm,16,16) | _SHIFTL(fo,0,16)))
#define SI_STATUS_DMA_BUSY 0x0001
#define EXC_TRAP EXC_CODE(13)
#define gSPBranchLessZ(pkt,dl,vtx,zval,near,far,flag) gSPBranchLessZrg(pkt, dl, vtx, zval, near, far, flag, 0, G_MAXZ)
#define FTDATA_FLAG_MAINMOTION 0x2
#define ERR_OSVISETYSCALE_VALUE 41
#define FTCOMPUTER_COMMAND_END (0xFF)
#define DPC_PIPEBUSY_REG (DPC_BASE_REG + 0x18)
#define RAMROM_CLOCKRATE_OFFSET 0x4
#define ERR_ALSEQPINVALIDPROG 121
#define LBPARTICLE_OPCODE_SETDISTVEL 0xB7
#define SP_CLR_YIELDED SP_CLR_SIG1
#define gsSPSprite2DBase(s) gsDma1p(G_SPRITE2D_BASE, s, sizeof(uSprite), 0)
#define RDRAM_STANDBY_MODE 2
#define CAUSE_IP3 0x00000400
#define CAUSE_IP4 0x00000800
#define CAUSE_IP5 0x00001000
#define CAUSE_IP6 0x00002000
#define CAUSE_IP7 0x00004000
#define CAUSE_IP8 0x00008000
#define PFS_WRITE 1
#define G_CC_MODULATERGBA_PRIM G_CC_MODULATEIA_PRIM
#define SR_IBIT1 0x00000100
#define SR_IBIT3 0x00000400
#define SR_IBIT4 0x00000800
#define SR_IBIT5 0x00001000
#define SR_IBIT6 0x00002000
#define SR_IBIT7 0x00004000
#define SR_IBIT8 0x00008000
#define PHYSICAL_TO_ROM(x) ((uintptr_t)(x) + 0xB0000000)
#define FTCOMPUTER_EVENT_STICK_Y(y,t) FTCOMPUTER_EVENT_INSTRUCTION(nFTComputerCommandStickY, t), (y)
#define GU_PARSERDP_PRAREA 2
#define G_CC_ADDRGBDECALA 1, 0, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define AL_STOPPING 2
#define gsDPFillRectangle(ulx,uly,lrx,lry) { (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL((lrx), 14, 10) | _SHIFTL((lry), 2, 10)), (_SHIFTL((ulx), 14, 10) | _SHIFTL((uly), 2, 10)) }
#define G_MDSFT_TEXTFILT 12
#define DPS_TBIST_FAILED 0x7F8
#define G_SETOTHERMODE_L 0xe2
#define G_MDSFT_TEXTPERSP 19
#define ftMotionCommandSetAttackCollOffset(id,ox,oy,oz) ftMotionCommandSetAttackCollOffsetS1(id, ox), ftMotionCommandSetAttackCollOffsetS2(oy, oz)
#define TLBCTXT_BASEMASK 0xff800000
#define gsDPPipelineMode(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_PIPELINE, 1, mode)
#define C0_ECC 26
#define TXL2WORDS_4b(txls) MAX(1, ((txls)/16))
#define gsSPCullDisplayList(vstart,vend) { _SHIFTL(G_CULLDL, 24, 8) | _SHIFTL((vstart)*2, 0, 16), _SHIFTL((vend)*2, 0, 16) }
#define gsDPLoadTextureBlock_4b(timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_16b, 1, timg), gsDPSetTile(fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadBlock(G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC)
#define A_INIT 0x01
#define RAMROM_USER_DATA_SIZE (RAMROM_MSG_SIZE - RAMROM_MSG_HDR_SIZE)
#define OS_STATE_WAITING 8
#define C0_COMPARE 11
#define VI_STATUS_REG (VI_BASE_REG + 0x00)
#define __gsSP1Quadrangle_w1f(v0,v1,v2,v3,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v1, v2): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v2, v3): ((flag) == 2) ? __gsSP1Triangle_w1(v2, v3, v0): __gsSP1Triangle_w1(v3, v0, v1))
#define PFS_ERR_NEW_PACK 2
#define aSetLoop(pkt,a) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_SETLOOP, 24, 8); _a->words.w1 = (unsigned int)(a); }
#define G_IM_FMT_I 4
#define gsDPNoParam(cmd) { _SHIFTL(cmd, 24, 8), 0 }
#define A_SEGMENT 7
#define S16_MAX 0x7FFF
#define G_RM_PCL_SURF RM_PCL_SURF(1)
#define G_ACMUX_LOD_FRACTION 0
#define gdSPDefLights0(ar,ag,ab) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ { 0, 0, 0},0,{ 0, 0, 0},0,{ 0, 0, 0},0}}} }
#define gdSPDefLights1(ar,ag,ab,r1,g1,b1,x1,y1,z1) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}} }
#define gdSPDefLights2(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}} }
#define gdSPDefLights3(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}} }
#define gdSPDefLights4(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}} }
#define gdSPDefLights5(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}} }
#define G_AD_PATTERN (0 << G_MDSFT_ALPHADITHER)
#define gdSPDefLights7(ar,ag,ab,r1,g1,b1,x1,y1,z1,r2,g2,b2,x2,y2,z2,r3,g3,b3,x3,y3,z3,r4,g4,b4,x4,y4,z4,r5,g5,b5,x5,y5,z5,r6,g6,b6,x6,y6,z6,r7,g7,b7,x7,y7,z7) { {{ {ar,ag,ab},0,{ar,ag,ab},0}}, {{{ {r1,g1,b1},0,{r1,g1,b1},0,{x1,y1,z1},0}}, {{ {r2,g2,b2},0,{r2,g2,b2},0,{x2,y2,z2},0}}, {{ {r3,g3,b3},0,{r3,g3,b3},0,{x3,y3,z3},0}}, {{ {r4,g4,b4},0,{r4,g4,b4},0,{x4,y4,z4},0}}, {{ {r5,g5,b5},0,{r5,g5,b5},0,{x5,y5,z5},0}}, {{ {r6,g6,b6},0,{r6,g6,b6},0,{x6,y6,z6},0}}, {{ {r7,g7,b7},0,{r7,g7,b7},0,{x7,y7,z7},0}}} }
#define OS_TASK_USR2 0x0040
#define OS_TASK_USR3 0x0080
#define MI_INTR_VI 0x08
#define gsDPSetTextureImage(f,s,w,i) gsSetImage(G_SETTIMG, f, s, w, i)
#define gmColCommandEffectItemHold(joint,effect_id,flag,off_x,off_y,off_z,rng_x,rng_y,rng_z) gmColCommandEffectItemHoldS1(joint, effect_id, flag), gmColCommandEffectItemHoldS2(off_x, off_y), gmColCommandEffectItemHoldS3(off_z, rng_x), gmColCommandEffectItemHoldS4(rng_y, rng_z)
#define gDPSetColor(pkt,c,d) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(c, 24, 8); _g->words.w1 = (unsigned int)(d); }
#define INTPTR_MIN (-INTPTR_MAX - 1)
#define aobjEvent32SetValRate(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetValRate, (flags_mask), (dur))
#define G_TT_IA16 (3 << G_MDSFT_TEXTLUT)
#define PI_BASE_REG 0x04600000
#define gSPLoadUcodeL(pkt,ucode) gSPLoadUcode((pkt), OS_K0_TO_PHYSICAL(&ucode ##TextStart), OS_K0_TO_PHYSICAL(&ucode ##DataStart))
#define AOBJ_MATFLAG_TRAU AOBJ_MAT_BIT(nGCAnimTrackTraU)
#define FTSTATUS_PRESERVE_LOOPSFX (1 << nFTStatusPreserveLoopSFX)
#define GAME_PROF_SEND 12
#define ftMotionCommandMakeAttackCollS2(sz,ox) (GC_FIELDSET(sz, 16, 16) | GC_FIELDSET(ox, 0, 16))
#define G_BL_A_SHADE 2
#define G_SETFOGCOLOR 0xf8
#define GAME_DBG_DATA_SEND 3
#define gSPLookAtX(pkt,l) gDma2p((pkt),G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATX)
#define gSPLookAtY(pkt,l) gDma2p((pkt),G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATY)
#define alSeqpGetProgram alSeqpGetChlProgram
#define DPS_TEST_MODE_REG (DPS_BASE_REG + 0x04)
#define gsDPWord(wordhi,wordlo) gsImmp1(G_RDPHALF_1, (unsigned int)(wordhi)), gsImmp1(G_RDPHALF_2, (unsigned int)(wordlo))
#define gDPScisFillRectangle(pkt,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_FILLRECT, 24, 8) | _SHIFTL(MAX((lrx),0), 14, 10) | _SHIFTL(MAX((lry),0), 2, 10)); _g->words.w1 = (_SHIFTL(MAX((ulx),0), 14, 10) | _SHIFTL(MAX((uly),0), 2, 10)); }
#define INT8_MAX __INT8_MAX__
#define ERR_OSPIRAWSTARTDMA_SIZE 24
#define UINT_FAST32_MAX __UINT_FAST32_MAX__
#define G_TF_BILERP (2 << G_MDSFT_TEXTFILT)
#define G_MWO_MATRIX_XX_XY_I 0x00
#define gsDPSetMaskImage(i) gsDPSetDepthImage(i)
#define G_DL_PUSH 0x00
#define INT16_MIN (-INT16_MAX - 1)
#define TLBLO_EXLWR 0x28
#define PI_CART_ADDR_REG (PI_BASE_REG + 0x04)
#define FPCSR_EV 0x00000800
#define CONFIG_H 
#define RM_ZB_PCL_SURF(clk) Z_CMP | Z_UPD | CVG_DST_FULL | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define GC_FIELDMASK(start,len) (GC_BITMASK(len) << (start))
#define gsDPLoadTileGeneric(c,tile,uls,ult,lrs,lrt) { _SHIFTL(c, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12), _SHIFTL(tile, 24, 3) | _SHIFTL(lrs, 12, 12) | _SHIFTL(lrt, 0, 12)}
#define AL_FX_FLANGE 4
#define F_FRAMES_TO_SEC(q) ((float)((q) / TIME_SEC))
#define MOBJ_FLAG_PRIMCOLOR (1 << 9)
#define INT_LEAST64_MIN (-INT_LEAST64_MAX - 1)
#define A_OUT 0x02
#define F_PCT_TO_DEC(x) ((float)((x)*0.01F))
#define gmColCommandGotoS2(addr) ((uintptr_t)addr)
#define ERR_OSPROFILEINIT_CNT 62
#define C0_ENTRYHI 10
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define ftMotionPlayInterruptableVoice(fgm_id) (GC_FIELDSET(nFTMotionEventPlayLoopVoiceStoreInfo, 26, 6) | GC_FIELDSET(fgm_id, 0, 26))
#define TIME_HRS (TIME_MIN * 60)
#define SR_KX 0x00000080
#define SYVECTOR_INV_SWAP (1 << nSYVectorInvSwap)
#define OS_PRIORITY_APPMAX 127
#define G_CC_MODULATEI_PRIM2 COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE
#define PFS_FILE_NAME_LEN 16
#define gDPLoadBlock(pkt,tile,uls,ult,lrs,dxt) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_LOADBLOCK, 24, 8) | _SHIFTL(uls, 12, 12) | _SHIFTL(ult, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL((MIN(lrs,G_TX_LDBLK_MAX_TXL)), 12, 12) | _SHIFTL(dxt, 0, 12)); }
#define G_TRI_TXTR 0xca
#define NULL 0
#define C0_IMPSHIFT 8
#define SP_STATUS_IO_FULL 0x010
#define _G_CC_SPARSEST PRIMITIVE, TEXEL0, LOD_FRACTION, TEXEL0, PRIMITIVE, TEXEL0, LOD_FRACTION, TEXEL0
#define _LBRELOC_H_ 
#define G_BL_CLR_IN 0
#define IS_KPTESEG(x) ((u32)(x) >= KPTE_SHDUBASE)
#define INT32_C(c) __INT32_C(c)
#define RM_ZB_CLD_SURF(clk) Z_CMP | IM_RD | CVG_DST_SAVE | FORCE_BL | ZMODE_XLU | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_ALSNDPSETPAR 112
#define _RCP_H_ 
#define G_MTX 0xda
#define GC_COMMON_MAX_DLLINKS 65
#define gSPFogFactor(pkt,fm,fo) gMoveWd(pkt, G_MW_FOG, G_MWO_FOG, (_SHIFTL(fm,16,16) | _SHIFTL(fo,0,16)))
#define FTKEY_EVENT_BUTTON(b,t) FTKEY_EVENT_INSTRUCTION(nFTKeyEventButton, t), ((b) & U16_MAX)
#define RM_TEX_EDGE(clk) CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | TEX_EDGE | AA_EN | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define gDPLoadTextureBlock_4b(pkt,timg,fmt,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_16b, 1, timg); gDPSetTile(pkt, fmt, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height)+3)>>2)-1, CALC_DXT_4b(width)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, ((((width)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define OS_VI_PAL_HPF1 23
#define HOST_APP_CMD_READY 9
#define OS_PRIORITY_VIMGR 254
#define ftMotionCommandSetAfterImage(isw,ds) (GC_FIELDSET(nFTMotionEventSetAfterImage, 26, 6) | GC_FIELDSET(isw, 18, 8) | GC_FIELDSET(ds, 0, 18))
#define OS_PRIORITY_RMONSPIN 200
#define G_RDPHALF_1 0xe1
#define G_RDPHALF_2 0xf1
#define G_CC_REFLECTRGBDECALA ENVIRONMENT, 0, TEXEL0, SHADE, 0, 0, 0, TEXEL0
#define C0_PROBE 0x8
#define BUF_FREE_WO_NEXT 0x8000
#define EXC_BREAK EXC_CODE(9)
#define OS_EVENT_RDB_ACK_PROF 22
#define OS_PIM_STACKSIZE 4096
#define __attribute__(x) 
#define FTSTATUS_PRESERVE_SLOPECONTOUR (1 << nFTStatusPreserveSlopeContour)
#define FTCOMPUTER_COMMAND_TIMER_MASK (0x0F)
#define TLBRAND_RANDMASK 0x3f
#define alSeqpSetProgram alSeqpSetChlProgram
#define FTCATCHKIND_MASK_NONE (0)
#define OS_VI_BIT_DEFLICKINTERLACE 0x0008
#define LBBACKUP_CHARACTER_MASK_STARTER (LBBACKUP_CHARACTER_MASK_ALL & ~LBBACKUP_CHARACTER_MASK_UNLOCK)
#define G_MVO_LOOKATY (1*24)
#define gmColCommandPlayFGM(sfx_id) (GC_FIELDSET(nGMColEventPlayFGM, 26, 6) | GC_FIELDSET(sfx_id, 0, 26))
#define CAUSE_IPMASK 0x0000FF00
#define FTSTAT_CHARDATA_START 0x20000
#define ftMotionCommandSetParallelScriptS1() GC_FIELDSET(nFTMotionEventSetParallelScript, 26, 6)
#define G_RM_AA_ZB_TEX_TERR RM_AA_ZB_TEX_TERR(1)
#define _SHIFT _SHIFTL
#define TXL2WORDS(txls,b_txl) MAX(1, ((txls)*(b_txl)/8))
#define SP_UCODE_SIZE 4096
#define SObjGetPrev(sobj) ((SObj*)(sobj)->prev)
#define RI_SELECT_REG (RI_BASE_REG + 0x0C)
#define OS_VI_BIT_LORES 0x0100
#define gsDPSetDepthImage(i) gsSetImage(G_SETZIMG, 0, 0, 1, i)
#define ERR_OSSETTLBASID 13
#define FTCATCHKIND_MASK_YOSHISPECIALN (1 << nFTCatchKindYoshiSpecialN)
#define G_RDPLOADSYNC 0xe6
#define AL_PHASE_SUSTAIN 2
#define gImmp0(pkt,c) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); }
#define WATCHLO_ADDRMASK 0xfffffff8
#define ERR_OSAISETNEXTBUFFER_ADDR 15
#define OS_NSEC_TO_CYCLES(n) (((u64)(n) * (OS_CPU_COUNTER / 15625000LL)) / (1000000000LL / 15625000LL))
#define gImmp1(pkt,c,p0) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL((c), 24, 8); _g->words.w1 = (unsigned int)(p0); }
#define G_TX_CLAMP 0x2
#define PI_DOM_LAT_OFS 0x00
#define gsDPNoOp() gsDPNoParam(G_NOOP)
#define C0_MINREVMASK 0xf
#define GU_PARSEGBI_ALLMTX 16
#define G_BZ_PERSP 0
#define aDMEMMove(pkt,i,o,c) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_DMEMMOVE, 24, 8) | _SHIFTL(i, 0, 24); _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }
#define C0_EPC 14
#define gDPSetFogColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETFOGCOLOR, r,g,b,a)
#define G_RM_NOOP2 RM_NOOP(2)
#define gDPSetDepthImage(pkt,i) gSetImage(pkt, G_SETZIMG, 0, 0, 1, i)
#define CONT_RELATIVE 0x0002
#define PIF_ROM_START 0x1FC00000
#define ERR_OSVISWAPBUFFER_ADDR 47
#define gDPLoadTLUT_pal16(pkt,pal,dram) { gDPSetTextureImage(pkt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dram); gDPTileSync(pkt); gDPSetTile(pkt, 0, 0, 0, (256+(((pal)&0xf)*16)), G_TX_LOADTILE, 0 , 0, 0, 0, 0, 0, 0); gDPLoadSync(pkt); gDPLoadTLUTCmd(pkt, G_TX_LOADTILE, 15); gDPPipeSync(pkt) }
#define gmColCommandEnd() GC_FIELDSET(nGMColEventEnd, 26, 6)
#define AI_CONTROL_DMA_OFF 0x00
#define SR_KSU_USR 0x00000010
#define SP_SET_CPUSIGNAL SP_SET_SIG4
#define RP(x) rp->r_ ##x
#define UNITY_PITCH 0x8000
#define G_RM_AA_ZB_DEC_LINE2 RM_AA_ZB_DEC_LINE(2)
#define ftMotionCommandSetThrow(addr) ftMotionCommandSetThrowS1(), ftMotionCommandSetThrowS2(addr)
#define PTRDIFF_MAX __PTRDIFF_MAX__
#define gDPLoadTextureBlockYuvS(pkt,timg,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * 1)+7)>>3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSPFogPosition(min,max) gsMoveWd(G_MW_FOG, G_MWO_FOG, (_SHIFTL((128000/((max)-(min))),16,16) | _SHIFTL(((500-(min))*256/((max)-(min))),0,16)))
#define MakeTexRect(xh,yh,flip,tile,xl,yl,s,t,dsdx,dtdy) G_TEXRECT, xh, yh, 0, flip, 0, tile, xl, yl, s, t, dsdx, dtdy
#define ERR_ALSEQP_POLY_VOICE 104
#define LBPARTICLE_FLAG_GRAVITY 0x1
#define gSP1Quadrangle(pkt,v0,v1,v2,v3,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_QUAD, 24, 8)| __gsSP1Quadrangle_w1f(v0, v1, v2, v3, flag)); _g->words.w1 = __gsSP1Quadrangle_w2f(v0, v1, v2, v3, flag); }
#define R_VEC (K1BASE+0x1fc00000)
#define C0_REVMASK 0xff
#define SP_DMA_DMEM 0x0000
#define gDPSetDepthSource(pkt,src) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_ZSRCSEL, 1, src)
#define G_IM_SIZ_4b_LINE_BYTES G_IM_SIZ_4b_BYTES
#define VI_H_SYNC_LEAP_REG VI_LEAP_REG
#define LBPARTICLE_OPCODE_SETENVBLEND 0xD0
#define DOBJ_FLAG_NONE (0)
#define G_RM_AA_DEC_LINE2 RM_AA_DEC_LINE(2)
#define gsImmp0(c) { _SHIFTL((c), 24, 8) }
#define RM_NOOP(clk) GBL_c ##clk(0, 0, 0, 0)
#define gsImmp2(c,p0,p1) { _SHIFTL((c), 24, 8), _SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8)}
#define gsImmp3(c,p0,p1,p2) { _SHIFTL((c), 24, 8), (_SHIFTL((p0), 16, 16) | _SHIFTL((p1), 8, 8) | _SHIFTL((p2), 0, 8))}
#define G_RM_RA_ZB_OPA_SURF RM_RA_ZB_OPA_SURF(1)
#define AOBJ_CAM_BIT(track) (1u << ((track) - nGCAnimTrackCameraStart))
#define AI_CONTROL_REG (AI_BASE_REG + 0x08)
#define RM_AA_ZB_TEX_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_OPA | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define SP_IBIST_GO 0x02
#define G_RM_AA_TEX_EDGE2 RM_AA_TEX_EDGE(2)
#define BLOCKSIZE 32
#define aobjEvent32SetValAfter(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetValAfter, (flags_mask), (dur))
#define alCSPGetFXMix alCSPGetChlFXMix
#define ALIGNOFFST (ALIGNSZ - 1)
#define G_RM_ZB_CLD_SURF RM_ZB_CLD_SURF(1)
#define LBPARTICLE_OPCODE_NOMASKST 0xAE
#define OS_OTHERS 2
#define gDPSetScissorFrac(pkt,mode,ulx,uly,lrx,lry) { Gfx *_g = (Gfx *)pkt; _g->words.w0 = _SHIFTL(G_SETSCISSOR, 24, 8) | _SHIFTL((int)((ulx)), 12, 12) | _SHIFTL((int)((uly)), 0, 12); _g->words.w1 = _SHIFTL(mode, 24, 2) | _SHIFTL((int)((lrx)), 12, 12) | _SHIFTL((int)((lry)), 0, 12); }
#define aobjEvent32SetAnim(flags_mask,payload) aobjEvent32(nGCAnimEvent32SetAnim, (flags_mask), (payload))
#define aADPCMdec(pkt,f,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_ADPCM, 24, 8) | _SHIFTL(f, 16, 8); _a->words.w1 = (unsigned int)(s); }
#define NBITS(t) ((int) (sizeof(t) * 8) )
#define OS_RG_ALIGN_2B 2
#define CACH_PD 0x1
#define A_POLEF 14
#define gDPLoadMultiTile_4b(pkt,timg,tmem,rtile,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, G_IM_SIZ_8b, ((width)>>1), timg); gDPSetTile(pkt, fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadTile( pkt, G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC) }
#define _LBBACKUP_H_ 
#define G_ACMUX_0 7
#define VI_CONTROL_REG VI_STATUS_REG
#define FTCOMPUTER_COMMAND_PKTHUNDER (0xF3)
#define _COMMON_H 
#define SI_PIF_ADDR_WR64B_REG (SI_BASE_REG + 0x10)
#define gmColCommandGoto(addr) gmColCommandGotoS1(), gmColCommandGotoS2(addr)
#define ftMotionCommandMakeAttackCollS3(oy,oz) (GC_FIELDSET(oy, 16, 16) | GC_FIELDSET(oz, 0, 16))
#define gSPTextureRectangleFlip(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXRECTFLIP, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); gImmp1(pkt, G_RDPHALF_1, (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16))); gImmp1(pkt, G_RDPHALF_2, (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16))); }
#define GOBJ_FLAG_HIDDEN (1 << 0)
#define gSPClipRatio(pkt,r) { gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RNX, FR_NEG_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RNY, FR_NEG_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RPX, FR_POS_ ##r); gMoveWd(pkt, G_MW_CLIP, G_MWO_CLIP_RPY, FR_POS_ ##r); }
#define G_SETCONVERT 0xec
#define gsDPLoadSync() gsDPNoParam(G_RDPLOADSYNC)
#define FTCOMPUTER_COMMAND_OPCODE_BITS (0x4)
#define OS_RG_ALIGN_4B 4
#define RDRAM_1_END 0x003FFFFF
#define OS_STATE_STOPPED 1
#define PSTATEMASK 0x00C0
#define ERR_OSPROFILESTOP_TIMER 69
#define MOBJ_FLAG_ENVCOLOR (1 << 10)
#define MI_INTR_REG (MI_BASE_REG + 0x08)
#define sDPRGBColor(cmd,r,g,b,a) gsDPSetColor(cmd, (_SHIFTL(r, 24, 8) | _SHIFTL(g, 16, 8) | _SHIFTL(b, 8, 8) | _SHIFTL(a, 0, 8)))
#define G_LOADTILE 0xf4
#define DPC_CLR_FREEZE 0x0004
#define SSB_C_MACROS_H 
#define gsDPSetColorDither(mode) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_RGBDITHER, 2, mode)
#define CONT_NO_RESPONSE_ERROR 0x8
#define PCLEANEXCL 0x0080
#define TLBPGMASK_4K 0x0
#define I_MIN_TO_SEC(q) ((int)((q)*TIME_SEC))
#define LBBACKUP_UNLOCK_MASK_PURIN (1 << nLBBackupUnlockPurin)
#define LBBACKUP_UNLOCK_MASK_PRIZE (LBBACKUP_UNLOCK_MASK_ALL & ~LBBACKUP_UNLOCK_MASK_NEWCOMERS)
#define G_CC_MODULATERGB G_CC_MODULATEI
#define CUBE(x) ((x) * (x) * (x))
#define HOST_DBG_DATA_ACK 4
#define OS_VI_MPAL_LAF1 31
#define gDPNoOpTag(pkt,tag) gDPParam(pkt, G_NOOP, tag)
#define FPCSR_FO 0x00000010
#define G_MWO_bLIGHT_2 0x1c
#define IS_KSEG2(x) ((u32)(x) >= K2BASE && (u32)(x) < KPTE_SHDUBASE)
#define G_CC_MODULATERGB_PRIM G_CC_MODULATEI_PRIM
#define aobjEvent32SetVal0Rate(flags_mask,dur) aobjEvent32(nGCAnimEvent32SetVal0Rate, (flags_mask), (dur))
#define L_TRIG CONT_L
#define gmColCommandSubroutine(addr) gmColCommandSubroutineS1(), gmColCommandSubroutineS2(addr)
#define lbRelocLoadFilesListed(file_ids,out_ptrs) lbRelocLoadFilesExtern ( file_ids, ARRAY_COUNT(file_ids), out_ptrs, syTaskmanMalloc ( lbRelocGetAllocSize ( file_ids, ARRAY_COUNT(file_ids) ), 0x10 ) )
#define aSetBuffer(pkt,f,i,o,c) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = (_SHIFTL(A_SETBUFF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(i, 0, 16)); _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16); }
#define G_RM_RA_ZB_OPA_DECAL RM_RA_ZB_OPA_DECAL(1)
#define aobjEvent32JumpRaw(flags_val,payload_val,addr) aobjEvent32(nGCAnimEvent32Jump, (flags_val), (payload_val)), (u32)(addr)
#define VI_H_WIDTH_REG VI_WIDTH_REG
#define RDRAM_DEVICE_ID_REG (RDRAM_BASE_REG + 0x04)
#define gsSPPopMatrix(n) gsSPPopMatrixN( (n), 1)
#define G_TRI_SHADE_TXTR 0xce
#define aobjEvent32End() aobjEvent32(nGCAnimEvent32End, 0, 0)
#define RM_AA_ZB_OPA_SURF(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define RDRAM_DELAY_REG (RDRAM_BASE_REG + 0x08)
#define OS_IM_AI 0x00040401
#define OS_RG_ALIGN_8B 8
#define G_FOG 0x00010000
#define CONT_TYPE_MASK 0x1f07
#define DCACHE_LINESIZE 16
#define _SYTASKMAN_H_ 
#define SEGMENT_OFFSET(a) ((unsigned int)(a)&0x00ffffff)
#define __gsSP1Triangle_w1f(v0,v1,v2,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v1, v2): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v2, v0): __gsSP1Triangle_w1(v2, v0, v1))
#define LBBACKUP_ERROR_RANDOMKNOCKBACK (1 << nLBBackupErrorRandomKnockback)
#define GC_FIELDPREP(x,start,len) (((x)&GC_BITMASK(len)) << (start))
#define SIZE_MAX __SIZE_MAX__
#define gsDPSetTexturePersp(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTPERSP, 1, type)
#define INT_LEAST64_MAX __INT_LEAST64_MAX__
#define DOBJ_PARENT_NULL ((DObj*)1)
#define G_CV_K1 -43
#define ERR_OSSETTHREADPRI 4
#define G_IM_FMT_CI 2
#define AL_PHASE_SUSTREL 4
#define WATCHLO_RTRAP 0x00000002
#define ftMotionCommandMakeAttackColl(aid,gid,jid,dmg,reb,elem,sz,ox,oy,oz,ang,kbs,kbw,ga,sd,fl,fk,kbb) ftMotionCommandMakeAttackCollS1(aid, gid, jid, dmg, reb, elem), ftMotionCommandMakeAttackCollS2(sz, ox), ftMotionCommandMakeAttackCollS3(oy, oz), ftMotionCommandMakeAttackCollS4(ang, kbs, kbw, ga), ftMotionCommandMakeAttackCollS5(sd, fl, fk, kbb)
#define G_AC_DITHER (3 << G_MDSFT_ALPHACOMPARE)
#define G_CV_K4 114
#define VI_CTRL_DITHER_FILTER_ON 0x10000
#define gsSPLineW3D(v0,v1,wd,flag) { _SHIFTL(G_LINE3D, 24, 8)|__gsSPLine3D_w1f(v0, v1, wd, flag), 0 }
#define G_CCMUX_NOISE 7
#define ftMotionCommandStopLoopSFX(id) (GC_FIELDSET(nFTMotionEventStopLoopSFX, 26, 6) | GC_FIELDSET(id, 0, 26))
#define I_CONTROLLER_RANGE_MAX 80
#define G_RM_ADD RM_ADD(1)
#define TLBHI_NPID 255
#define GMHITCOLLISION_FLAG_ITEM (1 << 2)
#define G_SETTILE 0xf5
#define GU_BLINKRDP_EXTRACT 2
#define DPC_STATUS_START_VALID 0x400
#define OS_IM_DP 0x00200401
#define G_LOADBLOCK 0xf3
#define EXC_CODE(x) ((x)<<2)
#define CHNL_ERR_OVERRUN 0x40
#define ZMODE_DEC 0xc00
#define FORCE_BL 0x4000
#define F3DEX_GBI 
#define GU_PARSE_READY 3
#define FILTER_CLAMP 1
#define FTSTATUS_PRESERVE_DAMAGEPLAYER (1 << nFTStatusPreserveDamagePlayer)
#define FTSTATUS_PRESERVE_EFFECT (1 << nFTStatusPreserveEffect)
#define G_ZS_PRIM (1 << G_MDSFT_ZSRCSEL)
#define DIAGNOSTIC_RESTORE() _Pragma("GCC diagnostic pop")
#define SP_STATUS_INTR_BREAK 0x040
#define ftMotionCommandLoopEnd() GC_FIELDSET(nFTMotionEventLoopEnd, 26, 6)
#define F_MIN_TO_SEC(q) ((float)((q)*TIME_SEC))
#define gDPTileSync(pkt) gDPNoParam(pkt, G_RDPTILESYNC)
#define FALSE 0
#define ERR_OSVISETYSCALE_VIMGR 42
#define G_MDSFT_BLENDER 16
#define G_MWO_SEGMENT_0 0x00
#define CONFIG_EC_3_1 0x1
#define gmColCommandEffectS1(joint,effect_id,flag) (GC_FIELDSET(nGMColEventEffect, 26, 6) | GC_FIELDSET(joint, 19, 7) | GC_FIELDSET(effect_id, 10, 9) | GC_FIELDSET(flag, 0, 10))
#define THPROF_IDMAX 64
#define MI_CLR_INIT 0x0080
#define gmColCommandEffectS2(off_x,off_y) (GC_FIELDSET(off_x, 16, 16) | GC_FIELDSET(off_y, 0, 16))
#define HOST_DBG_CMD_READY 2
#define GLUE(a,b) a ##b
#define gDPSetKeyGB(pkt,cG,sG,wG,cB,sB,wB) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETKEYGB, 24, 8) | _SHIFTL(wG, 12, 12) | _SHIFTL(wB, 0, 12)); _g->words.w1 = (_SHIFTL(cG, 24, 8) | _SHIFTL(sG, 16, 8) | _SHIFTL(cB, 8, 8) | _SHIFTL(sB, 0, 8)); }
#define _LBCOMMON_H_ 
#define G_TRI_FILL_ZBUFF 0xc9
#define ERR_OSUNMAPTLB 12
#define G_ACMUX_PRIM_LOD_FRAC 6
#define EndUncodeInfoArray NullUcodeInfo
#define K1_TO_K0(x) ((u32)(x)&0x9FFFFFFF)
#define GMSTAFFROLL_PERIOD_PARA_FONT_INDEX 0x3F
#define SR_ERL 0x00000004
#define DPC_CLR_CMD_CTR 0x0100
#define G_TX_WRAP 0
#define _MBI_H_ 
#define G_MWO_SEGMENT_6 0x06
#define MQ_IS_EMPTY(mq) (MQ_GET_COUNT(mq) == 0)
#define G_RM_AA_ZB_OPA_SURF2 RM_AA_ZB_OPA_SURF(2)
#define gSPLineW3D(pkt,v0,v1,wd,flag) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_LINE3D, 24, 8)| __gsSPLine3D_w1f(v0, v1, wd, flag); _g->words.w1 = 0; }
#define MOBJ_FLAG_LIGHT1 (1 << 12)
#define MOBJ_FLAG_LIGHT2 (1 << 13)
#define AL_FX_ECHO 5
#define FTSTATUS_PRESERVE_RUMBLE (1 << nFTStatusPreserveRumble)
#define A_CONTINUE 0x00
#define RAMROM_BOOTADDR_OFFSET 0x8
#define COBJ_MASK_DLLINK(r) (1ULL << (r))
#define G_RM_AA_ZB_XLU_INTER RM_AA_ZB_XLU_INTER(1)
#define G_IM_SIZ_8b_TILE_BYTES G_IM_SIZ_8b_BYTES
#define DEVICE_TYPE_SRAM 3
#define PI_DOM_RLS_OFS 0x0C
#define G_RDPSETOTHERMODE 0xef
#define G_RM_OPA_CI RM_OPA_CI(1)
#define MOBJ_FLAG_ALPHA (1 << 0)
#define RM_AA_PCL_SURF(clk) AA_EN | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define INT_FAST32_MAX __INT_FAST32_MAX__
#define DOBJ_ARRAY_MAX 18
#define G_CC_TEMPLERP TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0
#define S32_MAX 0x7FFFFFFF
#define UNUSED __attribute__((unused))
#define gsDPSetColorImage(f,s,w,i) gsSetImage(G_SETCIMG, f, s, w, i)
#define ftMotionCommandSetSlopeContour(flag) (GC_FIELDSET(nFTMotionEventSetSlopeContour, 26, 6) | GC_FIELDSET(flag, 0, 26))
#define aobjEvent32Cmd12(flags_val,payload_val) aobjEvent32(ANIM_CMD_12, (flags_val), (payload_val))
#define aobjEvent32Cmd16(flags_val,payload_val) aobjEvent32(ANIM_CMD_16, (flags_val), (payload_val))
#define aobjEvent32Cmd17(flags_val,payload_val) aobjEvent32(ANIM_CMD_17, (flags_val), (payload_val))
#define gmColCommandSetColor1S1() GC_FIELDSET(nGMColEventSetColor1, 26, 6)
#define VI_CTRL_TYPE_32 0x00003
#define FLOAT_MAX 3.4028235e38
#define ftMotionCommandSetHitStatusPartID(jid,hs) (GC_FIELDSET(nFTMotionEventSetHitStatusPartID, 26, 6) | GC_FIELDSET(jid, 19, 7) | GC_FIELDSET(hs, 0, 19))
#define DPC_STATUS_DMA_BUSY 0x100
#define aobjEvent32Cmd22(flags_val,payload_val) aobjEvent32(ANIM_CMD_22, (flags_val), (payload_val))
#define aobjEvent32Cmd23(flags_val,payload_val) aobjEvent32(ANIM_CMD_23, (flags_val), (payload_val))
#define UINT_FAST8_MAX __UINT_FAST8_MAX__
#define PI_BSD_DOM1_PGS_REG (PI_BASE_REG + 0x1C)
#define F32_HALF (F32_MAX / 2)
#define RDRAM_START RDRAM_0_START
#define G_RM_TEX_EDGE2 RM_TEX_EDGE(2)
#define gDPSetRenderMode(pkt,c0,c1) gSPSetOtherMode(pkt, G_SETOTHERMODE_L, G_MDSFT_RENDERMODE, 29, (c0) | (c1))
#define M_HVQMTASK 7
#define SR_IMASK0 0x0000ff00
#define SR_IMASK1 0x0000fe00
#define SR_IMASK2 0x0000fc00
#define SR_IMASK3 0x0000f800
#define SR_IMASK4 0x0000f000
#define SR_IMASK5 0x0000e000
#define SR_IMASK7 0x00008000
#define SR_BEV 0x00400000
#define C0_INX 0
#define UINT8_MAX __UINT8_MAX__
#define RM_AA_XLU_LINE(clk) AA_EN | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define GU_PARSE_RDP_TYPE 2
#define aEnvMixer(pkt,f,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_ENVMIXER, 24, 8) | _SHIFTL(f, 16, 8); _a->words.w1 = (unsigned int)(s); }
#define ERR_OSMAPTLB_ASID 11
#define DPC_CLR_FLUSH 0x0010
#define RM_AA_ZB_TEX_INTER(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | CVG_X_ALPHA | ALPHA_CVG_SEL | ZMODE_INTER | TEX_EDGE | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define RM_XLU_SURF(clk) IM_RD | CVG_DST_FULL | FORCE_BL | ZMODE_OPA | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gsSPLight(l,n) gsDma2p( G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,(n)*24+24)
#define RM_ZB_OPA_DECAL(clk) Z_CMP | CVG_DST_FULL | ALPHA_CVG_SEL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define G_RM_AA_ZB_OPA_SURF RM_AA_ZB_OPA_SURF(1)
#define GU_PARSEGBI_SHOWDMA 8
#define TAKE_MIN(a,b) if ((a) > (b)) (a) = (b)
#define OS_EVENT_FAULT 12
#define C0_WIRED 6
#define OS_SIM_STACKSIZE 4096
#define gDPSetHilite2Tile(pkt,tile,hilite,width,height) gDPSetTileSize(pkt, tile, (hilite)->h.x2 & 0xfff, (hilite)->h.y2 & 0xfff, ((((width)-1)*4)+(hilite)->h.x2) & 0xfff, ((((height)-1)*4)+(hilite)->h.y2) & 0xfff)
#define OS_EVENT_RDB_DATA_DONE 17
#define GAME_APP_DATA_READY 10
#define G_CC_SHADE 0, 0, 0, SHADE, 0, 0, 0, SHADE
#define ftMotionPlayFGM(fgm_id) (GC_FIELDSET(nFTMotionEventPlayFGM, 26, 6) | GC_FIELDSET(fgm_id, 0, 26))
#define AI_BASE_REG 0x04500000
#define G_RM_FOG_SHADE_A GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA)
#define G_ACMUX_1 6
#define aInterleave(pkt,l,r) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_INTERLEAVE, 24, 8); _a->words.w1 = _SHIFTL(l, 16, 16) | _SHIFTL(r, 0, 16); }
#define GMSTAFFROLL_DASH_PARA_FONT_INDEX 0x40
#define KUSIZE 0x80000000
#define G_CC_MODULATERGB2 G_CC_MODULATEI2
#define G_RM_VISCVG RM_VISCVG(1)
#define HOST_PROF_REQ 11
#define UINT32_C(c) __UINT32_C(c)
#define TEX_EDGE 0x0000
#define G_TD_CLAMP (0 << G_MDSFT_TEXTDETAIL)
#define OS_IM_PI 0x00100401
#define PI_WR_LEN_REG (PI_BASE_REG + 0x0C)
#define G_MV_LIGHT 10
#define G_IM_SIZ_8b_BYTES 1
#define G_RM_AA_ZB_DEC_LINE RM_AA_ZB_DEC_LINE(1)
#define G_SETENVCOLOR 0xfb
#define UINT_FAST64_MAX __UINT_FAST64_MAX__
#define RM_AA_ZB_OPA_TERR(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define INT_FAST32_MIN (-INT_FAST32_MAX - 1)
#define SP_STATUS_REG (SP_BASE_REG + 0x10)
#define GBL_c2(m1a,m1b,m2a,m2b) (m1a) << 28 | (m1b) << 24 | (m2a) << 20 | (m2b) << 16
#define SI_STATUS_DMA_ERROR 0x0008
#define TLBLO_NONCOHRNT 0x18
#define ftMotionCommandPlayLoopSFXStoreInfo(id) (GC_FIELDSET(nFTMotionEventPlayLoopSFXStoreInfo, 26, 6) | GC_FIELDSET(id, 0, 26))
#define gSPLoadUcodeEx(pkt,uc_start,uc_dstart,uc_dsize) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(uc_dstart); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_LOAD_UCODE,24,8)| _SHIFTL((int)(uc_dsize)-1,0,16)); _g->words.w1 = (unsigned int)(uc_start); }
#define OS_STATE_RUNNING 4
#define ERR_OSREADHOST_SIZE 71
#define RAMROM_PIF2BOOTSTRAP_OFFSET 0x1000
#define gsDPSetTileSize(t,uls,ult,lrs,lrt) gsDPLoadTileGeneric(G_SETTILESIZE, t, uls, ult, lrs, lrt)
#define OS_VI_PAL_LPF2 19
#define RAMROM_MSG_SIZE (RAMROM_BUF_SIZE * 6)
#define GOBJ_FLAG_NONE (0)
#define ZMODE_XLU 0x800
#define AL_FX_BUFFER_SIZE 8192
#define G_ACMUX_TEXEL0 1
#define G_ACMUX_TEXEL1 2
#define ZMODE_OPA 0
#define AOBJ_MATFLAG_PALETTEID AOBJ_MAT_BIT(nGCAnimTrackPaletteID)
#define RI_CONFIG_REG (RI_BASE_REG + 0x04)
#define ftMotionCommandSetAttackCollSoundLevel(id,lvl) (GC_FIELDSET(nFTMotionEventSetAttackCollSoundLevel, 26, 6) | GC_FIELDSET(id, 23, 3) | GC_FIELDSET(lvl, 20, 3))
#define G_MW_FORCEMTX 0x0c
#define OS_IM_SP 0x00010401
#define PFS_ID_BANK_1M 4
#define _SYSCHEDULER_H_ 
#define G_TX_NOLOD 0
#define AL_KEY_MAX 127
#define gsSPNumLights(n) gsMoveWd( G_MW_NUMLIGHT, G_MWO_NUMLIGHT, NUML(n))
#define G_MWO_MATRIX_WX_WY_F 0x38
#define G_MWO_MATRIX_WX_WY_I 0x18
#define AL_GAIN_CHANGE_TIME 1000
#define FTSTATUS_PRESERVE_TEXTUREPART (1 << nFTStatusPreserveTexturePart)
#define TLBINX_INXMASK 0x3f
#define GPACK_RGBA8888(r,g,b,a) (((r)<<24) | ((g)<<16) | ((b)<<8) | (a))
#define SP_UCODE_DATA_SIZE 2048
#define BOOT_ADDRESS_INDY 0x88100000
#define FTCOMPUTER_STICK_AUTOFULL (0x7F)
#define G_RM_ZB_XLU_SURF2 RM_ZB_XLU_SURF(2)
#define CACHERR_EB 0x02000000
#define CACHERR_EC 0x40000000
#define SI_BASE_REG 0x04800000
#define CACHERR_EI 0x01000000
#define LEO_TRACK_MODE 2
#define FIX32TOF(x) ((float)(x) * (1.0f / (float)0x00010000))
#define CACHERR_ER 0x80000000
#define CACHERR_ES 0x08000000
#define CACHERR_ET 0x10000000
#define LBPARTICLE_OPCODE_ADDVELRAND 0xA8
#define G_MTX_MODELVIEW 0x00
#define DObjGetChild(dobj) ((DObj*)(dobj)->child)
#define OS_ERROR_MAGIC 0x6b617479
#define RM_AA_ZB_DEC_LINE(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_SAVE | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | ZMODE_DEC | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define gsSPSetOtherMode(cmd,sft,len,data) { _SHIFTL(cmd,24,8)|_SHIFTL(32-(sft)-(len),8,8)|_SHIFTL((len)-1,0,8), (unsigned int)(data) }
#define ftMotionCommandSetFlag1(val) (GC_FIELDSET(nFTMotionEventSetFlag1, 26, 6) | GC_FIELDSET(val, 0, 26))
#define TLBCTXT_BASESHIFT 23
#define GMCOMMON_PLAYERS_MAX 4
#define ERR_ALHEAPFIRSTBLOCK 127
#define C0_ERROR_EPC 30
#define AL_FX_CHORUS 3
#define OS_IM_VI 0x00080401
#define G_MAXFBZ 0x3fff
#define PFS_ERR_BAD_DATA 6
#define TLBPGMASK_16K 0x6000
#define AL_CMIDI_LOOPSTART_CODE 0x2E
#define DCACHE_SIZE 0x2000
#define EXC_IBE EXC_CODE(6)
#define gmColCommandWait(frames) (GC_FIELDSET(nGMColEventWait, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define FTKEY_EVENT_END() FTKEY_EVENT_INSTRUCTION(nFTKeyEventEnd, 0)
#define PFS_SECTOR_PER_BANK 32
#define CLR_ON_CVG 0x80
#define G_MV_VIEWPORT 8
#define RAMROM_RMON_WRITE_ADDR (RAMROM_MSG_ADDR + (3 * RAMROM_BUF_SIZE))
#define ICACHE_LINESIZE 32
#define SP_IBIST_FAILED 0x78
#define LBPARTICLE_OPCODE_LOOP 0xFB
#define G_CC_TRILERP TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0
#define F_MIN_TO_TICS(q) ((float)((q)*TIME_MIN))
#define FTSTATUS_PRESERVE_AFTERIMAGE (1 << nFTStatusPreserveAfterImage)
#define gsSPMatrix(m,p) gsDma2p( G_MTX,(m),sizeof(Mtx),(p)^G_MTX_PUSH,0)
#define G_MV_MMTX 2
#define G_SC_NON_INTERLACE 0
#define aLoadBuffer(pkt,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_LOADBUFF, 24, 8); _a->words.w1 = (unsigned int)(s); }
#define ftMotionCommandSetDamageThrownS1() GC_FIELDSET(nFTMotionEventSetDamageThrown, 26, 6)
#define GU_PARSERDP_PRHISTO 4
#define M_DTOR_F(x) ((f32)((x) * (f32)M_DTOR))
#define PRINTF_CHECK(fmtpos,vargpos) __attribute__((__format__(__printf__, (fmtpos), (vargpos))))
#define GMSTAFFROLL_ASCII_NUMBER_TO_PARA_FONT_INDEX(c) (0x35 + ('9' - (c)))
#define LBBACKUP_UNLOCK_MASK_SOUNDTEST (1 << nLBBackupUnlockSoundTest)
#define DL_BM_OVERHEAD (12)
#define RAMROM_MSG_ADDR (RAMROM_SIZE - RAMROM_MSG_SIZE)
#define D_CBUTTONS CONT_D
#define SObjGetSprite(sobj) ((Sprite*)&(sobj)->sprite)
#define LBPARTICLE_ATTACH_DOBJ_NUM_MAX 8
#define G_IM_SIZ_32b_LINE_BYTES 2
#define OS_VI_GAMMA_DITHER_OFF 0x0008
#define GCCc1w0(saRGB1,mRGB1) (_SHIFTL((saRGB1), 5, 4) | _SHIFTL((mRGB1), 0, 5))
#define GCCc1w1(sbRGB1,saA1,mA1,aRGB1,sbA1,aA1) (_SHIFTL((sbRGB1), 24, 4) | _SHIFTL((saA1), 21, 3) | _SHIFTL((mA1), 18, 3) | _SHIFTL((aRGB1), 6, 3) | _SHIFTL((sbA1), 3, 3) | _SHIFTL((aA1), 0, 3))
#define FPCSR_C 0x00800000
#define OS_VI_BIT_NORMALINTERLACE 0x0004
#define C_ILT 0x4
#define ERR_OSGETREGIONBUFSIZE 56
#define G_IM_SIZ_4b 0
#define G_IM_SIZ_4c 4
#define G_CCMUX_PRIMITIVE_ALPHA 10
#define ERR_OSVISETSPECIAL_VIMGR 44
#define LBPARTICLE_OPCODE_SETATTACHID 0xBF
#define alSeqpSetFXMix alSeqpSetChlFXMix
#define PFS_DIR_FULL 8
#define AL_KEY_MIN 0
#define FPCSR_RM_MASK 0x00000003
#define NUM_SEGMENTS (16)
#define FTCOMPUTER_COMMAND_TIMER_BITS (0x4)
#define MI_INTR_MASK_AI 0x04
#define G_IM_SIZ_8b_LOAD_BLOCK G_IM_SIZ_16b
#define G_MDSFT_ALPHADITHER 4
#define SR_IMASK6 0x0000c000
#define SP_IBIST_REG 0x04080004
#define G_SETSCISSOR 0xed
#define G_RDPFULLSYNC 0xe9
#define LBPARTICLE_OPCODE_SETVELANGLE 0xA9
#define ftMotionCommandRefreshAttackCollID(id) (GC_FIELDSET(nFTMotionEventRefreshAttackCollID, 26, 6) | GC_FIELDSET(id, 0, 26))
#define G_RM_ZB_OPA_DECAL RM_ZB_OPA_DECAL(1)
#define _LBTRANSITION_H_ 
#define SR_IMASK8 0x00000000
#define CONFIG_EC_2_1 0x0
#define OS_EVENT_RDB_FLUSH_PROF 21
#define ERR_ALSEQP_MAP_VOICE 102
#define EFFECT_ALLOC_NUM 38
#define SP_BASE_REG 0x04040000
#define B_BUTTON CONT_B
#define gmColCommandSetColor1(r,g,b,a) gmColCommandSetColor1S1(), gmColCommandSetColor1S2(r, g, b, a)
#define gmColCommandSetColor2(r,g,b,a) gmColCommandSetColor2S1(), gmColCommandSetColor2S2(r, g, b, a)
#define FLOAT_NEG_MAX -FLOAT_MAX
#define DPC_CURRENT_REG (DPC_BASE_REG + 0x08)
#define OS_PHYSICAL_TO_K1(x) (void*)(((u32)(x) + 0xa0000000))
#define AL_EVTQ_END 0x7fffffff
#define CONFIG_DC_SHFT 6
#define DPC_STATUS_FREEZE 0x002
#define gmColEventAdvance(event,type) ((event) = (void*)((uintptr_t)event + sizeof(type)))
#define G_RM_ZB_XLU_DECAL2 RM_ZB_XLU_DECAL(2)
#define TLBHI_VPN2MASK 0xffffe000
#define ERR_OSCREATEREGION_SIZE 51
#define _OBJSCRIPT_H_ 
#define SR_CU2 0x40000000
#define ftMotionCommandSetDamageThrown(addr) ftMotionCommandSetDamageThrownS1(), ftMotionCommandSetDamageThrownS2(addr)
#define AOBJ_FLAG_SCAXYZ (AOBJ_FLAG_SCAX | AOBJ_FLAG_SCAY | AOBJ_FLAG_SCAZ)
#define alCSPSetProgram alCSPSetChlProgram
#define G_IM_SIZ_16b_TILE_BYTES G_IM_SIZ_16b_BYTES
#define G_RM_AA_SUB_SURF RM_AA_SUB_SURF(1)
#define CAUSE_EXCSHIFT 2
#define gsDPNoOpTag(tag) gsDPParam(G_NOOP, tag)
#define A_CLEARBUFF 2
#define FTCOMPUTER_COMMAND_BUTTON_B_RELEASE (nFTComputerCommandButtonBRelease << FTCOMPUTER_COMMAND_TIMER_BITS)
#define TLBLO_PFNMASK 0x3fffffc0
#define gsDPSetFillColor(d) gsDPSetColor(G_SETFILLCOLOR, (d))
#define MI_INIT_MODE_REG (MI_BASE_REG + 0x00)
#define MI_INTR_MASK_DP 0x20
#define ftMotionCommandEffectItemHoldS3(oz,rx) (GC_FIELDSET(oz, 16, 16) | GC_FIELDSET(rx, 0, 16))
#define TAKE_MAX(a,b) if ((a) < (b)) (a) = (b)
#define SP_CLR_YIELD SP_CLR_SIG0
#define LBBACKUP_UNLOCK_MASK_CAPTAIN (1 << nLBBackupUnlockCaptain)
#define G_CC_HILITERGBA2 ENVIRONMENT, COMBINED, TEXEL0, COMBINED, ENVIRONMENT, COMBINED, TEXEL0, COMBINED
#define G_RM_ZB_OPA_SURF RM_ZB_OPA_SURF(1)
#define gsSPForceMatrix(mptr) gsDma2p(G_MOVEMEM,(mptr),sizeof(Mtx),G_MV_MATRIX,0), gsMoveWd(G_MW_FORCEMTX,0,0x00010000)
#define G_DEPTOZSrg(zval,near,far,flag,zmin,zmax) (((unsigned int)FTOFIX32(((flag) == G_BZ_PERSP ? (1.0f-(float)(near)/(float)(zval)) / (1.0f-(float)(near)/(float)(far )) : ((float)(zval) - (float)(near)) / ((float)(far ) - (float)(near))))) * (((int)((zmax) - (zmin)))&~1) + (int)FTOFIX32(zmin))
#define OS_VI_NTSC_HAF1 11
#define gDPLoadMultiBlockS(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1,0); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define gsSetImage(cmd,fmt,siz,width,i) { _SHIFTL(cmd, 24, 8) | _SHIFTL(fmt, 21, 3) | _SHIFTL(siz, 19, 2) | _SHIFTL((width)-1, 0, 12), (unsigned int)(i) }
#define G_CCMUX_K4 7
#define G_CCMUX_K5 15
#define G_RM_ZB_CLD_SURF2 RM_ZB_CLD_SURF(2)
#define _ML_H_ 
#define HOST_FAULT_ACK 15
#define gDPSetHilite1Tile(pkt,tile,hilite,width,height) gDPSetTileSize(pkt, tile, (hilite)->h.x1 & 0xfff, (hilite)->h.y1 & 0xfff, ((((width)-1)*4)+(hilite)->h.x1) & 0xfff, ((((height)-1)*4)+(hilite)->h.y1) & 0xfff)
#define G_RM_ZB_OVL_SURF RM_ZB_OVL_SURF(1)
#define G_DEPTOZS(zval,near,far,flag) G_DEPTOZSrg(zval, near, far, flag, 0, G_MAXZ)
#define _G_CC_BLENDPE ENVIRONMENT, PRIMITIVE, TEXEL0, PRIMITIVE, TEXEL0, 0, SHADE, 0
#define A_DMEMMOVE 10
#define OS_PRIORITY_RMON 250
#define G_AD_NOISE (2 << G_MDSFT_ALPHADITHER)
#define CALC_DXT(width,b_txl) (((1 << G_TX_DXT_FRAC) + TXL2WORDS(width, b_txl) - 1) / TXL2WORDS(width, b_txl))
#define G_RM_AA_TEX_TERR RM_AA_TEX_TERR(1)
#define FTINPUT_ZTRIGLAST_TICS_MAX (U16_MAX + 1)
#define G_SETOTHERMODE_H 0xe3
#define alCSPSetChannelPriority alCSPSetChlPriority
#define C_IST 0x8
#define ALPHA_CVG_SEL 0x2000
#define SR_ITS 0x01000000
#define INTMAX_MAX __INTMAX_MAX__
#define OS_VI_PAL_LAF1 17
#define OS_VI_PAL_LAF2 21
#define CONFIG_NONCOHRNT 0x00000003
#define DEVICE_TYPE_BULK 1
#define ERR_OSPIRAWWRITEIO 20
#define CONT_DOWN 0x0400
#define UINT_FAST16_MAX __UINT_FAST16_MAX__
#define AOBJ_JOINT_BIT(track) (1u << ((track) - nGCAnimTrackJointStart))
#define LBPARTICLE_OPCODE_SETLOOP 0xFA
#define G_IM_SIZ_16b_BYTES 2
#define ERR_OSSTOPTIMER 77
#define gmColCommandBlendColor1S2(r,g,b,a) (GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))
#define GMHITCOLLISION_FLAG_FIGHTER (1 << 0)
#define OS_MESG_TYPE_DMAWRITE (OS_MESG_TYPE_BASE + 2)
#define _SIZE_T 
#define A_ENVMIXER 3
#define EXC_INT EXC_CODE(0)
#define GMATTACKREC_NUM_MAX 4
#define GAME_PRINTF_SEND 5
#define MAX_RATIO 1.99996F
#define gsDPLoadTextureTile_4b(timg,fmt,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, G_IM_SIZ_8b, ((width)>>1), timg), gsDPSetTile(fmt, G_IM_SIZ_8b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<(G_TEXTURE_IMAGE_FRAC-1), (ult)<<(G_TEXTURE_IMAGE_FRAC), (lrs)<<(G_TEXTURE_IMAGE_FRAC-1), (lrt)<<(G_TEXTURE_IMAGE_FRAC)), gsDPPipeSync(), gsDPSetTile(fmt, G_IM_SIZ_4b, (((((lrs)-(uls)+1)>>1)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define RAMROM_BUF_SIZE (4096)
#define ERR_OSVISETXSCALE_VALUE 39
#define PI_STATUS_IO_BUSY 0x02
#define aobjEvent32(opcode,flags,payload) (GC_FIELDSET((opcode), 25, 7) | GC_FIELDSET((flags), 15, 10) | GC_FIELDSET((payload), 0, 15))
#define G_MDSFT_TEXTLOD 16
#define CONT_CARD_PULL 0x02
#define VI_CTRL_DIVOT_ON 0x00010
#define OS_TV_PAL 0
#define SP_SEMAPHORE_REG (SP_BASE_REG + 0x1C)
#define G_RM_ZB_OVL_SURF2 RM_ZB_OVL_SURF(2)
#define OS_MESG_TYPE_EDMAREAD (OS_MESG_TYPE_BASE + 5)
#define MI_MODE_REG MI_INIT_MODE_REG
#define K2BASE 0xC0000000
#define G_CC_INTERFERENCE TEXEL0, 0, TEXEL1, 0, TEXEL0, 0, TEXEL1, 0
#define gSPInsertMatrix(pkt,where,num) ERROR!! gSPInsertMatrix is no longer supported.
#define G_IM_SIZ_16b_LOAD_BLOCK G_IM_SIZ_16b
#define OS_DCACHE_ROUNDUP_SIZE(x) (u32)(((((u32)(x) + 0xf) / 0x10) * 0x10))
#define ERR_ALHEAPNOFREE 125
#define G_MWO_MATRIX_YX_YY_I 0x08
#define LBPARTICLE_FLAG_ENVCOLOR 0x80
#define gsDPSetTextureDetail(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_TEXTDETAIL, 2, type)
#define GMSTAFFROLL_E_ACCENT_PARA_FONT_INDEX 0x49
#define G_CC_MODULATEI TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE
#define ftMotionCommandMakeRumble(len,rid) (GC_FIELDSET(nFTMotionEventMakeRumble, 26, 6) | GC_FIELDSET(len, 13, 13) | GC_FIELDSET(rid, 0, 13))
#define CONFIG_EP 0x0f000000
#define FTSLOPECONTOUR_FLAG_FULL (1 << nFTSlopeContourFull)
#define _gDPLoadTextureBlockTile(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define LBPARTICLE_OPCODE_SETPRIMBLEND 0xC0
#define OS_EVENT_AI 6
#define _EFDEF_H_ 
#define PFS_WRITTEN 2
#define _SPTASK_H_ 
#define LBPARTICLE_OPCODE_NODITHER 0xB3
#define GS_SCREEN_HEIGHT_DEFAULT 240
#define ftMotionCommandMakeAttackCollScaledS2(sz,ox) (GC_FIELDSET(sz, 16, 16) | GC_FIELDSET(ox, 0, 16))
#define gSPLoadUcode(pkt,uc_start,uc_dstart) gSPLoadUcodeEx((pkt), (uc_start), (uc_dstart), SP_UCODE_DATA_SIZE)
#define VI_V_BURST_REG (VI_BASE_REG + 0x2C)
#define LBBACKUP_CHARACTER_MASK_ALL ( LBBACKUP_MASK_FIGHTER(nFTKindMario) | LBBACKUP_MASK_FIGHTER(nFTKindFox) | LBBACKUP_MASK_FIGHTER(nFTKindDonkey) | LBBACKUP_MASK_FIGHTER(nFTKindSamus) | LBBACKUP_MASK_FIGHTER(nFTKindLuigi) | LBBACKUP_MASK_FIGHTER(nFTKindLink) | LBBACKUP_MASK_FIGHTER(nFTKindYoshi) | LBBACKUP_MASK_FIGHTER(nFTKindCaptain) | LBBACKUP_MASK_FIGHTER(nFTKindKirby) | LBBACKUP_MASK_FIGHTER(nFTKindPikachu) | LBBACKUP_MASK_FIGHTER(nFTKindPurin) | LBBACKUP_MASK_FIGHTER(nFTKindNess) )
#define DIAGNOSTIC_SAVE() _Pragma("GCC diagnostic push")
#define CONT_TYPE_NORMAL 0x0005
#define SDIRTYEXCL 0x00001400
#define ERR_OSPIRAWSTARTDMA_DEVADDR 22
#define OS_VI_NTSC_HAN1 10
#define SP_DMEM_END 0x04000FFF
#define gSPMatrix(pkt,m,p) gDma2p((pkt),G_MTX,(m),sizeof(Mtx),(p)^G_MTX_PUSH,0)
#define G_SETZIMG 0xfe
#define ERR_OSPISTARTDMA_DEVADDR 31
#define alSeqpSetChannelPriority alSeqpSetChlPriority
#define MOBJ_FLAG_SPLIT (1 << 1)
#define G_TC_FILTCONV (5 << G_MDSFT_TEXTCONV)
#define ftMotionCommandEffect(jid,eid,flag,ox,oy,oz,rx,ry,rz) ftMotionCommandEffectS1(jid, eid, flag), ftMotionCommandEffectS2(ox, oy), ftMotionCommandEffectS3(oz, rx), ftMotionCommandEffectS4(ry, rz)
#define RAMROM_APP_READ_ADDR (RAMROM_MSG_ADDR + (0 * RAMROM_BUF_SIZE))
#define RDRAM_MIN_INTERVAL_REG (RDRAM_BASE_REG + 0x1c)
#define gsSPLookAtY(l) gsDma2p( G_MOVEMEM,(l),sizeof(Light),G_MV_LIGHT,G_MVO_LOOKATY)
#define EXC_RMISS EXC_CODE(2)
#define alSeqpSetPan alSeqpSetChlPan
#define OS_VIM_STACKSIZE 4096
#define PI_SET_RESET PI_STATUS_RESET
#define DTOR64 (PI64 / 180)
#define G_DL 0xde
#define AI_STATUS_REG (AI_BASE_REG + 0x0C)
#define K0_TO_PHYS(x) ((u32)(x)&0x1FFFFFFF)
#define PFS_LABEL_AREA 7
#define ftMotionCommandGotoS1() GC_FIELDSET(nFTMotionEventGoto, 26, 6)
#define _GCC_STDINT_H 
#define R_CBUTTONS CONT_F
#define FTCATCHKIND_MASK_ALL ( FTCATCHKIND_MASK_CAPTAINSPECIALHI | FTCATCHKIND_MASK_COMMON | FTCATCHKIND_MASK_TWISTER | FTCATCHKIND_MASK_TARUCANN | FTCATCHKIND_MASK_KIRBYSPECIALN | FTCATCHKIND_MASK_YOSHISPECIALN )
#define I_CLC_RTOD32(x) (( int )(((x) / PI32) * 180.0F))
#define OS_PRIORITY_SIMGR 140
#define G_SETPRIMCOLOR 0xfa
#define OS_EVENT_DP 9
#define SP_IBIST_CLEAR 0x04
#define SR_KSU_KER 0x00000000
#define ftMotionCommandSetColAnim(cid,len) (GC_FIELDSET(nFTMotionEventSetColAnim, 26, 6) | GC_FIELDSET(cid, 18, 8) | GC_FIELDSET(len, 0, 18))
#define AL_DEFAULT_FXMIX 0
#define INTMAX_MIN (-INTMAX_MAX - 1)
#define G_CC_MODULATERGB_PRIM2 G_CC_MODULATEI_PRIM2
#define OS_VI_PAL_LAN1 16
#define OS_VI_PAL_LAN2 20
#define OS_EVENT_RDB_FREE_RAMROM 19
#define ftMotionCommandHideItem(val) (GC_FIELDSET(nFTMotionEventHideItem, 26, 6) | GC_FIELDSET(val, 0, 26))
#define gDPTextureRectangle(pkt,xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { Gfx *_g = (Gfx *)(pkt); if (pkt); _g->words.w0 = (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)); _g->words.w1 = (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)); _g ++; _g->words.w0 = (_SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16)); _g->words.w1 = (_SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16)); }
#define G_ENDDL 0xdf
#define gSPLookAt(pkt,la) { gSPLookAtX(pkt,la) gSPLookAtY(pkt,(char *)(la)+16) }
#define MI_INTR_MASK_PI 0x10
#define G_MDSFT_TEXTLUT 14
#define A_SETVOL 9
#define G_MWO_SEGMENT_1 0x01
#define TLBCTXT_BASEBITS 9
#define LBPARTICLE_OPCODE_SETSIZERAND 0xAC
#define GPACK_RGBA5551(r,g,b,a) ((((r)<<8) & 0xf800) | (((g)<<3) & 0x7c0) | (((b)>>2) & 0x3e) | ((a) & 0x1))
#define CAUSE_CEMASK 0x30000000
#define C0_MAJREVSHIFT 4
#define PI_BSD_DOM2_LAT_REG (PI_BASE_REG + 0x24)
#define OS_STATE_RUNNABLE 2
#define LBPARTICLE_FLAG_VORTEX 0x4
#define FTDATA_FLAG_SUBMOTION 0x1
#define AOBJ_ANIM_CHANGED (F32_MIN / 2.0F)
#define A_LOADADPCM 11
#define CHNL_ERR_COLLISION 0x40
#define gsDPSetCycleType(type) gsSPSetOtherMode(G_SETOTHERMODE_H, G_MDSFT_CYCLETYPE, 2, type)
#define FTCOMPUTER_COMMAND_BUTTON_START_RELEASE (nFTComputerCommandButtonStartRelease << FTCOMPUTER_COMMAND_TIMER_BITS)
#define AL_PAN_CENTER 64
#define aobjEvent32SetExtValAfterBlock(flags_mask,d) aobjEvent32(nGCAnimEvent32SetExtValAfterBlock, (flags_mask), (d))
#define PHYS_TO_K0(x) ((u32)(x)|0x80000000)
#define PHYS_TO_K1(x) ((u32)(x)|0xA0000000)
#define gmColCommandGotoS1() GC_FIELDSET(nGMColEventGoto, 26, 6)
#define G_MWO_SEGMENT_4 0x04
#define ERR_ALSNDPDELETE 108
#define SSTATEMASK 0x00001c00
#define ADPCMVSIZE 8
#define PFS_BANKS_256K 1
#define gsDPSetCombineMode(a,b) gsDPSetCombineLERP(a, b)
#define gSPViewport(pkt,v) gDma2p((pkt), G_MOVEMEM, (v), sizeof(Vp), G_MV_VIEWPORT, 0)
#define INT_FAST64_MAX __INT_FAST64_MAX__
#define G_TP_PERSP (1 << G_MDSFT_TEXTPERSP)
#define RDRAM_RAS_INTERVAL_REG (RDRAM_BASE_REG + 0x18)
#define UINT_LEAST32_MAX __UINT_LEAST32_MAX__
#define G_DMA_IO 0xd6
#define _ULTRATYPES_H_ 
#define OS_VI_DIVOT_OFF 0x0020
#define MI_INTR_MASK_SP 0x01
#define G_MWO_POINT_RGBA 0x10
#define DPC_STATUS_TMEM_BUSY 0x010
#define CONT_LEFT 0x0200
#define DPC_STATUS_PIPE_BUSY 0x020
#define G_RDPTILESYNC 0xe8
#define CONFIG_SS 0x00200000
#define SINTABLE_MASK_ID (ARRAY_COUNT(gSYSinTable) - 1)
#define gmColCommandSubroutineS1() GC_FIELDSET(nGMColEventSubroutine, 26, 6)
#define UINTMAX_C(c) __UINTMAX_C(c)
#define DPC_CLR_TMEM_CTR 0x0040
#define MI_MODE_RDRAM 0x0200
#define ERR_ALCSPVNOTFREE 130
#define G_BL_1MA 0
#define M_AUDTASK 2
#define TLBINX_PROBE 0x80000000
#define gmColCommandReturn() GC_FIELDSET(nGMColEventReturn, 26, 6)
#define gsDPSetPrimDepth(z,dz) gsDPSetColor(G_SETPRIMDEPTH, _SHIFTL(z, 16, 16) | _SHIFTL(dz, 0, 16))
#define gsDPTextureRectangle(xl,yl,xh,yh,tile,s,t,dsdx,dtdy) { (_SHIFTL(G_TEXRECT, 24, 8) | _SHIFTL(xh, 12, 12) | _SHIFTL(yh, 0, 12)), (_SHIFTL(tile, 24, 3) | _SHIFTL(xl, 12, 12) | _SHIFTL(yl, 0, 12)), }, { _SHIFTL(s, 16, 16) | _SHIFTL(t, 0, 16), _SHIFTL(dsdx, 16, 16) | _SHIFTL(dtdy, 0, 16) }
#define VI_WIDTH_REG (VI_BASE_REG + 0x08)
#define OS_VI_BIT_HIRES 0x0200
#define CVG_DST_FULL 0x200
#define G_CC_MODULATEIDECALA_PRIM TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0
#define CONFIG_BE_SHFT 15
#define U16_MAX 0xFFFF
#define DObjGetStruct(gobj) ((DObj*)(gobj)->obj)
#define gsSPEndDisplayList() { _SHIFTL(G_ENDDL, 24, 8), 0 }
#define AI_MAX_BIT_RATE 16
#define RM_AA_ZB_OPA_INTER(clk) AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ALPHA_CVG_SEL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)
#define OS_CPU_COUNTER (OS_CLOCK_RATE * 3 / 4)
#define OS_MESG_TYPE_DMAREAD (OS_MESG_TYPE_BASE + 1)
#define MI_SET_EBUS 0x0400
#define A_SPNOOP 0
#define SP_STATUS_DMA_FULL 0x008
#define syMatrixAdvanceF(mtx_hub,mtx_heap) syMatrixAdvance(mtx, mtx_heap, Mtx44f)
#define HOST_PIACCESS_REQ 1
#define gmColCommandBlendColor1S1(frames) (GC_FIELDSET(nGMColEventBlendColor1, 26, 6) | GC_FIELDSET(frames, 0, 26))
#define CAUSE_EXCMASK 0x0000007C
#define gsSPSprite2DDraw(px,py) { (_SHIFTL(G_SPRITE2D_DRAW, 24, 8)), (_SHIFTL((px), 16, 16) | _SHIFTL((py), 0, 16)) }
#define MI_MODE_EBUS 0x0100
#define DPC_SET_FREEZE 0x0008
#define OS_USEC_TO_CYCLES(n) (((u64)(n) * (OS_CPU_COUNTER / 15625LL)) / (1000000LL / 15625LL))
#define _LANGUAGE_C 1
#define gSPTextureL(pkt,s,t,level,xparam,tile,on) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_TEXTURE,24,8) | _SHIFTL((xparam),16,8) | _SHIFTL((level),11,3) | _SHIFTL((tile),8,3) | _SHIFTL((on),1,7)); _g->words.w1 = (_SHIFTL((s),16,16) | _SHIFTL((t),0,16)); }
#define SP_EXTERN 0x00000400
#define OS_VI_MPAL_HAN1 38
#define gDPSetConvert(pkt,k0,k1,k2,k3,k4,k5) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_SETCONVERT, 24, 8) | _SHIFTL(k0, 13, 9) | _SHIFTL(k1, 4, 9) | _SHIFTR(k2, 5, 4)); _g->words.w1 = (_SHIFTL(k2, 27, 5) | _SHIFTL(k3, 18, 9) | _SHIFTL(k4, 9, 9) | _SHIFTL(k5, 0, 9)); }
#define VI_TIMING_REG VI_BURST_REG
#define gDPSetEnvColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETENVCOLOR, r,g,b,a)
#define G_RDPCMDSIZ 64
#define FTSTATUS_PRESERVE_COLANIM (1 << nFTStatusPreserveColAnim)
#define gSPDisplayList(pkt,dl) gDma1p(pkt,G_DL,dl,0,G_DL_PUSH)
#define G_CULLDL 0x03
#define TLBINX_INXSHIFT 0
#define _LBTYPES_H_ 
#define OS_VI_NTSC_LPF2 5
#define LBRELOC_CACHE_ALIGN(x) (((x) + 0xF) & ~0xF)
#define NUML(n) ((n)*24)
#define gDPLoadMultiBlock(pkt,timg,tmem,rtile,fmt,siz,width,height,pal,cms,cmt,masks,maskt,shifts,shiftt) { gDPSetTextureImage(pkt, fmt, siz ##_LOAD_BLOCK, 1, timg); gDPSetTile(pkt, fmt, siz ##_LOAD_BLOCK, 0, tmem, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, masks, shifts); gDPLoadSync(pkt); gDPLoadBlock(pkt, G_TX_LOADTILE, 0, 0, (((width)*(height) + siz ##_INCR) >> siz ##_SHIFT)-1, CALC_DXT(width, siz ##_BYTES)); gDPPipeSync(pkt); gDPSetTile(pkt, fmt, siz, (((width) * siz ##_LINE_BYTES)+7)>>3, tmem, rtile, pal, cmt, maskt, shiftt, cms, masks, shifts); gDPSetTileSize(pkt, rtile, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC, ((height)-1) << G_TEXTURE_IMAGE_FRAC) }
#define G_CCMUX_PRIM_LOD_FRAC 14
#define gsSPSprite2DScaleFlip(sx,sy,fx,fy) { (_SHIFTL(G_SPRITE2D_SCALEFLIP, 24, 8) | _SHIFTL((fx), 8, 8) | _SHIFTL((fy), 0, 8)), (_SHIFTL((sx), 16, 16) | _SHIFTL((sy), 0, 16)) }
#define FTCATCHKIND_MASK_TWISTER (1 << nFTCatchKindTwister)
#define A_RESAMPLE 5
#define G_RM_AA_OPA_TERR RM_AA_OPA_TERR(1)
#define G_MDSFT_COLORDITHER 22
#define gsDPLoadTextureTile(timg,fmt,siz,width,height,uls,ult,lrs,lrt,pal,cms,cmt,masks,maskt,shifts,shiftt) gsDPSetTextureImage(fmt, siz, width, timg), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_TILE_BYTES)+7)>>3), 0, G_TX_LOADTILE, 0 , cmt, maskt, shiftt, cms, masks, shifts), gsDPLoadSync(), gsDPLoadTile( G_TX_LOADTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC), gsDPPipeSync(), gsDPSetTile(fmt, siz, (((((lrs)-(uls)+1) * siz ##_LINE_BYTES)+7)>>3), 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt, cms, masks, shifts), gsDPSetTileSize(G_TX_RENDERTILE, (uls)<<G_TEXTURE_IMAGE_FRAC, (ult)<<G_TEXTURE_IMAGE_FRAC, (lrs)<<G_TEXTURE_IMAGE_FRAC, (lrt)<<G_TEXTURE_IMAGE_FRAC)
#define G_ON (1)
#define AL_MAX_CHANNELS 16
#define LBPARTICLE_OPCODE_MULVELUFORM 0xAB
#define GC_FIELDSET(x,start,len) (0 & ~GC_FIELDMASK(start, len) | GC_FIELDPREP(x, start, len))
#define SR_KSU_SUP 0x00000008
#define _OS_H_ 
#define G_MW_FOG 0x08
#define G_IM_FMT_RGBA 0
#define F_CONTROLLER_RANGE_MAX ((float)I_CONTROLLER_RANGE_MAX)
#define gsSPLoadUcode(uc_start,uc_dstart) gsSPLoadUcodeEx((uc_start), (uc_dstart), SP_UCODE_DATA_SIZE)
#define INTMAX_C(c) __INTMAX_C(c)
#define FTCOMPUTER_LEVEL_MAX 9
#define OS_K1_TO_PHYSICAL(x) (u32)(((char*)(x)-0xa0000000))
#define gSPNumLights(pkt,n) gMoveWd(pkt, G_MW_NUMLIGHT, G_MWO_NUMLIGHT, NUML(n))
#define LEO_SECTOR_MODE 3
#define DISTANCE(a,b) (((a) < (b)) ? -((a) - (b)) : ((a) - (b)))
#define INT_FAST64_MIN (-INT_FAST64_MAX - 1)
#define SP_DMEM_START 0x04000000
#define OS_EVENT_PI 8
#define TLBWIRED_WIREDMASK 0x3f
#define FR_POS_FRUSTRATIO_5 0x0000fffb
#define SP_CLR_SSTEP 0x00020
#define EEPROM_MAXBLOCKS 64
#define ftMotionEventCastAdvance(event,type) ((type*)(event)->p_script++)
#define UINT16_MAX __UINT16_MAX__
#define G_MDSFT_ALPHACOMPARE 0
#define ftMotionCommandResetModelPartAll() GC_FIELDSET(nFTMotionEventResetModelPartAll, 26, 6)
#define G_RM_ZB_OPA_DECAL2 RM_ZB_OPA_DECAL(2)
#define DPC_SET_FLUSH 0x0020
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define G_TEXTURE_GEN 0x00040000
#define gmColCommandLoopBegin(count) (GC_FIELDSET(nGMColEventLoopBegin, 26, 6) | GC_FIELDSET(count, 0, 26))
#define ERR_OSVISETXSCALE_VIMGR 40
#define PI_DOM_PWD_OFS 0x04
#define FTSTATUS_PRESERVE_THROWPOINTER (1 << nFTStatusPreserveThrowPointer)
#define I_HRS_TO_TICS(q) ((int)((q)*TIME_HRS))
#define ERR_ALCSEQZEROSTATUS 128
#define AL_PHASE_NOTEON 0
#define SEGMENT_ADDR(num,off) (((num) << 24) + (off))
#define C0_ENTRYLO0 2
#define C0_ENTRYLO1 3
#define DOUBLE_PI32 6.2831855F
#define LBPARTICLE_OPCODE_NOISE 0xB6
#define RAMROM_CLOCKRATE_MASK 0xfffffff0
#define ERR_OSVIGETCURRENTFRAMEBUFFER 37
#define gmRumbleEventCast(event,type) ((type*)(event))
#define ftMotionCommandPauseScript() GC_FIELDSET(nFTMotionEventPauseScript, 26, 6)
#define MI_NOOP_REG MI_VERSION_REG
#define ERR_OSGETREGIONBUFCOUNT 55
#define OS_VI_NTSC_LAF1 3
#define AL_VOL_FULL 127
#define _LBFUNCTIONS_H_ 
#define OS_EVENT_SI 5
#define AOBJ_CAMFLAG_EYEI AOBJ_CAM_BIT(nGCAnimTrackEyeI)
#define OS_VI_NTSC_LAF2 7
#define G_IM_SIZ_4b_TILE_BYTES G_IM_SIZ_4b_BYTES
#define ERR_ALSEQMETA 120
#define AOBJ_CAMFLAG_EYEY AOBJ_CAM_BIT(nGCAnimTrackEyeY)
#define AOBJ_CAMFLAG_EYEZ AOBJ_CAM_BIT(nGCAnimTrackEyeZ)
#define G_ZBUFFER 0x00000001
#define COBJ_FLAG_NONE (0)
#define AL_CMIDI_CNTRL_LOOPCOUNT_BIG 105
#define G_TEXTURE_SCALE_FRAC 16
#define G_MWO_bLIGHT_5 0x64
#define syMatrixAdvanceW(mtx,mtx_heap) syMatrixAdvance(mtx, mtx_heap, Mtx)
#define HOST_LOG_ACK 8
#define G_QUAD 0x07
#define CAMERA_FLAG_BOUND_RIGHT (1 << nGMCameraBoundRight)
#define AOBJ_FLAG_SCAX AOBJ_JOINT_BIT(nGCAnimTrackScaX)
#define AOBJ_FLAG_SCAY AOBJ_JOINT_BIT(nGCAnimTrackScaY)
#define AOBJ_FLAG_SCAZ AOBJ_JOINT_BIT(nGCAnimTrackScaZ)
#define FTSTAT_OPENING2_START 0x10000
#define FTCOMPUTER_COMMAND_STICK_X_VAR (nFTComputerCommandStickXVar << FTCOMPUTER_COMMAND_TIMER_BITS)
#define SR_EXL 0x00000002
#define gmRumbleEventAdvance(event,type) ((event) = (void*)((uintptr_t)(event) + (sizeof(type))))
#define AL_HEAP_MAGIC 0x20736a73
#define _OBJANIM_H_ 
#define gsDPSetEnvColor(r,g,b,a) sDPRGBColor(G_SETENVCOLOR, r,g,b,a)
#define OS_IM_NONE 0x00000001
#define G_BL_A_MEM 1
#define G_MWO_bLIGHT_7 0x94
#define AOBJ_EXT_BIT(track) (1u << ((track) - nGCAnimTrackMaterialSubStart))
#define PI_CLR_INTR PI_STATUS_CLR_INTR
#define gDPPipeSync(pkt) gDPNoParam(pkt, G_RDPPIPESYNC)
#define ERR_OSREADHOST_ADDR 70
#define G_MWO_POINT_ZSCREEN 0x1c
#define K1BASE 0xA0000000
#define __R4300_H__ 
#define RDRAM_ACTIVE_MODE 1
#define RM_PCL_SURF(clk) CVG_DST_FULL | FORCE_BL | ZMODE_OPA | G_AC_DITHER | GBL_c ##clk(G_BL_CLR_IN, G_BL_0, G_BL_CLR_IN, G_BL_1)
#define OS_VI_NTSC_HPF1 9
#define OS_VI_NTSC_HPF2 13
#define DPC_STATUS_FLUSH 0x004
#define A_ADPCM 1
#define ERR_OSPROFILEINIT_ORD 64
#define EFFECT_FLAG_USERDATA 0x2
#define PADDRMASK 0xFFFFFF00
#define ERR_OSPROFILESTART_FLAG 67
#define DPS_TBIST_CLEAR 0x04
#define ABSF(x) ((x) < 0.0F ? -(x) : (x))
#define G_CCMUX_PRIMITIVE 3
#define OS_EVENT_VI 7
#define AOBJ_FLAG_ROTX AOBJ_JOINT_BIT(nGCAnimTrackRotX)
#define AOBJ_FLAG_ROTY AOBJ_JOINT_BIT(nGCAnimTrackRotY)
#define AOBJ_FLAG_ROTZ AOBJ_JOINT_BIT(nGCAnimTrackRotZ)
#define _MIPS_SZLONG 32
#define ftMotionCommandPlayFGMStoreInfo(id) (GC_FIELDSET(nFTMotionEventPlayFGMStoreInfo, 26, 6) | GC_FIELDSET(id, 0, 26))
#define EXC_MOD EXC_CODE(1)
#define OS_IM_CPU 0x0000ff01
#define ERR_OSVISETSPECIAL_VALUE 43
#define PFS_ERR_EXIST 9
#define MI_VERSION_REG (MI_BASE_REG + 0x04)
#define M_GFXTASK 1
#define OS_PM_64K 0x001e000
#define GMSTAFFROLL_COLON_PARA_FONT_INDEX 0x34
#define FLOAT_MAX_HALF (FLOAT_MAX / 2)
#define SP_IMEM_END 0x04001FFF
#define SP_MEM_ADDR_REG (SP_BASE_REG + 0x00)
#define SP_TRANSPARENT 0x00000001
#define OS_VI_PAL_LPF1 15
#define ftMotionCommandSetDamageCollPartIDS1(jid) (GC_FIELDSET(nFTMotionEventSetDamageCollPartID, 26, 6) | GC_FIELDSET(jid, 19, 7))
#define G_RM_AA_DEC_LINE RM_AA_DEC_LINE(1)
#define alSeqpGetPan alSeqpGetChlPan
#define VI_BASE_REG 0x04400000
#define S16_MIN 0x8000
#define G_TX_RENDERTILE 0
#define VI_CTRL_PIXEL_ADV_2 0x02000
#define ERR_OSVISETMODE 45
#define __gsSP1Quadrangle_w2f(v0,v1,v2,v3,flag) (((flag) == 0) ? __gsSP1Triangle_w1(v0, v2, v3): ((flag) == 1) ? __gsSP1Triangle_w1(v1, v3, v0): ((flag) == 2) ? __gsSP1Triangle_w1(v2, v0, v1): __gsSP1Triangle_w1(v3, v1, v2))
#define G_MTX_LOAD 0x02
#define VI_BURST_REG (VI_BASE_REG + 0x14)
#define gsDPLoadTLUTCmd(tile,count) { _SHIFTL(G_LOADTLUT, 24, 8), _SHIFTL((tile), 24, 3) | _SHIFTL((count), 14, 10) }
#define GC_BITMASK(len) (GC_BITFIELD(len) - 1)
#define G_ACMUX_COMBINED 0
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define G_AD_DISABLE (3 << G_MDSFT_ALPHADITHER)
#define G_IM_SIZ_32b_INCR 0
#define gDPSetBlendColor(pkt,r,g,b,a) DPRGBColor(pkt, G_SETBLENDCOLOR, r,g,b,a)
#define gDPNoOp(pkt) gDPNoParam(pkt, G_NOOP)
#define DOBJ_FLAG_NOTEXTURE (1 << 0)
#define LBPARTICLE_OPCODE_TRYDEADRAND 0xA7
#define G_LINE3D 0x08
#define INT16_C(c) __INT16_C(c)
#define ERR_OSPISTARTDMA_ADDR 32
#define PI_BSD_DOM2_RLS_REG (PI_BASE_REG + 0x30)
#define C0_PAGEMASK 5
#define GMSTAFFROLL_APOSTROPHE_PARA_FONT_INDEX 0x45
#define GMHITCOLLISION_FLAG_ALL (GMHITCOLLISION_FLAG_FIGHTER | GMHITCOLLISION_FLAG_WEAPON | GMHITCOLLISION_FLAG_ITEM)
#define FTSLOPECONTOUR_FLAG_RFOOT (1 << nFTSlopeContourRFoot)
#define G_TT_RGBA16 (2 << G_MDSFT_TEXTLUT)
#define alCSPGetChannelPriority alCSPGetChlPriority
#define F_HRS_TO_TICS(q) ((float)((q)*TIME_HRS))
#define AOBJ_ANIM_NULL F32_MIN
#define G_RM_AA_ZB_XLU_SURF2 RM_AA_ZB_XLU_SURF(2)
#define RM_AA_ZB_XLU_INTER(clk) AA_EN | Z_CMP | IM_RD | CVG_DST_WRAP | CLR_ON_CVG | FORCE_BL | ZMODE_INTER | GBL_c ##clk(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)
#define ERR_ALSEQTIME 117
#define G_RM_OPA_SURF2 RM_OPA_SURF(2)
#define ftMotionCommandStopRumble(rid) (GC_FIELDSET(nFTMotionEventStopRumble, 26, 6) | GC_FIELDSET(rid, 0, 26))
#define OS_VI_MPAL_HPF2 41
#define A_SAVEBUFF 6
#define gmColCommandParallelS1() GC_FIELDSET(nGMColEventSetParallelScript, 26, 6)
#define AL_FX_SMALLROOM 1
#define SIG_ATOMIC_MIN __SIG_ATOMIC_MIN__
#define OS_DCACHE_ROUNDUP_ADDR(x) (void*)(((((u32)(x) + 0xf) / 0x10) * 0x10))
#define aClearBuffer(pkt,d,c) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = _SHIFTL(A_CLEARBUFF, 24, 8) | _SHIFTL(d, 0, 24); _a->words.w1 = (unsigned int)(c); }
#define G_CC_MODULATEIDECALA TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0
#define G_SHADING_SMOOTH 0x00200000
#define G_RM_AA_XLU_SURF2 RM_AA_XLU_SURF(2)
#define FPCSR_CO 0x00004000
#define DIAGNOSTIC_IGNORE(d) DO_PRAGMA(GCC diagnostic ignored d)
#define THPROF_STACKSIZE 256
#define DPS_BUFTEST_ADDR_REG (DPS_BASE_REG + 0x08)
#define DPC_SET_XBUS_DMEM_DMA 0x0002
#define AI_MAX_DAC_RATE 16384
#define I_CST_RTOD32(x) (( int )((x) * RTOD32))
#define G_MWO_MATRIX_ZZ_ZW_F 0x34
#define G_ACMUX_SHADE 4
#define G_MWO_MATRIX_ZZ_ZW_I 0x14
#define G_SCALE_FRAC 8
#define _REGION_H_ 
#define ftMotionCommandEffectS3(oz,rx) (GC_FIELDSET(oz, 16, 16) | GC_FIELDSET(rx, 0, 16))
#define LBPARTICLE_FLAG_SHAREDPAL 0x10
#define gmColCommandSetColor1S2(r,g,b,a) (GC_FIELDSET(r, 24, 8) | GC_FIELDSET(g, 16, 8) | GC_FIELDSET(b, 8, 8) | GC_FIELDSET(a, 0, 8))
#define aPoleFilter(pkt,f,g,s) { Acmd* _a = (Acmd*)pkt; _a->words.w0 = (_SHIFTL(A_POLEF, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); _a->words.w1 = (unsigned int)(s); }
#define FTSTATUS_PRESERVE_MODELPART (1 << nFTStatusPreserveModelPart)
#define SP_SET_INTR 0x00010
#define G_CC_MODULATEIA TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0
#define ftMotionCommandSetAirJumpAdd(val) (GC_FIELDSET(nFTMotionEventSetAirJumpAdd, 26, 6) | GC_FIELDSET(val, 0, 26))
#define G_TD_DETAIL (2 << G_MDSFT_TEXTDETAIL)
#define INT_FAST16_MAX __INT_FAST16_MAX__
#define TIME_MIN (TIME_SEC * 60)
#define VI_H_SYNC_REG (VI_BASE_REG + 0x1C)
#define OS_VI_NTSC_HPN1 8
#define OS_VI_NTSC_HPN2 12
#define PFS_ERR_NEW_GBCART 13
#define SR_CUMASK 0xf0000000
#define SR_KSU_MASK 0x00000018
#define G_IM_SIZ_32b_SHIFT 0
#define G_SETCIMG 0xff
#define G_TX_MIRROR 0x1
#define gsDPSetCombineLERP(a0,b0,c0,d0,Aa0,Ab0,Ac0,Ad0,a1,b1,c1,d1,Aa1,Ab1,Ac1,Ad1) { _SHIFTL(G_SETCOMBINE, 24, 8) | _SHIFTL(GCCc0w0(G_CCMUX_ ##a0, G_CCMUX_ ##c0, G_ACMUX_ ##Aa0, G_ACMUX_ ##Ac0) | GCCc1w0(G_CCMUX_ ##a1, G_CCMUX_ ##c1), 0, 24), (unsigned int)(GCCc0w1(G_CCMUX_ ##b0, G_CCMUX_ ##d0, G_ACMUX_ ##Ab0, G_ACMUX_ ##Ad0) | GCCc1w1(G_CCMUX_ ##b1, G_ACMUX_ ##Aa1, G_ACMUX_ ##Ac1, G_CCMUX_ ##d1, G_ACMUX_ ##Ab1, G_ACMUX_ ##Ad1)) }
#define OS_VI_BIT_INTERLACE 0x0002
#define G_TP_NONE (0 << G_MDSFT_TEXTPERSP)
#define MOBJ_FLAG_FRAC (1 << 4)
#define RDRAM_1_START 0x00200000
#define __log__ 
#define GMSTAFFROLL_CLOSE_PARENTHESIS_PARA_FONT_INDEX 0x48
#define DPC_CLR_CLOCK_CTR 0x0200
#define G_RM_AA_ZB_TEX_EDGE RM_AA_ZB_TEX_EDGE(1)
#define OS_VI_BIT_32PIXEL 0x0080
#define OS_PRIORITY_MAX 255
#define gSPBranchLessZrg(pkt,dl,vtx,zval,near,far,flag,zmin,zmax) { Gfx *_g = (Gfx *)(pkt); _g->words.w0 = _SHIFTL(G_RDPHALF_1,24,8); _g->words.w1 = (unsigned int)(dl); _g = (Gfx *)(pkt); _g->words.w0 = (_SHIFTL(G_BRANCH_Z,24,8)| _SHIFTL((vtx)*5,12,12)|_SHIFTL((vtx)*2,0,12)); _g->words.w1 = G_DEPTOZSrg(zval, near, far, flag, zmin, zmax); }
#define ftMotionCommandSetParallelScript(addr) ftMotionCommandSetParallelScriptS1(), ftMotionCommandSetParallelScriptS2(addr)
#define OS_VI_PAL_LPN1 14
#define OS_VI_PAL_LPN2 18
#define A_LOOP 0x02
#define PI32 3.1415927F
#define OS_VI_MPAL_HPF1 37
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef long long s64;
typedef volatile unsigned char vu8;
typedef volatile unsigned short vu16;
typedef volatile unsigned long vu32;
typedef volatile unsigned long long vu64;
typedef volatile signed char vs8;
typedef volatile short vs16;
typedef volatile long vs32;
typedef volatile long long vs64;
typedef float f32;
typedef double f64;
typedef unsigned int size_t;
 typedef s32 OSPri;
 typedef s32 OSId;
 typedef union
 {
  struct
  {
   f32 f_odd;
   f32 f_even;
  } f;
  f64 d;
 } __OSfp;
 typedef struct
 {
  u64 at, v0, v1, a0, a1, a2, a3;
  u64 t0, t1, t2, t3, t4, t5, t6, t7;
  u64 s0, s1, s2, s3, s4, s5, s6, s7;
  u64 t8, t9, gp, sp, s8, ra;
  u64 lo, hi;
  u32 sr, pc, cause, badvaddr, rcp;
  u32 fpcsr;
  __OSfp fp0, fp2, fp4, fp6, fp8, fp10, fp12, fp14;
  __OSfp fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
 } __OSThreadContext;
 typedef struct
 {
  u32 flag;
  u32 count;
  u64 time;
 } __OSThreadprofile_s;
 typedef struct OSThread_s
 {
  struct OSThread_s* next;
  OSPri priority;
  struct OSThread_s** queue;
  struct OSThread_s* tlnext;
  u16 state;
  u16 flags;
  OSId id;
  int fp;
  __OSThreadContext context;
 } OSThread;
 typedef u32 OSEvent;
 typedef u32 OSIntMask;
 typedef u32 OSPageMask;
 typedef u32 OSHWIntr;
 typedef void* OSMesg;
 typedef struct OSMesgQueue_s
 {
  OSThread* mtqueue;
  OSThread* fullqueue;
  s32 validCount;
  s32 first;
  s32 msgCount;
  OSMesg* msg;
 } OSMesgQueue;
 typedef struct
 {
  u32 errStatus;
  void* dramAddr;
  void* C2Addr;
  u32 sectorSize;
  u32 C1ErrNum;
  u32 C1ErrSector[4];
 } __OSBlockInfo;
 typedef struct
 {
  u32 cmdType;
  u16 transferMode;
  u16 blockNum;
  s32 sectorNum;
  u32 devAddr;
  u32 bmCtlShadow;
  u32 seqCtlShadow;
  __OSBlockInfo block[2];
 } __OSTranxInfo;
 typedef struct OSPiHandle_s
 {
  struct OSPiHandle_s* next;
  u8 type;
  u8 latency;
  u8 pageSize;
  u8 relDuration;
  u8 pulse;
  u8 domain;
  u32 baseAddress;
  u32 speed;
  __OSTranxInfo transferInfo;
 } OSPiHandle;
 typedef struct
 {
  u8 type;
  u32 address;
 } OSPiInfo;
 typedef struct
 {
  u16 type;
  u8 pri;
  u8 status;
  OSMesgQueue* retQueue;
 } OSIoMesgHdr;
 typedef struct
 {
  OSIoMesgHdr hdr;
  void* dramAddr;
  u32 devAddr;
  u32 size;
  OSPiHandle* piHandle;
 } OSIoMesg;
 typedef struct
 {
  s32 active;
  OSThread* thread;
  OSMesgQueue* cmdQueue;
  OSMesgQueue* evtQueue;
  OSMesgQueue* acsQueue;
  s32 (*dma)(s32, u32, void*, u32);
  s32 (*edma)(OSPiHandle*, s32, u32, void*, u32);
 } OSDevMgr;
 typedef struct
 {
  u32 ctrl;
  u32 width;
  u32 burst;
  u32 vSync;
  u32 hSync;
  u32 leap;
  u32 hStart;
  u32 xScale;
  u32 vCurrent;
 } OSViCommonRegs;
 typedef struct
 {
  u32 origin;
  u32 yScale;
  u32 vStart;
  u32 vBurst;
  u32 vIntr;
 } OSViFieldRegs;
 typedef struct
 {
  u8 type;
  OSViCommonRegs comRegs;
  OSViFieldRegs fldRegs[2];
 } OSViMode;
 typedef u64 OSTime;
 typedef struct OSTimer_s
 {
  struct OSTimer_s* next;
  struct OSTimer_s* prev;
  OSTime interval;
  OSTime value;
  OSMesgQueue* mq;
  OSMesg msg;
 } OSTimer;
 typedef struct
 {
  u16 type;
  u8 status;
  u8 errno;
 } OSContStatus;
 typedef struct
 {
  u16 button;
  s8 stick_x;
  s8 stick_y;
  u8 errno;
 } OSContPad;
 typedef struct
 {
  void* address;
  u8 databuffer[32];
  u8 addressCrc;
  u8 dataCrc;
  u8 errno;
 } OSContRamIo;
 typedef struct
 {
  int status;
  OSMesgQueue* queue;
  int channel;
  u8 id[32];
  u8 label[32];
  int version;
  int dir_size;
  int inode_table;
  int minode_table;
  int dir_table;
  int inode_start_page;
  u8 banks;
  u8 activebank;
 } OSPfs;
 typedef struct
 {
  u32 file_size;
  u32 game_code;
  u16 company_code;
  char ext_name[4];
  char game_name[16];
 } OSPfsState;
 typedef struct
 {
  u16* histo_base;
  u32 histo_size;
  u32* text_start;
  u32* text_end;
 } OSProf;
 extern u64 osClockRate;
 extern OSViMode osViModeTable[];
 extern OSViMode osViModeNtscLpn1;
 extern OSViMode osViModeNtscLpf1;
 extern OSViMode osViModeNtscLan1;
 extern OSViMode osViModeNtscLaf1;
 extern OSViMode osViModeNtscLpn2;
 extern OSViMode osViModeNtscLpf2;
 extern OSViMode osViModeNtscLan2;
 extern OSViMode osViModeNtscLaf2;
 extern OSViMode osViModeNtscHpn1;
 extern OSViMode osViModeNtscHpf1;
 extern OSViMode osViModeNtscHan1;
 extern OSViMode osViModeNtscHaf1;
 extern OSViMode osViModeNtscHpn2;
 extern OSViMode osViModeNtscHpf2;
 extern OSViMode osViModePalLpn1;
 extern OSViMode osViModePalLpf1;
 extern OSViMode osViModePalLan1;
 extern OSViMode osViModePalLaf1;
 extern OSViMode osViModePalLpn2;
 extern OSViMode osViModePalLpf2;
 extern OSViMode osViModePalLan2;
 extern OSViMode osViModePalLaf2;
 extern OSViMode osViModePalHpn1;
 extern OSViMode osViModePalHpf1;
 extern OSViMode osViModePalHan1;
 extern OSViMode osViModePalHaf1;
 extern OSViMode osViModePalHpn2;
 extern OSViMode osViModePalHpf2;
 extern OSViMode osViModeMpalLpn1;
 extern OSViMode osViModeMpalLpf1;
 extern OSViMode osViModeMpalLan1;
 extern OSViMode osViModeMpalLaf1;
 extern OSViMode osViModeMpalLpn2;
 extern OSViMode osViModeMpalLpf2;
 extern OSViMode osViModeMpalLan2;
 extern OSViMode osViModeMpalLaf2;
 extern OSViMode osViModeMpalHpn1;
 extern OSViMode osViModeMpalHpf1;
 extern OSViMode osViModeMpalHan1;
 extern OSViMode osViModeMpalHaf1;
 extern OSViMode osViModeMpalHpn2;
 extern OSViMode osViModeMpalHpf2;
 extern s32 osRomType;
 extern void* osRomBase;
 extern s32 osTvType;
 extern s32 osResetType;
 extern s32 osCicId;
 extern s32 osVersion;
 extern u32 osMemSize;
 extern s32 osAppNMIBuffer[];
 extern OSIntMask __OSGlobalIntMask;
 extern OSPiHandle* __osPiTable;
 extern OSPiHandle* __osDiskHandle;
 extern void osCreateThread(OSThread*, OSId, void (*)(void*), void*, void*, OSPri);
 extern void osDestroyThread(OSThread*);
 extern void osYieldThread(void);
 extern void osStartThread(OSThread*);
 extern void osStopThread(OSThread*);
 extern OSId osGetThreadId(OSThread*);
 extern void osSetThreadPri(OSThread*, OSPri);
 extern OSPri osGetThreadPri(OSThread*);
 extern void osCreateMesgQueue(OSMesgQueue*, OSMesg*, s32);
 extern s32 osSendMesg(OSMesgQueue*, OSMesg, s32);
 extern s32 osJamMesg(OSMesgQueue*, OSMesg, s32);
 extern s32 osRecvMesg(OSMesgQueue*, OSMesg*, s32);
 extern void osSetEventMesg(OSEvent, OSMesgQueue*, OSMesg);
 extern OSIntMask osGetIntMask(void);
 extern OSIntMask osSetIntMask(OSIntMask);
 extern void osInitRdb(u8* sendBuf, u32 sendSize);
 extern void osInvalDCache(void*, s32);
 extern void osInvalICache(void*, s32);
 extern void osWritebackDCache(void*, s32);
 extern void osWritebackDCacheAll(void);
 extern void osMapTLB(s32, OSPageMask, void*, u32, u32, s32);
 extern void osMapTLBRdb(void);
 extern void osUnmapTLB(s32);
 extern void osUnmapTLBAll(void);
 extern void osSetTLBASID(s32);
 extern u32 osVirtualToPhysical(void*);
 extern void* osPhysicalToVirtual(u32);
 extern u32 osAiGetStatus(void);
 extern u32 osAiGetLength(void);
 extern s32 osAiSetFrequency(u32);
 extern s32 osAiSetNextBuffer(void*, u32);
 extern u32 osDpGetStatus(void);
 extern void osDpSetStatus(u32);
 extern void osDpGetCounters(u32*);
 extern s32 osDpSetNextBuffer(void*, u64);
 extern u32 osPiGetStatus(void);
 extern s32 osPiGetDeviceType(void);
 extern s32 osPiRawWriteIo(u32, u32);
 extern s32 osPiRawReadIo(u32, u32*);
 extern s32 osPiRawStartDma(s32, u32, void*, u32);
 extern s32 osPiWriteIo(u32, u32);
 extern s32 osPiReadIo(u32, u32*);
 extern s32 osPiStartDma(OSIoMesg*, s32, s32, u32, void*, u32, OSMesgQueue*);
 extern void osCreatePiManager(OSPri, OSMesgQueue*, OSMesg*, s32);
 extern u32 osViGetStatus(void);
 extern u32 osViGetCurrentMode(void);
 extern u32 osViGetCurrentLine(void);
 extern u32 osViGetCurrentField(void);
 extern void* osViGetCurrentFramebuffer(void);
 extern void* osViGetNextFramebuffer(void);
 extern void osViSetXScale(f32);
 extern void osViSetYScale(f32);
 extern void osViSetSpecialFeatures(u32);
 extern void osViSetMode(OSViMode*);
 extern void osViSetEvent(OSMesgQueue*, OSMesg, u32);
 extern void osViSwapBuffer(void*);
 extern void osViBlack(u8);
 extern void osViFade(u8, u16);
 extern void osViRepeatLine(u8);
 extern void osCreateViManager(OSPri);
 extern OSTime osGetTime(void);
 extern void osSetTime(OSTime);
 extern int osSetTimer(OSTimer*, OSTime, OSTime, OSMesgQueue*, OSMesg);
 extern int osStopTimer(OSTimer*);
 extern s32 osContInit(OSMesgQueue*, u8*, OSContStatus*);
 extern s32 osContReset(OSMesgQueue*, OSContStatus*);
 extern s32 osContStartQuery(OSMesgQueue*);
 extern s32 osContStartReadData(OSMesgQueue*);
 extern s32 osContSetCh(u8);
 extern void osContGetQuery(OSContStatus*);
 extern void osContGetReadData(OSContPad*);
 extern s32 osPfsInitPak(OSMesgQueue*, OSPfs*, int);
 extern s32 osPfsRepairId(OSPfs*);
 extern s32 osPfsInit(OSMesgQueue*, OSPfs*, int);
 extern s32 osPfsReFormat(OSPfs*, OSMesgQueue*, int);
 extern s32 osPfsChecker(OSPfs*);
 extern s32 osPfsAllocateFile(OSPfs*, u16, u32, u8*, u8*, int, s32*);
 extern s32 osPfsFindFile(OSPfs*, u16, u32, u8*, u8*, s32*);
 extern s32 osPfsDeleteFile(OSPfs*, u16, u32, u8*, u8*);
 extern s32 osPfsReadWriteFile(OSPfs*, s32, u8, int, int, u8*);
 extern s32 osPfsFileState(OSPfs*, s32, OSPfsState*);
 extern s32 osPfsGetLabel(OSPfs*, u8*, int*);
 extern s32 osPfsSetLabel(OSPfs*, u8*);
 extern s32 osPfsIsPlug(OSMesgQueue*, u8*);
 extern s32 osPfsFreeBlocks(OSPfs*, s32*);
 extern s32 osPfsNumFiles(OSPfs*, s32*, s32*);
 extern s32 osEepromProbe(OSMesgQueue*);
 extern s32 osEepromRead(OSMesgQueue*, u8, u8*);
 extern s32 osEepromWrite(OSMesgQueue*, u8, u8*);
 extern s32 osEepromLongRead(OSMesgQueue*, u8, u8*, int);
 extern s32 osEepromLongWrite(OSMesgQueue*, u8, u8*, int);
 extern s32 osMotorInit(OSMesgQueue*, OSPfs*, int);
 extern s32 osMotorStop(OSPfs*);
 extern s32 osMotorStart(OSPfs*);
 extern OSPiHandle* osCartRomInit(void);
 extern OSPiHandle* osLeoDiskInit(void);
 extern OSPiHandle* osDriveRgcInit(void);
 extern s32 osEPiDeviceType(OSPiHandle*, OSPiInfo*);
 extern s32 osEPiRawWriteIo(OSPiHandle*, u32, u32);
 extern s32 osEPiRawReadIo(OSPiHandle*, u32, u32*);
 extern s32 osEPiRawStartDma(OSPiHandle*, s32, u32, void*, u32);
 extern s32 osEPiWriteIo(OSPiHandle*, u32, u32);
 extern s32 osEPiReadIo(OSPiHandle*, u32, u32*);
 extern s32 osEPiStartDma(OSPiHandle*, OSIoMesg*, s32);
 extern s32 osEPiLinkHandle(OSPiHandle*);
 extern void osProfileInit(OSProf*, u32 profcnt);
 extern void osProfileStart(u32);
 extern void osProfileFlush(void);
 extern void osProfileStop(void);
 extern s32 osTestHost(void);
 extern void osReadHost(void*, u32);
 extern void osWriteHost(void*, u32);
 extern void osAckRamromRead(void);
 extern void osAckRamromWrite(void);
 extern void bcopy(const void*, void*, int);
 extern int bcmp(const void*, const void*, int);
 extern void bzero(void*, int);
 extern void osInitialize(void);
 extern u32 osGetCount(void);
 extern void osExit(void);
 extern u32 osGetMemSize(void);
 extern int sprintf(char* s, const char* fmt, ...);
 extern void osSyncPrintf(const char* fmt, ...);
 extern void osAsyncPrintf(const char* fmt, ...);
 extern int osSyncGetChars(char* buf);
 extern int osAsyncGetChars(char* buf);
 typedef struct _Region_s
 {
  u8* r_startBufferAddress;
  u8* r_endAddress;
  s32 r_bufferSize;
  s32 r_bufferCount;
  u16 r_freeList;
  u16 r_alignSize;
 } OSRegion;
 extern void* osCreateRegion(void*, u32, u32, u32);
 extern void* osMalloc(void*);
 extern void osFree(void*, void*);
 extern s32 osGetRegionBufCount(void*);
 extern s32 osGetRegionBufSize(void*);
 extern void rmonMain(void*);
 extern void rmonPrintf(const char*, ...);
 typedef struct
 {
  u32 type;
  u32 flags;
  u64* ucode_boot;
  u32 ucode_boot_size;
  u64* ucode;
  u32 ucode_size;
  u64* ucode_data;
  u32 ucode_data_size;
  u64* dram_stack;
  u32 dram_stack_size;
  u64* output_buffer;
  u64* output_buffer_size;
  u64* data_ptr;
  u32 data_size;
  u64* yield_data_ptr;
  u32 yield_data_size;
 } OSTask_t;
 typedef union
 {
  OSTask_t t;
  long long int force_structure_alignment;
 } OSTask;
 typedef u32 OSYieldResult;
 extern void osSpTaskLoad(OSTask* tp);
 extern void osSpTaskStartGo(OSTask* tp);
 extern void osSpTaskYield(void);
 extern OSYieldResult osSpTaskYielded(OSTask* tp);
typedef struct {
 short ob[3];
 unsigned short flag;
 short tc[2];
 unsigned char cn[4];
} Vtx_t;
typedef struct {
 short ob[3];
 unsigned short flag;
 short tc[2];
 signed char n[3];
 unsigned char a;
} Vtx_tn;
typedef union {
    Vtx_t v;
    Vtx_tn n;
    long long int force_structure_alignment;
} Vtx;
typedef struct {
  void *SourceImagePointer;
  void *TlutPointer;
  short Stride;
  short SubImageWidth;
  short SubImageHeight;
  char SourceImageType;
  char SourceImageBitSize;
  short SourceImageOffsetS;
  short SourceImageOffsetT;
  char dummy[4];
} uSprite_t;
typedef union {
  uSprite_t s;
  long long int force_structure_allignment[3];
} uSprite;
typedef struct {
 unsigned char flag;
 unsigned char v[3];
} Tri;
typedef long Mtx_t[4][4];
typedef union {
    Mtx_t m;
    long long int force_structure_alignment;
} Mtx;
typedef struct {
 short vscale[4];
 short vtrans[4];
} Vp_t;
typedef union {
    Vp_t vp;
    long long int force_structure_alignment;
} Vp;
typedef struct {
  unsigned char col[3];
  char pad1;
  unsigned char colc[3];
  char pad2;
  signed char dir[3];
  char pad3;
} Light_t;
typedef struct {
  unsigned char col[3];
  char pad1;
  unsigned char colc[3];
  char pad2;
} Ambient_t;
typedef struct {
  int x1,y1,x2,y2;
} Hilite_t;
typedef union {
    Light_t l;
    long long int force_structure_alignment[2];
} Light;
typedef union {
    Ambient_t l;
    long long int force_structure_alignment[1];
} Ambient;
typedef struct {
    Ambient a;
    Light l[7];
} Lightsn;
typedef struct {
    Ambient a;
    Light l[1];
} Lights0;
typedef struct {
    Ambient a;
    Light l[1];
} Lights1;
typedef struct {
    Ambient a;
    Light l[2];
} Lights2;
typedef struct {
    Ambient a;
    Light l[3];
} Lights3;
typedef struct {
    Ambient a;
    Light l[4];
} Lights4;
typedef struct {
    Ambient a;
    Light l[5];
} Lights5;
typedef struct {
    Ambient a;
    Light l[6];
} Lights6;
typedef struct {
    Ambient a;
    Light l[7];
} Lights7;
typedef struct {
    Light l[2];
} LookAt;
typedef union {
    Hilite_t h;
    long int force_structure_alignment[4];
} Hilite;
typedef struct {
 int cmd:8;
 unsigned int par:8;
 unsigned int len:16;
 unsigned int addr;
} Gdma;
typedef struct {
  int cmd:8;
  int pad:24;
  Tri tri;
} Gtri;
typedef struct {
  int cmd:8;
  int pad1:24;
  int pad2:24;
  unsigned char param:8;
} Gpopmtx;
typedef struct {
  int cmd:8;
  int pad0:8;
  int mw_index:8;
  int number:8;
  int pad1:8;
  int base:24;
} Gsegment;
typedef struct {
  int cmd:8;
  int pad0:8;
  int sft:8;
  int len:8;
  unsigned int data:32;
} GsetothermodeL;
typedef struct {
  int cmd:8;
  int pad0:8;
  int sft:8;
  int len:8;
  unsigned int data:32;
} GsetothermodeH;
typedef struct {
  unsigned char cmd;
  unsigned char lodscale;
  unsigned char tile;
  unsigned char on;
  unsigned short s;
  unsigned short t;
} Gtexture;
typedef struct {
  int cmd:8;
  int pad:24;
  Tri line;
} Gline3D;
typedef struct {
  int cmd:8;
  int pad1:24;
  short int pad2;
  short int scale;
} Gperspnorm;
typedef struct {
                int cmd:8;
                unsigned int fmt:3;
                unsigned int siz:2;
                unsigned int pad:7;
                unsigned int wd:12;
                unsigned int dram;
} Gsetimg;
typedef struct {
  int cmd:8;
  unsigned int muxs0:24;
  unsigned int muxs1:32;
} Gsetcombine;
typedef struct {
  int cmd:8;
  unsigned char pad;
  unsigned char prim_min_level;
  unsigned char prim_level;
  unsigned long color;
} Gsetcolor;
typedef struct {
  int cmd:8;
  int x0:10;
  int x0frac:2;
  int y0:10;
  int y0frac:2;
  unsigned int pad:8;
  int x1:10;
  int x1frac:2;
  int y1:10;
  int y1frac:2;
} Gfillrect;
typedef struct {
  int cmd:8;
  unsigned int fmt:3;
  unsigned int siz:2;
  unsigned int pad0:1;
  unsigned int line:9;
  unsigned int tmem:9;
  unsigned int pad1:5;
  unsigned int tile:3;
  unsigned int palette:4;
  unsigned int ct:1;
  unsigned int mt:1;
  unsigned int maskt:4;
  unsigned int shiftt:4;
  unsigned int cs:1;
  unsigned int ms:1;
  unsigned int masks:4;
  unsigned int shifts:4;
} Gsettile;
typedef struct {
  int cmd:8;
  unsigned int sl:12;
  unsigned int tl:12;
  int pad:5;
  unsigned int tile:3;
  unsigned int sh:12;
  unsigned int th:12;
} Gloadtile;
typedef Gloadtile Gloadblock;
typedef Gloadtile Gsettilesize;
typedef Gloadtile Gloadtlut;
typedef struct {
  unsigned int cmd:8;
  unsigned int xl:12;
  unsigned int yl:12;
  unsigned int pad1:5;
  unsigned int tile:3;
  unsigned int xh:12;
  unsigned int yh:12;
  unsigned int s:16;
  unsigned int t:16;
  unsigned int dsdx:16;
  unsigned int dtdy:16;
} Gtexrect;
typedef struct {
    unsigned long w0;
    unsigned long w1;
    unsigned long w2;
    unsigned long w3;
} TexRect;
typedef struct {
 unsigned int w0;
 unsigned int w1;
} Gwords;
typedef union {
 Gwords words;
 Gdma dma;
 Gtri tri;
 Gline3D line;
 Gpopmtx popmtx;
 Gsegment segment;
 GsetothermodeH setothermodeH;
 GsetothermodeL setothermodeL;
 Gtexture texture;
 Gperspnorm perspnorm;
 Gsetimg setimg;
 Gsetcombine setcombine;
 Gsetcolor setcolor;
 Gfillrect fillrect;
 Gsettile settile;
 Gloadtile loadtile;
 Gsettilesize settilesize;
 Gloadtlut loadtlut;
        long long int force_structure_alignment;
} Gfx;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int gain : 16;
 unsigned int addr;
} Aadpcm;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int gain : 16;
 unsigned int addr;
} Apolef;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int pad1 : 16;
 unsigned int addr;
} Aenvelope;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 8;
 unsigned int dmem : 16;
 unsigned int pad2 : 16;
 unsigned int count : 16;
} Aclearbuff;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 8;
 unsigned int pad2 : 16;
 unsigned int inL : 16;
 unsigned int inR : 16;
} Ainterleave;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 24;
 unsigned int addr;
} Aloadbuff;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int pad1 : 16;
 unsigned int addr;
} Aenvmixer;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int gain : 16;
 unsigned int dmemi : 16;
 unsigned int dmemo : 16;
} Amixer;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int dmem2 : 16;
 unsigned int addr;
} Apan;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int pitch : 16;
 unsigned int addr;
} Aresample;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int pad1 : 16;
 unsigned int addr;
} Areverb;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 24;
 unsigned int addr;
} Asavebuff;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 24;
 unsigned int pad2 : 2;
 unsigned int number : 4;
 unsigned int base : 24;
} Asegment;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int dmemin : 16;
 unsigned int dmemout : 16;
 unsigned int count : 16;
} Asetbuff;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int flags : 8;
 unsigned int vol : 16;
 unsigned int voltgt : 16;
 unsigned int volrate : 16;
} Asetvol;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 8;
 unsigned int dmemin : 16;
 unsigned int dmemout : 16;
 unsigned int count : 16;
} Admemmove;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 8;
 unsigned int count : 16;
 unsigned int addr;
} Aloadadpcm;
typedef struct
{
 unsigned int cmd : 8;
 unsigned int pad1 : 8;
 unsigned int pad2 : 16;
 unsigned int addr;
} Asetloop;
typedef struct
{
 unsigned int w0;
 unsigned int w1;
} Awords;
typedef union
{
 Awords words;
 Aadpcm adpcm;
 Apolef polef;
 Aclearbuff clearbuff;
 Aenvelope envelope;
 Ainterleave interleave;
 Aloadbuff loadbuff;
 Aenvmixer envmixer;
 Aresample resample;
 Areverb reverb;
 Asavebuff savebuff;
 Asegment segment;
 Asetbuff setbuff;
 Asetvol setvol;
 Admemmove dmemmove;
 Aloadadpcm loadadpcm;
 Amixer mixer;
 Asetloop setloop;
 long long int force_union_align;
} Acmd;
typedef short ADPCM_STATE[16];
typedef short POLEF_STATE[4];
typedef short RESAMPLE_STATE[16];
typedef short ENVMIX_STATE[40];
 typedef s32 ALMicroTime;
 typedef u8 ALPan;
 typedef struct ALLink_s
 {
  struct ALLink_s* next;
  struct ALLink_s* prev;
 } ALLink;
 void alUnlink(ALLink* element);
 void alLink(ALLink* element, ALLink* after);
 typedef s32 (*ALDMAproc)(s32 addr, s32 len, void* state);
 typedef ALDMAproc (*ALDMANew)(void* state);
 void alCopy(void* src, void* dest, s32 len);
 typedef struct
 {
  u8* base;
  u8* cur;
  s32 len;
  s32 count;
 } ALHeap;
 void alHeapInit(ALHeap* hp, u8* base, s32 len);
 void* alHeapDBAlloc(u8* file, s32 line, ALHeap* hp, s32 num, s32 size);
 s32 alHeapCheck(ALHeap* hp);
 typedef u8 ALFxId;
 typedef void* ALFxRef;
 enum
 {
  AL_ADPCM_WAVE = 0,
  AL_RAW16_WAVE
 };
 typedef struct
 {
  s32 order;
  s32 npredictors;
  s16 book[1];
 } ALADPCMBook;
 typedef struct
 {
  u32 start;
  u32 end;
  u32 count;
  ADPCM_STATE state;
 } ALADPCMloop;
 typedef struct
 {
  u32 start;
  u32 end;
  u32 count;
 } ALRawLoop;
 typedef struct
 {
  ALMicroTime attackTime;
  ALMicroTime decayTime;
  ALMicroTime releaseTime;
  u8 attackVolume;
  u8 decayVolume;
 } ALEnvelope;
 typedef struct
 {
  u8 velocityMin;
  u8 velocityMax;
  u8 keyMin;
  u8 keyMax;
  u8 keyBase;
  s8 detune;
 } ALKeyMap;
 typedef struct
 {
  ALADPCMloop* loop;
  ALADPCMBook* book;
 } ALADPCMWaveInfo;
 typedef struct
 {
  ALRawLoop* loop;
 } ALRAWWaveInfo;
 typedef struct ALWaveTable_s
 {
  u8* base;
  s32 len;
  u8 type;
  u8 flags;
  union
  {
   ALADPCMWaveInfo adpcmWave;
   ALRAWWaveInfo rawWave;
  } waveInfo;
 } ALWaveTable;
 typedef struct ALSound_s
 {
  ALEnvelope* envelope;
  ALKeyMap* keyMap;
  ALWaveTable* wavetable;
  ALPan samplePan;
  u8 sampleVolume;
  u8 flags;
 } ALSound;
 typedef struct
 {
  u8 volume;
  ALPan pan;
  u8 priority;
  u8 flags;
  u8 tremType;
  u8 tremRate;
  u8 tremDepth;
  u8 tremDelay;
  u8 vibType;
  u8 vibRate;
  u8 vibDepth;
  u8 vibDelay;
  s16 bendRange;
  s16 soundCount;
  ALSound* soundArray[1];
 } ALInstrument;
 typedef struct ALBank_s
 {
  s16 instCount;
  u8 flags;
  u8 pad;
  s32 sampleRate;
  ALInstrument* percussion;
  ALInstrument* instArray[1];
 } ALBank;
 typedef struct
 {
  s16 revision;
  s16 bankCount;
  ALBank* bankArray[1];
 } ALBankFile;
 void alBnkfNew(ALBankFile* f, u8* table);
 typedef struct
 {
  u8* offset;
  s32 len;
 } ALSeqData;
 typedef struct
 {
  s16 revision;
  s16 seqCount;
  ALSeqData seqArray[1];
 } ALSeqFile;
 void alSeqFileNew(ALSeqFile* f, u8* base);
 typedef ALMicroTime (*ALVoiceHandler)(void*);
 typedef struct
 {
  s32 maxVVoices;
  s32 maxPVoices;
  s32 maxUpdates;
  s32 maxFXbusses;
  void* dmaproc;
  ALHeap* heap;
  s32 outputRate;
  ALFxId fxType;
  s32* params;
 } ALSynConfig;
 typedef struct ALPlayer_s
 {
  struct ALPlayer_s* next;
  void* clientData;
  ALVoiceHandler handler;
  ALMicroTime callTime;
  s32 samplesLeft;
 } ALPlayer;
 typedef struct ALVoice_s
 {
  ALLink node;
  struct PVoice_s* pvoice;
  ALWaveTable* table;
  void* clientPrivate;
  s16 state;
  s16 priority;
  s16 fxBus;
  s16 unityPitch;
 } ALVoice;
 typedef struct ALVoiceConfig_s
 {
  s16 priority;
  s16 fxBus;
  u8 unityPitch;
 } ALVoiceConfig;
 typedef struct
 {
  ALPlayer* head;
  ALLink pFreeList;
  ALLink pAllocList;
  ALLink pLameList;
  s32 paramSamples;
  s32 curSamples;
  ALDMANew dma;
  ALHeap* heap;
  struct ALParam_s* paramList;
  struct ALMainBus_s* mainBus;
  struct ALAuxBus_s* auxBus;
  struct ALFilter_s* outputFilter;
  s32 numPVoices;
  s32 maxAuxBusses;
  s32 outputRate;
  s32 maxOutSamples;
 } ALSynth;
 void alSynNew(ALSynth* s, ALSynConfig* config);
 void alSynDelete(ALSynth* s);
 void alSynAddPlayer(ALSynth* s, ALPlayer* client);
 void alSynRemovePlayer(ALSynth* s, ALPlayer* client);
 s32 alSynAllocVoice(ALSynth* s, ALVoice* v, ALVoiceConfig* vc);
 void alSynFreeVoice(ALSynth* s, ALVoice* voice);
 void alSynStartVoice(ALSynth* s, ALVoice* voice, ALWaveTable* w);
 void alSynStartVoiceParams(ALSynth* s, ALVoice* voice, ALWaveTable* w, f32 pitch, s16 vol, ALPan pan, u8 fxmix,
          ALMicroTime t);
 void alSynStopVoice(ALSynth* s, ALVoice* voice);
 void alSynSetVol(ALSynth* s, ALVoice* v, s16 vol, ALMicroTime delta);
 void alSynSetPitch(ALSynth* s, ALVoice* voice, f32 ratio);
 void alSynSetPan(ALSynth* s, ALVoice* voice, ALPan pan);
 void alSynSetFXMix(ALSynth* s, ALVoice* voice, u8 fxmix);
 void alSynSetPriority(ALSynth* s, ALVoice* voice, s16 priority);
 s16 alSynGetPriority(ALSynth* s, ALVoice* voice);
 ALFxRef* alSynAllocFX(ALSynth* s, s16 bus, ALSynConfig* c, ALHeap* hp);
 ALFxRef alSynGetFXRef(ALSynth* s, s16 bus, s16 index);
 void alSynFreeFX(ALSynth* s, ALFxRef* fx);
 void alSynSetFXParam(ALSynth* s, ALFxRef fx, s16 paramID, void* param);
 typedef struct
 {
  ALSynth drvr;
 } ALGlobals;
 extern ALGlobals* alGlobals;
 void alInit(ALGlobals* glob, ALSynConfig* c);
 void alClose(ALGlobals* glob);
 Acmd* alAudioFrame(Acmd* cmdList, s32* cmdLen, s16* outBuf, s32 outLen);
 enum ALMsg
 {
  AL_SEQ_REF_EVT,
  AL_SEQ_MIDI_EVT,
  AL_SEQP_MIDI_EVT,
  AL_TEMPO_EVT,
  AL_SEQ_END_EVT,
  AL_NOTE_END_EVT,
  AL_SEQP_ENV_EVT,
  AL_SEQP_META_EVT,
  AL_SEQP_PROG_EVT,
  AL_SEQP_API_EVT,
  AL_SEQP_VOL_EVT,
  AL_SEQP_LOOP_EVT,
  AL_SEQP_PRIORITY_EVT,
  AL_SEQP_SEQ_EVT,
  AL_SEQP_BANK_EVT,
  AL_SEQP_PLAY_EVT,
  AL_SEQP_STOP_EVT,
  AL_SEQP_STOPPING_EVT,
  AL_TRACK_END,
  AL_CSP_LOOPSTART,
  AL_CSP_LOOPEND,
  AL_CSP_NOTEOFF_EVT,
  AL_TREM_OSC_EVT,
  AL_VIB_OSC_EVT
 };
 enum AL_MIDIstatus
 {
  AL_MIDI_ChannelMask = 0x0F,
  AL_MIDI_StatusMask = 0xF0,
  AL_MIDI_ChannelVoice = 0x80,
  AL_MIDI_NoteOff = 0x80,
  AL_MIDI_NoteOn = 0x90,
  AL_MIDI_PolyKeyPressure = 0xA0,
  AL_MIDI_ControlChange = 0xB0,
  AL_MIDI_ChannelModeSelect = 0xB0,
  AL_MIDI_ProgramChange = 0xC0,
  AL_MIDI_ChannelPressure = 0xD0,
  AL_MIDI_PitchBendChange = 0xE0,
  AL_MIDI_SysEx = 0xF0,
  AL_MIDI_SystemCommon = 0xF1,
  AL_MIDI_TimeCodeQuarterFrame = 0xF1,
  AL_MIDI_SongPositionPointer = 0xF2,
  AL_MIDI_SongSelect = 0xF3,
  AL_MIDI_Undefined1 = 0xF4,
  AL_MIDI_Undefined2 = 0xF5,
  AL_MIDI_TuneRequest = 0xF6,
  AL_MIDI_EOX = 0xF7,
  AL_MIDI_SystemRealTime = 0xF8,
  AL_MIDI_TimingClock = 0xF8,
  AL_MIDI_Undefined3 = 0xF9,
  AL_MIDI_Start = 0xFA,
  AL_MIDI_Continue = 0xFB,
  AL_MIDI_Stop = 0xFC,
  AL_MIDI_Undefined4 = 0xFD,
  AL_MIDI_ActiveSensing = 0xFE,
  AL_MIDI_SystemReset = 0xFF,
  AL_MIDI_Meta = 0xFF
 };
 enum AL_MIDIctrl
 {
  AL_MIDI_VOLUME_CTRL = 0x07,
  AL_MIDI_PAN_CTRL = 0x0A,
  AL_MIDI_PRIORITY_CTRL = 0x10,
  AL_MIDI_FX_CTRL_0 = 0x14,
  AL_MIDI_FX_CTRL_1 = 0x15,
  AL_MIDI_FX_CTRL_2 = 0x16,
  AL_MIDI_FX_CTRL_3 = 0x17,
  AL_MIDI_FX_CTRL_4 = 0x18,
  AL_MIDI_FX_CTRL_5 = 0x19,
  AL_MIDI_FX_CTRL_6 = 0x1A,
  AL_MIDI_FX_CTRL_7 = 0x1B,
  AL_MIDI_FX_CTRL_8 = 0x1C,
  AL_MIDI_FX_CTRL_9 = 0x1D,
  AL_MIDI_SUSTAIN_CTRL = 0x40,
  AL_MIDI_FX1_CTRL = 0x5B,
  AL_MIDI_FX3_CTRL = 0x5D
 };
 enum AL_MIDImeta
 {
  AL_MIDI_META_TEMPO = 0x51,
  AL_MIDI_META_EOT = 0x2f
 };
 typedef struct
 {
  u8* curPtr;
  s32 lastTicks;
  s32 curTicks;
  s16 lastStatus;
 } ALSeqMarker;
 typedef struct
 {
  s32 ticks;
  u8 status;
  u8 byte1;
  u8 byte2;
  u32 duration;
 } ALMIDIEvent;
 typedef struct
 {
  s32 ticks;
  u8 status;
  u8 type;
  u8 len;
  u8 byte1;
  u8 byte2;
  u8 byte3;
 } ALTempoEvent;
 typedef struct
 {
  s32 ticks;
  u8 status;
  u8 type;
  u8 len;
 } ALEndEvent;
 typedef struct
 {
  struct ALVoice_s* voice;
 } ALNoteEvent;
 typedef struct
 {
  struct ALVoice_s* voice;
  ALMicroTime delta;
  u8 vol;
 } ALVolumeEvent;
 typedef struct
 {
  s16 vol;
 } ALSeqpVolEvent;
 typedef struct
 {
  ALSeqMarker* start;
  ALSeqMarker* end;
  s32 count;
 } ALSeqpLoopEvent;
 typedef struct
 {
  u8 chan;
  u8 priority;
 } ALSeqpPriorityEvent;
 typedef struct
 {
  void* seq;
 } ALSeqpSeqEvent;
 typedef struct
 {
  ALBank* bank;
 } ALSeqpBankEvent;
 typedef struct
 {
  struct ALVoiceState_s* vs;
  void* oscState;
  u8 chan;
 } ALOscEvent;
 typedef struct
 {
  s16 type;
  union
  {
   ALMIDIEvent midi;
   ALTempoEvent tempo;
   ALEndEvent end;
   ALNoteEvent note;
   ALVolumeEvent vol;
   ALSeqpLoopEvent loop;
   ALSeqpVolEvent spvol;
   ALSeqpPriorityEvent sppriority;
   ALSeqpSeqEvent spseq;
   ALSeqpBankEvent spbank;
   ALOscEvent osc;
  } msg;
 } ALEvent;
 typedef struct
 {
  ALLink node;
  ALMicroTime delta;
  ALEvent evt;
 } ALEventListItem;
 typedef struct
 {
  ALLink freeList;
  ALLink allocList;
  s32 eventCount;
 } ALEventQueue;
 void alEvtqNew(ALEventQueue* evtq, ALEventListItem* items, s32 itemCount);
 ALMicroTime alEvtqNextEvent(ALEventQueue* evtq, ALEvent* evt);
 void alEvtqPostEvent(ALEventQueue* evtq, ALEvent* evt, ALMicroTime delta);
 void alEvtqFlush(ALEventQueue* evtq);
 void alEvtqFlushType(ALEventQueue* evtq, s16 type);
 typedef struct ALVoiceState_s
 {
  struct ALVoiceState_s* next;
  ALVoice voice;
  ALSound* sound;
  ALMicroTime envEndTime;
  f32 pitch;
  f32 vibrato;
  u8 envGain;
  u8 channel;
  u8 key;
  u8 velocity;
  u8 envPhase;
  u8 phase;
  u8 tremelo;
  u8 flags;
 } ALVoiceState;
 typedef struct
 {
  ALInstrument* instrument;
  s16 bendRange;
  ALFxId fxId;
  ALPan pan;
  u8 priority;
  u8 vol;
  u8 fxmix;
  u8 sustain;
  f32 pitchBend;
        u8 unk_0x10;
        u8 vol2;
        u8 unk_0x12;
        u8 unk_0x13;
        u8 unk_0x14;
 } ALChanState;
 typedef struct ALSeq_s
 {
  u8* base;
  u8* trackStart;
  u8* curPtr;
  s32 lastTicks;
  s32 len;
  f32 qnpt;
  s16 division;
  s16 lastStatus;
 } ALSeq;
 typedef struct
 {
  u32 trackOffset[16];
  u32 division;
 } ALCMidiHdr;
 typedef struct ALCSeq_s
 {
  ALCMidiHdr* base;
  u32 validTracks;
  f32 qnpt;
  u32 lastTicks;
  u32 lastDeltaTicks;
  u32 deltaFlag;
  u8* curLoc[16];
  u8* curBUPtr[16];
  u8 curBULen[16];
  u8 lastStatus[16];
  u32 evtDeltaTicks[16];
 } ALCSeq;
 typedef struct
 {
  u32 validTracks;
  s32 lastTicks;
  u32 lastDeltaTicks;
  u8* curLoc[16];
  u8* curBUPtr[16];
  u8 curBULen[16];
  u8 lastStatus[16];
  u32 evtDeltaTicks[16];
 } ALCSeqMarker;
 typedef struct
 {
  s32 maxVoices;
  s32 maxEvents;
  u8 maxChannels;
  u8 debugFlags;
  ALHeap* heap;
  void* initOsc;
  void* updateOsc;
  void* stopOsc;
 } ALSeqpConfig;
 typedef ALMicroTime (*ALOscInit)(void** oscState, f32* initVal, u8 oscType, u8 oscRate, u8 oscDepth, u8 oscDelay);
 typedef ALMicroTime (*ALOscUpdate)(void* oscState, f32* updateVal);
 typedef void (*ALOscStop)(void* oscState);
 typedef struct
 {
  ALPlayer node;
  ALSynth* drvr;
  ALSeq* target;
  ALMicroTime curTime;
  ALBank* bank;
  s32 unknown0;
  s32 unknown1;
  s32 uspt;
  s32 nextDelta;
  s32 state;
  u16 chanMask;
  s16 vol;
  u8 maxChannels;
  u8 debugFlags;
  ALEvent nextEvent;
  ALEventQueue evtq;
  ALMicroTime frameTime;
  ALChanState* chanState;
  ALVoiceState* vAllocHead;
  ALVoiceState* vAllocTail;
  ALVoiceState* vFreeList;
  u8 masterVol;
  ALOscInit initOsc;
  ALOscUpdate updateOsc;
  ALOscStop stopOsc;
  ALSeqMarker* loopStart;
  ALSeqMarker* loopEnd;
  s32 loopCount;
 } ALSeqPlayer;
 typedef struct
 {
  ALPlayer node;
  ALSynth* drvr;
  ALCSeq* target;
  ALMicroTime curTime;
  ALBank* bank;
  s32 unknown0;
  s32 unknown1;
  s32 uspt;
  s32 nextDelta;
  s32 state;
  u16 chanMask;
  s16 vol;
  u8 maxChannels;
  u8 debugFlags;
  ALEvent nextEvent;
  ALEventQueue evtq;
  ALMicroTime frameTime;
  ALChanState* chanState;
  ALVoiceState* vAllocHead;
  ALVoiceState* vAllocTail;
  ALVoiceState* vFreeList;
  u8 masterVol;
  ALOscInit initOsc;
  ALOscUpdate updateOsc;
  ALOscStop stopOsc;
 } ALCSPlayer;
 void alSeqNew(ALSeq* seq, u8* ptr, s32 len);
 void alSeqNextEvent(ALSeq* seq, ALEvent* event);
 s32 alSeqGetTicks(ALSeq* seq);
 f32 alSeqTicksToSec(ALSeq* seq, s32 ticks, u32 tempo);
 u32 alSeqSecToTicks(ALSeq* seq, f32 sec, u32 tempo);
 void alSeqNewMarker(ALSeq* seq, ALSeqMarker* m, u32 ticks);
 void alSeqSetLoc(ALSeq* seq, ALSeqMarker* marker);
 void alSeqGetLoc(ALSeq* seq, ALSeqMarker* marker);
 void alCSeqNew(ALCSeq* seq, u8* ptr);
 void alCSeqNextEvent(ALCSeq* seq, ALEvent* evt);
 s32 alCSeqGetTicks(ALCSeq* seq);
 f32 alCSeqTicksToSec(ALCSeq* seq, s32 ticks, u32 tempo);
 u32 alCSeqSecToTicks(ALCSeq* seq, f32 sec, u32 tempo);
 void alCSeqNewMarker(ALCSeq* seq, ALCSeqMarker* m, u32 ticks);
 void alCSeqSetLoc(ALCSeq* seq, ALCSeqMarker* marker);
 void alCSeqGetLoc(ALCSeq* seq, ALCSeqMarker* marker);
 f32 alCents2Ratio(s32 cents);
 void alSeqpNew(ALSeqPlayer* seqp, ALSeqpConfig* config);
 void alSeqpDelete(ALSeqPlayer* seqp);
 void alSeqpSetSeq(ALSeqPlayer* seqp, ALSeq* seq);
 ALSeq* alSeqpGetSeq(ALSeqPlayer* seqp);
 void alSeqpPlay(ALSeqPlayer* seqp);
 void alSeqpStop(ALSeqPlayer* seqp);
 s32 alSeqpGetState(ALSeqPlayer* seqp);
 void alSeqpSetBank(ALSeqPlayer* seqp, ALBank* b);
 void alSeqpSetTempo(ALSeqPlayer* seqp, s32 tempo);
 s32 alSeqpGetTempo(ALSeqPlayer* seqp);
 s16 alSeqpGetVol(ALSeqPlayer* seqp);
 void alSeqpSetVol(ALSeqPlayer* seqp, s16 vol);
 void alSeqpLoop(ALSeqPlayer* seqp, ALSeqMarker* start, ALSeqMarker* end, s32 count);
 void alSeqpSetChlProgram(ALSeqPlayer* seqp, u8 chan, u8 prog);
 s32 alSeqpGetChlProgram(ALSeqPlayer* seqp, u8 chan);
 void alSeqpSetChlFXMix(ALSeqPlayer* seqp, u8 chan, u8 fxmix);
 u8 alSeqpGetChlFXMix(ALSeqPlayer* seqp, u8 chan);
 void alSeqpSetChlVol(ALSeqPlayer* seqp, u8 chan, u8 vol);
 u8 alSeqpGetChlVol(ALSeqPlayer* seqp, u8 chan);
 void alSeqpSetChlPan(ALSeqPlayer* seqp, u8 chan, ALPan pan);
 ALPan alSeqpGetChlPan(ALSeqPlayer* seqp, u8 chan);
 void alSeqpSetChlPriority(ALSeqPlayer* seqp, u8 chan, u8 priority);
 u8 alSeqpGetChlPriority(ALSeqPlayer* seqp, u8 chan);
 void alSeqpSendMidi(ALSeqPlayer* seqp, s32 ticks, u8 status, u8 byte1, u8 byte2);
 void alCSPNew(ALCSPlayer* seqp, ALSeqpConfig* config);
 void alCSPDelete(ALCSPlayer* seqp);
 void alCSPSetSeq(ALCSPlayer* seqp, ALCSeq* seq);
 ALCSeq* alCSPGetSeq(ALCSPlayer* seqp);
 void alCSPPlay(ALCSPlayer* seqp);
 void alCSPStop(ALCSPlayer* seqp);
 s32 alCSPGetState(ALCSPlayer* seqp);
 void alCSPSetBank(ALCSPlayer* seqp, ALBank* b);
 void alCSPSetTempo(ALCSPlayer* seqp, s32 tempo);
 s32 alCSPGetTempo(ALCSPlayer* seqp);
 s16 alCSPGetVol(ALCSPlayer* seqp);
 void alCSPSetVol(ALCSPlayer* seqp, s16 vol);
 void alCSPSetChlProgram(ALCSPlayer* seqp, u8 chan, u8 prog);
 s32 alCSPGetChlProgram(ALCSPlayer* seqp, u8 chan);
 void alCSPSetChlFXMix(ALCSPlayer* seqp, u8 chan, u8 fxmix);
 u8 alCSPGetChlFXMix(ALCSPlayer* seqp, u8 chan);
 void alCSPSetChlPan(ALCSPlayer* seqp, u8 chan, ALPan pan);
 ALPan alCSPGetChlPan(ALCSPlayer* seqp, u8 chan);
 void alCSPSetChlVol(ALCSPlayer* seqp, u8 chan, u8 vol);
 u8 alCSPGetChlVol(ALCSPlayer* seqp, u8 chan);
 void alCSPSetChlPriority(ALCSPlayer* seqp, u8 chan, u8 priority);
 u8 alCSPGetChlPriority(ALCSPlayer* seqp, u8 chan);
 void alCSPSendMidi(ALCSPlayer* seqp, s32 ticks, u8 status, u8 byte1, u8 byte2);
 typedef struct
 {
  s32 maxSounds;
  s32 maxEvents;
  ALHeap* heap;
 } ALSndpConfig;
 typedef struct
 {
  ALPlayer node;
  ALEventQueue evtq;
  ALEvent nextEvent;
  ALSynth* drvr;
  s32 target;
  void* sndState;
  s32 maxSounds;
  ALMicroTime frameTime;
  ALMicroTime nextDelta;
  ALMicroTime curTime;
 } ALSndPlayer;
 typedef s16 ALSndId;
 void alSndpNew(ALSndPlayer* sndp, ALSndpConfig* c);
 void alSndpDelete(ALSndPlayer* sndp);
 ALSndId alSndpAllocate(ALSndPlayer* sndp, ALSound* sound);
 void alSndpDeallocate(ALSndPlayer* sndp, ALSndId id);
 void alSndpSetSound(ALSndPlayer* sndp, ALSndId id);
 ALSndId alSndpGetSound(ALSndPlayer* sndp);
 void alSndpPlay(ALSndPlayer* sndp);
 void alSndpPlayAt(ALSndPlayer* sndp, ALMicroTime delta);
 void alSndpStop(ALSndPlayer* sndp);
 void alSndpSetVol(ALSndPlayer* sndp, s16 vol);
 void alSndpSetPitch(ALSndPlayer* sndp, f32 pitch);
 void alSndpSetPan(ALSndPlayer* sndp, ALPan pan);
 void alSndpSetPriority(ALSndPlayer* sndp, ALSndId id, u8 priority);
 void alSndpSetFXMix(ALSndPlayer* sndp, u8 mix);
 s32 alSndpGetState(ALSndPlayer* sndp);
 void alParseAbiCL(Acmd* cmdList, u32 nbytes);
typedef struct
{
 unsigned char* base;
 int fmt, siz;
 int xsize, ysize;
 int lsize;
 int addr;
 int w, h;
 int s, t;
} Image;
typedef struct
{
 float col[3];
 float pos[3];
 float a1, a2;
} PositionalLight;
extern int
guLoadTextureBlockMipMap(Gfx** glist, unsigned char* tbuf, Image* im, unsigned char startTile, unsigned char pal,
       unsigned char cms, unsigned char cmt, unsigned char masks, unsigned char maskt,
       unsigned char shifts, unsigned char shiftt, unsigned char cfs, unsigned char cft);
extern int guGetDPLoadTextureTileSz(int ult, int lrt);
extern void guDPLoadTextureTile(Gfx* glistp, void* timg, int texl_fmt, int texl_size, int img_width, int img_height,
        int uls, int ult, int lrs, int lrt, int palette, int cms, int cmt, int masks, int maskt,
        int shifts, int shiftt);
extern void guMtxIdent(Mtx* m);
extern void guMtxIdentF(float mf[4][4]);
extern void guOrtho(Mtx* m, float l, float r, float b, float t, float n, float f, float scale);
extern void guOrthoF(float mf[4][4], float l, float r, float b, float t, float n, float f, float scale);
extern void guFrustum(Mtx* m, float l, float r, float b, float t, float n, float f, float scale);
extern void guFrustumF(float mf[4][4], float l, float r, float b, float t, float n, float f, float scale);
extern void guPerspective(Mtx* m, u16* perspNorm, float fovy, float aspect, float near, float far, float scale);
extern void
guPerspectiveF(float mf[4][4], u16* perspNorm, float fovy, float aspect, float near, float far, float scale);
extern void
guLookAt(Mtx* m, float xEye, float yEye, float zEye, float xAt, float yAt, float zAt, float xUp, float yUp, float zUp);
extern void guLookAtF(float mf[4][4], float xEye, float yEye, float zEye, float xAt, float yAt, float zAt, float xUp,
       float yUp, float zUp);
extern void guLookAtReflect(Mtx* m, LookAt* l, float xEye, float yEye, float zEye, float xAt, float yAt, float zAt,
       float xUp, float yUp, float zUp);
extern void guLookAtReflectF(float mf[4][4], LookAt* l, float xEye, float yEye, float zEye, float xAt, float yAt,
        float zAt, float xUp, float yUp, float zUp);
extern void guLookAtHilite(Mtx* m, LookAt* l, Hilite* h, float xEye, float yEye, float zEye, float xAt, float yAt,
         float zAt, float xUp, float yUp, float zUp, float xl1, float yl1, float zl1, float xl2,
         float yl2, float zl2, int twidth, int theight);
extern void guLookAtHiliteF(float mf[4][4], LookAt* l, Hilite* h, float xEye, float yEye, float zEye, float xAt,
       float yAt, float zAt, float xUp, float yUp, float zUp, float xl1, float yl1, float zl1,
       float xl2, float yl2, float zl2, int twidth, int theight);
extern void guLookAtStereo(Mtx* m, float xEye, float yEye, float zEye, float xAt, float yAt, float zAt, float xUp,
         float yUp, float zUp, float eyedist);
extern void guLookAtStereoF(float mf[4][4], float xEye, float yEye, float zEye, float xAt, float yAt, float zAt,
       float xUp, float yUp, float zUp, float eyedist);
extern void guRotate(Mtx* m, float a, float x, float y, float z);
extern void guRotateF(float mf[4][4], float a, float x, float y, float z);
extern void guRotateRPY(Mtx* m, float r, float p, float y);
extern void guRotateRPYF(float mf[4][4], float r, float p, float h);
extern void guAlign(Mtx* m, float a, float x, float y, float z);
extern void guAlignF(float mf[4][4], float a, float x, float y, float z);
extern void guScale(Mtx* m, float x, float y, float z);
extern void guScaleF(float mf[4][4], float x, float y, float z);
extern void guTranslate(Mtx* m, float x, float y, float z);
extern void guTranslateF(float mf[4][4], float x, float y, float z);
extern void guPosition(Mtx* m, float r, float p, float h, float s, float x, float y, float z);
extern void guPositionF(float mf[4][4], float r, float p, float h, float s, float x, float y, float z);
extern void guMtxF2L(float mf[4][4], Mtx* m);
extern void guMtxL2F(float mf[4][4], Mtx* m);
extern void guMtxCatF(float m[4][4], float n[4][4], float r[4][4]);
extern void guMtxCatL(Mtx* m, Mtx* n, Mtx* res);
extern void guMtxXFMF(float mf[4][4], float x, float y, float z, float* ox, float* oy, float* oz);
extern void guMtxXFML(Mtx* m, float x, float y, float z, float* ox, float* oy, float* oz);
extern void guNormalize(float* x, float* y, float* z);
void guPosLight(PositionalLight* pl, Light* l, float xOb, float yOb, float zOb);
void guPosLightHilite(PositionalLight* pl1, PositionalLight* pl2, Light* l1, Light* l2, LookAt* l, Hilite* h,
       float xEye, float yEye, float zEye, float xOb, float yOb, float zOb, float xUp, float yUp,
       float zUp, int twidth, int theight);
extern int guRandom(void);
extern float sinf(float angle);
extern float cosf(float angle);
extern signed short sins(unsigned short angle);
extern signed short coss(unsigned short angle);
extern float sqrtf(float value);
extern void guParseRdpDL(u64* rdp_dl, u64 nbytes, u8 flags);
extern void guParseString(char* StringPointer, u64 nbytes);
extern void guBlinkRdpDL(u64* rdp_dl_in, u64 nbytes_in, u64* rdp_dl_out, u64* nbytes_out, u32 x, u32 y, u32 radius,
       u8 red, u8 green, u8 blue, u8 flags);
extern void guParseGbiDL(u64* gbi_dl, u32 nbytes, u8 flags);
extern void guDumpGbiDL(OSTask* tp, u8 flags);
typedef struct
{
 int dataSize;
 int dlType;
 int flags;
 u32 paddr;
} guDLPrintCB;
void guSprite2DInit(uSprite* SpritePointer, void* SourceImagePointer, void* TlutPointer, int Stride, int SubImageWidth,
     int SubImageHeight, int SourceImageType, int SourceImageBitSize, int SourceImageOffsetS,
     int SourceImageOffsetT);
typedef struct
{
 long type;
 long length;
 long magic;
 char userdata[(((4096) * 6) - (3 * sizeof(long)))];
} RamRomBuffer;
struct bitmap {
 s16 width;
 s16 width_img;
 s16 s;
 s16 t;
 void *buf;
 s16 actualHeight;
 s16 LUToffset;
};
typedef struct bitmap Bitmap;
struct sprite {
 s16 x,y;
 s16 width, height;
 f32 scalex, scaley;
 s16 expx, expy;
 u16 attr;
 s16 zdepth;
 u8 red;
 u8 green;
 u8 blue;
 u8 alpha;
 s16 startTLUT;
 s16 nTLUT;
 int *LUT;
 s16 istart;
 s16 istep;
 s16 nbitmaps;
 s16 ndisplist;
 s16 bmheight;
 s16 bmHreal;
 u8 bmfmt;
 u8 bmsiz;
 Bitmap *bitmap;
 Gfx *rsp_dl;
 Gfx *rsp_dl_next;
 s16 frac_s,
  frac_t;
};
typedef struct sprite Sprite;
void spSetAttribute (Sprite *sp, s32 attr);
void spClearAttribute (Sprite *sp, s32 attr);
void spMove (Sprite *sp, s32 x, s32 y);
void spScale (Sprite *sp, f32 sx, f32 sy);
void spSetZ (Sprite *sp, s32 z );
void spColor (Sprite *sp, u8 red, u8 green, u8 blue, u8 alpha);
Gfx *spDraw (Sprite *sp);
void spInit( Gfx **glistp );
void spScissor( s32 xmin, s32 xmax, s32 ymin, s32 ymax );
void spFinish( Gfx **glistp );
 extern long long int rspbootTextStart[], rspbootTextEnd[];
 extern long long int gspFast3DTextStart[], gspFast3DTextEnd[];
 extern long long int gspFast3DDataStart[], gspFast3DDataEnd[];
 extern long long int gspFast3D_dramTextStart[], gspFast3D_dramTextEnd[];
 extern long long int gspFast3D_dramDataStart[], gspFast3D_dramDataEnd[];
 extern long long int gspFast3D_fifoTextStart[], gspFast3D_fifoTextEnd[];
 extern long long int gspFast3D_fifoDataStart[], gspFast3D_fifoDataEnd[];
 extern long long int gspF3DNoNTextStart[], gspF3DNoNTextEnd[];
 extern long long int gspF3DNoNDataStart[], gspF3DNoNDataEnd[];
 extern long long int gspF3DNoN_dramTextStart[];
 extern long long int gspF3DNoN_dramTextEnd[];
 extern long long int gspF3DNoN_dramDataStart[];
 extern long long int gspF3DNoN_dramDataEnd[];
 extern long long int gspF3DNoN_fifoTextStart[];
 extern long long int gspF3DNoN_fifoTextEnd[];
 extern long long int gspF3DNoN_fifoDataStart[];
 extern long long int gspF3DNoN_fifoDataEnd[];
 extern long long int gspLine3DTextStart[], gspLine3DTextEnd[];
 extern long long int gspLine3DDataStart[], gspLine3DDataEnd[];
 extern long long int gspLine3D_dramTextStart[], gspLine3D_dramTextEnd[];
 extern long long int gspLine3D_dramDataStart[], gspLine3D_dramDataEnd[];
 extern long long int gspLine3D_fifoTextStart[], gspLine3D_fifoTextEnd[];
 extern long long int gspLine3D_fifoDataStart[], gspLine3D_fifoDataEnd[];
 extern long long int gspSprite2DTextStart[], gspSprite2DTextEnd[];
 extern long long int gspSprite2DDataStart[], gspSprite2DDataEnd[];
 extern long long int gspSprite2D_dramTextStart[], gspSprite2D_dramTextEnd[];
 extern long long int gspSprite2D_dramDataStart[], gspSprite2D_dramDataEnd[];
 extern long long int gspSprite2D_fifoTextStart[], gspSprite2D_fifoTextEnd[];
 extern long long int gspSprite2D_fifoDataStart[], gspSprite2D_fifoDataEnd[];
 extern long long int aspMainTextStart[], aspMainTextEnd[];
 extern long long int aspMainDataStart[], aspMainDataEnd[];
 extern long long int gspF3DEX_fifoTextStart[], gspF3DEX_fifoTextEnd[];
 extern long long int gspF3DEX_fifoDataStart[], gspF3DEX_fifoDataEnd[];
 extern long long int gspF3DEX_NoN_fifoTextStart[], gspF3DEX_NoN_fifoTextEnd[];
 extern long long int gspF3DEX_NoN_fifoDataStart[], gspF3DEX_NoN_fifoDataEnd[];
 extern long long int gspF3DLX_fifoTextStart[], gspF3DLX_fifoTextEnd[];
 extern long long int gspF3DLX_fifoDataStart[], gspF3DLX_fifoDataEnd[];
 extern long long int gspF3DLX_NoN_fifoTextStart[], gspF3DLX_NoN_fifoTextEnd[];
 extern long long int gspF3DLX_NoN_fifoDataStart[], gspF3DLX_NoN_fifoDataEnd[];
 extern long long int gspF3DLX_Rej_fifoTextStart[], gspF3DLX_Rej_fifoTextEnd[];
 extern long long int gspF3DLX_Rej_fifoDataStart[], gspF3DLX_Rej_fifoDataEnd[];
 extern long long int gspF3DLP_Rej_fifoTextStart[], gspF3DLP_Rej_fifoTextEnd[];
 extern long long int gspF3DLP_Rej_fifoDataStart[], gspF3DLP_Rej_fifoDataEnd[];
 extern long long int gspL3DEX_fifoTextStart[], gspL3DEX_fifoTextEnd[];
 extern long long int gspL3DEX_fifoDataStart[], gspL3DEX_fifoDataEnd[];
 extern long long int gspF3DEX2_fifoTextStart[], gspF3DEX2_fifoTextEnd[];
 extern long long int gspF3DEX2_fifoDataStart[], gspF3DEX2_fifoDataEnd[];
 extern long long int gspF3DEX2_NoN_fifoTextStart[], gspF3DEX2_NoN_fifoTextEnd[];
 extern long long int gspF3DEX2_NoN_fifoDataStart[], gspF3DEX2_NoN_fifoDataEnd[];
 extern long long int gspF3DLX2_fifoTextStart[], gspF3DLX2_fifoTextEnd[];
 extern long long int gspF3DLX2_fifoDataStart[], gspF3DLX2_fifoDataEnd[];
 extern long long int gspF3DLX2_NoN_fifoTextStart[], gspF3DLX2_NoN_fifoTextEnd[];
 extern long long int gspF3DLX2_NoN_fifoDataStart[], gspF3DLX2_NoN_fifoDataEnd[];
 extern long long int gspF3DLX2_Rej_fifoTextStart[], gspF3DLX2_Rej_fifoTextEnd[];
 extern long long int gspF3DLX2_Rej_fifoDataStart[], gspF3DLX2_Rej_fifoDataEnd[];
 extern long long int gspF3DLP2_Rej_fifoTextStart[], gspF3DLP2_Rej_fifoTextEnd[];
 extern long long int gspF3DLP2_Rej_fifoDataStart[], gspF3DLP2_Rej_fifoDataEnd[];
 extern long long int gspL3DEX2_fifoTextStart[], gspL3DEX2_fifoTextEnd[];
 extern long long int gspL3DEX2_fifoDataStart[], gspL3DEX2_fifoDataEnd[];
 typedef void (*OSErrorHandler)(s16, s16, ...);
 OSErrorHandler osSetErrorHandler(OSErrorHandler);
 typedef struct
 {
  u32 magic;
  u32 len;
  u32* base;
  s32 startCount;
  s32 writeOffset;
 } OSLog;
 typedef struct
 {
  u32 magic;
  u32 timeStamp;
  u16 argCount;
  u16 eventID;
 } OSLogIT;
 typedef struct
 {
  u32 magic;
  u32 version;
 } OSLogFileHdr;
 void osCreateLog(OSLog* log, u32* base, s32 len);
 void osLogEvent(OSLog* log, s16 code, s16 numArgs, ...);
 void osFlushLog(OSLog* log);
 u32 osLogFloat(f32);
 extern void osDelay(int count);
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char uint8_t;
typedef short unsigned int uint16_t;
typedef unsigned int uint32_t;
typedef long unsigned int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef long unsigned int uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef long unsigned int uint_fast16_t;
typedef long unsigned int uint_fast32_t;
typedef long unsigned int uint_fast64_t;
typedef long int intptr_t;
typedef long unsigned int uintptr_t;
typedef long int intmax_t;
typedef long unsigned int uintmax_t;
typedef f32 Mtx44f[4][4];
typedef struct Vec3h
{
    s16 x, y, z;
} Vec3h;
typedef struct Vec3i
{
    s32 x, y, z;
} Vec3i;
typedef struct Vec3f
{
    f32 x, y, z;
} Vec3f;
typedef struct Vec2b
{
    s8 x, y;
} Vec2b;
typedef struct Vec2f
{
    f32 x, y;
} Vec2f;
typedef struct Vec2h
{
    s16 x, y;
} Vec2h;
typedef struct Vec2i
{
    s32 x, y;
} Vec2i;
typedef s8 sb8;
typedef s16 sb16;
typedef s32 sb32;
typedef u8 ub8;
typedef u16 ub16;
typedef u32 ub32;
enum nSYColorRGBAIndex
{
    nSYColorRGBAIndexR,
    nSYColorRGBAIndexG,
    nSYColorRGBAIndexB,
    nSYColorRGBAIndexA
};
typedef struct SYColorRGB
{
    u8 r, g, b;
} SYColorRGB;
typedef struct SYColorRGBA
{
    u8 r, g, b, a;
} SYColorRGBA;
typedef struct SYColorRGBPair
{
    SYColorRGB prim, env;
} SYColorRGBPair;
typedef union SYColorPack
{
    SYColorRGBA s;
    u32 pack;
} SYColorPack;
typedef struct SYRectangle
{
    s32 ulx, uly;
    s32 lrx, lry;
} SYRectangle;
f32 __cosf(f32);
f32 __sinf(f32);
f32 fcos(f32 x);
f32 sqrtf(f32);
extern f32 syUtilsTan(f32 angle);
extern f32 syUtilsArcTan(f32 yDivX);
extern f32 syUtilsArcTan2(f32 y, f32 x);
extern f32 syUtilsArcSin(f32 x);
extern f32 syUtilsArcCos(f32 x);
extern f32 syUtilsCsc(f32 x);
extern f32 syUtilsSec(f32 x);
extern f32 syUtilsCot(f32 x);
extern f32 __sinf(f32);
extern f32 __cosf(f32);
extern void syUtilsSetRandomSeedPtr(s32 *seedptr);
extern u16 syUtilsRandUShort(void);
extern f32 syUtilsRandFloat(void);
extern s32 syUtilsRandIntRange(s32 range);
extern u8 syUtilsRandTimeUChar(void);
extern f32 syUtilsRandTimeFloat(void);
extern s32 syUtilsRandTimeUCharRange(s32 range);
typedef enum syVectorAxisFlags
{
    nSYVectorAxisX,
    nSYVectorAxisY,
    nSYVectorAxisZ,
    nSYVectorInvX,
    nSYVectorInvY,
    nSYVectorInvZ,
    nSYVectorInvSwap
} syVectorAxisFlags;
extern f32 syVectorNorm3D(Vec3f *dst);
extern f32 syVectorMag3D(Vec3f *src);
extern Vec3f* syVectorAdd3D(Vec3f *dst, Vec3f *add);
extern Vec3f* syVectorSub3D(Vec3f *dst, Vec3f *sub);
extern Vec3f* syVectorDiff3D(Vec3f *dst, Vec3f *src, Vec3f *sub);
extern f32 syVectorNormDiff3D(Vec3f *dst, Vec3f *src, Vec3f *sub);
extern Vec3f* syVectorScale3D(Vec3f *dst, f32 scale);
extern Vec3f* syVectorInv3D(Vec3f *dst, f32 inv);
extern Vec3f* syVectorAddScaled3D(Vec3f *dst, Vec3f *add, f32 scale);
extern f32 syVectorNormScaleAddScaled3D(Vec3f *dst, f32 dst_scale, Vec3f *add, f32 add_scale);
extern f32 syVectorAngleDiff3D(Vec3f *a, Vec3f *b);
extern Vec3f* syVectorRotate3D(Vec3f *dst, s32 axis, f32 angle);
extern Vec3f* syVectorNeg3D(Vec3f *dst);
extern Vec3f* syVectorRotateAbout3D(Vec3f *dst, Vec3f *dir, f32 angle);
extern Vec3f* syVectorAxisNeg3D(Vec3f *dst, u32 flags);
extern Vec3f* syVectorGranularNeg3D(Vec3f *dst, u32 flags);
extern Vec3f* syVectorReflectAcross3D(Vec3f *a, Vec3f *b);
extern Vec3f* syVectorReflectFacing3D(Vec3f *a, Vec3f *b);
extern s32 syVectorDirection3D(Vec3f *a, Vec3f *b);
extern Vec3f* syVectorNormCross3D(Vec3f *a, Vec3f *b, Vec3f *dst);
extern s32 syVectorDiffDirection3D(Vec3f *sub, Vec3f *a, Vec3f *b);
extern f32 syVectorDist3D(Vec3f *sub, Vec3f *src);
extern f32 syVectorDistPlaneToPoint3D(Vec3f *plane_a, Vec3f *plane_b, Vec3f *plane_c, Vec3f *point);
typedef struct SYMallocRegion
{
    u32 id;
    void *start;
    void *end;
    void *ptr;
} SYMallocRegion;
extern void syMallocInit(SYMallocRegion *buf, u32 id, void *start, size_t size);
extern void* syMallocSet(SYMallocRegion *buf, size_t size, u32 alignment);
extern void syMallocReset(SYMallocRegion *buf);
enum SYTaskType
{
    nSYTaskTypeNone,
    nSYTaskTypeGfx,
    nSYTaskTypeAudio,
    nSYTaskTypeAddClient,
    nSYTaskTypeVi,
    nSYTaskTypeFramebuffers,
    nSYTaskTypeGfxEnd,
    nSYTaskTypeNoOp,
    nSYTaskTypeRdpBuffer,
    nSYTaskTypeCustomBuffer,
    nSYTaskTypeDefaultBuffer,
    SC_TASK_TYPE_11
};
enum SYTaskState
{
    nSYSchedulerStatusDefault,
    nSYSchedulerStatusTaskQueued,
    nSYSchedulerStatusTaskRunning,
    nSYSchedulerStatusTaskPending,
    nSYSchedulerStatusTaskSuspending,
    nSYSchedulerStatusTaskSuspended,
    nSYSchedulerStatusTaskStopped
};
typedef struct SYClient
{
               struct SYClient* next;
               OSMesgQueue* mq;
} SYClient;
struct SYTaskInfo;
struct SYTaskGfx;
typedef sb32 (*SYTaskCallback)(struct SYTaskInfo*);
typedef sb32 (*SYTaskGfxCallback)(struct SYTaskGfx*);
typedef struct SYTaskInfo {
               s32 type;
               s32 priority;
               s32 state;
               struct SYTaskInfo *next;
               struct SYTaskInfo *prev;
               SYTaskCallback fnCheck;
               s32 unk18;
               s32 retVal;
               OSMesgQueue *mq;
} SYTaskInfo;
typedef struct SYTaskGfx
{
               SYTaskInfo info;
               OSTask task;
               u32 *unk68;
               s32 *fb;
               s32 framebuffer_id;
               s32 unk74;
               s32 rdp_buffer_size;
               s32 unk7C;
               u32 task_id;
               s32 unk_84;
} SYTaskGfx;
typedef struct
{
               SYTaskInfo info;
               OSTask task;
} SYTaskAudio;
typedef struct
{
               SYTaskInfo info;
               s32 width;
               s32 height;
               s32 flags;
               s16 edgeOffsetLeft;
               s16 edgeOffsetRight;
               s16 edgeOffsetTop;
               s16 edgeOffsetBottom;
} SYTaskVi;
typedef struct
{
               SYTaskInfo info;
               void *framebuffers[3];
} SYTaskFramebuffer;
typedef struct
{
               SYTaskInfo info;
               void* buffer;
               s32 size;
} SYTaskRdpBuffer;
typedef struct
{
               SYTaskInfo info;
               SYClient* client;
} SYTaskAddClient;
typedef struct SYTaskGfxEnd
{
               SYTaskInfo info;
               void* fb;
               u32 task_id;
} SYTaskGfxEnd;
typedef struct SYTaskType9
{
               SYTaskInfo info;
               OSMesgQueue *unk24;
} SYTaskType9;
extern OSMesgQueue gSYSchedulerTaskMesgQueue;
extern sb32 gSYSchedulerIsCustomFramebuffer;
extern u32 gSYSchedulerFrameTime;
extern u32 gSYSchedulerAudioTime;
extern u64 sSYSchedulerRdpCache;
extern ub32 gSYSchedulerIsSoftReset;
extern void *gSYSchedulerNextFramebuffer;
extern void *gSYSchedulerCurrentFramebuffer;
extern u32 gSYSchedulerFramebufferSetTimestamp;
extern void func_80000970(SYTaskInfo *arg0);
extern void sySchedulerAddClient(SYClient *arg0, OSMesgQueue *mq, OSMesg *msg, u32 count);
extern s32 sySchedulerCheckReadyFramebuffer(SYTaskGfx *t);
extern void sySchedulerThreadMain(void *arg);
extern s32 func_80000B54( SYTaskInfo *t);
typedef enum GObjKind
{
    nGCCommonKindFighter = 1000,
    nGCCommonKindFighterParts,
    nGCCommonKindMainCamera = 1002,
    nGCCommonKindWallpaperCamera,
    nGCCommonKindScissorCamera,
    nGCCommonKindPlayerMagnifyCamera,
    nGCCommonKindPlayerArrowsCamera,
    nGCCommonKindUnkCamera3,
    nGCCommonKindWallpaper,
    nGCCommonKindGroundDisplay,
    nGCCommonKindGround,
    nGCCommonKindEffect,
    nGCCommonKindWeapon,
    nGCCommonKindItem,
    nGCCommonKindMovie = 1015,
    nGCCommonKindInterface,
    nGCCommonKindRumble,
    nGCCommonKindPublic,
    nGCCommonKindPauseMenu,
    nGCCommonKindShadow,
    nGCCommonKindTransition,
    nGCCommonKindBossWallpaper = 1023,
    nGCCommonKindPlayerSelect,
    nGCCommonKindSceneCamera
} GObjKind;
typedef enum GObjProcessKind
{
    nGCProcessKindThread,
    nGCProcessKindFunc,
    nGCProcessKindEnumCount
} GObjProcessKind;
typedef enum GObjObjKind
{
    nGCCommonAppendNone,
    nGCCommonAppendDObj,
    nGCCommonAppendSObj,
    nGCCommonAppendCamera,
    nGCCommonAppendEnumCount
} GObjObjKind;
typedef enum GObjEventKind
{
    nGCCommonEventShow,
    nGCCommonEventHide,
    nGCCommonEventResume,
    nGCCommonEventPause,
    nGCCommonEventEnd
} GObjEventKind;
typedef enum GObjLinkID
{
    nGCCommonLinkIDGround = 1,
    nGCCommonLinkIDGroundDisplay = 2,
    nGCCommonLinkIDItemActor = 2,
    nGCCommonLinkID02 = 2,
    nGCCommonLinkIDFighter = 3,
    nGCCommonLinkIDCreditsName = 3,
    nGCCommonLinkIDItem = 4,
    nGCCommonLinkIDCreditsJob = 4,
    nGCCommonLinkIDWeapon = 5,
    nGCCommonLinkIDEffect,
    nGCCommonLinkIDSpecialEffect = 8,
    nGCCommonLinkIDHighlight = 9,
    nGCCommonLinkIDCamera = 9,
    nGCCommonLinkIDInterfaceActor = 10,
    nGCCommonLinkIDInterface = 11,
    nGCCommonLinkIDMagnify = 12,
    nGCCommonLinkIDMovie = 13,
    nGCCommonLinkIDRumble = 13,
    nGCCommonLinkIDWallpaper = 13,
    nGCCommonLinkIDWallpaperEffect=13,
    nGCCommonLinkIDFighterParts = 13,
    nGCCommonLinkIDShadow = 13,
    nGCCommonLinkIDTransition = 13,
    nGCCommonLinkIDPauseMenu = 14,
    nGCCommonLinkIDPlayerSelect = 15,
    nGCCommonLinkIDSceneCamera = 16
} GObjLinkID;
typedef enum DObjVectorKind
{
    nGCDrawVectorKindNone,
    nGCDrawVectorKindTranslate,
    nGCDrawVectorKindRotate,
    nGCDrawVectorKindScale,
    nGCDrawVectorKindEnumCount
} DObjVectorKind;
typedef enum XObjTransformKind
{
    nGCMatrixKindNull,
    nGCMatrixKindPerspFastF = 3,
    nGCMatrixKindPerspF,
    nGCMatrixKindOrtho,
    nGCMatrixKindLookAt,
    nGCMatrixKindTra = 18,
    nGCMatrixKindRotD,
    nGCMatrixKindTraRotD,
    nGCMatrixKindRotRpyD,
    nGCMatrixKindTraRotRpyD,
    nGCMatrixKindRotR,
    nGCMatrixKindTraRotR,
    nGCMatrixKindTraRotRSca,
    nGCMatrixKindRotRpyR,
    nGCMatrixKindTraRotRpyR,
    nGCMatrixKindTraRotRpyRSca,
    nGCMatrixKindRotPyrR,
    nGCMatrixKindTraRotPyrR,
    nGCMatrixKindTraRotPyrRSca,
    nGCMatrixKindSca,
    nGCMatrixKindRecalcRotPyrR = 41,
    nGCMatrixKindRecalcRotRpyR,
    nGCMatrixKindRecalcRotPyrRSca,
    nGCMatrixKindRecalcRotRpyRSca,
    nGCMatrixKind45,
    nGCMatrixKind46,
    nGCMatrixKind47,
    nGCMatrixKind48,
    nGCMatrixKind49,
    nGCMatrixKind50,
    nGCMatrixKindVecTra = 56,
    nGCMatrixKindVecRotR,
    nGCMatrixKindVecRotRpyR,
    nGCMatrixKindVecSca,
    nGCMatrixKindVecTraRotR,
    nGCMatrixKindVecTraRotRSca,
    nGCMatrixKindVecTraRotRpyR,
    nGCMatrixKindVecTraRotRpyRSca
} XObjTransformKind;
typedef enum AObjAnimKind
{
    nGCAnimKindNone,
    nGCAnimKindStep,
    nGCAnimKindLinear,
    nGCAnimKindCubic,
    nGCAnimKindSpecial
} AObjAnimKind;
typedef enum AObjEvent16Kind
{
    nGCAnimEvent16End,
    nGCAnimEvent16Block,
    nGCAnimEvent16SetValBlock,
    nGCAnimEvent16SetVal,
    nGCAnimEvent16SetValRateBlock,
    nGCAnimEvent16SetValRate,
    nGCAnimEvent16SetTargetRate,
    nGCAnimEvent16SetVal0RateBlock,
    nGCAnimEvent16SetVal0Rate,
    nGCAnimEvent16SetValAfterBlock,
    nGCAnimEvent16SetValAfter,
    nGCAnimEvent1611,
    nGCAnimEvent16SetTranslateInterp,
    nGCAnimEvent16Loop,
    nGCAnimEvent16SetFlags
} AObjEvent16Kind;
typedef enum AObjEvent32Kind
{
    nGCAnimEvent32End,
    nGCAnimEvent32Jump,
    nGCAnimEvent32Wait,
    nGCAnimEvent32SetValBlock,
    nGCAnimEvent32SetVal,
    nGCAnimEvent32SetValRateBlock,
    nGCAnimEvent32SetValRate,
    nGCAnimEvent32SetTargetRate,
    nGCAnimEvent32SetVal0RateBlock,
    nGCAnimEvent32SetVal0Rate,
    nGCAnimEvent32SetValAfterBlock,
    nGCAnimEvent32SetValAfter,
    ANIM_CMD_12 = 12,
    nGCAnimEvent32SetInterp = 13,
    nGCAnimEvent32SetAnim,
    nGCAnimEvent32SetFlags,
    ANIM_CMD_16 = 16,
    ANIM_CMD_17 = 17,
    nGCAnimEvent32SetExtValAfterBlock,
    nGCAnimEvent32SetExtValAfter,
    nGCAnimEvent32SetExtValBlock,
    nGCAnimEvent32SetExtVal,
    ANIM_CMD_22 = 22,
    ANIM_CMD_23 = 23
} AObjEvent32Kind;
typedef enum AObjTrackKind
{
    nGCAnimTrackNone,
    nGCAnimTrackJointStart,
    nGCAnimTrackRotX = nGCAnimTrackJointStart,
    nGCAnimTrackRotY,
    nGCAnimTrackRotZ,
    nGCAnimTrackTraI,
    nGCAnimTrackTraX,
    nGCAnimTrackTraY,
    nGCAnimTrackTraZ,
    nGCAnimTrackScaX,
    nGCAnimTrackScaY,
    nGCAnimTrackScaZ,
    nGCAnimTrackJointEnd = nGCAnimTrackScaZ,
    nGCAnimTrackMaterialStart = 13,
    nGCAnimTrackTextureIDCurrent = nGCAnimTrackMaterialStart,
    nGCAnimTrackTraU,
    nGCAnimTrackTraV,
    nGCAnimTrackScaU,
    nGCAnimTrackScaV,
    nGCAnimTrackTextureIDNext,
    nGCAnimTrackScrU,
    nGCAnimTrackScrV,
    nGCAnimTrackSetLFrac,
    nGCAnimTrackPaletteID,
    nGCAnimTrackMaterialEnd = nGCAnimTrackPaletteID,
    nGCAnimTrackCameraStart = 25,
    nGCAnimTrackEyeX = nGCAnimTrackCameraStart,
    nGCAnimTrackEyeY,
    nGCAnimTrackEyeZ,
    nGCAnimTrackEyeI,
    nGCAnimTrackAtX,
    nGCAnimTrackAtY,
    nGCAnimTrackAtZ,
    nGCAnimTrackAtI,
    nGCAnimTrackUpX,
    nGCAnimTrackFovY,
    nGCAnimTrackCameraEnd = nGCAnimTrackFovY,
    nGCAnimTrackMaterialSubStart = 37,
    nGCAnimTrackPrimColor = nGCAnimTrackMaterialSubStart,
    nGCAnimTrackEnvColor,
    nGCAnimTrackBlendColor,
    nGCAnimTrackLight1Color,
    nGCAnimTrackLight2Color,
    nGCAnimTrackMaterialSubEnd = nGCAnimTrackLight2Color
} AObjTrackKind;
typedef enum GCStatus
{
    nGCStatusSystem,
    nGCStatusRunning,
    nGCStatusProcessing,
    nGCStatusCapturing,
    nGCStatusDisplaying
} GCStatus;
typedef enum GCRunStatus
{
    nGCRunStatusDefault,
    nGCRunStatusEnd,
    nGCRunStatusEject
} GCRunStatus;
typedef union AObjEvent16 AObjEvent16;
typedef union AObjEvent32 AObjEvent32;
typedef union AObjScript AObjScript;
typedef struct GObj GObj;
typedef struct GObjScript GObjScript;
typedef struct GObjProcess GObjProcess;
typedef struct GObjThread GObjThread;
typedef struct GObjThreadStack GObjThreadStack;
typedef struct GObjStack GObjStack;
typedef struct DObj DObj;
typedef struct DObjDesc DObjDesc;
typedef struct DObjTraDesc DObjTraDesc;
typedef struct DObjTransformTypes DObjTransformTypes;
typedef struct DObjVec DObjVec;
typedef struct DObjDLLink DObjDLLink;
typedef struct DObjDistDL DObjDistDL;
typedef struct DObjDistDLLink DObjDistDLLink;
typedef struct DObjMultiList DObjMultiList;
typedef struct AObj AObj;
typedef struct MObj MObj;
typedef struct MObjSub MObjSub;
typedef struct SObj SObj;
typedef struct CObj CObj;
typedef struct CObjVec CObjVec;
typedef struct CObjDesc CObjDesc;
typedef struct XObj XObj;
typedef struct GCGfxLink GCGfxLink;
typedef struct GCPersp GCPersp;
typedef struct GCFrustum GCFrustum;
typedef struct GCOrtho GCOrtho;
typedef struct GCTranslate GCTranslate;
typedef struct GCRotate GCRotate;
typedef struct GCScale GCScale;
typedef union GCUserData GCUserData;
typedef struct GCSetup GCSetup;
typedef enum SYTaskmanStatus
{
 nSYTaskmanStatusDefault,
 nSYTaskmanStatusLoadScene,
 nSYTaskmanStatusUnk2
} SYTaskmanStatus;
typedef struct SYTaskmanDLBuffer
{
 Gfx *start;
 u32 length;
} SYTaskmanDLBuffer;
typedef struct SYTaskmanSceneSetup
{
 u16 flags;
 void (*func_update)(void);
 void (*func_draw)(void);
 void *arena_start;
 size_t arena_size;
 s32 taskgfx_num;
 s32 contexts_num;
 size_t dl_buffer0_size;
 size_t dl_buffer1_size;
 size_t dl_buffer2_size;
 size_t dl_buffer3_size;
 size_t graphics_arena_size;
 u16 rdp_output_buffer_kind;
 s32 rdp_output_buffer_size;
 void (*func_lights)(Gfx**);
 void (*func_controller)(void);
} SYTaskmanSceneSetup;
typedef struct SYTaskmanSetup
{
 SYTaskmanSceneSetup scene_setup;
 u32 gobjthreads_num;
 size_t gobjthreadstack_size;
 u32 gobjthreadstacks_num;
 s32 unk4C;
 u32 gobjprocs_num;
 u32 gobjs_num;
 size_t gobj_size;
 u32 xobjs_num;
 void *matrix_func_list;
 void (*func_eject)(DObjVec*);
 u32 aobjs_num;
 u32 mobjs_num;
 u32 dobjs_num;
 size_t dobj_size;
 u32 sobjs_num;
 size_t sobj_size;
 u32 cobjs_num;
 size_t cobj_size;
 void (*func_start)(void);
} SYTaskmanSetup;
extern s32 gSYTaskmanTaskCount;
extern u32 dSYTaskmanUpdateCount;
extern u32 dSYTaskmanFrameCount;
extern Gfx *gSYTaskmanDLHeads[4];
extern Gfx *sSYTaskmanDLBranches[4];
extern SYMallocRegion gSYTaskmanGraphicsHeap;
extern SYMallocRegion gSYTaskmanGeneralHeap;
extern u32 sSYTaskmanUpdateTimeDelta;
extern u32 sSYTaskmanFrameTimeDelta;
extern u16 D_80046626;
extern u16 D_80046628;
extern s32 gSYTaskmanTaskID;
extern void syTaskmanSetFuncSwapBuffer(SYTaskGfxCallback arg0);
extern void syTaskmanInitSegmentF(Gfx **dl);
extern void* syTaskmanMalloc(size_t size, u32 align);
extern void func_80004F78(void);
extern void syTaskmanAppendGfxUcodeLoad(Gfx **dlist, u32 ucodeIdx);
extern void func_800053CC(void);
extern void syTaskmanUpdateDLBuffers(void);
extern void syTaskmanSetLoadScene(void);
extern void syTaskmanStartTask(SYTaskmanSetup *arg);
extern void func_80006B80(void);
union GCUserData
{
    s32 s;
    u32 u;
    void *p;
};
union AObjEvent16
{
    s16 s;
    u16 u;
    struct
    {
        u16 opcode : 5;
        u16 flags : 10;
        u16 toggle : 1;
    } command;
};
union AObjEvent32
{
    f32 f;
    s32 s;
    u32 u;
    void *p;
    struct
    {
        u32 opcode : 7;
        u32 flags : 10;
        u32 payload : 15;
    } command;
};
union AObjScript
{
    AObjEvent16 *event16;
    AObjEvent32 *event32;
};
struct AObj
{
    AObj *next;
    u8 track;
    u8 kind;
    f32 length_invert;
    f32 length;
    f32 value_base;
    f32 value_target;
    f32 rate_base;
    f32 rate_target;
    void *interpolate;
};
struct GObjThread
{
    GObjThread *next;
    OSThread thread;
    u64 *stack;
    size_t stack_size;
};
struct GObjStack
{
    GObjStack *next;
    size_t stack_size;
    u64 stack[1];
};
struct GObjThreadStack
{
    GObjThreadStack *next;
    GObjStack *stack;
    size_t size;
};
struct GObjProcess
{
    GObjProcess *link_next;
    GObjProcess *link_prev;
    GObjProcess *priority_next;
    GObjProcess *priority_prev;
    s32 priority;
    u8 kind;
    ub8 is_paused;
    GObj *parent_gobj;
    union GObjProcessExec
    {
        GObjThread *gobjthread;
        void (*func)(GObj*);
    } exec;
    void (*func_id)(GObj*);
};
struct GObjScript
{
    GObj *next_gobj;
    s32 id;
};
struct GObj
{
    u32 id;
    GObj *link_next;
    GObj *link_prev;
    u8 link_id;
    u8 dl_link_id;
    u8 frame_draw_last;
    u8 obj_kind;
    u32 link_priority;
    void (*func_run)(GObj*);
    GObjProcess *gobjproc_head;
    union
    {
        s32 unk_0x1C;
        GObj *unk_gobj_0x1C;
        GObjProcess *gobjproc_tail;
    };
    GObj *dl_link_next;
    GObj *dl_link_prev;
    u32 dl_link_priority;
    void (*proc_display)(GObj*);
    u64 camera_mask;
    u32 camera_tag;
    u64 buffer_mask;
    GObjScript gobjscripts[5];
    s32 gobjscripts_num;
    void *obj;
    f32 anim_frame;
    u32 flags;
    void (*func_anim)(DObj*, s32, f32);
    GCUserData user_data;
};
struct XObj
{
    XObj *next;
    u8 kind;
    u8 unk05;
    Mtx mtx;
};
struct GCPersp
{
    XObj *xobj;
    u16 norm;
    f32 fovy;
    f32 aspect;
    f32 near;
    f32 far;
    f32 scale;
};
struct GCFrustum
{
    XObj *xobj;
    f32 l, r, b, t, n, f;
    f32 scale;
};
struct GCOrtho
{
    XObj *xobj;
    f32 l, r, b, t, n, f;
    f32 scale;
};
struct GCTranslate
{
    XObj *xobj;
    union
    {
        Vec3f f;
        Vec3i i;
    } vec;
};
struct GCRotate
{
    XObj *xobj;
    f32 a;
    union
    {
        Vec3f f;
    } vec;
};
struct GCScale
{
    XObj *xobj;
    union
    {
        Vec3f f;
    } vec;
};
struct DObjVec
{
    u8 kinds[3];
    u8 pad;
    u8 data[1];
};
struct MObjSub
{
    u16 pad00;
    u8 fmt;
    u8 siz;
    void **sprites;
    u16 unk08;
    u16 unk0A;
    u16 unk0C;
    u16 unk0E;
    s32 unk10;
    f32 trau;
    f32 trav;
    f32 scau;
    f32 scav;
    f32 unk24;
    f32 unk28;
    void **palettes;
    u16 flags;
    u8 block_fmt;
    u8 block_siz;
    u16 block_dxt;
    u16 unk36;
    u16 unk38;
    u16 unk3A;
    f32 scrollu;
    f32 scrollv;
    f32 unk44;
    f32 unk48;
    u32 unk4C;
    SYColorPack primcolor;
    u8 prim_l;
    u8 prim_m;
    u8 prim_pad[2];
    SYColorPack envcolor;
    SYColorPack blendcolor;
    SYColorPack light1color;
    SYColorPack light2color;
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    s32 unk74;
};
struct MObj
{
    MObj *next;
    GObj *parent_gobj;
    MObjSub sub;
    u16 texture_id_curr;
    u16 texture_id_next;
    f32 lfrac;
    f32 palette_id;
    s32 unk_mobj_0x8C;
    AObj *aobj;
    AObjScript matanim_joint;
    f32 anim_wait;
    f32 anim_speed;
    f32 anim_frame;
 GCUserData user_data;
};
struct DObjTransformTypes
{
    u8 tk1, tk2;
    u8 tk3;
};
struct DObjDesc
{
    s32 id;
    void *dl;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
};
struct DObjTraDesc
{
    s32 id;
    void *dl;
    Vec3f translate;
};
struct DObjMultiList
{
    s32 id;
    Gfx *dl1, *dl2;
};
struct DObjDLLink
{
    s32 list_id;
    Gfx *dl;
};
struct DObjDistDL
{
    f32 target_dist;
    Gfx *dl;
};
struct DObjDistDLLink
{
    f32 target_dist;
    DObjDLLink *dl_link;
};
struct GCGfxLink
{
    u8 frame;
    Gfx *dls[4];
};
struct DObj
{
    DObj *alloc_free;
    GObj *parent_gobj;
    DObj *sib_next;
    DObj *sib_prev;
    DObj *child;
    DObj *parent;
    GCTranslate translate;
    GCRotate rotate;
    GCScale scale;
    DObjVec *vec;
    union
    {
        void *dv;
        Gfx *dl;
        Gfx **dls;
        DObjMultiList *multi_list;
        DObjDLLink *dl_link;
        DObjDistDL *dist_dl;
        DObjDistDLLink *dist_dl_link;
    };
    u8 flags;
    ub8 is_anim_root;
    u8 xobjs_num;
    XObj *xobjs[5];
    AObj *aobj;
    AObjScript anim_joint;
    f32 anim_wait;
    f32 anim_speed;
    f32 anim_frame;
    MObj *mobj;
    GCUserData user_data;
};
struct SObj
{
    SObj *alloc_free;
    GObj *parent_gobj;
    SObj *next;
    SObj *prev;
    Sprite sprite;
    GCUserData user_data;
    Vec2f pos;
    SYColorRGBA envcolor;
    u8 cmt, cms;
    u8 maskt, masks;
    u16 lrs, lrt;
};
struct CObjVec
{
    XObj *xobj;
    Vec3f eye;
    Vec3f at;
    Vec3f up;
};
struct CObjDesc
{
    Vec3f eye;
    Vec3f at;
    f32 upx;
};
struct CObj
{
    CObj *next;
    GObj *parent_gobj;
    Vp viewport;
    union CameraProjection
    {
        GCPersp persp;
        GCOrtho ortho;
        GCFrustum frustum;
    } projection;
    CObjVec vec;
    s32 xobjs_num;
    XObj *xobjs[2];
    AObj *aobj;
    AObjScript camanim_joint;
    f32 anim_wait;
    f32 anim_speed;
    f32 anim_frame;
    u32 flags;
    u32 color;
    void (*func_camera)(CObj*, s32);
    s32 unk_camera_0x8C;
};
struct GCSetup
{
    GObjThread *gobjthreads;
    s32 gobjthreads_num;
    size_t gobjthreadstack_size;
    GObjStack *gobjthreadstacks;
    u32 gobjthreadstacks_num;
    s32 unk_gcsetup_0x14;
    GObjProcess *gobjprocs;
    s32 gobjprocs_num;
    GObj *gobjs;
    s32 gobjs_num;
    size_t gobj_size;
    XObj *xobjs;
    s32 xobjs_num;
    void (*func_eject)(DObjVec*);
    AObj *aobjs;
    s32 aobjs_num;
    MObj *mobjs;
    s32 mobjs_num;
    DObj *dobjs;
    s32 dobjs_num;
    size_t dobj_size;
    SObj *sobjs;
    s32 sobjs_num;
    size_t sobj_size;
    CObj *cameras;
    s32 cobjs_num;
    size_t cobj_size;
};
extern s32 dGCCurrentStatus;
extern GCPersp dGCPerspDefault;
extern GCOrtho dGCOrthoDefault;
extern CObjVec dCObjVecDefault;
extern GCTranslate dGCTranslateDefault;
extern GCRotate dGCRotateDefaultAXYZ;
extern GCRotate dGCRotateDefaultRpy;
extern GCScale dGCScaleDefault;
extern GObj *gGCCommonLinks[33];
extern GObj *gGCCommonDLLinks[65];
extern GObj *gGCCurrentCommon;
extern GObj *gGCCurrentCamera;
extern GObj *gGCCurrentDisplay;
extern GObjProcess *gGCCurrentProcess;
extern OSMesgQueue gGCMesgQueue;
extern GCGfxLink gGCFrameQueueGfxLinks[64];
extern GCPersp dGCPerspDefault;
extern GCOrtho dGCOrthoDefault;
extern CObjVec dGCCObjVecDefault;
extern GCTranslate dGCTranslateDefault;
extern GCRotate dGCRotateDefaultAXYZ;
extern GCRotate dGCRotateDefaultRpy;
extern GCScale dGCScaleDefault;
extern s32 gcGetGObjsActiveNum(void);
extern GObjThread* gcGetGObjThread(void);
extern void gcSetGObjThreadPrevAlloc(GObjThread *gobjthread);
extern GObjStack* gcGetGObjStackOfSize(size_t size);
extern GObjStack* gcGetDefaultGObjStack(void);
extern void gcEjectGObjStack(GObjStack *node);
extern GObjProcess* gcGetGObjProcess(void);
extern void gcLinkGObjProcess(GObjProcess *gobjproc);
extern void gcSetGObjProcessPrevAlloc(GObjProcess *gobjproc);
extern void func_80007784(GObjProcess *gobjproc);
extern void func_800077D0(GObjProcess *gobjproc);
extern GObjProcess *unref_80007840(void);
extern u64* gcGetGObjProcessThreadStack(GObjProcess *gobjproc);
extern u32 unref_80007884(GObjProcess *gobjproc);
extern void unref_800078BC(void (*proc)(GObjProcess *));
extern s32 gcGetGObjsActiveNum(void);
extern GObj* gcGetGObjSetNextAlloc(void);
extern void gcSetGObjPrevAlloc(GObj *gobj);
extern void gcLinkGObjAfter(GObj *this_gobj, GObj *link_gobj);
extern void gcLinkGObjSPAfter(GObj *this_gobj);
extern void gcLinkGObjSPBefore(GObj *this_gobj);
extern void gcRemoveGObjFromLinkedList(GObj *this_gobj);
extern void gcAppendGObjToDLLinkedList(GObj *this_gobj, GObj *dl_link_gobj);
extern void gcDLLinkGObjTail(GObj *this_gobj);
extern void gcDLLinkGObjHead(GObj *this_gobj);
extern void gcRemoveGObjFromDLLinkedList(GObj *this_gobj);
extern XObj* gcGetXObjSetNextAlloc(void);
extern void gcSetXObjPrevAlloc(XObj *xobj);
extern AObj* gcGetAObjSetNextAlloc(void);
extern void gcAppendAObjToDObj(DObj *dobj, AObj *aobj);
extern void gcAppendAObjToMObj(MObj *mobj, AObj *aobj);
extern void gcAppendAObjToCamera(CObj *cobj, AObj *aobj);
extern void gcSetAObjPrevAlloc(AObj *aobj);
extern MObj* gcGetMObjSetNextAlloc(void);
extern void gcSetMObjPrevAlloc(MObj *mobj);
extern DObj* gcGetDObjSetNextAlloc(void);
extern void gcSetDObjPrevAlloc(DObj *dobj);
extern SObj* gcGetSObjSetNextAlloc(void);
extern void gcSetSObjPrevAlloc(SObj *sobj);
extern CObj* gcGetCObjSetNextAlloc(void);
extern void gcSetCObjPrevAlloc(CObj *cobj);
extern GObjProcess* gcAddGObjProcess(GObj *gobj, void (*proc)(GObj*), u8 kind, u32 pri);
extern GObjProcess *unref_80008304(GObj *gobj, void (*proc)(GObj*), u32 pri, s32 thread_id, u32 stack_size);
extern void gcEndGObjProcess(GObjProcess *gobjproc);
extern XObj* gcAddXObjForDObjVar(DObj *dobj, u8 kind, u8 arg2, s32 xobj_id);
extern XObj* gcAddXObjForDObjFixed(DObj *dobj, u8 kind, u8 arg2);
extern XObj* gcAddXObjForCamera(CObj *cobj, u8 kind, u8 arg2);
extern AObj* gcAddAObjForDObj(DObj *dobj, u8 track);
extern void gcRemoveAObjFromDObj(DObj *dobj);
extern AObj* gcAddAObjForMObj(MObj *mobj, u8 track);
extern void gcRemoveAObjFromMObj(MObj *mobj);
extern AObj* gcAddAObjForCamera(CObj *cobj, u8 track);
extern void gcRemoveAObjFromCamera(CObj *cobj);
extern MObj* gcAddMObjForDObj(DObj *dobj, MObjSub *mobjsub);
extern void gcRemoveMObjAll(DObj *dobj);
extern void gcInitDObj(DObj *dobj);
extern DObj* gcAddDObjForGObj(GObj *gobj, void *dvar);
extern DObj* gcAddSiblingForDObj(DObj *dobj, void *dvar);
extern DObj* gcAddChildForDObj(DObj *dobj, void *dvar);
extern void gcEjectDObj(DObj *dobj);
extern SObj* gcAddSObjForGObj(GObj *gobj, Sprite *sprite);
extern void gcEjectSObj(SObj *sobj);
extern CObj* gcAddCameraForGObj(GObj *gobj);
extern void gcEjectCamera(CObj *cobj);
extern GObj* gcInitGObjCommon(u32 id, void (*func_run)(GObj*), u8 link, u32 priority);
extern GObj* gcMakeGObjSPAfter(u32 id, void (*func_run)(GObj*), u8 link, u32 priority);
extern GObj* gcMakeGObjSPBefore(u32 id, void (*func_run)(GObj*), u8 link, u32 priority);
extern GObj* gcMakeGObjAfter(u32 id, void (*func_run)(GObj*), GObj *link_gobj);
extern GObj* gcMakeGObjBefore(u32 id, void (*func_run)(GObj*), GObj *link_gobj);
extern void gcEjectGObj(GObj *gobj);
extern void gcMoveGObjCommon(s32 sw, GObj *this_gobj, u8 link, u32 priority, GObj *other_gobj);
extern void func_80009C90(GObj *gobj, u8 link, u32 priority);
extern void func_80009CC8(GObj *gobj, u8 link, u32 priority);
extern void unref_80009D00(GObj *this_gobj, GObj *other_gobj);
extern void unref_80009D3C(GObj *this_gobj, GObj *other_gobj);
extern void gcLinkGObjDLCommon(GObj *gobj, void (*proc_display)(GObj*), u8 dl_link, u32 dl_order, u32 camera_tag);
extern void gcAddGObjDisplay(GObj *gobj, void (*proc_display)(GObj*), u8 dl_link, u32 priority, u32 camera_tag);
extern void unref_80009E38(GObj *gobj, void (*proc_display)(GObj*), u8 dl_link, u32 priority, u32 camera_tag);
extern void unref_80009E7C(GObj *this_gobj, void (*proc_display)(GObj*), s32 arg2, GObj *other_gobj);
extern void unref_80009ED0(GObj *this_gobj, void (*proc_display)(GObj*), s32 arg2, GObj *other_gobj);
extern void func_80009F28(GObj *gobj, void (*proc_display)(GObj*), u32 priority, u64 arg3, u32 camera_tag);
extern void func_80009F74(GObj *gobj, void (*proc_display)(GObj*), u32 priority, u64 arg3, u32 camera_tag);
extern void unref_80009FC0(GObj *gobj, void (*proc_display)(GObj*), u32 priority, u64 arg3, u32 camera_tag);
extern void unref_8000A00C(GObj *this_gobj, void (*proc_display)(GObj*), u64 arg2, s32 arg3, GObj *other_gobj);
extern void unref_8000A06C(GObj *this_gobj, void (*proc_display)(GObj*), u64 arg2, s32 arg3, GObj *other_gobj);
extern void gcMoveGObjDL(GObj *gobj, u8 dl_link, u32 priority);
extern void gcMoveGObjDLHead(GObj *gobj, u8 dl_link, u32 priority);
extern void unref_8000A1C8(GObj *this_gobj, GObj *other_gobj);
extern void unref_8000A208(GObj *this_gobj, GObj *other_gobj);
extern void func_8000A24C(GObj *gobj, u32 priority);
extern void unref_8000A280(GObj *gobj, u32 priority);
extern void func_8000A2B4(GObj *this_gobj, GObj *other_gobj);
extern void unref_8000A2EC(GObj *this_gobj, GObj *other_gobj);
extern void gcSetMaxNumGObj(s32 num);
extern s16 gcGetMaxNumGObj(void);
extern void gcDrawAll(void);
extern GObj *gcRunGObj(GObj *gobj);
extern GObjProcess *gcRunGObjProcess(GObjProcess *gobjproc);
extern void gcRunAll(void);
extern void gcSetupObjman(GCSetup *setup);
extern void gcFuncGObjByLink(s32 link, void (*func)(GObj*, u32), u32 param);
extern void gcFuncGObjAll(void (*func)(GObj*, u32), u32 param);
extern GObj* gcFuncGObjByLinkEx(s32 link, GObj* (*func)(GObj*, u32), u32 param, sb32 is_return_immediate);
extern GObj* gcFuncGObjAllEx(GObj* (*func)(GObj*, u32), u32 param, sb32 is_return_immediate);
extern GObj* gcGetGObjByID(GObj *gobj, u32 id);
extern GObj* gcFindGObjByLinkAndID(s32 link, u32 id);
extern GObj* gcFindGObjByID(u32 id);
extern void gcDefaultFuncRun(GObj *gobj);
extern void gcSleepCurrentGObjThread(s32 tics);
extern void gcPauseGObjProcessAll(GObj *gobj);
extern void gcResumeGObjProcessAll(GObj *gobj);
extern void gcPauseGObjProcess(GObjProcess *gobjproc);
extern void gcResumeGObjProcess(GObjProcess *gobjproc);
extern void gcPauseGObjProcessByProc(GObj *gobj, void (*func_id)(GObj*));
extern void gcResumeGObjProcessByProc(GObj *gobj, void (*func_id)(GObj*));
extern void gcEndProcessAll(GObj *gobj);
extern void gcAddDObjMatrixSetsRpyD(DObj* dobj);
extern void gcAddDObjMatrixSetsRpyR(DObj* dobj);
extern void gcAddCameraMatrixSets(CObj *cobj);
extern void gcRemoveTreeMObjAll(GObj *gobj);
extern DObj* gcAddDObjRpyD(GObj *gobj, void *dvar);
extern DObj* gcAddDObjSiblingRpyD(DObj *dobj, void *dvar);
extern DObj* gcAddDObjChildRpyD(DObj *dobj, void *dvar);
extern DObj* gcAddDObjRpyR(GObj *gobj, void *dvar);
extern DObj* gcAddDObjSiblingRpyR(DObj *dobj, void *dvar);
extern DObj* gcAddDObjChildRpyR(DObj *dobj, void *dvar);
extern void gcRemoveDObjAll(GObj *gobj);
extern void gcRemoveSObjAll(GObj *gobj);
extern void gcEjectAll(void);
extern GObj* gcMakeModelGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_priority,
    void (*proc_display)(GObj*),
    u8 dl_link,
    u32 dl_link_priority,
    u32 camera_tag,
    void *dvar,
    sb32 is_add_default_xobj,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
);
extern GObj* gcMakeSpriteGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_priority,
    void (*proc_display)(GObj*),
    s32 dl_link,
    u32 dl_link_priority,
    u32 camera_tag,
    Sprite *sprite,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
);
GObj* gcMakeCameraGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_priority,
    void (*proc_display)(GObj*),
    u32 dl_link_priority,
    u64 camera_mask,
    u32 camera_tag,
    sb32 is_add_default_xobj,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority,
    sb32 argD
);
extern GObj* gcMakeDefaultCameraGObj(s32 link, u32 link_priority, u32 dl_link_priority, u32 flags, u32 color);
extern s32 gcSetupGObjScript(GObj *this_gobj, s32 id, GObj *next_gobj);
extern GObj* gcAddGObjScript(GObj *gobj, GObjScript *gobjscript);
extern void gcAddGObjScriptByLink(s32 link, s32 id, GObj *gobj);
extern sb32 gcParseGObjScript(void (*func)(GObjScript));
extern DObj* gcGetTreeDObjNext(DObj *dobj);
extern void gcSetAnimSpeed(GObj *gobj, f32 anim_speed);
extern void gcSetAllAnimSpeed(GObj *gobj, f32 anim_speed);
extern void gcAddDObjAnimJoint(DObj*, AObjEvent32*, f32);
extern void gcAddMObjMatAnimJoint(MObj*, AObjEvent32*, f32);
extern void gcAddAnimJointAll(GObj *gobj, AObjEvent32 **anim_joints, f32 anim_frame);
extern void gcAddMatAnimJointAll(GObj *gobj, AObjEvent32 ***p_matanim_joints, f32 anim_frame);
extern void gcAddAnimAll(GObj *gobj, AObjEvent32 **anim_joints, AObjEvent32 ***p_matanim_joints, f32 anim_frame);
extern void gcParseDObjAnimJoint(DObj *dobj);
extern f32 gcGetInterpValueCubic(f32 length_invert, f32 length, f32 value_base, f32 value_target, f32 rate_base, f32 rate_target);
extern f32 gcGetInterpRateCubic(f32 length_invert, f32 length, f32 value_base, f32 value_target, f32 rate_base, f32 rate_target);
extern f32 gcGetAObjValue(AObj *aobj);
extern f32 gcGetAObjRate(AObj *aobj);
extern void gcPlayDObjAnimJoint(DObj *dobj);
extern void gcPlayMObjMatAnim(MObj *mobj);
extern void gcPlayAnimAll(GObj *gobj);
extern AObj* gcGetTrackAObj(AObj *aobj, u8 track);
extern void gcSetDObjAnimLength(DObj *dobj, f32 length);
extern f32 gcGetDObjAxisTrack(DObj *dobj, s32 track);
extern f32 gcGetDObjDescAxisTrack(DObjDesc *dobjdesc, s32 track);
extern sb32 gcCheckGetDObjNoAxisTrack
(
    sb32 is_desc_or_dobj,
    DObj *dobj,
    f32 *axis_value,
    f32 *rate,
    AObj *seek_aobj,
    DObjDesc *dobjdesc,
    s32 track,
    sb32 rate_kind,
    Vec3f *translate,
    sb32 *is_axis_ready
);
extern void gcGetAObjTrackAnimTimeMax(s32 track, f32 translate, f32 rotate, f32 scale, f32 *anim_time_max, AObj *aobj);
extern f32 gcGetDObjTempAnimTimeMax
(
    DObj *dobj,
    AObjEvent32 **anim_joints,
    f32 anim_frame,
    DObjDesc *dobjdesc,
    s32 rate_kind,
    f32 length,
    f32 translate,
    f32 rotate,
    f32 scale
);
extern f32 func_8000EC64_F864
(
    GObj *gobj,
    AObjEvent32 **anim_joints,
    f32 anim_frame,
    DObjDesc *dobjdesc,
    s32 rate_kind,
    f32 length_max,
    f32 length_min,
    f32 translate,
    f32 rotate,
    f32 scale
);
extern void func_8000EE40_FA40(GObj *gobj, AObjEvent32 **anim_joints, f32 anim_frame, DObjDesc *dobjdesc);
extern void gcAddDObjTransformTraRotSca(DObj *dobj);
extern DObj* gcAddDObjForGObjTraRotSca(GObj *gobj, void *dvar);
extern DObj* gcAddSiblingForDObjTraRotSca(DObj *dobj, void *dvar);
extern DObj* gcAddChildForDObjTraRotSca(DObj *dobj, void *dvar);
extern void gcSetupCommonDObjs(GObj *gobj, DObjDesc *dobjdesc, DObj **dobjs);
extern void gcAddDObj3TransformsKind(DObj *dobj, u8 tk1, u8 tk2, u8 tk3);
extern void gcDecideDObj3TransformsKind(DObj *dobj, u8 tk1, u8 tk2, u8 tk3, s32 flags);
extern void gcSetupCustomDObjs(GObj *gobj, DObjDesc *dobjdesc, DObj **dobjs, u8 tk1, u8 tk2, u8 tk3);
extern void gcSetupCustomDObjsWithMObj
(
    GObj *gobj,
    DObjDesc *dobjdesc,
    MObjSub ***p_mobjsubs,
    DObj **dobjs,
    u8 tk1,
    u8 tk2,
    u8 tk3
);
extern void gcAddMObjAll(GObj *gobj, MObjSub ***p_mobjsubs);
extern void gcSetDObjTransformsForGObj(GObj *gobj, DObjDesc *dobjdesc);
extern void gcAddCObjCamAnimJoint(CObj *cobj, AObjEvent32 *camanim_joint, f32 anim_frame);
extern void gcParseCObjCamAnimJoint(CObj *cobj);
extern void gcPlayCObjCamAnim(CObj *cobj);
extern void gcPlayCamAnim(GObj *gobj);
extern s32 gcGetAnimTotalLength(AObjEvent32 **anim_joints);
extern Gfx *gSYTaskmanDLHeads[4];
typedef struct syMtxProcess
{
    sb32 (*proc_diff)();
    sb32 (*proc_same)();
} syMtxProcess;
extern Mtx *sGCMatrixProjectL;
extern f32 gGCScaleX;
extern Mtx44f gGCMatrixPerspF;
extern syMtxProcess *sGCMatrixFuncList;
extern void gcSetCameraScissor(s32 top, s32 bottom, s32 left, s32 right);
extern void gcSetMatrixFuncList(syMtxProcess *proc_mtx);
extern void unref_80010740(void);
extern void func_80010748(Mtx *mtx_l, DObj *dobj, sb32 is_translate);
extern void func_80010918(Mtx *mtx_l, DObj *dobj, sb32 is_translate);
extern void func_80010AE8(Mtx *mtx_l, DObj *dobj, sb32 is_translate);
extern void func_80010C2C(Mtx *mtx_l, DObj *dobj, sb32 is_translate);
extern s32 gcPrepDObjMatrix(Gfx **dl, DObj *dobj);
extern void gcDrawMObjForDObj(DObj *dobj, Gfx **dl_head);
extern void gcDrawDObjForGObj(GObj *gobj, Gfx **dl_head);
extern void gcDrawDObjDLHead0(GObj *gobj);
extern void gcDrawDObjDLHead1(GObj *gobj);
extern void gcDrawDObjDLHead2(GObj *gobj);
extern void gcDrawDObjDLHead3(GObj *gobj);
extern void gcDrawDObjTree(DObj *this_dobj);
extern void gcDrawDObjTreeForGObj(GObj *gobj);
extern void gcDrawDObjDLLinks(DObj *dobj, DObjDLLink *dl_link);
extern void gcDrawDObjDLLinksForGObj(GObj *gobj);
extern void gcInitDLs(void);
extern void gcDrawDObjTreeDLLinks(DObj *dobj);
extern void gcDrawDObjTreeDLLinksForGObj(GObj *gobj);
extern f32 gcGetDObjDistFromEye(DObj *dobj);
extern void gcDrawDObjTreeMultiList(DObj *dobj);
extern void unref_800147E0(GObj *gobj);
extern void unref_80014A84(GObj *gobj);
extern void unref_80014C38(GObj *gobj);
extern void func_80014CD0(DObj *dobj);
extern void unref_80014FFC(GObj *gobj);
extern void gcDrawDObjTreeDLArray(DObj *dobj);
extern void unref_800154F0(GObj *gobj);
extern void gcDrawDObjTreeMultiList(DObj *dobj);
extern void unref_80015860(GObj *gobj);
extern void gcDrawDObjTreeDLDoubleArray(DObj *dobj);
extern void unref_80015A58(GObj *gobj);
extern void func_80015C0C(DObj *dobj);
extern void unref_80015F6C(GObj *gobj);
extern void unref_800162C8(GObj *gobj);
extern void func_80016338(Gfx **dls, CObj *cobj, s32 buffer_id);
extern void func_8001663C(Gfx **dls, CObj *cobj, s32 buffer_id);
extern void unref_80016AE4(Gfx **dls, CObj *cobj, s32 arg2, void *image, s32 max_lrx, s32 max_lry, void *depth);
extern void gcPrepCameraMatrix(Gfx **dls, CObj *cobj);
extern void gcSetCameraMatrixMode(s32 val);
extern void gcRunFuncCamera(CObj *cobj, s32 arg);
extern void gcCaptureTaggedGObjs(GObj *camera_gobj, s32 link_id, sb32 is_tag_mask_or_id);
extern void gcCaptureDoubleBufferGObjs(GObj *camera_gobj, s32 id, sb32 is_tag_mask_or_id);
extern void gcAddLinkedDL(s32 id);
extern void gcCaptureCameraGObj(GObj *camera_gobj, sb32 is_tag_mask_or_id);
extern void func_80017CC8(CObj *cobj);
extern void func_80017D3C(GObj *gobj, Gfx **dls, s32 index);
extern void func_80017DBC(GObj *gobj);
extern void unref_80017DE4(GObj *gobj);
extern void unref_80017E0C(GObj *gobj);
extern void unref_80017E34(GObj *gobj);
extern void unref_80017E5C(void);
extern void func_80017EC0(GObj *gobj);
extern void unref_8001810C(void);
extern void func_80018300(GObj *gobj);
typedef enum GMCameraBounds
{
    nGMCameraBoundLeft,
    nGMCameraBoundRight,
    nGMCameraBoundBottom,
    nGMCameraBoundTop
}
GMCameraBounds;
typedef enum GMCameraStatus
{
 nGMCameraStatusDefault,
 nGMCameraStatusPlayerZoom,
 nGMCameraStatusAnim,
 nGMCameraStatusInishie,
 nGMCameraStatusMapZoom,
 nGMCameraStatusPlayerFollow,
 nGMCameraStatusZebes,
 nGMCameraEnumCount
} GMCameraStatus;
typedef enum GMHitStatus
{
 nGMHitStatusNone,
 nGMHitStatusNormal,
 nGMHitStatusInvincible,
 nGMHitStatusIntangible
} GMHitStatus;
typedef enum GMHitElement
{
 nGMHitElementNormal,
 nGMHitElementFire,
 nGMHitElementElectric,
 nGMHitElementSlash,
 nGMHitElementCoin,
 nGMHitElementFreezing,
 nGMHitElementSleep
} GMHitElement;
typedef enum GMHitType
{
 nGMHitTypeDamage,
 nGMHitTypeShield,
 nGMHitTypeShieldRehit,
 nGMHitTypeAttack,
 nGMHitTypeDamageRehit,
 nGMHitTypeAbsorb,
 nGMHitTypeReflect
} GMHitType;
typedef enum GMAttackState
{
 nGMAttackStateOff,
 nGMAttackStateNew,
 nGMAttackStateTransfer,
 nGMAttackStateInterpolate
} GMAttackState;
typedef enum GMAttackSound
{
 nGMHitSoundPunch,
 nGMHitSoundKick,
 nGMHitSoundCoin,
 nGMHitSoundBurn,
 nGMHitSoundZap,
 nGMHitSoundSlash,
 nGMHitSoundFan,
 nGMHitSoundBat,
 nGMHitSoundEnumCount
} GMAttackSound;
typedef enum GMAttackLevel
{
 nGMHitLevelWeak,
 nGMHitLevelMedium,
 nGMHitLevelStrong,
 nGMHitLevelEnumCount
} GMAttackLevel;
typedef enum GMHitEnvironment
{
 nGMHitEnvironmentAcid,
 nGMHitEnvironmentPowerBlock,
 nGMHitEnvironmentTwister,
 nGMHitEnvironmentTaruCann
} GMHitEnvironment;
typedef enum GMColEvent
{
 nGMColEventEnd,
 nGMColEventWait,
 nGMColEventGoto,
 nGMColEventLoopBegin,
 nGMColEventLoopEnd,
 nGMColEventSubroutine,
 nGMColEventReturn,
 nGMColEventSetParallelScript,
 nGMColEventClearColorAll,
 nGMColEventSetColor1,
 nGMColEventBlendColor1,
 nGMColEventSetColor2,
 nGMColEventBlendColor2,
 nGMColEventEffect,
 nGMColEventEffectItemHoldOffset,
 nGMColEventSetLight,
 nGMColEventClearLight,
 nGMColEventPlayFGM,
 nGMColEventSetSkeletonID
} GMColEvent;
typedef enum GMColAnimKind
{
 nGMColAnimCommonNull,
 nGMColAnimFighterComPlayer,
 nGMColAnimFighterHitStatusNormal,
 nGMColAnimFighterHitStatusIntangible,
 nGMColAnimFighterHitStatusInvincible,
 nGMColAnimFighterDamageCommon,
 nGMColAnimFighterCommonSpecialNCharge,
 nGMColAnimFighterFallSpecial,
 nGMColAnimFighterFastFall,
 nGMColAnimFighterHeal,
 nGMColAnimFighterNoDamage,
 nGMColAnimFighterRebirth,
 nGMColAnimFighterDamageFireStart,
 nGMColAnimFighterDamageFireWeak = nGMColAnimFighterDamageFireStart,
 nGMColAnimFighterDamageFireMid,
 nGMColAnimFighterDamageFireStrong,
 nGMColAnimFighterDamageFireFly,
 nGMColAnimFighterDamageFireEnd = nGMColAnimFighterDamageFireFly,
 nGMColAnimFighterDamageElectricCommonStart,
 nGMColAnimFighterDamageElectricCommonWeak = nGMColAnimFighterDamageElectricCommonStart,
 nGMColAnimFighterDamageElectricCommonMid,
 nGMColAnimFighterDamageElectricCommonStrong,
 nGMColAnimFighterDamageElectricCommonFly,
 nGMColAnimFighterDamageElectricCommonEnd = nGMColAnimFighterDamageElectricCommonFly,
 nGMColAnimFighterDamageElectricSkeletonStart,
 nGMColAnimFighterDamageElectricSkeletonWeak = nGMColAnimFighterDamageElectricSkeletonStart,
 nGMColAnimFighterDamageElectricSkeletonMid,
 nGMColAnimFighterDamageElectricSkeletonStrong,
 nGMColAnimFighterDamageElectricSkeletonFly,
 nGMColAnimFighterDamageElectricSkeletonEnd = nGMColAnimFighterDamageElectricSkeletonFly,
 nGMColAnimFighterDamageElectricSamusStart,
 nGMColAnimFighterDamageElectricSamusWeak = nGMColAnimFighterDamageElectricSamusStart,
 nGMColAnimFighterDamageElectricSamusMid,
 nGMColAnimFighterDamageElectricSamusStrong,
 nGMColAnimFighterDamageElectricSamusFly,
 nGMColAnimFighterDamageElectricSamusEnd = nGMColAnimFighterDamageElectricSamusFly,
 nGMColAnimFighterDamageElectricBalloonStart,
 nGMColAnimFighterDamageElectricBalloonWeak = nGMColAnimFighterDamageElectricBalloonStart,
 nGMColAnimFighterDamageElectricBalloonMid,
 nGMColAnimFighterDamageElectricBalloonStrong,
 nGMColAnimFighterDamageElectricBalloonFly,
 nGMColAnimFighterDamageElectricBalloonEnd = nGMColAnimFighterDamageElectricBalloonFly,
 nGMColAnimFighterDamageIceStart,
 nGMColAnimFighterDamageIceWeak = nGMColAnimFighterDamageIceStart,
 nGMColAnimFighterDamageIceMid,
 nGMColAnimFighterDamageIceStrong,
 nGMColAnimFighterDamageIceFly,
 nGMColAnimFighterDamageIceEnd = nGMColAnimFighterDamageIceFly,
 nGMColAnimFighterShieldBreakFly,
 nGMColAnimFighterFuraFura,
 nGMColAnimFighterFuraSleep,
 nGMColAnimFighterMarioSpecialN,
 nGMColAnimFighterMarioAppeal,
 nGMColAnimFighterDonkeySpecialNLoop,
 nGMColAnimFighterDonkeySpecialNEnd,
 nGMColAnimFighterUnknown1,
 nGMColAnimFighterSamusSpecialNEnd,
 nGMColAnimFighterSamusSpecialHi,
 nGMColAnimFighterFoxSpecialLw,
 nGMColAnimFighterFoxSpecialHiStart,
 nGMColAnimFighterFoxSpecialHi,
 nGMColAnimFighterLinkSpecialHi,
 nGMColAnimFighterCaptainSpecialN,
 nGMColAnimFighterKirbySpeciaLwHigh,
 nGMColAnimFighterKirbySpeciaLwMid,
 nGMColAnimFighterKirbySpeciaLwLow,
 nGMColAnimFighterKirbySpecialLwStart,
 nGMColAnimFighterKirbySpecialLwEnd,
 nGMColAnimFighterPikachuAttackS4,
 nGMColAnimFighterPikachuSpecialHiStart,
 nGMColAnimFighterPikachuSpecialN,
 nGMColAnimFighterPikachuSpecialLwHit,
 nGMColAnimFighterPikachuSpecialLwEnd,
 nGMColAnimFighterCaptainSpecialHi,
 nGMColAnimFighterNessSpecialLwHold,
 nGMColAnimFighterNessSpecialLwHit,
 nGMColAnimFighterNessSpecialHiHold,
 nGMColAnimFighterNessSpecialHiJibaku,
 nGMColAnimFighterNessAppear,
 nGMColAnimFighterBossDeskArrange,
 nGMColAnimFighterBossOkuhikouki,
 nGMColAnimFighterBossOkupunch,
 nGMColAnimFighterBossYubideppou2,
 nGMColAnimFighterBossYubideppou3,
 nGMColAnimFighterHammer,
 nGMColAnimFighterStar,
 nGMColAnimFighterStarRod,
 nGMColAnimFighterBat,
 nGMColAnimItemBombHeiCritical,
 nGMColAnimItemHammerEnd,
 nGMColAnimItemLinkBombCritical,
 nGMColAnimFighterChallenger,
 nGMColAnimScreenFlashDeadExplode,
 nGMColAnimScreenFlashDamageNormal,
 nGMColAnimScreenFlashDamageFire,
 nGMColAnimScreenFlashDamageElectric,
 nGMColAnimScreenFlashDamageIce
} GMColAnimKind;
typedef enum GMRumbleEvent
{
 nGMRumbleEventEnd,
 nGMRumbleEventStartRumble,
 nGMRumbleEventStopRumble,
 nGMRumbleEventLoopBegin,
 nGMRumbleEventLoopEnd
} GMRumbleEvent;
typedef struct GMCamera GMCamera;
typedef struct GMHitFlags GMHitFlags;
typedef struct GMAttackRecord GMAttackRecord;
typedef union GMStatFlags GMStatFlags;
typedef struct GMColScript GMColScript;
typedef struct GMColKeys GMColKeys;
typedef struct GMColAnim GMColAnim;
typedef struct GMColDesc GMColDesc;
typedef struct GMColEventDefault GMColEventDefault;
typedef struct GMColEventGoto1 GMColEventGoto1;
typedef struct GMColEventGoto2 GMColEventGoto2;
typedef struct GMColEventGoto GMColEventGoto;
typedef struct GMColEventSubroutine1 GMColEventSubroutine1;
typedef struct GMColEventSubroutine2 GMColEventSubroutine2;
typedef struct GMColEventSubroutine GMColEventSubroutine;
typedef struct GMColEventParallel1 GMColEventParallel1;
typedef struct GMColEventParallel2 GMColEventParallel2;
typedef struct GMColEventParallel GMColEventParallel;
typedef struct GMColEventSetRGBA1 GMColEventSetRGBA1;
typedef struct GMColEventSetRGBA2 GMColEventSetRGBA2;
typedef struct GMColEventSetRGBA GMColEventSetRGBA;
typedef struct GMColEventBlendRGBA1 GMColEventBlendRGBA1;
typedef struct GMColEventBlendRGBA2 GMColEventBlendRGBA2;
typedef struct GMColEventBlendRGBA GMColEventBlendRGBA;
typedef struct GMColEventMakeEffect1 GMColEventMakeEffect1;
typedef struct GMColEventMakeEffect2 GMColEventMakeEffect2;
typedef struct GMColEventMakeEffect3 GMColEventMakeEffect3;
typedef struct GMColEventMakeEffect4 GMColEventMakeEffect4;
typedef struct GMColEventMakeEffect GMColEventMakeEffect;
typedef struct GMColEventSetLight GMColEventSetLight;
typedef union GMColEventAll GMColEventAll;
typedef struct GMRumbleEventDefault GMRumbleEventDefault;
typedef struct GMRumbleScript GMRumbleScript;
typedef struct GMRumbleLink GMRumbleLink;
typedef struct GMRumblePlayer GMRumblePlayer;
typedef enum LBParticleKind
{
 nLBParticleKindVortex = 2
} LBParticleKind;
typedef enum LBFileLocation
{
    nLBFileLocationExtern,
    nLBFileLocationDefault,
    nLBFileLocationForce,
 nLBFileLocationEnumCount
} LBFileLocation;
typedef enum LBBackupUnlock
{
 nLBBackupUnlockLuigi,
 nLBBackupUnlockNess,
 nLBBackupUnlockCaptain,
 nLBBackupUnlockPurin,
 nLBBackupUnlockInishie,
 nLBBackupUnlockSoundTest,
 nLBBackupUnlockItemSwitch,
 nLBBackupUnlockEnumCount
} LBBackupUnlock;
typedef enum LBBackupErrors
{
 nLBBackupErrorRandomKnockback,
 nLBBackupErrorHalfStickRange,
 nLBBackupError1PGameMario,
 nLBBackupErrorVSBattleCastle
} LBBackupErrors;
typedef struct LBRelocSetup LBRelocSetup;
typedef union LBRelocDesc LBRelocDesc;
typedef struct LBInternBuffer LBInternBuffer;
typedef struct LBFileNode LBFileNode;
typedef struct LBTableEntry LBTableEntry;
typedef struct LBScript LBScript;
typedef struct LBScriptDesc LBScriptDesc;
typedef struct LBTexture LBTexture;
typedef struct LBTextureDesc LBTextureDesc;
typedef struct LBTransform LBTransform;
typedef struct LBGenerator LBGenerator;
typedef struct LBParticle LBParticle;
typedef struct LBTransitionDesc LBTransitionDesc;
typedef struct LBBackup1PRecord LBBackup1PRecord;
typedef struct LBBackupVSRecord LBBackupVSRecord;
typedef struct LBBackupData LBBackupData;
struct LBFileNode
{
    u32 id;
    void *addr;
};
union LBRelocDesc
{
    struct lbRelocInfo
    {
        u16 reloc;
        u16 words_num;
    } info;
    void *p;
};
struct LBRelocSetup
{
    uintptr_t table_addr;
    u32 table_files_num;
    void *file_heap;
    size_t file_heap_size;
    LBFileNode *status_buffer;
    size_t status_buffer_size;
    LBFileNode *force_status_buffer;
    size_t force_status_buffer_size;
};
struct LBTableEntry
{
    ub32 is_compressed : 1;
    u32 data_offset : 31;
    u16 reloc_intern_offset;
    u16 compressed_size;
    u16 reloc_extern_offset;
    u16 decompressed_size;
};
struct LBInternBuffer
{
    uintptr_t rom_table_lo;
    u32 total_files_num;
    uintptr_t rom_table_hi;
    void *heap_start;
    void *heap_ptr;
    void *heap_end;
    s32 status_buffer_num;
    s32 status_buffer_max;
    LBFileNode *status_buffer;
    s32 force_status_buffer_num;
    s32 force_status_buffer_max;
    LBFileNode *force_status_buffer;
};
struct LBScriptDesc
{
    s32 scripts_num;
    LBScript *scripts[1];
};
typedef struct LBScriptHeader
{
    u16 kind;
    u16 texture_id;
    u16 generator_lifetime;
    u16 particle_lifetime;
    u32 flags;
    f32 gravity;
    f32 friction;
    Vec3f vel;
    f32 unk_script_0x20;
    f32 unk_script_0x24;
    f32 update_rate;
    f32 size;
} LBScriptHeader;
struct LBScript
{
    u16 kind;
 u16 texture_id;
    u16 generator_lifetime;
    u16 particle_lifetime;
    u32 flags;
 f32 gravity;
    f32 friction;
    Vec3f vel;
    f32 unk_script_0x20;
    f32 unk_script_0x24;
    f32 update_rate;
    f32 size;
    u8 bytecode[1];
};
struct LBTextureDesc
{
    s32 textures_num;
    LBTexture *textures[1];
};
typedef struct LBTextureHeader
{
    u32 count;
    s32 fmt, siz;
    s32 width, height;
    u32 flags;
} LBTextureHeader;
struct LBTexture
{
    u32 count;
    s32 fmt, siz;
    s32 width, height;
    u32 flags;
    void *data[1];
};
struct LBGenerator
{
    LBGenerator *next;
 u16 generator_id;
 u16 flags;
 u8 kind;
    u8 bank_id;
    u16 texture_id;
    u16 particle_lifetime;
 u16 generator_lifetime;
 u8 *bytecode;
    Vec3f pos;
    Vec3f vel;
    f32 gravity;
    f32 friction;
    f32 size;
    f32 unk_gn_0x38;
    f32 unk_gn_0x3C;
    f32 update_rate;
    f32 frame;
    DObj *dobj;
    LBTransform *xf;
    union LBGeneratorVars
    {
        struct LBGeneratorRotate
        {
            f32 base, target;
        } rotate;
        Vec3f move;
        struct LBGeneratorVortex
        {
            f32 f;
            u16 lifetime;
        } vortex;
    } generator_vars;
};
struct LBTransform
{
    LBTransform *next;
    Vec3f translate;
    Vec3f rotate;
    Vec3f scale;
    u8 transform_status;
    u8 transform_id;
    u16 users_num;
    Mtx44f affine;
    Mtx44f projection;
    f32 pc0_magnitude;
    f32 pc1_magnitude;
    void (*proc_dead)(LBTransform*);
    u16 generator_id;
    GObj *effect_gobj;
};
struct LBParticle
{
    LBParticle *next;
    u16 generator_id;
    u16 flags;
    u8 bank_id;
    u8 loop_count;
    u8 texture_id;
    u8 frame_id;
    ub16 bytecode_timer;
    u16 size_target_length;
    u16 primcolor_target_length;
    u16 envcolor_target_length;
    u8 *bytecode;
    u16 bytecode_csr;
    u16 return_ptr;
    u16 loop_ptr;
    u16 lifetime;
    Vec3f pos;
    Vec3f vel;
    f32 gravity;
    f32 friction;
    f32 size;
    f32 size_target;
    SYColorRGBA primcolor;
    SYColorRGBA target_primcolor;
    SYColorRGBA envcolor;
    SYColorRGBA target_envcolor;
    LBGenerator *gn;
    LBTransform *xf;
};
struct LBTransitionDesc
{
    u32 file_id;
    intptr_t o_dobjdesc;
    intptr_t o_anim_joint;
    s32 unk_lbtransition_0xC;
};
struct LBBackupVSRecord
{
 u16 ko_count[12];
 u32 time_used;
 u32 damage_given;
 u32 damage_taken;
 u16 unk;
 u16 selfdestructs;
 u16 games_played;
 u16 player_count_tally;
 u16 player_count_tallies[12];
 u16 played_against[12];
};
struct LBBackup1PRecord
{
 u32 spgame_hiscore;
 u32 spgame_continues;
 u32 spgame_total_bonuses;
 u8 spgame_best_difficulty;
 u32 bonus1_time;
 u8 bonus1_task_count;
 u32 bonus2_time;
 u8 bonus2_task_count;
 ub8 is_spgame_complete;
};
struct LBBackupData
{
 LBBackupVSRecord vs_records[12];
 ub8 is_allow_screenflash;
 ub8 sound_mono_or_stereo;
 s16 screen_adjust_h;
 s16 screen_adjust_v;
 u8 characters_fkind;
 u8 unlock_mask;
 u16 fighter_mask;
 u8 spgame_difficulty;
 u8 spgame_stock_count;
 LBBackup1PRecord spgame_records[12];
 u16 ground_mask;
 u8 vs_itemswitch_battles;
 u16 vs_total_battles;
 u8 error_flags;
 u8 boot;
 u16 signature;
 s32 checksum;
};
typedef u32 ftMotionCommand;
typedef enum FTStatusUpdateFlags
{
    nFTStatusPreserveHit,
    nFTStatusPreserveColAnim,
    nFTStatusPreserveEffect,
    nFTStatusPreserveFastFall,
    nFTStatusPreserveHitStatus,
    nFTStatusPreserveModelPart,
    nFTStatusPreserveSlopeContour,
    nFTStatusPreserveTexturePart,
    nFTStatusPreservePlayerTag,
    nFTStatusPreserveThrowPointer,
    nFTStatusPreserveShuffleTime,
    nFTStatusPreserveLoopSFX,
    nFTStatusPreserveDamagePlayer,
    nFTStatusPreserveAfterImage,
    nFTStatusPreserveRumble
} FTStatusUpdateFlags;
typedef enum FTCommonMotion
{
    nFTCommonMotionNull = -1,
    nFTCommonMotionEntryNull,
    nFTCommonMotionRebirthDown,
    nFTCommonMotionRebirthStand,
    nFTCommonMotionRebirthWait,
    nFTCommonMotionWait,
    nFTCommonMotionWalkSlow,
    nFTCommonMotionWalkMiddle,
    nFTCommonMotionWalkFast,
    nFTCommonMotionWalkEnd,
    nFTCommonMotionDash,
    nFTCommonMotionRun,
    nFTCommonMotionRunBrake,
    nFTCommonMotionTurn,
    nFTCommonMotionTurnRun,
    nFTCommonMotionKneeBend,
    nFTCommonMotionGuardKneeBend,
    nFTCommonMotionJumpF,
    nFTCommonMotionJumpB,
    nFTCommonMotionJumpAerialF,
    nFTCommonMotionJumpAerialB,
    nFTCommonMotionFall,
    nFTCommonMotionFallAerial,
    nFTCommonMotionSquat,
    nFTCommonMotionSquatWait,
    nFTCommonMotionSquatRv,
    nFTCommonMotionLandingLight,
    nFTCommonMotionLandingHeavy,
    nFTCommonMotionPass,
    nFTCommonMotionGuardPass,
    nFTCommonMotionOttottoWait,
    nFTCommonMotionOttotto,
    nFTCommonMotionDamageHi1,
    nFTCommonMotionDamageHi2,
    nFTCommonMotionDamageHi3,
    nFTCommonMotionDamageN1,
    nFTCommonMotionDamageN2,
    nFTCommonMotionDamageN3,
    nFTCommonMotionDamageLw1,
    nFTCommonMotionDamageLw2,
    nFTCommonMotionDamageLw3,
    nFTCommonMotionDamageAir1,
    nFTCommonMotionDamageAir2,
    nFTCommonMotionDamageAir3,
    nFTCommonMotionDamageE,
    nFTCommonMotionDamageFlyHi,
    nFTCommonMotionDamageFlyN,
    nFTCommonMotionDamageFlyLw,
    nFTCommonMotionDamageFlyTop,
    nFTCommonMotionDamageFlyRoll,
    nFTCommonMotionWallDamage,
    nFTCommonMotionDamageFall,
    nFTCommonMotionFallSpecial,
    nFTCommonMotionLandingFallSpecial,
    nFTCommonMotionTwister,
    nFTCommonMotionDokanStart,
    nFTCommonMotionDokanEnd,
    nFTCommonMotionDokanWalk,
    nFTCommonMotionStopCeil,
    nFTCommonMotionDownBounceD,
    nFTCommonMotionDownBounceU,
    nFTCommonMotionDownStandD,
    nFTCommonMotionDownStandU,
    nFTCommonMotionPassiveStandF,
    nFTCommonMotionPassiveStandB,
    nFTCommonMotionDownForwardD,
    nFTCommonMotionDownForwardU,
    nFTCommonMotionDownBackD,
    nFTCommonMotionDownBackU,
    nFTCommonMotionDownAttackD,
    nFTCommonMotionDownAttackU,
    nFTCommonMotionPassive,
    nFTCommonMotionRebound,
    nFTCommonMotionCliffCatch,
    nFTCommonMotionCliffWait,
    nFTCommonMotionCliffQuick,
    nFTCommonMotionCliffClimbQuick1,
    nFTCommonMotionCliffClimbQuick2,
    nFTCommonMotionCliffSlow,
    nFTCommonMotionCliffClimbSlow1,
    nFTCommonMotionCliffClimbSlow2,
    nFTCommonMotionCliffAttackQuick1,
    nFTCommonMotionCliffAttackQuick2,
    nFTCommonMotionCliffAttackSlow1,
    nFTCommonMotionCliffAttackSlow2,
    nFTCommonMotionCliffEscapeQuick1,
    nFTCommonMotionCliffEscapeQuick2,
    nFTCommonMotionCliffEscapeSlow1,
    nFTCommonMotionCliffEscapeSlow2,
    nFTCommonMotionLightGet,
    nFTCommonMotionHeavyGet,
    nFTCommonMotionLightThrowDrop,
    nFTCommonMotionLightThrowDash,
    nFTCommonMotionLightThrowF,
    nFTCommonMotionLightThrowB,
    nFTCommonMotionLightThrowHi,
    nFTCommonMotionLightThrowLw,
    nFTCommonMotionLightThrowF4,
    nFTCommonMotionLightThrowB4,
    nFTCommonMotionLightThrowHi4,
    nFTCommonMotionLightThrowLw4,
    nFTCommonMotionLightThrowAirF,
    nFTCommonMotionLightThrowAirB,
    nFTCommonMotionLightThrowAirHi,
    nFTCommonMotionLightThrowAirLw,
    nFTCommonMotionLightThrowAirF4,
    nFTCommonMotionLightThrowAirB4,
    nFTCommonMotionLightThrowAirHi4,
    nFTCommonMotionLightThrowAirLw4,
    nFTCommonMotionHeavyThrowF,
    nFTCommonMotionHeavyThrowB,
    nFTCommonMotionHeavyThrowF4,
    nFTCommonMotionHeavyThrowB4,
    nFTCommonMotionSwordSwing1,
    nFTCommonMotionSwordSwing3,
    nFTCommonMotionSwordSwing4,
    nFTCommonMotionSwordSwingDash,
    nFTCommonMotionBatSwing1,
    nFTCommonMotionBatSwing3,
    nFTCommonMotionBatSwing4,
    nFTCommonMotionBatSwingDash,
    nFTCommonMotionHarisenSwing1,
    nFTCommonMotionHarisenSwing3,
    nFTCommonMotionHarisenSwing4,
    nFTCommonMotionHarisenSwingDash,
    nFTCommonMotionStarRodSwing1,
    nFTCommonMotionStarRodSwing3,
    nFTCommonMotionStarRodSwing4,
    nFTCommonMotionStarRodSwingDash,
    nFTCommonMotionLGunShoot,
    nFTCommonMotionLGunShootAir,
    nFTCommonMotionFireFlowerShoot,
    nFTCommonMotionFireFlowerShootAir,
    nFTCommonMotionHammerWait,
    nFTCommonMotionHammerWalk,
    nFTCommonMotionGuardOn,
    nFTCommonMotionGuardOff,
    nFTCommonMotionEscapeF,
    nFTCommonMotionEscapeB,
    nFTCommonMotionShieldBreakFly,
    nFTCommonMotionShieldBreakFall,
    nFTCommonMotionShieldBreakDownD,
    nFTCommonMotionShieldBreakDownU,
    nFTCommonMotionShieldBreakStandD,
    nFTCommonMotionShieldBreakStandU,
    nFTCommonMotionFuraFura,
    nFTCommonMotionFuraSleep,
    nFTCommonMotionCatch,
    nFTCommonMotionCatchPull,
    nFTCommonMotionThrowF,
    nFTCommonMotionThrowB,
    nFTCommonMotionCapturePulled,
    nFTCommonMotionThrownKirbyStar,
    nFTCommonMotionThrownCopyStar,
    nFTCommonMotionYoshiEgg,
    nFTCommonMotionCaptureCaptain,
    nFTCommonMotionThrownDonkeyUnk,
    nFTCommonMotionThrownDonkeyF,
    nFTCommonMotionThrownMarioB1,
    nFTCommonMotionThrownUnk1,
    nFTCommonMotionShouldered,
    nFTCommonMotionThrownMarioB2,
    nFTCommonMotionThrownCommon,
    nFTCommonMotionThrownUnk2,
    nFTCommonMotionThrownUnk3,
    nFTCommonMotionAppeal,
    nFTCommonMotionAttack11,
    nFTCommonMotionAttack12,
    nFTCommonMotionAttackDash,
    nFTCommonMotionAttackS3Hi,
    nFTCommonMotionAttackS3HiS,
    nFTCommonMotionAttackS3,
    nFTCommonMotionAttackS3LwS,
    nFTCommonMotionAttackS3Lw,
    nFTCommonMotionAttackHi3F,
    nFTCommonMotionAttackHi3,
    nFTCommonMotionAttackHi3B,
    nFTCommonMotionAttackLw3,
    nFTCommonMotionAttackS4Hi,
    nFTCommonMotionAttackS4HiS,
    nFTCommonMotionAttackS4,
    nFTCommonMotionAttackS4LwS,
    nFTCommonMotionAttackS4Lw,
    nFTCommonMotionAttackHi4,
    nFTCommonMotionAttackLw4,
    nFTCommonMotionAttackAirStart,
    nFTCommonMotionAttackAirN = nFTCommonMotionAttackAirStart,
    nFTCommonMotionAttackAirF,
    nFTCommonMotionAttackAirB,
    nFTCommonMotionAttackAirHi,
    nFTCommonMotionAttackAirLw,
    nFTCommonMotionAttackAirEnd = nFTCommonMotionAttackAirLw,
    nFTCommonMotionLandingAirStart,
    nFTCommonMotionLandingAirN = nFTCommonMotionLandingAirStart,
    nFTCommonMotionLandingAirF,
    nFTCommonMotionLandingAirB,
    nFTCommonMotionLandingAirHi,
    nFTCommonMotionLandingAirLw,
    nFTCommonMotionLandingAirEnd = nFTCommonMotionLandingAirLw,
    nFTCommonMotionLandingAirNull,
    nFTCommonMotionSpecialStart
} FTCommonMotion;
typedef enum FTCommonStatus
{
    nFTCommonStatusDeadDown,
    nFTCommonStatusDeadLeftRight,
    nFTCommonStatusDeadUpStar,
    nFTCommonStatusDeadUpFall,
    nFTCommonStatusSleep,
    nFTCommonStatusEntry,
    nFTCommonStatusActionStart,
    nFTCommonStatusEntryNull = nFTCommonStatusActionStart,
    nFTCommonStatusRebirthDown,
    nFTCommonStatusRebirthStand,
    nFTCommonStatusRebirthWait,
    nFTCommonStatusControlStart,
    nFTCommonStatusWait = nFTCommonStatusControlStart,
    nFTCommonStatusWalkSlow,
    nFTCommonStatusWalkMiddle,
    nFTCommonStatusWalkFast,
    nFTCommonStatusWalkEnd,
    nFTCommonStatusDash,
    nFTCommonStatusRun,
    nFTCommonStatusRunBrake,
    nFTCommonStatusTurn,
    nFTCommonStatusTurnRun,
    nFTCommonStatusKneeBend,
    nFTCommonStatusGuardKneeBend,
    nFTCommonStatusJumpF,
    nFTCommonStatusJumpB,
    nFTCommonStatusJumpAerialF,
    nFTCommonStatusJumpAerialB,
    nFTCommonStatusFall,
    nFTCommonStatusFallAerial,
    nFTCommonStatusSquat,
    nFTCommonStatusSquatWait,
    nFTCommonStatusSquatRv,
    nFTCommonStatusLandingLight,
    nFTCommonStatusLandingHeavy,
    nFTCommonStatusPass,
    nFTCommonStatusGuardPass,
    nFTCommonStatusOttottoWait,
    nFTCommonStatusOttotto,
    nFTCommonStatusDamageStart,
    nFTCommonStatusDamageHi1 = nFTCommonStatusDamageStart,
    nFTCommonStatusDamageHi2,
    nFTCommonStatusDamageHi3,
    nFTCommonStatusDamageN1,
    nFTCommonStatusDamageN2,
    nFTCommonStatusDamageN3,
    nFTCommonStatusDamageLw1,
    nFTCommonStatusDamageLw2,
    nFTCommonStatusDamageLw3,
    nFTCommonStatusDamageAir1,
    nFTCommonStatusDamageAir2,
    nFTCommonStatusDamageAir3,
    nFTCommonStatusDamageE1,
    nFTCommonStatusDamageE2,
    nFTCommonStatusDamageFlyHi,
    nFTCommonStatusDamageFlyN,
    nFTCommonStatusDamageFlyLw,
    nFTCommonStatusDamageFlyTop,
    nFTCommonStatusDamageFlyRoll,
    nFTCommonStatusWallDamage,
    nFTCommonStatusDamageEnd = nFTCommonStatusWallDamage,
    nFTCommonStatusDamageFall,
    nFTCommonStatusFallSpecial,
    nFTCommonStatusLandingFallSpecial,
    nFTCommonStatusTwister,
    nFTCommonStatusTaruCann,
    nFTCommonStatusDokanStart,
    nFTCommonStatusDokanWait,
    nFTCommonStatusDokanEnd,
    nFTCommonStatusDokanWalk,
    nFTCommonStatusStopCeil,
    nFTCommonStatusDownBounceD,
    nFTCommonStatusDownBounceU,
    nFTCommonStatusDownWaitD,
    nFTCommonStatusDownWaitU,
    nFTCommonStatusDownStandD,
    nFTCommonStatusDownStandU,
    nFTCommonStatusPassiveStandF,
    nFTCommonStatusPassiveStandB,
    nFTCommonStatusDownForwardD,
    nFTCommonStatusDownForwardU,
    nFTCommonStatusDownBackD,
    nFTCommonStatusDownBackU,
    nFTCommonStatusDownAttackD,
    nFTCommonStatusDownAttackU,
    nFTCommonStatusPassive,
    nFTCommonStatusReboundWait,
    nFTCommonStatusRebound,
    nFTCommonStatusCliffCatch,
    nFTCommonStatusCliffWait,
    nFTCommonStatusCliffQuick,
    nFTCommonStatusCliffClimbQuick1,
    nFTCommonStatusCliffClimbQuick2,
    nFTCommonStatusCliffSlow,
    nFTCommonStatusCliffClimbSlow1,
    nFTCommonStatusCliffClimbSlow2,
    nFTCommonStatusCliffAttackQuick1,
    nFTCommonStatusCliffAttackQuick2,
    nFTCommonStatusCliffAttackSlow1,
    nFTCommonStatusCliffAttackSlow2,
    nFTCommonStatusCliffEscapeQuick1,
    nFTCommonStatusCliffEscapeQuick2,
    nFTCommonStatusCliffEscapeSlow1,
    nFTCommonStatusCliffEscapeSlow2,
    nFTCommonStatusLightGet,
    nFTCommonStatusHeavyGet,
    nFTCommonStatusLiftWait,
    nFTCommonStatusLiftTurn,
    nFTCommonStatusLightThrowStart,
    nFTCommonStatusLightThrowDrop = nFTCommonStatusLightThrowStart,
    nFTCommonStatusLightThrowDash,
    nFTCommonStatusLightThrowF,
    nFTCommonStatusLightThrowB,
    nFTCommonStatusLightThrowHi,
    nFTCommonStatusLightThrowLw,
    nFTCommonStatusLightThrowF4,
    nFTCommonStatusLightThrowB4,
    nFTCommonStatusLightThrowHi4,
    nFTCommonStatusLightThrowLw4,
    nFTCommonStatusLightThrowAirF,
    nFTCommonStatusLightThrowAirB,
    nFTCommonStatusLightThrowAirHi,
    nFTCommonStatusLightThrowAirLw,
    nFTCommonStatusLightThrowAirF4,
    nFTCommonStatusLightThrowAirB4,
    nFTCommonStatusLightThrowAirHi4,
    nFTCommonStatusLightThrowAirLw4,
    nFTCommonStatusLightThrowEnd = nFTCommonStatusLightThrowAirLw4,
    nFTCommonStatusHeavyThrowStart,
    nFTCommonStatusHeavyThrowF = nFTCommonStatusHeavyThrowStart,
    nFTCommonStatusHeavyThrowB,
    nFTCommonStatusHeavyThrow4Start,
    nFTCommonStatusHeavyThrowF4 = nFTCommonStatusHeavyThrow4Start,
    nFTCommonStatusHeavyThrowB4,
    nFTCommonStatusHeavyThrow4End = nFTCommonStatusHeavyThrowB4,
    nFTCommonStatusHeavyThrowEnd = nFTCommonStatusHeavyThrow4End,
    nFTCommonStatusItemSwingStart,
    nFTCommonStatusSwordSwing1 = nFTCommonStatusItemSwingStart,
    nFTCommonStatusSwordSwing3,
    nFTCommonStatusSwordSwing4,
    nFTCommonStatusSwordSwingDash,
    nFTCommonStatusBatSwing1,
    nFTCommonStatusBatSwing3,
    nFTCommonStatusBatSwing4,
    nFTCommonStatusBatSwingDash,
    nFTCommonStatusHarisenSwing1,
    nFTCommonStatusHarisenSwing3,
    nFTCommonStatusHarisenSwing4,
    nFTCommonStatusHarisenSwingDash,
    nFTCommonStatusStarRodSwing1,
    nFTCommonStatusStarRodSwing3,
    nFTCommonStatusStarRodSwing4,
    nFTCommonStatusStarRodSwingDash,
    nFTCommonStatusItemSwingEnd = nFTCommonStatusStarRodSwingDash,
    nFTCommonStatusLGunShoot,
    nFTCommonStatusLGunShootAir,
    nFTCommonStatusFireFlowerShoot,
    nFTCommonStatusFireFlowerShootAir,
    nFTCommonStatusHammerStart,
    nFTCommonStatusHammerWait = nFTCommonStatusHammerStart,
    nFTCommonStatusHammerWalk,
    nFTCommonStatusHammerTurn,
    nFTCommonStatusHammerKneeBend,
    nFTCommonStatusHammerFall,
    nFTCommonStatusHammerLanding,
    nFTCommonStatusHammerEnd = nFTCommonStatusHammerLanding,
    nFTCommonStatusGuardStart,
    nFTCommonStatusGuardOn = nFTCommonStatusGuardStart,
    nFTCommonStatusGuard,
    nFTCommonStatusGuardOff,
    nFTCommonStatusGuardSetOff,
    nFTCommonStatusGuardEnd = nFTCommonStatusGuardSetOff,
    nFTCommonStatusEscapeF,
    nFTCommonStatusEscapeB,
    nFTCommonStatusShieldBreakFly,
    nFTCommonStatusShieldBreakFall,
    nFTCommonStatusShieldBreakDownD,
    nFTCommonStatusShieldBreakDownU,
    nFTCommonStatusShieldBreakStandD,
    nFTCommonStatusShieldBreakStandU,
    nFTCommonStatusFuraFura,
    nFTCommonStatusFuraSleep,
    nFTCommonStatusCatch,
    nFTCommonStatusCatchPull,
    nFTCommonStatusCatchWait,
    nFTCommonStatusThrowF,
    nFTCommonStatusThrowB,
    nFTCommonStatusCapturePulled,
    nFTCommonStatusCaptureWait,
    nFTCommonStatusCaptureKirby,
    nFTCommonStatusCaptureWaitKirby,
    nFTCommonStatusThrownKirbyStar,
    nFTCommonStatusThrownCopyStar,
    nFTCommonStatusCaptureYoshi,
    nFTCommonStatusYoshiEgg,
    nFTCommonStatusCaptureCaptain,
    nFTCommonStatusThrownDonkeyUnk,
    nFTCommonStatusThrownStart,
    nFTCommonStatusThrownDonkeyF = nFTCommonStatusThrownStart,
    nFTCommonStatusThrownMarioBStart,
    nFTCommonStatusThrownFoxFStart,
    nFTCommonStatusShouldered,
    nFTCommonStatusThrownMarioB,
    nFTCommonStatusThrownCommon,
    nFTCommonStatusThrownFoxF,
    nFTCommonStatusThrownFoxB,
    nFTCommonStatusThrownEnd = nFTCommonStatusThrownFoxB,
    nFTCommonStatusAppeal,
    nFTCommonStatusAttack11,
    nFTCommonStatusAttack12,
    nFTCommonStatusAttackDash,
    nFTCommonStatusAttackS3Hi,
    nFTCommonStatusAttackS3HiS,
    nFTCommonStatusAttackS3,
    nFTCommonStatusAttackS3LwS,
    nFTCommonStatusAttackS3Lw,
    nFTCommonStatusAttackHi3F,
    nFTCommonStatusAttackHi3,
    nFTCommonStatusAttackHi3B,
    nFTCommonStatusAttackLw3,
    nFTCommonStatusAttackS4Hi,
    nFTCommonStatusAttackS4HiS,
    nFTCommonStatusAttackS4,
    nFTCommonStatusAttackS4LwS,
    nFTCommonStatusAttackS4Lw,
    nFTCommonStatusAttackHi4,
    nFTCommonStatusAttackLw4,
    nFTCommonStatusAttackAirStart,
    nFTCommonStatusAttackAirN = nFTCommonStatusAttackAirStart,
    nFTCommonStatusAttackAirF,
    nFTCommonStatusAttackAirB,
    nFTCommonStatusAttackAirHi,
    nFTCommonStatusAttackAirLw,
    nFTCommonStatusAttackAirEnd = nFTCommonStatusAttackAirLw,
    nFTCommonStatusLandingAirStart,
    nFTCommonStatusLandingAirN = nFTCommonStatusLandingAirStart,
    nFTCommonStatusLandingAirF,
    nFTCommonStatusLandingAirB,
    nFTCommonStatusLandingAirHi,
    nFTCommonStatusLandingAirLw,
    nFTCommonStatusLandingAirNull,
    nFTCommonStatusLandingAirEnd = nFTCommonStatusLandingAirNull,
    nFTCommonStatusSpecialStart
} FTCommonStatus;
typedef enum FTDemoStatus
{
    nFTDemoStatusNull = 0x10000,
    nFTDemoStatusWin1,
    nFTDemoStatusWin2,
    nFTDemoStatusWin3,
    nFTDemoStatusWin4,
    nFTDemoStatusLose,
    nFTDemoStatusRun,
    nFTDemoStatusJump,
    nFTDemoStatusFigurePulled,
    nFTDemoStatusFigureDropped,
    nFTDemoStatusFigureStand,
    nFTDemoStatusClash,
    nFTDemoStatusStance,
    nFTDemoStatusIntroL,
    nFTDemoStatusIntroR,
    nFTDemoStatusSpecialStart
} FTDemoStatus;
typedef enum FTMotionAttackIndex
{
    nFTMotionAttackIDNone,
    nFTMotionAttackIDBaseStart,
    nFTMotionAttackIDAttack11 = nFTMotionAttackIDBaseStart,
    nFTMotionAttackIDAttack12,
    nFTMotionAttackIDAttack13,
    nFTMotionAttackIDAttack100,
    nFTMotionAttackIDAttackDash,
    nFTMotionAttackIDAttackS3,
    nFTMotionAttackIDAttackHi3,
    nFTMotionAttackIDAttackLw3,
    nFTMotionAttackIDAttackS4,
    nFTMotionAttackIDAttackHi4,
    nFTMotionAttackIDAttackLw4,
    nFTMotionAttackIDAttackAirN,
    nFTMotionAttackIDAttackAirF,
    nFTMotionAttackIDAttackAirB,
    nFTMotionAttackIDAttackAirHi,
    nFTMotionAttackIDAttackAirLw,
    nFTMotionAttackIDSpecialHi,
    nFTMotionAttackIDSpecialN,
    nFTMotionAttackIDSpecialNCopyMario,
    nFTMotionAttackIDSpecialNCopyLuigi,
    nFTMotionAttackIDSpecialNCopyFox,
    nFTMotionAttackIDSpecialNCopySamus,
    nFTMotionAttackIDSpecialNCopyDonkey,
    nFTMotionAttackIDSpecialNCopyPikachu,
    nFTMotionAttackIDSpecialNCopyNess,
    nFTMotionAttackIDSpecialNCopyLink,
    nFTMotionAttackIDSpecialNCopyPurin,
    nFTMotionAttackIDSpecialNCopyCaptain,
    nFTMotionAttackIDSpecialNCopyYoshi,
    nFTMotionAttackIDSpecialLw,
    nFTMotionAttackIDDownAttackD,
    nFTMotionAttackIDDownAttackU,
    nFTMotionAttackIDCliffAttackQuick,
    nFTMotionAttackIDCliffAttackSlow,
    nFTMotionAttackIDThrowF,
    nFTMotionAttackIDThrowB,
    nFTMotionAttackIDBaseEnd = nFTMotionAttackIDThrowB,
    nFTMotionAttackIDItemStart,
    nFTMotionAttackIDSwordSwing1 = nFTMotionAttackIDItemStart,
    nFTMotionAttackIDSwordSwing3,
    nFTMotionAttackIDSwordSwing4,
    nFTMotionAttackIDSwordSwingDash,
    nFTMotionAttackIDBatSwing1,
    nFTMotionAttackIDBatSwing3,
    nFTMotionAttackIDBatSwing4,
    nFTMotionAttackIDBatSwingDash,
    nFTMotionAttackIDHarisenSwing1,
    nFTMotionAttackIDHarisenSwing3,
    nFTMotionAttackIDHarisenSwing4,
    nFTMotionAttackIDHarisenSwingDash,
    nFTMotionAttackIDStarRodSwing1,
    nFTMotionAttackIDStarRodSwing3,
    nFTMotionAttackIDStarRodSwing4,
    nFTMotionAttackIDStarRodSwingDash,
    nFTMotionAttackIDLGunShoot,
    nFTMotionAttackIDFireFlowerShoot,
    nFTMotionAttackIDHammer,
    nFTMotionAttackIDItemThrow,
    nFTMotionAttackIDItemEnd = nFTMotionAttackIDItemThrow,
    nFTMotionAttackIDNull,
    nFTMotionAttackIDEnumCount
} FTMotionAttackIndex;
typedef enum FTStatusAttackIndex
{
    nFTStatusAttackIDNone,
    nFTStatusAttackIDAttackStart,
    nFTStatusAttackIDNormalStart = nFTStatusAttackIDAttackStart,
    nFTStatusAttackIDAttack11 = nFTStatusAttackIDNormalStart,
    nFTStatusAttackIDAttackDash,
    nFTStatusAttackIDAttackS3,
    nFTStatusAttackIDAttackHi3,
    nFTStatusAttackIDAttackLw3,
    nFTStatusAttackIDAttackS4,
    nFTStatusAttackIDAttackHi4,
    nFTStatusAttackIDAttackLw4,
    nFTStatusAttackIDAttackAirN,
    nFTStatusAttackIDAttackAirF,
    nFTStatusAttackIDAttackAirB,
    nFTStatusAttackIDAttackAirHi,
    nFTStatusAttackIDAttackAirLw,
    nFTStatusAttackIDNormalEnd = nFTStatusAttackIDAttackAirLw,
    nFTStatusAttackIDJabStart,
    nFTStatusAttackIDAttack12 = nFTStatusAttackIDJabStart,
    nFTStatusAttackIDAttack13,
    nFTStatusAttackIDAttack100,
    nFTStatusAttackIDJabEnd = nFTStatusAttackIDAttack100,
    nFTStatusAttackIDSpecialStart,
    nFTStatusAttackIDSpecialHi = nFTStatusAttackIDSpecialStart,
    nFTStatusAttackIDSpecialN,
    nFTStatusAttackIDSpecialNCopyMario,
    nFTStatusAttackIDSpecialNCopyLuigi,
    nFTStatusAttackIDSpecialNCopyFox,
    nFTStatusAttackIDSpecialNCopySamus,
    nFTStatusAttackIDSpecialNCopyDonkey,
    nFTStatusAttackIDSpecialNCopyPikachu,
    nFTStatusAttackIDSpecialNCopyNess,
    nFTStatusAttackIDSpecialNCopyLink,
    nFTStatusAttackIDSpecialNCopyPurin,
    nFTStatusAttackIDSpecialNCopyCaptain,
    nFTStatusAttackIDSpecialNCopyYoshi,
    nFTStatusAttackIDSpecialLw,
    nFTStatusAttackIDSpecialEnd = nFTStatusAttackIDSpecialLw,
    nFTStatusAttackIDDownAttackD,
    nFTStatusAttackIDDownAttackU,
    nFTStatusAttackIDCliffAttackQuick,
    nFTStatusAttackIDCliffAttackSlow,
    nFTStatusAttackIDThrowF,
    nFTStatusAttackIDThrowB,
    nFTStatusAttackIDItemStart,
    nFTStatusAttackIDSwordSwing1 = nFTStatusAttackIDItemStart,
    nFTStatusAttackIDSwordSwing3,
    nFTStatusAttackIDSwordSwing4,
    nFTStatusAttackIDSwordSwingDash,
    nFTStatusAttackIDBatSwing1,
    nFTStatusAttackIDBatSwing3,
    nFTStatusAttackIDBatSwing4,
    nFTStatusAttackIDBatSwingDash,
    nFTStatusAttackIDHarisenSwing1,
    nFTStatusAttackIDHarisenSwing3,
    nFTStatusAttackIDHarisenSwing4,
    nFTStatusAttackIDHarisenSwingDash,
    nFTStatusAttackIDStarRodSwing1,
    nFTStatusAttackIDStarRodSwing3,
    nFTStatusAttackIDStarRodSwing4,
    nFTStatusAttackIDStarRodSwingDash,
    nFTStatusAttackIDLGunShoot,
    nFTStatusAttackIDFireFlowerShoot,
    nFTStatusAttackIDHammer,
    nFTStatusAttackIDItemThrow,
    nFTStatusAttackIDItemEnd = nFTStatusAttackIDItemThrow,
    nFTStatusAttackIDNull,
    nFTStatusAttackIDEnumCount
} FTStatusAttackIndex;
typedef enum FTMotionEvent
{
 nFTMotionEventEnd,
 nFTMotionEventSyncWait,
 nFTMotionEventAsyncWait,
 nFTMotionEventMakeAttackColl,
 nFTMotionEventMakeAttackCollScaled,
 nFTMotionEventClearAttackCollID,
 nFTMotionEventClearAttackCollAll,
 nFTMotionEventSetAttackCollOffset,
 nFTMotionEventSetAttackCollDamage,
 nFTMotionEventSetAttackCollSize,
 nFTMotionEventSetAttackCollSoundLevel,
 nFTMotionEventRefreshAttackCollID,
 nFTMotionEventSetThrow,
 nFTMotionEventSetDamageThrown,
 nFTMotionEventPlayFGM,
 nFTMotionEventPlayLoopSFXStoreInfo,
 nFTMotionEventStopLoopSFX,
 nFTMotionEventPlayVoiceStoreInfo,
 nFTMotionEventPlayLoopVoiceStoreInfo,
 nFTMotionEventPlayFGMStoreInfo,
 nFTMotionEventPlaySmashVoice,
 nFTMotionEventSetFlag0,
 nFTMotionEventSetFlag1,
 nFTMotionEventSetFlag2,
 nFTMotionEventSetFlag3,
 nFTMotionEventSetAirJumpAdd,
 nFTMotionEventSetAirJumpMax,
 nFTMotionEventSetHitStatusPartAll,
 nFTMotionEventSetHitStatusPartID,
 nFTMotionEventSetHitStatusAll,
 nFTMotionEventResetDamageCollPartAll,
 nFTMotionEventSetDamageCollPartID,
 nFTMotionEventLoopBegin,
 nFTMotionEventLoopEnd,
 nFTMotionEventSubroutine,
 nFTMotionEventReturn,
 nFTMotionEventGoto,
 nFTMotionEventPauseScript,
 nFTMotionEventEffect,
 nFTMotionEventEffectItemHold,
 nFTMotionEventSetModelPartID,
 nFTMotionEventResetModelPartAll,
 nFTMotionEventHideModelPartAll,
 nFTMotionEventSetTexturePartID,
 nFTMotionEventSetColAnim,
 nFTMotionEventResetColAnim,
 nFTMotionEventSetParallelScript,
 nFTMotionEventSetSlopeContour,
 nFTMotionEventHideItem,
 nFTMotionEventMakeRumble,
 nFTMotionEventStopRumble,
 nFTMotionEventSetAfterImage
} FTMotionEvent;
typedef enum FTCameraModes
{
    nFTCameraModeDefault,
    nFTCameraModeGhost,
    nFTCameraModeDeadUp,
    nFTCameraModeEntry,
    nFTCameraModeExplain
} FTCameraModes;
typedef enum FTSlopeContours
{
    nFTSlopeContourLFoot,
    nFTSlopeContourRFoot,
    nFTSlopeContourFull
} FTSlopeContours;
typedef enum FTHitLogObjectKind
{
 nFTHitLogObjectNone,
 nFTHitLogObjectFighter,
 nFTHitLogObjectWeapon,
 nFTHitLogObjectItem,
 nFTHitLogObjectGround
} FTHitLogObjectKind;
typedef enum FTItemSwingKind
{
    nFTItemSwingKindSword,
    nFTItemSwingKindBat,
    nFTItemSwingKindHarisen,
    nFTItemSwingKindStarRod,
    nFTItemSwingKindEnumCount
} FTItemSwingKind;
typedef enum FTItemSwingType
{
    nFTItemSwingTypeAttack1,
    nFTItemSwingTypeAttack3,
    nFTItemSwingTypeAttack4,
    nFTItemSwingTypeAttackDash,
    nFTItemSwingTypeEnumCount
} FTItemSwingType;
typedef enum FTSpecialCollKind
{
    nFTSpecialCollKindFoxReflector,
    nFTSpecialCollKindNessAbsorb,
    nFTSpecialCollKindNessReflector
} FTSpecialCollKind;
typedef enum FTCatchKind
{
    nFTCatchKindYoshiSpecialN,
    nFTCatchKindKirbySpecialN,
    nFTCatchKindTaruCann,
    nFTCatchKindTwister,
    nFTCatchKindCommon,
    nFTCatchKindCaptainSpecialHi
} FTCatchKind;
typedef enum FTPartsPlacement
{
    nFTPartsPlacementLow,
    nFTPartsPlacementMiddle,
    nFTPartsPlacementHigh
} FTPartsPlacement;
typedef enum FTDamageKind
{
    nFTDamageKindDefault,
    nFTDamageKindStatus,
    nFTDamageKindColAnim,
    nFTDamageKindCatch,
    nFTDamageKindNone
} FTDamageKind;
typedef enum FTPartsJointLabels
{
    nFTPartsJointTopN,
    nFTPartsJointTransN,
    nFTPartsJointXRotN,
    nFTPartsJointYRotN,
    nFTPartsJointCommonStart
} FTPartsJointLabels;
typedef enum FTPartsLevelDetail
{
    nFTPartsDetailNone,
    nFTPartsDetailStart,
    nFTPartsDetailHigh = nFTPartsDetailStart,
    nFTPartsDetailLow
} FTPartsLevelDetail;
typedef enum FTKind
{
    nFTKindPlayableStart,
    nFTKindMario = nFTKindPlayableStart,
    nFTKindFox,
    nFTKindDonkey,
    nFTKindSamus,
    nFTKindLuigi,
    nFTKindLink,
    nFTKindYoshi,
    nFTKindCaptain,
    nFTKindKirby,
    nFTKindPikachu,
    nFTKindPurin,
    nFTKindNess,
    nFTKindPlayableEnd = nFTKindNess,
    nFTKindBoss,
    nFTKindMMario,
    nFTKindNStart,
    nFTKindNMario = nFTKindNStart,
    nFTKindNFox,
    nFTKindNDonkey,
    nFTKindNSamus,
    nFTKindNLuigi,
    nFTKindNLink,
    nFTKindNYoshi,
    nFTKindNCaptain,
    nFTKindNKirby,
    nFTKindNPikachu,
    nFTKindNPurin,
    nFTKindNNess,
    nFTKindNEnd = nFTKindNNess,
    nFTKindGDonkey,
    nFTKindEnumCount,
    nFTKindNull
} FTKind;
typedef enum FTPlayerKind
{
    nFTPlayerKindMan,
    nFTPlayerKindCom,
    nFTPlayerKindNot,
    nFTPlayerKindDemo,
    nFTPlayerKindKey,
    nFTPlayerKindGameKey
} FTPlayerKind;
typedef enum FTComputerCommandKind
{
    nFTComputerCommandButtonAPress,
    nFTComputerCommandButtonARelease,
    nFTComputerCommandButtonBPress,
    nFTComputerCommandButtonBRelease,
    nFTComputerCommandButtonZPress,
    nFTComputerCommandButtonZRelease,
    nFTComputerCommandButtonLPress,
    nFTComputerCommandButtonLRelease,
    nFTComputerCommandButtonStartPress,
    nFTComputerCommandButtonStartRelease,
    nFTComputerCommandStickX,
    nFTComputerCommandStickY,
    nFTComputerCommandMoveAuto,
    nFTComputerCommandStickXVar,
    nFTComputerCommandStickYVar,
    nFTComputerCommandEnumCount
} FTComputerCommandKind;
typedef enum FTComputerInputKind
{
    nFTComputerInputStickN,
    nFTComputerInputMoveAuto,
    nFTComputerInputStickTiltAutoX,
    nFTComputerInputStickNMoveAuto,
    nFTComputerInputMoveAutoStickTiltHiReleaseZ,
    nFTComputerInputStickTiltAutoXButtonA,
    nFTComputerInputStickTiltAutoXD5NButtonA,
    nFTComputerInputMoveAutoButtonA,
    nFTComputerInputStickSmashAutoXButtonA,
    nFTComputerInputStickSmashAutoXButtonB,
    nFTComputerInputStickTiltAutoXNYD5SmashAutoXButtonB,
    nFTComputerInputStickTiltAutoXNYD1ButtonB,
    nFTComputerInputButtonZ1,
    nFTComputerInputStickSmashHiButtonB,
    nFTComputerInputStickTiltAutoXD5SmashSButtonB,
    nFTComputerInputStickNButtonL,
    nFTComputerInputButtonZ2,
    nFTComputerInputStickTiltAutoXD5,
    nFTComputerInputStickTiltAutoXD1,
    nFTComputerInputStickNButtonA,
    nFTComputerInputStickTiltAutoXD5ButtonA,
    nFTComputerInputStickSmashAutoXNYButtonA,
    nFTComputerInputStickTiltAutoXD1SmashSButtonA,
    nFTComputerInputStickTiltHiButtonA,
    nFTComputerInputStickTiltAutoXD5TiltAutoYButtonA,
    nFTComputerInputStickSmashHiButtonA,
    nFTComputerInputStickTiltAutoXD5SmashAutoYButtonA,
    nFTComputerInputStickSmashLwButtonB,
    nFTComputerInputStickNButtonZButtonA,
    nFTComputerInputStickTiltAutoXD5ButtonZButtonA,
    nFTComputerInputStickSmashL,
    nFTComputerInputStickSmashR,
    nFTComputerInputStickTiltLwButtonA,
    nFTComputerInputStickTiltAutoXD5TiltLwButtonA,
    nFTComputerInputStickSmashLwButtonA,
    nFTComputerInputStickNButtonZHold,
    nFTComputerInputButtonZRelease,
    nFTComputerInputStickNXSmashLwButtonBReleaseBHold,
    nFTComputerInputStickNButtonBRelease,
    nFTComputerInputStickND1MoveAutoSmashLw,
    nFTComputerInputStickNButtonBZReleaseAPress,
    nFTComputerInputStickTiltAutoXButtonBZReleaseAPress,
    nFTComputerInputThrowItemImmediate,
    nFTComputerInputThrowItemWait,
    nFTComputerInputWiggle,
    nFTComputerInputEscapeL,
    nFTComputerInputEscapeR,
    nFTComputerInputYoshiSpecialHiAim,
    nFTComputerInputNessSpecialHiAim
} FTComputerInputKind;
typedef enum FTComputerTraitKind
{
    nFTComputerTraitDefault,
    nFTComputerTraitLink,
    nFTComputerTraitYoshiTeam,
    nFTComputerTraitKirbyTeam,
    nFTComputerTraitPolyTeam,
    nFTComputerTraitMarioBros,
    nFTComputerTraitGDonkey,
    nFTComputerTraitUnk1,
    nFTComputerTraitBonus3,
    nFTComputerTraitAlly,
    nFTComputerTraitNone
} FTComputerTraitKind;
typedef enum FTComputerBehaviorKind
{
    nFTComputerBehaviorDefault,
    nFTComputerBehaviorUnk1,
    nFTComputerBehaviorUnk2,
    nFTComputerBehaviorAlly,
    nFTComputerBehaviorCaptain,
    nFTComputerBehaviorUnk3,
    nFTComputerBehaviorUnk4,
    nFTComputerBehaviorYoshiTeam,
    nFTComputerBehaviorKirbyTeam,
    nFTComputerBehaviorPolyTeam,
    nFTComputerBehaviorUnused1,
    nFTComputerBehaviorUnused2,
    nFTComputerBehaviorUnused3,
    nFTComputerBehaviorBonus3,
    nFTComputerBehaviorUnused4,
    nFTComputerBehaviorStand,
    nFTComputerBehaviorWalk,
    nFTComputerBehaviorEvade,
    nFTComputerBehaviorJump,
    nFTComputerBehaviorUnk5
} FTComputerBehaviorKind;
typedef enum FTComputerObjectiveKind
{
    nFTComputerObjectiveStand,
    nFTComputerObjectiveWalk,
    nFTComputerObjectiveAttack,
    nFTComputerObjectiveEvade,
    nFTComputerObjectiveRecover,
    nFTComputerObjectiveTrackItem,
    nFTComputerObjectiveUseItem,
    nFTComputerObjectiveCounterAttack,
    nFTComputerObjectiveUnknown1,
    nFTComputerObjectiveAlly,
    nFTComputerObjectivePatrol,
    nFTComputerObjectiveRush
} FTComputerObjectiveKind;
typedef enum FTKeyEventKind
{
    nFTKeyEventEnd,
    nFTKeyEventButton,
    nFTKeyEventStick
} FTKeyEventKind;
typedef struct FTStruct FTStruct;
typedef struct FTSpecialColl FTSpecialColl;
typedef struct FTItemPickup FTItemPickup;
typedef struct FTThrownStatus FTThrownStatus;
typedef struct FTThrownStatusArray FTThrownStatusArray;
typedef struct FTMotionDesc FTMotionDesc;
typedef struct FTMotionDescArray FTMotionDescArray;
typedef struct FTFileSize FTFileSize;
typedef struct FTData FTData;
typedef struct FTCommonPart FTCommonPart;
typedef struct FTCommonPartContainer FTCommonPartContainer;
typedef struct FTModelPart FTModelPart;
typedef struct FTModelPartDesc FTModelPartDesc;
typedef struct FTModelPartContainer FTModelPartContainer;
typedef struct FTModelPartStatus FTModelPartStatus;
typedef struct FTTexturePart FTTexturePart;
typedef struct FTTexturePartContainer FTTexturePartContainer;
typedef struct FTTexturePartStatus FTTexturePartStatus;
typedef union FTAnimDesc FTAnimDesc;
typedef struct FTMotionFlags FTMotionFlags;
typedef struct FTMotionScript FTMotionScript;
typedef struct FTMotionEventDefault FTMotionEventDefault;
typedef struct FTMotionEventDouble FTMotionEventDouble;
typedef struct FTMotionEventMakeAttack1 FTMotionEventMakeAttack1;
typedef struct FTMotionEventMakeAttack2 FTMotionEventMakeAttack2;
typedef struct FTMotionEventMakeAttack3 FTMotionEventMakeAttack3;
typedef struct FTMotionEventMakeAttack4 FTMotionEventMakeAttack4;
typedef struct FTMotionEventMakeAttack5 FTMotionEventMakeAttack5;
typedef struct FTMotionEventMakeAttack FTMotionEventMakeAttack;
typedef struct FTMotionEventSetAttackOffset1 FTMotionEventSetAttackOffset1;
typedef struct FTMotionEventSetAttackOffset2 FTMotionEventSetAttackOffset2;
typedef struct FTMotionEventSetAttackOffset FTMotionEventSetAttackOffset;
typedef struct FTMotionEventSetAttackCollDamage FTMotionEventSetAttackCollDamage;
typedef struct FTMotionEventSetAttackCollSize FTMotionEventSetAttackCollSize;
typedef struct FTMotionEventSetAttackCollSound FTMotionEventSetAttackCollSound;
typedef struct FTMotionEventSetThrow1 FTMotionEventSetThrow1;
typedef struct FTMotionEventSetThrow2 FTMotionEventSetThrow2;
typedef struct FTMotionEventSetThrow FTMotionEventSetThrow;
typedef struct FTMotionEventMakeEffect1 FTMotionEventMakeEffect1;
typedef struct FTMotionEventMakeEffect2 FTMotionEventMakeEffect2;
typedef struct FTMotionEventMakeEffect3 FTMotionEventMakeEffect3;
typedef struct FTMotionEventMakeEffect4 FTMotionEventMakeEffect4;
typedef struct FTMotionEventMakeEffect FTMotionEventMakeEffect;
typedef struct FTMotionEventSetHitStatusPartID FTMotionEventSetHitStatusPartID;
typedef struct FTMotionEventSetDamageCollPartID1 FTMotionEventSetDamageCollPartID1;
typedef struct FTMotionEventSetDamageCollPartID2 FTMotionEventSetDamageCollPartID2;
typedef struct FTMotionEventSetDamageCollPartID3 FTMotionEventSetDamageCollPartID3;
typedef struct FTMotionEventSetDamageCollPartID4 FTMotionEventSetDamageCollPartID4;
typedef struct FTMotionEventSetDamageCollPartID FTMotionEventSetDamageCollPartID;
typedef struct FTMotionEventSubroutine1 FTMotionEventSubroutine1;
typedef struct FTMotionEventSubroutine2 FTMotionEventSubroutine2;
typedef struct FTMotionEventSubroutine FTMotionEventSubroutine;
typedef struct FTMotionEventSetDamageThrown1 FTMotionEventSetDamageThrown1;
typedef struct FTMotionEventSetDamageThrown2 FTMotionEventSetDamageThrown2;
typedef struct FTMotionEventSetDamageThrown FTMotionEventSetDamageThrown;
typedef struct FTMotionDamageScript FTMotionDamageScript;
typedef struct FTMotionEventGoto1 FTMotionEventGoto1;
typedef struct FTMotionEventGoto2 FTMotionEventGoto2;
typedef struct FTMotionEventGoto FTMotionEventGoto;
typedef struct FTMotionEventParallel1 FTMotionEventParallel1;
typedef struct FTMotionEventParallel2 FTMotionEventParallel2;
typedef struct FTMotionEventParallel FTMotionEventParallel;
typedef struct FTMotionEventSetModelPartID FTMotionEventSetModelPartID;
typedef struct FTMotionEventSetTexturePartID FTMotionEventSetTexturePartID;
typedef struct FTMotionEventSetColAnimID FTMotionEventSetColAnimID;
typedef struct FTMotionEventSetSlopeContour FTMotionEventSetSlopeContour;
typedef struct FTMotionEventSetAfterImage FTMotionEventSetAfterImage;
typedef struct FTMotionEventMakeRumble FTMotionEventMakeRumble;
typedef struct FTMotionEventStopRumble FTMotionEventStopRumble;
typedef struct FTStatusDesc FTStatusDesc;
typedef struct FTOpeningDesc FTOpeningDesc;
typedef struct FTThrowHitDesc FTThrowHitDesc;
typedef struct FTThrowReleaseDesc FTThrowReleaseDesc;
typedef struct FTDesc FTDesc;
typedef struct FTAttackMatrix FTAttackMatrix;
typedef struct FTAttackColl FTAttackColl;
typedef struct FTDamageCollDesc FTDamageCollDesc;
typedef struct FTDamageColl FTDamageColl;
typedef struct FTHitLog FTHitLog;
typedef struct FTItemThrow FTItemThrow;
typedef struct FTItemSwing FTItemSwing;
typedef struct FTParts FTParts;
typedef struct FTHiddenPart FTHiddenPart;
typedef struct FTShadow FTShadow;
typedef struct FTCostume FTCostume;
typedef struct FTDemoDesc FTDemoDesc;
typedef struct FTSkeleton FTSkeleton;
typedef struct FTAfterImage FTAfterImage;
typedef struct FTCamera FTCamera;
typedef struct FTSprites FTSprites;
typedef struct FTComputer FTComputer;
typedef struct FTPlayerInput FTPlayerInput;
typedef struct FTComputerInput FTComputerInput;
typedef struct FTComputerAttack FTComputerAttack;
typedef union FTKeyEvent FTKeyEvent;
typedef struct FTKey FTKey;
typedef struct FTAttributes FTAttributes;
typedef struct FTAccessPart FTAccessPart;
typedef struct alSoundEffect
{
 void* unk_0x0;
 void* unk_0x4;
 void* unk_0x8;
 void* unk_0xC;
 u16 unk_0x10;
 u16 unk_0x12;
 u16 unk_0x14;
 u16 unk_0x16;
 u16 unk_0x18;
 u16 unk_0x1A;
 u16 unk_0x1C;
 u16 unk_0x1E;
 u16 unk_0x20;
 u16 unk_0x22;
 u16 unk_0x24;
 u16 sfx_id;
 u16 sfx_max;
 u8 filler_0x2A[0x2F - 0x2A];
 u8 balance;
} alSoundEffect;
typedef enum gmMusicID
{
 nSYAudioBGMPupupu,
 nSYAudioBGMZebes,
 nSYAudioBGMInishie,
 nSYAudioBGMInishieHurry,
 nSYAudioBGMSector,
 nSYAudioBGMJungle,
 nSYAudioBGMCastle,
 nSYAudioBGMYamabuki,
 nSYAudioBGMYoster,
 nSYAudioBGMHyrule,
 nSYAudioBGMBattleSelect,
 nSYAudioBGMWinDefault,
 nSYAudioBGMWinMario,
 nSYAudioBGMWinMetroid,
 nSYAudioBGMWinDonkey,
 nSYAudioBGMWinKirby,
 nSYAudioBGMWinFox,
 nSYAudioBGMWinMother,
 nSYAudioBGMWinYoshi,
 nSYAudioBGMWinFZero,
 nSYAudioBGMWinPMonsters,
 nSYAudioBGMWinZelda,
 nSYAudioBGMResults,
 nSYAudioBGMBossStage,
 nSYAudioBGMBossEntry,
 nSYAudioBGMLast,
 nSYAudioBGM1PBonusStage,
 nSYAudioBGM1PStageClear,
 nSYAudioBGM1PBonusStageClear,
 nSYAudioBGM1PGameClear,
 nSYAudioBGM1PBonusStageFailure,
 nSYAudioBGM1PGameEndChoice,
 nSYAudioBGM1PGameOver,
 nSYAudioBGMOpening,
 nSYAudioBGMExplain,
 nSYAudioBGM1PIntro,
 nSYAudioBGMZako,
 nSYAudioBGMMetal,
 nSYAudioBGMEnding,
 nSYAudioBGMStaffroll,
 nSYAudioBGMMessage,
 nSYAudioBGM1PChallenger,
 nSYAudioBGMTrainingMode,
 nSYAudioBGMData,
 nSYAudioBGMModeSelect,
 nSYAudioBGMHammer,
    nSYAudioBGMStar,
 nSYAudioBGMEnd
} gmMusicID;
typedef enum gmFGMVoiceID
{
 nSYAudioFGMExplodeS,
 nSYAudioFGMExplodeL,
 nSYAudioFGMFireShoot1,
 nSYAudioFGMUnkShoot1,
 nSYAudioFGMUnkDial1,
 nSYAudioFGMChargeShotAll,
 nSYAudioFGMUnkSmallPing1,
 nSYAudioFGMFoxBlaster,
 nSYAudioFGMSamusJump1,
 nSYAudioFGMDonkeySlap1,
 nSYAudioFGMDonkeySlap2,
 nSYAudioFGMEscape,
 nSYAudioFGMDeadUpStar,
 nSYAudioFGMGuardOn,
 nSYAudioFGMGuardOff,
 nSYAudioFGMShieldBreak,
 nSYAudioFGMShieldBreakPitchLw,
 nSYAudioFGMHeavySwing1,
 nSYAudioFGMLightSwingLw1,
 nSYAudioFGMCatch,
 nSYAudioFGMDoorClose,
 nSYAudioFGMTrainingSel,
 nSYAudioFGMShockL,
 nSYAudioFGMShockM,
 nSYAudioFGMShockS,
 nSYAudioFGMBurnL,
 nSYAudioFGMBurnE,
 nSYAudioFGMBurnM,
 nSYAudioFGMBurnS,
 nSYAudioFGMShockML,
 nSYAudioFGMKickL,
 nSYAudioFGMKickM,
 nSYAudioFGMKickS,
 nSYAudioFGMFireShoot2,
 nSYAudioFGMPunchL,
 nSYAudioFGMPunchM,
 nSYAudioFGMPunchS,
 nSYAudioFGMLightSwingL,
 nSYAudioFGMLightSwingM,
 nSYAudioFGMLightSwingS,
 nSYAudioFGMMSBombAttach,
 nSYAudioFGMBombHeiFuse,
 nSYAudioFGMItemMapCollide,
 nSYAudioFGMBumperHit,
 nSYAudioFGMFireFlowerBurn,
 nSYAudioFGMItemGet,
 nSYAudioFGMHammerSwing,
 nSYAudioFGMHarisenHit,
 nSYAudioFGMBatHit,
 nSYAudioFGMStarMapCollide,
 nSYAudioFGMStarGet,
 nSYAudioFGMBombHeiWalkStart,
 nSYAudioFGMShellHit,
 nSYAudioFGMItemThrow,
 nSYAudioFGMItemSpawn1,
 nSYAudioFGMContainerSmash,
 nSYAudioFGMFireFlowerShoot,
 nSYAudioFGMLGunShoot,
 nSYAudioFGMLGunEmpty,
 nSYAudioFGMStarRodSwing4,
 nSYAudioFGMStarRodSwing3,
 nSYAudioFGMStarRodSwing1,
 nSYAudioFGMStarRodEmpty,
 nSYAudioFGMSwordSwing4,
 nSYAudioFGMSwordSwing3,
 nSYAudioFGMSwordSwing1,
 nSYAudioFGMTaruBombHit,
 nSYAudioFGMTaruBombMap,
 nSYAudioFGMDonkeyLanding,
 nSYAudioFGMCaptainLanding,
 nSYAudioFGMFoxLanding,
 nSYAudioFGMKirbyLanding,
 nSYAudioFGMLinkLanding,
 nSYAudioFGMMarioLanding,
 nSYAudioFGMNessLanding,
 nSYAudioFGMPikachuLanding,
 nSYAudioFGMPurinLanding,
 nSYAudioFGMSamusLanding,
 nSYAudioFGMYoshiLanding,
 nSYAudioFGMUnkGrind2,
 nSYAudioFGMUnkGrind3,
 nSYAudioFGMUnkGrind4,
 nSYAudioFGMInflateJump1,
 nSYAudioFGMUnkGrind5,
 nSYAudioFGMSamusJump2,
 nSYAudioFGMUnkNessPSI,
 nSYAudioFGMInflateJump2,
 nSYAudioFGMInflateJump3,
 nSYAudioFGMSamusJumpAerial,
 nSYAudioFGMInflateJump4,
 nSYAudioFGMKirbyPurinJump,
 nSYAudioFGMGroundGrind1,
 nSYAudioFGMGroundGrind2,
 nSYAudioFGMInflateJump5,
 nSYAudioFGMGroundGrind3,
 nSYAudioFGMInflateJump6,
 nSYAudioFGMNessJump,
 nSYAudioFGMInflateJump7,
 nSYAudioFGMInflateJump8,
 nSYAudioFGMGroundGrind4,
 nSYAudioFGMInflateJump9,
 nSYAudioFGMDonkeyFoot,
 nSYAudioFGMCaptainFoot,
 nSYAudioFGMFoxFoot,
 nSYAudioFGMKirbyFoot,
 nSYAudioFGMLinkFoot,
 nSYAudioFGMMarioFoot,
 nSYAudioFGMNessFoot,
 nSYAudioFGMPikachuFoot,
 nSYAudioFGMPurinFoot,
 nSYAudioFGMSamusFoot,
 nSYAudioFGMYoshiFoot,
 nSYAudioFGMDonkeyDash,
 nSYAudioFGMCaptainDash,
 nSYAudioFGMFoxDash,
 nSYAudioFGMKirbyDash,
 nSYAudioFGMLinkDash,
 nSYAudioFGMMarioDash,
 nSYAudioFGMMMarioFoot,
 nSYAudioFGMMMarioDash,
 nSYAudioFGMNessDash,
 nSYAudioFGMPikachuDash,
 nSYAudioFGMPurinDash,
 nSYAudioFGMSamusDash,
 nSYAudioFGMGroundBrakeGrind,
 nSYAudioFGMUnkEchoHit1,
 nSYAudioFGMYoshiDash,
 nSYAudioFGMDogasSmog,
 nSYAudioFGMIwarkRockMake,
 nSYAudioFGMKabigonFall,
 nSYAudioFGMKabigonJump,
 nSYAudioFGMKamexHydro,
 nSYAudioFGMLizardonFlame,
 nSYAudioFGMMewFly,
 nSYAudioFGMNyarsCoin,
 nSYAudioFGMMBallOpen,
 nSYAudioFGMMonsterShoot,
 nSYAudioFGMTosakintoSplash,
 nSYAudioFGMOpeningSectorAmbient,
 nSYAudioFGMOpeningNewcomersClash,
 nSYAudioFGMPublicPrologue,
 nSYAudioFGMOpeningClash,
 nSYAudioFGMOpeningBatM,
 nSYAudioFGMAltitudeWarn,
 nSYAudioFGMDeadExplodeL,
 nSYAudioFGMDeadExplodeS,
 nSYAudioFGMUnkMechanical1,
 nSYAudioFGMTitlePressStart,
 nSYAudioFGMMenuSelect,
 nSYAudioFGMStageSelect,
 nSYAudioFGM1PGameContinue,
 nSYAudioFGM1PGameContinueMulti,
 nSYAudioFGMTrainingSel2,
 nSYAudioFGMMenuScroll1,
 nSYAudioFGMMenuScroll2,
 nSYAudioFGMMenuDenied,
 nSYAudioFGMPlayerSlotClose,
 nSYAudioFGMPlayerSlotWhoosh,
 nSYAudioFGMScoreDisplayBonus,
 nSYAudioFGMStageClearScoreRegister,
 nSYAudioFGMStageClearScoreDisplay,
 nSYAudioFGMUnkSwoosh1,
 nSYAudioFGMBossDefeatL,
 nSYAudioFGMUnkGate1,
 nSYAudioFGMBossBullet,
 nSYAudioFGMBossSlam,
 nSYAudioFGMBossUnk1,
 nSYAudioFGMBossUnk2,
 nSYAudioFGMDonkeySpin,
 nSYAudioFGMDonkeyCharge,
 nSYAudioFGMCaptainAppearCar1,
 nSYAudioFGMCaptainAppearCar2,
 nSYAudioFGMCaptainSpecialHi,
 nSYAudioFGMCaptainSpecialNStart,
 nSYAudioFGMCaptainSpecialNPunch,
 nSYAudioFGMFoxSpecialN,
 nSYAudioFGMFoxSpecialHiStart,
 nSYAudioFGMFoxSpecialHiFly,
 nSYAudioFGMFoxSpecialLwHit,
 nSYAudioFGMFoxSpecialLwStart,
 nSYAudioFGMFoxAttackAirLw,
 nSYAudioFGMFoxAppearArwing,
 nSYAudioFGMUnkMechanical4,
 nSYAudioFGMUnkLongWind,
 nSYAudioFGMKirbySpecialLwLanding,
 nSYAudioFGMKirbyAttackAirHi,
 nSYAudioFGMKirbySpecialNThrow,
 nSYAudioFGMKirbySpecialNCopyEat,
 nSYAudioFGMKirbySpecialNCopyThrow,
 nSYAudioFGMKirbySpecialNCopyUnk,
 nSYAudioFGMKirbyStarPing1,
 nSYAudioFGMKirbyStarPing2,
 nSYAudioFGMKirbySpecialLwStart,
 nSYAudioFGMKirbySpecialNStart,
 nSYAudioFGMKirbySpecialNLoseCopy,
 nSYAudioFGMLinkSpecialLwGet,
 nSYAudioFGMLinkSpecialNReturn,
 nSYAudioFGMLinkSpecialNShoot,
 nSYAudioFGMLinkSpecialNGet,
 nSYAudioFGMLinkSpecialHi,
 nSYAudioFGMLinkCatchHookshot,
 nSYAudioFGMLinkAppear,
 nSYAudioFGMMarioAppealGrow,
 nSYAudioFGMMarioAppealShrink,
 nSYAudioFGMMarioDokan,
 nSYAudioFGMMarioSpecialN,
 nSYAudioFGMMarioSpecialHiCoin,
 nSYAudioFGMMarioSpecialHiJump,
 nSYAudioFGMMarioUnkSwing1,
 nSYAudioFGMMarioUnkSwing2,
 nSYAudioFGMCharacterUnk1,
 nSYAudioFGMNessPKThunderLoop,
 nSYAudioFGMNessPSI,
 nSYAudioFGMNessPSIAgain,
 nSYAudioFGMNessSpecialLwStart,
 nSYAudioFGMPikachuElectric1,
 nSYAudioFGMPikachuElectric2,
 nSYAudioFGMPikachuElectric3,
 nSYAudioFGMPikachuElectric4,
 nSYAudioFGMPikachuElectric5,
 nSYAudioFGMPikachuElectricLoop,
 nSYAudioFGMPikachuSpecialHiStart,
 nSYAudioFGMPikachuSpecialLwThunder,
 nSYAudioFGMCharacterUnk2,
 nSYAudioFGMCharacterUnk3,
 nSYAudioFGMSamusSpecialNShootF,
 nSYAudioFGMSamusSpecialNShootL,
 nSYAudioFGMSamusSpecialNShootM,
 nSYAudioFGMSamusSpecialNShootS,
 nSYAudioFGMSamusSpecialNCharge0,
 nSYAudioFGMSamusSpecialNCharge1,
 nSYAudioFGMSamusSpecialNCharge2,
 nSYAudioFGMSamusSpecialNCharge3,
 nSYAudioFGMSamusSpecialNCharge4,
 nSYAudioFGMSamusSpecialNCharge5,
 nSYAudioFGMSamusSpecialNCharge6,
 nSYAudioFGMSamusSpecialNCharge7,
 nSYAudioFGMSamusSpecialLw,
 nSYAudioFGMSamusCatchGrappleBeam,
 nSYAudioFGMSamusSpecialHi,
 nSYAudioFGMSamusUnkSwing,
 nSYAudioFGMSamusUnkCharge,
 nSYAudioFGMYoshiEggShatter1,
 nSYAudioFGMYoshiEggShatter2,
 nSYAudioFGMYoshiSpecialNTongue,
 nSYAudioFGMYoshiEggShatter3,
 nSYAudioFGMYoshiSpecialHiThrow,
 nSYAudioFGMYoshiEggLayShatter,
 nSYAudioFGMBladeSwing4,
 nSYAudioFGMBladeSwing3,
 nSYAudioFGMBladeSwing1,
 nSYAudioFGMSlashL,
 nSYAudioFGMSlashM,
 nSYAudioFGMSlashS,
 nSYAudioFGMBladeDraw,
 nSYAudioFGMSectorArwingLaser,
 nSYAudioFGMSectorAmbient1,
 nSYAudioFGMSectorAmbient2,
 nSYAudioFGMSectorAmbient3,
 nSYAudioFGMOptionBackupClear,
 nSYAudioFGMYamabukiGate,
 nSYAudioFGMMagnify,
 nSYAudioFGMShinePingUnk,
 nSYAudioFGMBonusComplete,
 nSYAudioFGMPlayerHeal,
 nSYAudioFGMYosterCloudVapor,
 nSYAudioFGMStockSteal,
 nSYAudioFGMBonus2PlatformLanding,
 nSYAudioFGMGamePause,
 nSYAudioFGMInishiePowerBlock,
 nSYAudioFGMBonus1TargetBreak,
    nSYAudioFGMJungleTaruCannShoot,
    nSYAudioFGMJungleTaruCannEnter,
 nSYAudioFGMHyruleTwisterAppear,
 nSYAudioFGMHyruleTwisterTrapped,
 nSYAudioFGMPupupuWhispyWind,
 nSYAudioFGMFloorDamageFire,
 nSYAudioFGMDonkeyDeadSlam,
 nSYAudioFGMCaptainDeadSlam,
 nSYAudioFGMFoxDeadSlam,
 nSYAudioFGMKirbyDeadSlam,
 nSYAudioFGMLinkDeadSlam,
 nSYAudioFGMMarioDeadSlam,
 nSYAudioFGMNessDeadSlam,
 nSYAudioFGMPikachuDeadSlam,
 nSYAudioFGMPurinDeadSlam,
 nSYAudioFGMSamusDeadSlam,
 nSYAudioFGMYoshiDeadSlam,
 nSYAudioFGMDonkeyDownBounce,
 nSYAudioFGMCaptainDownBounce,
 nSYAudioFGMFoxDownBounce,
 nSYAudioFGMKirbyDownBounce,
 nSYAudioFGMLinkDownBounce,
 nSYAudioFGMMarioDownBounce,
 nSYAudioFGMNessDownBounce,
 nSYAudioFGMPikachuDownBounce,
 nSYAudioFGMPurinDownBounce,
 nSYAudioFGMSamusDownBounce,
 nSYAudioFGMYoshiDownBounce,
 nSYAudioVoiceMBallDogasAppear,
 nSYAudioVoiceMBallIwarkAppear,
 nSYAudioVoiceMBallKabigonFall,
 nSYAudioVoiceMBallKabigonAppear,
 nSYAudioVoiceMBallKamexAppear,
 nSYAudioVoiceMBallLuckyAppear,
 nSYAudioVoiceMBallMewAppear,
 nSYAudioVoiceMBallPippiAppear,
 nSYAudioVoiceMBallLizardonAppear,
 nSYAudioVoiceMBallSawamuraAppear,
 nSYAudioVoiceMBallSawamuraKick,
 nSYAudioVoiceMBallSpearAppear,
 nSYAudioVoiceMBallSpearSwarm,
 nSYAudioVoiceMBallStarmieAppear,
 nSYAudioVoiceMBallTosakintoAppear,
 nSYAudioVoiceDonkeyFuraSleep,
 nSYAudioVoiceDonkeyAppeal,
 nSYAudioVoiceDonkeySmash1,
 nSYAudioVoiceDonkeySmash2,
 nSYAudioVoiceDonkeySmash3,
 nSYAudioVoiceDonkeySpecialN,
 nSYAudioVoiceDonkeyDeadUp,
 nSYAudioVoiceDonkeyFuraFura,
 nSYAudioVoiceDonkeyDamage,
 nSYAudioVoiceDonkeyDead1,
 nSYAudioVoiceDonkeyHeavyGet,
 nSYAudioVoiceDonkeyHeavyUnk,
 nSYAudioVoiceDonkeyDead2,
 nSYAudioVoiceCaptainAppeal,
 nSYAudioVoiceCaptainSpecialHi,
 nSYAudioVoiceCaptainSmash1,
 nSYAudioVoiceCaptainSmash2,
 nSYAudioVoiceCaptainSmash3,
 nSYAudioVoiceCaptainSmash4,
 nSYAudioVoiceCaptainFinalComeOn,
 nSYAudioVoiceCaptainSmash5,
 nSYAudioVoiceCaptainAttackS4,
 nSYAudioVoiceCaptainSpecialLw,
 nSYAudioVoiceCaptainSpecialNPunch,
 nSYAudioVoiceCaptainSpecialNFalcon,
 nSYAudioVoiceCaptainDeadUp,
 nSYAudioVoiceCaptainFuraFura,
 nSYAudioVoiceCaptainDamage,
 nSYAudioVoiceCaptainUnkPing1,
 nSYAudioVoiceCaptainJumpAerial,
 nSYAudioVoiceCaptainHeavyGet,
 nSYAudioVoiceCaptainDead,
 nSYAudioVoiceCaptainFuraSleep,
 nSYAudioVoiceCaptainUnkQuick,
 nSYAudioVoiceCaptainUnkPing2,
 nSYAudioVoiceCaptainUnkPing3,
 nSYAudioVoiceFoxDeadUp,
 nSYAudioVoiceFoxAppeal,
 nSYAudioVoiceFoxSpecialHi,
 nSYAudioVoiceFoxJumpAerial,
 nSYAudioVoiceFoxEscape,
 nSYAudioVoiceFoxSelected,
 nSYAudioVoiceFoxFinalIke,
 nSYAudioVoiceFoxHeavyGet,
 nSYAudioVoiceFoxWin,
 nSYAudioVoiceFoxOttotto,
 nSYAudioVoiceFoxDead,
 nSYAudioVoiceFoxFuraSleep,
 nSYAudioVoiceFoxSmash1,
 nSYAudioVoiceFoxSmash2,
 nSYAudioVoiceFoxSmash3,
 nSYAudioVoiceFoxDamage,
 nSYAudioVoiceFoxFuraFura,
 nSYAudioVoiceKirbyAppeal,
 nSYAudioVoiceKirbySmash1,
 nSYAudioVoiceKirbySmash2,
 nSYAudioVoiceKirbySmash3,
 nSYAudioVoiceKirbyCopyLinkSpecialN,
 nSYAudioVoiceKirbyCopyPikachuSpecialN,
 nSYAudioVoiceKirbySpecialHi,
 nSYAudioVoiceKirbyCopyCaptainSpecialNFalcon,
 nSYAudioVoiceKirbyCopyCaptainSpecialNPunch,
 nSYAudioVoiceKirbyCopyDonkeySpecialN,
 nSYAudioVoiceKirbyCopyPurinSpecialN,
 nSYAudioVoiceKirbyDeadUp,
 nSYAudioVoiceKirbyFuraFura,
 nSYAudioVoiceKirbyDamage,
 nSYAudioVoiceKirbyUnkGrunt1,
 nSYAudioVoiceKirbyUnkGrunt2,
 nSYAudioVoiceKirbyHeavyGet,
 nSYAudioVoiceKirbyOttotto,
 nSYAudioVoiceKirbyCopyNessSpecialN,
 nSYAudioVoiceKirbyDead,
 nSYAudioVoiceKirbyFuraSleep,
 nSYAudioVoiceKirbySpecialLw,
 nSYAudioVoiceKirbyUnkPing,
 nSYAudioVoiceLinkGrunt1,
 nSYAudioVoiceLinkSmash1,
 nSYAudioVoiceLinkSmash2,
 nSYAudioVoiceLinkSmash3,
 nSYAudioVoiceLinkSpecialHi,
 nSYAudioVoiceLinkDeadUp,
 nSYAudioVoiceLinkFuraFura,
 nSYAudioVoiceLinkDamage,
 nSYAudioVoiceLinkJump,
 nSYAudioVoiceLinkJumpAerial,
 nSYAudioVoiceLinkNull,
 nSYAudioVoiceLinkHeavyGet,
 nSYAudioVoiceLinkOttotto,
 nSYAudioVoiceLinkDead,
 nSYAudioVoiceLinkFuraSleep,
 nSYAudioVoiceLinkGrunt2,
 nSYAudioVoiceLuigiSmash1,
 nSYAudioVoiceLuigiSmash2,
 nSYAudioVoiceLuigiSmash3,
 nSYAudioVoiceLuigiSpecialLw,
 nSYAudioVoiceLuigiDeadUp,
 nSYAudioVoiceLuigiFuraFura,
 nSYAudioVoiceLuigiDamage,
 nSYAudioVoiceLuigiJump,
 nSYAudioVoiceLuigiJumpAerial,
 nSYAudioVoiceLuigiLets,
 nSYAudioVoiceLuigiHeavyGet,
 nSYAudioVoiceLuigiDead,
 nSYAudioVoiceLuigiHereWe,
 nSYAudioVoiceMarioSmash1,
 nSYAudioVoiceMarioSmash2,
 nSYAudioVoiceMarioSmash3,
 nSYAudioVoiceMarioSpecialLw,
 nSYAudioVoiceMarioDeadUp,
 nSYAudioVoiceMarioFuraFura,
 nSYAudioVoiceMarioJump,
 nSYAudioVoiceMarioJumpAerial,
 nSYAudioVoiceMarioLets,
 nSYAudioVoiceMarioHeavyGet,
 nSYAudioVoiceMarioDead,
 nSYAudioVoiceMarioDamage,
 nSYAudioVoiceMarioHereWe,
 nSYAudioVoiceNessAppeal,
 nSYAudioVoiceNessSmash1,
 nSYAudioVoiceNessSmash2,
 nSYAudioVoiceNessSmash3,
 nSYAudioVoiceNessUnkGrunt,
 nSYAudioVoiceNessDeadUp,
 nSYAudioVoiceNessFuraFura,
 nSYAudioVoiceNessDamage,
 nSYAudioVoiceNessUnkPing,
 nSYAudioVoiceNessHeavyGet,
 nSYAudioVoiceNessOttotto,
 nSYAudioVoiceNessSpecialN,
 nSYAudioVoiceNessFinalPK,
 nSYAudioVoiceNessFinalStarstorm,
 nSYAudioVoiceNessSpecialHi,
 nSYAudioVoiceNessDead,
 nSYAudioVoiceNessFuraSleep,
 nSYAudioVoiceAnnounceComplete,
 nSYAudioVoiceAnnounceFailure,
 nSYAudioVoiceAnnouncePurinUnused,
 nSYAudioVoiceAnnounceMMario,
 nSYAudioVoiceAnnounceTitleWait,
 nSYAudioVoiceAnnounceNewRecord,
 nSYAudioVoiceAnnounceOne,
 nSYAudioVoiceAnnounceDenied1,
 nSYAudioVoiceAnnounceTwo,
 nSYAudioVoiceAnnounceThree,
 nSYAudioVoiceAnnounceFour,
 nSYAudioVoiceAnnounceFive,
 nSYAudioVoiceAnnounceDenied2,
 nSYAudioVoiceAnnounceDenied3,
 nSYAudioVoiceAnnounceBlueTeam,
 nSYAudioVoiceAnnounceBoardThePlatforms,
 nSYAudioVoiceAnnounceBonusStage,
 nSYAudioVoiceAnnounceBreakTheTargets,
 nSYAudioVoiceAnnounceSelectPlayer,
 nSYAudioVoiceAnnounceComputerPlayer,
 nSYAudioVoiceAnnounceContinue,
 nSYAudioVoiceAnnounceZako,
 nSYAudioVoiceAnnounceDonkey,
 nSYAudioVoiceAnnounceDrawGame,
 nSYAudioVoiceAnnounceCaptain,
 nSYAudioVoiceAnnounceFox,
 nSYAudioVoiceAnnounceGameOver,
 nSYAudioVoiceAnnounceGameSet,
 nSYAudioVoiceAnnounceGDonkey,
 nSYAudioVoiceAnnounceGo,
 nSYAudioVoiceAnnounceGreenTeam,
 nSYAudioVoiceBossDead,
 nSYAudioVoiceBossAppear,
 nSYAudioVoiceAnnounceHowToPlay,
 nSYAudioVoiceAnnounceRaceToTheFinish,
 nSYAudioVoiceAnnounceKirby,
 nSYAudioVoiceAnnounceLink,
 nSYAudioVoiceAnnounceLuigi,
 nSYAudioVoiceAnnounceMario,
 nSYAudioVoiceAnnounceMarioBros,
 nSYAudioVoiceAnnounceNess,
 nSYAudioVoiceAnnounceNoContest,
 nSYAudioVoiceAnnouncePlayer1,
 nSYAudioVoiceAnnouncePlayer2,
 nSYAudioVoiceAnnouncePlayer3,
 nSYAudioVoiceAnnouncePlayer4,
 nSYAudioVoiceAnnouncePikachu,
 nSYAudioVoiceAnnouncePurin,
 nSYAudioVoiceAnnounceAreYouReady,
 nSYAudioVoiceAnnounceRedTeam,
 nSYAudioVoiceAnnounceDefeated,
 nSYAudioVoiceAnnounceFreeForAll,
 nSYAudioVoiceAnnounceSamus,
 nSYAudioVoiceAnnounceSuddenDeath,
 nSYAudioVoiceUnkRoboEcho1,
 nSYAudioVoiceUnkRoboEcho2,
 nSYAudioVoiceUnkRoboEcho3,
 nSYAudioVoiceUnkRoboEcho4,
 nSYAudioVoiceUnkRoboEcho5,
 nSYAudioVoiceUnkRoboEcho6,
 nSYAudioVoiceUnkRoboEcho7,
 nSYAudioVoiceUnkRoboEcho8,
 nSYAudioVoiceUnkRoboEcho9,
 nSYAudioVoiceUnkRoboEcho10,
 nSYAudioVoiceAnnounceFinalStage,
 nSYAudioVoiceAnnounceTeamBattle,
 nSYAudioVoiceAnnounceTimeUp,
 nSYAudioVoiceAnnounceTitle,
 nSYAudioVoiceAnnounceKirbyTeam,
 nSYAudioVoiceAnnounceTrainingMode,
 nSYAudioVoiceAnnounceYoshiTeam,
 nSYAudioVoiceAnnounceVersus,
 nSYAudioVoiceAnnounceWins,
 nSYAudioVoiceAnnounceWinnerIs,
 nSYAudioVoiceAnnounceYoshi,
 nSYAudioVoicePikachuAppeal,
 nSYAudioVoicePikachuSmash1,
 nSYAudioVoicePikachuSmash2,
 nSYAudioVoicePikachuSmash3,
 nSYAudioVoicePikachuSpecialN,
 nSYAudioVoicePikachuSpecialLw,
 nSYAudioVoicePikachuDeadUp,
 nSYAudioVoicePikachuFuraFura,
 nSYAudioVoicePikachuDamage,
 nSYAudioVoicePikachuFinalPika,
 nSYAudioVoicePikachuFinalChu,
 nSYAudioVoicePikachuSpecialHi,
 nSYAudioVoicePikachuHeavyGet,
 nSYAudioVoicePikachuOttotto,
 nSYAudioVoicePikachuDead,
 nSYAudioVoicePikachuFuraSleep,
 nSYAudioVoiceYamabukiFushigibana,
 nSYAudioVoiceYamabukiHitokage,
 nSYAudioVoiceYamabukiLucky,
 nSYAudioVoiceYamabukiMarumine,
 nSYAudioVoiceYamabukiPorygon,
 nSYAudioVoicePurinAppeal,
 nSYAudioVoicePurinSmash1,
 nSYAudioVoicePurinSmash2,
 nSYAudioVoicePurinSmash3,
 nSYAudioVoicePurinSpecialN,
 nSYAudioVoicePurinDeadUp,
 nSYAudioVoicePurinFuraFura,
 nSYAudioVoicePurinDamage,
 nSYAudioVoicePurinUnkGrunt1,
 nSYAudioVoicePurinUnkGrunt2,
 nSYAudioVoicePurinUnkGrunt3,
 nSYAudioVoicePurinUnkGrunt4,
 nSYAudioVoicePurinFuraSleep,
 nSYAudioVoicePurinSpecialLwSleep,
 nSYAudioVoicePurinSpecialLwWake,
 nSYAudioVoicePurinSpecialHi,
 nSYAudioVoiceSamusSmash1,
 nSYAudioVoiceSamusSmash2,
 nSYAudioVoiceSamusSmash3,
 nSYAudioVoiceSamusDeadUp,
 nSYAudioVoiceSamusFura,
 nSYAudioVoiceSamusAttackHi4,
 nSYAudioVoiceSamusUnkSlash,
 nSYAudioVoiceSamusAppeal,
 nSYAudioVoiceSamusDamage,
 nSYAudioVoiceSamusDead,
 nSYAudioVoiceYoshiAppeal,
 nSYAudioVoiceYoshiSmash1,
 nSYAudioVoiceYoshiSmash2,
 nSYAudioVoiceYoshiSmash3,
 nSYAudioVoiceYoshiCatch,
 nSYAudioVoiceYoshiDeadUp,
 nSYAudioVoiceYoshiFuraFura,
 nSYAudioVoiceYoshiDamage,
 nSYAudioVoiceYoshiJump,
 nSYAudioVoiceYoshiJumpAerial,
 nSYAudioVoiceYoshiHeavyGet,
 nSYAudioVoiceYoshiOttotto,
 nSYAudioVoiceYoshiDead,
 nSYAudioVoiceYoshiFuraSleep,
 nSYAudioVoiceYoshiUnkGrunt1,
 nSYAudioVoiceYoshiSpecialLwJump,
 nSYAudioVoiceYoshiSpecialLwFall,
 nSYAudioVoiceYoshiUnkGrunt2,
 nSYAudioVoiceYoshiThrow,
 nSYAudioVoiceYoshiUnkVocalize,
 nSYAudioVoicePublicDonkey,
 nSYAudioVoicePublicCaptain,
 nSYAudioVoicePublicFox,
 nSYAudioVoicePublicKirby,
 nSYAudioVoicePublicLink,
 nSYAudioVoicePublicLuigi,
 nSYAudioVoicePublicMario,
 nSYAudioVoicePublicNess,
 nSYAudioVoicePublicPikachu,
 nSYAudioVoicePublicPurin,
 nSYAudioVoicePublicSamus,
 nSYAudioVoicePublicYoshi,
 nSYAudioVoicePublicGaspL,
 nSYAudioVoicePublicGaspM,
 nSYAudioVoicePublicGaspS,
 nSYAudioVoicePublicCheer,
 nSYAudioVoicePublicAmazed,
 nSYAudioVoicePublicGaspClap,
 nSYAudioVoicePublicWin,
 nSYAudioVoicePublicDamageL,
 nSYAudioVoicePublicDamageM,
 nSYAudioVoicePublicNoContest,
 nSYAudioVoicePublicDamageS,
 nSYAudioVoicePublicExcited,
 nSYAudioVoicePublicAbsorb,
 nSYAudioVoicePublicClapL,
 nSYAudioVoicePublicClapS,
 nSYAudioFGMCharacterUnkZip1,
 nSYAudioFGMCharacterUnkZip2,
 nSYAudioFGMCharacterUnkZip3,
 nSYAudioFGMCharacterUnkZip4,
 nSYAudioFGMCharacterUnkZip5,
 nSYAudioFGMCharacterUnkZip6,
 nSYAudioFGMCharacterUnkZip7,
 nSYAudioFGMCharacterUnkZip8,
 nSYAudioFGMCharacterUnkZip9,
 nSYAudioFGMCharacterUnkZip10,
 nSYAudioFGMCharacterUnkZip11,
 nSYAudioVoiceUnkExplode,
 nSYAudioVoiceUnkSpin,
 nSYAudioVoiceUnkBurn,
 nSYAudioVoiceUnkSlashM,
 nSYAudioVoiceUnkSlashL,
 nSYAudioVoiceUnkSlashS1,
 nSYAudioVoiceUnkSlashS2,
 nSYAudioVoiceUnkShockL,
 nSYAudioVoiceUnkShockM,
 nSYAudioVoicePublicUnkGasp,
 nSYAudioFGMVoiceEnd = 0x29D,
 nSYAudioFGMVoiceEnumCount = nSYAudioFGMVoiceEnd
} gmFGMVoiceID;
extern sb32 (*dLBCommonFuncMatrixList[ ])( );
extern Vec3f gLBCommonScale;
extern f32 lbCommonSin(f32 x);
extern f32 lbCommonCos(f32 x);
extern f32 lbCommonTan(f32 angle);
extern f32 lbCommonNormDist2D(Vec3f *p);
extern f32 lbCommonMag2D(Vec3f *p);
extern Vec3f* lbCommonAdd2D(Vec3f *dst, Vec3f *p);
extern Vec3f* lbCommonScale2D(Vec3f *dst, f32 scale);
extern Vec3f* lbCommonReflect2D(Vec3f *dst, Vec3f *p);
extern f32 lbCommonSim3D(Vec3f *a, Vec3f *b);
extern f32 lbCommonSim2D(Vec3f *a, Vec3f *b);
extern sb32 lbCommonCheckAdjustSim2D(Vec3f *a, Vec3f *b, f32 angle);
extern void lbCommonMatrixTraRotScaInv
(
    Mtx *mtx,
    f32 trax,
    f32 tray,
    f32 traz,
    f32 rotx,
    f32 roty,
    f32 rotz,
    f32 scax_inv,
    f32 scay_inv,
    f32 scaz_inv,
    f32 scax,
    f32 scay,
    f32 scaz
);
extern void lbCommonMatrixRotSca(Mtx *mtx, f32 rotx, f32 roty, f32 rotz, f32 scax, f32 scay, f32 scaz);
extern void lbCommonFuncUpdate(void);
extern alSoundEffect* lbCommonMakePositionFGM(u16 fgm, f32 pos);
extern DObj* lbCommonGetTreeDObjNextFromRoot(DObj *a, DObj *b);
extern void lbCommonAddDObjAnimJointAll(DObj *root_dobj, AObjEvent32 **anim_joints, f32 anim_frame);
extern void lbCommonAddFighterPartsFigatree(DObj *root_dobj, void **figatree, f32 anim_frame);
extern void lbCommonAddTreeDObjsAnimAll(DObj *root_dobj, AObjEvent32 **anim_joints, AObjEvent32 ***p_matanim_joints, f32 anim_frame);
extern void lbCommonInitDObj3Transforms(DObj *dobj, u8 tk1, u8 tk2, u8 tk3);
extern void lbCommonInitDObj(DObj *dobj, u8 tk1, u8 tk2, u8 tk3, u8 arg4);
extern void lbCommonSetupTreeDObjs(DObj *root_dobj, DObjDesc *dobjdesc, DObj **dobjs, u8 tk1, u8 tk2, u8 tk3);
extern void lbCommonAddMObjForFighterPartsDObj
(
    DObj *dobj,
    MObjSub **mobjsubs,
    AObjEvent32 **costume_matanim_joints,
    AObjEvent32 **main_matanim_joints,
    f32 anim_frame
);
extern void lbCommonSetupFighterPartsDObjs
(
    DObj *root_dobj,
    FTCommonPartContainer *commonparts_container,
    s32 detail_curr,
    DObj **dobjs,
    u32 *setup_parts,
    u8 tk1,
    u8 tk2,
    u8 tk3,
    f32 anim_frame,
    u8 arg9
);
extern void lbCommonSetupCustomTreeDObjsWithMObj
(
    DObj *root_dobj,
    DObjDesc *dobjdesc,
    MObjSub ***p_mobjsubs,
    DObj **dobjs,
    u8 tk1,
    u8 tk2,
    u8 tk3
);
extern void lbCommonAddMObjForTreeDObjs(DObj *root_dobj, MObjSub ***p_mobjsubs);
extern void lbCommonPlayTreeDObjsAnim(DObj *root_dobj);
extern void lbCommonSetDObjTransformsForTreeDObjs(DObj *root_dobj, DObjDesc *dobjdesc);
extern void lbCommonInsertTreeDObjChild(DObj *root_dobj, void *dvar);
extern void lbCommonEjectTreeDObj(DObj *dobj);
extern void lbCommonPlayTranslateScaledDObjAnim(DObj *dobj, Vec3f *scale);
extern void func_ovl0_800C96DC(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800C96EC(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800C9714(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 lbCommonFighterPartsFuncMatrix(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800C994C(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800C99CC(Mtx *mtx, DObj *dobj, Gfx **dls);
extern void func_ovl0_800C9A38(Mtx44f mtx, DObj *dobj);
extern sb32 func_ovl0_800C9F30(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800C9F70(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800CA024(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 lbCommonRotScaFuncMatrix(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800CA194(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800CA5C8(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800CAB48(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800CB140(Mtx *mtx, DObj *dobj, Gfx **dls);
extern sb32 func_ovl0_800CB2F0(Mtx *mtx, DObj *dobj, Gfx **dls);
extern void lbCommonDrawDObjScaleX(DObj *dobj);
extern void lbCommonDObjScaleXProcDisplay(GObj *gobj);
extern void lbCommonDrawDObjDefault(DObj *dobj);
extern void lbCommonEjectGObjLinkedList(GObj *gobj);
extern u8 lbCommonGetBitmapDecodeNibble(u8 index);
extern void lbCommonDecodeBitmapSiz4b(u8 *bitmap_csr, u8 *bitmap_buf, u8 *bitmap_start);
extern void lbCommonDecodeSpriteBitmapsSiz4b(Sprite *sprite);
extern void lbCommonDrawSObjBitmap
(
    Gfx **dls,
    SObj *sobj,
    Sprite *sprite,
    Bitmap *bitmap,
    s32 x, s32 y,
    s32 xx, s32 yy,
    s32 fs, s32 ft,
    s32 sx, s32 sy
);
extern void lbCommonPrepSObjAttr(Gfx **dls, SObj *sobj);
extern void lbCommonPrepSObjDraw(Gfx **dls, SObj *sobj);
extern void lbCommonClearExternSpriteParams(void);
extern void lbCommonSetExternSpriteParams(Sprite *sprite);
extern void lbCommonDrawSObjAttr(GObj *gobj);
extern void lbCommonDrawSObjNoAttr(GObj *gobj);
extern SObj* lbCommonMakeSObjForGObj(GObj *gobj, Sprite *sprite);
extern GObj* lbCommonMakeSpriteGObj
(
    u32 id,
    void (*func_run)(GObj*),
    s32 link,
    u32 link_priority,
    void (*proc_display)(GObj*),
    s32 dl_link,
    u32 dl_link_priority,
    u32 camera_tag,
    Sprite *sprite,
    u8 gobjproc_kind,
    void (*proc)(GObj*),
    u32 gobjproc_priority
);
extern void lbCommonStartSprite(Gfx **dls);
extern void lbCommonSetSpriteScissor(s32 xmin, s32 xmax, s32 ymin, s32 ymax);
extern void lbCommonFinishSprite(Gfx **dls);
extern void lbCommonDrawSprite(GObj *camera_gobj);
extern void lbCommonInitCameraOrtho(CObj *cobj, u8 tk, u8 arg2);
extern void lbCommonInitCameraPersp(CObj *cobj, u8 tk, u8 arg2);
extern void lbCommonInitCameraVec(CObj *cobj, u8 tk, u8 arg2);
extern void lbCommonCross3D(Vec3f *a, Vec3f *b, Vec3f *out);
extern uintptr_t lLBRelocTableAddr;
extern void* lbRelocFindStatusBufferFile(u32 id);
extern void* lbRelocGetStatusBufferFile(u32 id);
extern void* lbRelocFindForceStatusBufferFile(u32 id);
extern void* lbRelocGetForceStatusBufferFile(u32 id);
extern void lbRelocAddStatusBufferFile(u32 id, void *addr);
extern void lbRelocAddForceStatusBufferFile(u32 id, void *addr);
extern void lbRelocReadDmaTableEntry(u32 entry_id);
extern void lbRelocLoadAndRelocFile(u32 id, void *ram_dst, u32 bytes_num, s32 loc);
extern size_t lbRelocGetExternBytesNum(u32 id);
extern size_t lbRelocGetFileSize(u32 id);
extern void* lbRelocGetExternBufferFile(u32 id);
extern void* lbRelocGetExternHeapFile(u32 id, void *heap);
extern void* lbRelocGetInternBufferFile(u32 id);
extern void* lbRelocGetForceExternBufferFile(u32 id);
extern void* lbRelocGetForceExternHeapFile(u32 id, void *heap);
extern size_t lbRelocLoadFilesExtern(u32 *ids, u32 len, void **files, void *heap);
extern size_t lbRelocLoadFilesIntern(u32 *ids, u32 len, void **files);
extern size_t lbRelocGetAllocSize(u32 *ids, u32 len);
extern void lbRelocInitSetup(LBRelocSetup *setup);
extern u16 gLBParticleStructsUsedNum;
extern u16 gLBParticleGeneratorsUsedNum;
extern u16 gLBParticleTransformsUsedNum;
extern s32 lbParticleAllocTransforms(s32 num, size_t size);
extern LBTransform* lbParticleGetTransform(u8 status, u16 generator_id);
extern void lbParticleEjectTransform(LBTransform *xf);
extern LBTransform* lbParticleAddTransformForStruct(LBParticle *pc, u8 status);
extern LBTransform* lbParticleAddTransformForGenerator(LBGenerator* gen, u8 status);
extern void lbParticleSetupBankID(s32 bank_id, LBScriptDesc *script_desc, LBTextureDesc *texture_desc);
extern GObj* lbParticleAllocStructs(s32 num);
extern LBParticle* lbParticleMakeStruct
(
 LBParticle *this_pc,
 s32 bank_id,
 u32 flags,
 u16 texture_id,
 u8 *bytecode,
 s32 lifetime,
 f32 pos_x,
 f32 pos_y,
 f32 pos_z,
 f32 vel_x,
 f32 vel_y,
 f32 vel_z,
 f32 size,
 f32 gravity,
 f32 friction,
 u32 texture_flags,
 LBGenerator *gn
);
extern LBParticle* lbParticleMakeChildScriptID(LBParticle *pc, s32 bank_id, s32 script_id);
extern LBParticle* lbParticleMakeParam
(
 s32 bank_id,
 u32 flags,
 u16 texture_id,
 u8 *bytecode,
 s32 lifetime,
 f32 pos_x,
 f32 pos_y,
 f32 pos_z,
 f32 vel_x,
 f32 vel_y,
 f32 vel_z,
 f32 size,
 f32 gravity,
 f32 friction,
 u32 texture_flags,
 LBGenerator *gn
);
extern LBParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id);
extern LBParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z);
extern LBParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id);
extern void LBParticleProcessStruct(LBParticle *pc);
extern void lbParticleEjectStruct(LBParticle *this_pc);
extern void lbParticleEjectStructAll(void);
extern u8* lbParticleReadFloatBigEnd(u8 *csr, f32 *f);
extern u8* lbParticleReadUShort(u8 *csr, u16 *s);
extern void lbParticleRotateVel(LBParticle *pc, f32 angle);
extern void lbParticleSetDistVelDObj(LBParticle *pc, DObj *dobj);
extern void lbParticleAddDistVelMagDObj(LBParticle *pc, DObj *dobj, f32 magnitude);
extern LBParticle* lbParticleUpdateStruct(LBParticle *this_pc, LBParticle *other_pc, s32 bank_id);
extern void lbParticleStructFuncRun(GObj *gobj);
extern void lbParticleDrawTextures(GObj *gobj);
extern void lbParticleAddAttachDObj(s32 bank_id, DObj *dobj);
extern void lbParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode);
extern GObj* lbParticleAllocGenerators(s32 num);
extern void lbParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj);
extern void lbParticleGeneratorFuncRun(GObj *gobj);
extern LBGenerator* lbParticleGetGenerator(void);
extern LBGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id);
extern void lbParticleEjectGenerator(LBGenerator *this_gn);
extern void lbParticleEjectGeneratorAll(void);
extern void lbParticleSetGeneratorFuncs(void (*func_setup)(LBGenerator*), void (*func_default)(LBGenerator*, Vec3f*));
extern void lbParticleEjectStructID(u16 generator_id, s32 link_id);
extern void lbParticleEjectStructSelf(LBParticle *pc);
extern void lbParticleEjectStructGenerator(LBGenerator *gn);
extern void lbParticleEjectGeneratorDObj(GObj *gobj);
extern void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z);
extern void lbParticlePauseAllID(u16 generator_id, s32 link_id);
extern void lbParticleResumeAllID(u16 generator_id, s32 link_id);
extern void lbFadeProcUpdate(GObj *gobj);
extern void lbFadeProcDisplay(GObj *gobj);
extern void lbFadeMakeActor(u32 id, s32 link, u32 link_priority, SYColorRGBA *color, s32 fade_length, sb32 is_eject_gobj, sb32 *is_proceed_scene);
extern LBTransitionDesc dLBTransitionDescs[11];
extern GObj* lbTransitionMakeCamera(u32 id, s32 link, u32 link_priority, u64 camera_mask);
extern void lbTransitionProcDisplay(GObj *gobj);
extern void lbTransitionProcUpdate(GObj *gobj);
extern GObj* lbTransitionMakeTransition(s32 transition_id, u32 id, s32 link, void (*proc_display)(GObj*), u8 dl_link_id, void (*func)(GObj*));
extern void lbTransitionSetupTransition(void);
extern s32 lbBackupCreateChecksum(LBBackupData *backup);
extern sb32 lbBackupIsChecksumValid(void);
extern void lbBackupWrite(void);
extern sb32 lbBackupIsSramValid(void);
extern void lbBackupApplyOptions(void);
extern void lbBackupCorrectErrors(void);
extern void lbBackupClearNewcomers(void);
extern void lbBackupClear1PHighScore(void);
extern void lbBackupClearVSRecord(void);
extern void lbBackupClearBonusStageTime(void);
extern void lbBackupClearPrize(void);
extern void lbBackupClearAllData(void);
extern intptr_t lSYKseg1ValidateFunc;
extern intptr_t lSYKseg1ValidateNBytes;
extern intptr_t lSYSignValidateFunc;
extern intptr_t lSYSignValidateNBytes;
extern u16 gSYSinTable[0x800];
typedef union SYMatrixHub
{
    Mtx *gbi;
    Mtx44f *f;
    void **p;
} SYMatrixHub;
extern void syMatrixF2L(Mtx44f *src, Mtx *dst);
extern void syMatrixF2LFixedW(Mtx44f *src, Mtx *dst);
extern void syMatrixLookAtF
(
    Mtx44f *mf,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixLookAt
(
    Mtx *m,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixModLookAtF
(
    Mtx44f *mf,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 roll,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixModLookAt
(
    Mtx *m,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 roll,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixLookAtReflectF
(
    Mtx44f *mf,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixLookAtReflect
(
    Mtx *m,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixModLookAtReflectF
(
    Mtx44f *mf,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 roll,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixModLookAtReflect
(
    Mtx *m,
    LookAt *l,
    f32 eye_x,
    f32 eye_y,
    f32 eye_z,
    f32 at_x,
    f32 at_y,
    f32 at_z,
    f32 roll,
    f32 up_x,
    f32 up_y,
    f32 up_z
);
extern void syMatrixOrthoF(Mtx44f *mf, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
extern void syMatrixOrtho(Mtx *m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
extern void syMatrixPerspFastF(Mtx44f mf, u16 *persp_norm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void syMatrixPerspFast(Mtx *m, u16 *persp_norm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void syMatrixPerspF(Mtx44f mf, u16 *persp_norm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void syMatrixPersp(Mtx *m, u16 *persp_norm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
extern void syMatrixScaF(Mtx44f *mf, f32 x, f32 y, f32 z);
extern void syMatrixSca(Mtx *m, f32 x, f32 y, f32 z);
extern void syMatrixTraF(Mtx44f *mf, f32 x, f32 y, f32 z);
extern void syMatrixTra(Mtx *m, f32 x, f32 y, f32 z);
extern void syMatrixRotRF(Mtx44f *mf, f32 a, f32 x, f32 y, f32 z);
extern void syMatrixRotR(Mtx *m, f32 a, f32 x, f32 y, f32 z);
extern void syMatrixTraRotRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz);
extern void syMatrixTraRotR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz);
extern void syMatrixTraRotRScaF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz, f32 sx, f32 sy, f32 sz);
extern void syMatrixTraRotRSca(Mtx *m, f32 tx, f32 ty, f32 tz, f32 angle, f32 rx, f32 ry, f32 rz, f32 sx, f32 sy, f32 sz);
extern void syMatrixRotRpyRF(Mtx44f *mf, f32 r, f32 p, f32 y);
extern void syMatrixRotRpyR(Mtx *m, f32 r, f32 p, f32 y);
extern void syMatrixTraRotRpyRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y);
extern void syMatrixTraRotRpyR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y);
extern void syMatrixTraRotRpyRScaF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz);
extern void syMatrixTraRotRpyRSca(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz);
extern void syMatrixRotPyrRF(Mtx44f *mf, f32 r, f32 p, f32 y);
extern void syMatrixRotPyrR(Mtx *m, f32 r, f32 p, f32 y);
extern void syMatrixTraRotPyrRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y);
extern void syMatrixTraRotPyrR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y);
extern void syMatrixTraRotPyrRScaF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz);
extern void syMatrixTraRotPyrRSca(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y, f32 sx, f32 sy, f32 sz);
extern void syMatrixRotPyRF(Mtx44f *mf, f32 p, f32 y);
extern void syMatrixRotPyR(Mtx *m, f32 p, f32 y);
extern void syMatrixTraRotPyRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 p, f32 y);
extern void syMatrixTraRotPyR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 p, f32 y);
extern void syMatrixRotRpRF(Mtx44f *mf, f32 r, f32 p);
extern void syMatrixRotRpR(Mtx *m, f32 p, f32 y);
extern void syMatrixTraRotRpRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p);
extern void syMatrixTraRotRpR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p);
extern void syMatrixRotYawRF(Mtx44f *mf, f32 y);
extern void syMatrixRotYawR(Mtx *m, f32 y);
extern void syMatrixTraRotYawRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 y);
extern void syMatrixTraRotYawR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 y);
extern void syMatrixRotPitchRF(Mtx44f *mf, f32 p);
extern void syMatrixRotPitchR(Mtx *m, f32 p);
extern void syMatrixTraRotPitchRF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 p);
extern void syMatrixTraRotPitchR(Mtx *m, f32 tx, f32 ty, f32 tz, f32 p);
extern void syMatrixRotDF(Mtx44f *mf, f32 a, f32 x, f32 y, f32 z);
extern void syMatrixRotD(Mtx *m, f32 a, f32 x, f32 y, f32 z);
extern void syMatrixTraRotDF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 a, f32 rx, f32 ry, f32 rz);
extern void syMatrixTraRotD(Mtx *m, f32 tx, f32 ty, f32 tz, f32 a, f32 rx, f32 ry, f32 rz);
extern void syMatrixRotRpyDF(Mtx44f *mf, f32 r, f32 p, f32 y);
extern void syMatrixRotRpyD(Mtx *m, f32 r, f32 p, f32 y);
extern void syMatrixTraRotRpyDF(Mtx44f *mf, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y);
extern void syMatrixTraRotRpyD(Mtx *m, f32 tx, f32 ty, f32 tz, f32 r, f32 p, f32 y);
typedef enum efKind
{
    nEFKindDamageNormal,
    nEFKindFlameLR = 6,
    nEFKindFlameRandom,
    nEFKindFlameStatic,
    nEFKindShockSmall = 10,
    nEFKindDustLight,
    nEFKindDustLightRapid,
    nEFKindDustHeavyDouble,
    nEFKindDustHeavyDoubleRapid,
    nEFKindDustHeavy,
    nEFKindDustHeavyReverse,
    nEFKindDustExpandLarge,
    nEFKindDustExpandSmall,
    nEFKindDustDashSmall,
    nEFKindDustDashLarge,
    nEFKindDamageFlyOrbs,
    nEFKindImpactWave,
    nEFKindStarRodSpark,
    nEFKindDamageFlySparks,
    nEFKindDamageFlySparksReverse,
    nEFKindDamageFlyMDust,
    nEFKindDamageFlyMDustReverse,
    nEFKindSparkleWhite,
    nEFKindSparkleWhiteMultiExplode,
    nEFKindSparkleWhiteMulti,
    nEFKindSparkleWhiteScale,
    nEFKindQuakeMag0,
    nEFKindQuakeMag1,
    nEFKindQuakeMag2,
    nEFKindFireSpark = 37,
    nEFKindFuraSparkle = 40,
    nEFKindPsionic,
    nEFKindFlashSmall,
    nEFKindFlashMiddle,
    nEFKindFlashLarge,
    nEFKindBoxSmash = 46,
    nEFKindCrashTheGame,
    nEFKindKirbyStar = 54,
    nEFKindThunderAmp = 70,
    nEFKindRipple,
    nEFKindChargeSparkle = 73,
    nEFKindHealSparkles,
    nEFKindYoshiEggEscape = 87,
    nEFKindMusicNote = 90,
    nEFKindEggBreak
} efKind;
typedef enum LBTransformStatus
{
    nLBTransformStatusDefault,
    nLBTransformStatusReady,
    nLBTransformStatusFinished
} LBTransformStatus;
typedef struct EFStruct EFStruct;
typedef struct EFDesc EFDesc;
extern u16 gSYSinTable[0x800];
u8 dLBParticleColorDitherMode = (0 << 6);
u8 dLBParticleAlphaDitherMode = (0 << 4);
u16 dLBParticleCurrentGeneratorID = 0;
u8 dLBParticleCurrentTransformID = 123;
LBParticle *sLBParticleStructsAllocFree;
s32 sLBParticlePad0x800D6354;
LBParticle *sLBParticleStructsAllocLinks[16];
LBGenerator *sLBParticleGeneratorsAllocFree;
LBGenerator *sLBParticleGeneratorsQueued;
DObj *sLBParticleAttachDObjs[8];
s32 sLBParticleScriptBanksNum[8];
s32 sLBParticleTextureBanksNum[8];
LBScript **sLBParticleScriptBanks[8];
LBTexture **sLBParticleTextureBanks[8];
void (*sLBParticleGeneratorFuncDefault)(LBGenerator*, Vec3f*);
void (*sLBParticleGeneratorFuncSetup)(LBGenerator*);
u16 gLBParticleStructsUsedNum;
u16 gLBParticleGeneratorsUsedNum;
u16 gLBParticleTransformsUsedNum;
u16 D_ovl0_800D644E;
u16 D_ovl0_800D6450;
u16 D_ovl0_800D6452;
LBTransform *sLBParticleTransformsAllocFree;
LBGenerator *sLBParticleGeneratorsLastProcessed;
// s32 lbParticleAllocTransforms(s32 num, size_t size)
// {
//  LBTransform *xf;
//  s32 i;
//  sLBParticleTransformsAllocFree = 0;
//  for (i = 0; i < num; i++)
//  {
//   xf = syTaskmanMalloc(size, 0x4);
//   if (xf == 0)
//   {
//    return i;
//   }
//   xf->next = sLBParticleTransformsAllocFree;
//   sLBParticleTransformsAllocFree = xf;
//  }
//  gLBParticleTransformsUsedNum = 0;
//  D_ovl0_800D6452 = 0;
//  return i;
// }
// LBTransform* lbParticleGetTransform(u8 status, u16 generator_id)
// {
//  LBTransform *xf = sLBParticleTransformsAllocFree;
//  if (xf != 0)
//  {
//         sLBParticleTransformsAllocFree = xf->next;
//         xf->users_num = 1;
//         xf->transform_id = dLBParticleCurrentTransformID;
//         xf->proc_dead = 0;
//   xf->translate.x = xf->translate.y = xf->translate.z = 0.0F;
//   xf->rotate.x = xf->rotate.y = xf->rotate.z = 0.0F;
//   xf->scale.x = xf->scale.y = xf->scale.z = 1.0F;
//   xf->transform_status = status;
//   xf->generator_id = generator_id;
//   gLBParticleTransformsUsedNum++;
//   if (D_ovl0_800D6452 < gLBParticleTransformsUsedNum)
//   {
//    D_ovl0_800D6452 = gLBParticleTransformsUsedNum;
//   }
//  }
//  return xf;
// }
// void lbParticleEjectTransform(LBTransform *xf)
// {
//  if (xf->proc_dead != 0)
//  {
//   xf->proc_dead(xf);
//  }
//  xf->next = sLBParticleTransformsAllocFree;
//  sLBParticleTransformsAllocFree = xf;
//  gLBParticleTransformsUsedNum--;
// }
// LBTransform* lbParticleAddTransformForStruct(LBParticle *pc, u8 status)
// {
//     pc->xf = lbParticleGetTransform(status, pc->generator_id);
//  return pc->xf;
// }
// LBTransform* lbParticleAddTransformForGenerator(LBGenerator *gn, u8 status)
// {
//  gn->xf = lbParticleGetTransform(status, gn->generator_id);
//  return gn->xf;
// }
// void lbParticleSetupBankID(s32 bank_id, LBScriptDesc *script_desc, LBTextureDesc *texture_desc)
// {
//  s32 i, j;
//  if (bank_id >= 8)
//  {
//   return;
//  }
//  sLBParticleScriptBanksNum[bank_id] = script_desc->scripts_num;
//  sLBParticleTextureBanksNum[bank_id] = texture_desc->textures_num;
//  sLBParticleScriptBanks[bank_id] = script_desc->scripts;
//  sLBParticleTextureBanks[bank_id] = texture_desc->textures;
//  for (i = 1; i <= sLBParticleScriptBanksNum[bank_id]; i++)
//  {
//   script_desc->scripts[i - 1] = ((LBScript*) ((uintptr_t)(script_desc) + (intptr_t)(script_desc->scripts[i - 1])));
//  }
//  for (i = 1; i <= sLBParticleTextureBanksNum[bank_id]; i++)
//  {
//   texture_desc->textures[i - 1] = ((LBTexture*) ((uintptr_t)(texture_desc) + (intptr_t)(texture_desc->textures[i - 1])));
//  }
//  for (i = 0; i < sLBParticleTextureBanksNum[bank_id]; i++)
//  {
//   for (j = 0; j < sLBParticleTextureBanks[bank_id][i]->count; j++)
//   {
//    sLBParticleTextureBanks[bank_id][i]->data[j] = ((void*) ((uintptr_t)(texture_desc) + (intptr_t)(sLBParticleTextureBanks[bank_id][i]->data[j])));
//   }
//   if (sLBParticleTextureBanks[bank_id][i]->fmt == 2)
//   {
//    if (sLBParticleTextureBanks[bank_id][i]->flags & 1)
//    {
//     j = sLBParticleTextureBanks[bank_id][i]->count;
//     sLBParticleTextureBanks[bank_id][i]->data[j] = ((void*) ((uintptr_t)(texture_desc) + (intptr_t)(sLBParticleTextureBanks[bank_id][i]->data[j])));
//    }
//    else for (j = sLBParticleTextureBanks[bank_id][i]->count; j < sLBParticleTextureBanks[bank_id][i]->count * 2; j++)
//    {
//     sLBParticleTextureBanks[bank_id][i]->data[j] = ((void*) ((uintptr_t)(texture_desc) + (intptr_t)(sLBParticleTextureBanks[bank_id][i]->data[j])));
//    }
//   }
//  }
// }
// GObj* lbParticleAllocStructs(s32 num)
// {
//  s32 i;
//  LBParticle *pc;
//  sLBParticleStructsAllocFree = 0;
//  for (i = 0; i < (s32)(sizeof(sLBParticleStructsAllocLinks) / sizeof(sLBParticleStructsAllocLinks[0])); i++)
//  {
//   sLBParticleStructsAllocLinks[i] = 0;
//  }
//  for (i = num - 1; i >= 0; i--)
//  {
//   pc = syTaskmanMalloc(sizeof(*pc), 0x4);
//   if (pc == 0)
//   {
//    return 0;
//   }
//   pc->next = sLBParticleStructsAllocFree;
//   sLBParticleStructsAllocFree = pc;
//  }
//  gLBParticleStructsUsedNum = 0;
//  D_ovl0_800D644E = 0;
//  if (gcFindGObjByID(~0x5) != 0)
//  {
//   return 0;
//  }
//  return gcMakeGObjSPAfter(~0x5, lbParticleStructFuncRun, 0, 0x80000000);
// }
// LBParticle* lbParticleMakeStruct
// (
//  LBParticle *this_pc,
//  s32 bank_id,
//  u32 flags,
//  u16 texture_id,
//  u8 *bytecode,
//  s32 lifetime,
//  f32 pos_x,
//  f32 pos_y,
//  f32 pos_z,
//  f32 vel_x,
//  f32 vel_y,
//  f32 vel_z,
//  f32 size,
//  f32 gravity,
//  f32 friction,
//  u32 texture_flags,
//  LBGenerator *gn
// )
// {
//  LBParticle *new_pc;
//  s32 i;
//     new_pc = sLBParticleStructsAllocFree;
//     if (new_pc == 0)
//     {
//         return 0;
//     }
//     gLBParticleStructsUsedNum++;
//     if (D_ovl0_800D644E < gLBParticleStructsUsedNum)
//     {
//         D_ovl0_800D644E = gLBParticleStructsUsedNum;
//     }
//     if (gn != 0)
//     {
//         new_pc->generator_id = gn->generator_id;
//     }
//     else new_pc->generator_id = ++dLBParticleCurrentGeneratorID;
//     if (gn != 0)
//     {
//         new_pc->xf = gn->xf;
//         if (new_pc->xf != 0)
//         {
//             new_pc->xf->users_num++;
//         }
//     }
//     else new_pc->xf = 0;
//     sLBParticleStructsAllocFree = new_pc->next;
//     if (this_pc == 0)
//     {
//         new_pc->next = sLBParticleStructsAllocLinks[bank_id >> 3];
//         sLBParticleStructsAllocLinks[bank_id >> 3] = new_pc;
//     }
//     else
//     {
//         new_pc->next = this_pc->next;
//         this_pc->next = new_pc;
//     }
//     new_pc->bank_id = bank_id;
//     new_pc->flags = flags;
//     new_pc->texture_id = texture_id;
//  new_pc->pos.x = pos_x;
//  new_pc->pos.y = pos_y;
//  new_pc->pos.z = pos_z;
//     new_pc->vel.x = vel_x;
//     new_pc->vel.y = vel_y;
//     new_pc->vel.z = vel_z;
//     new_pc->size = size;
//     new_pc->gravity = gravity;
//     new_pc->friction = friction;
//     new_pc->lifetime = lifetime + 1;
//     new_pc->bytecode_csr = new_pc->return_ptr = 0;
//     new_pc->bytecode = bytecode;
//     if (texture_flags != 0)
//     {
//         new_pc->flags |= 0x10;
//     }
//     new_pc->bytecode_timer = (bytecode != 0) ? 1 : 0;
//     new_pc->frame_id = 0;
//     new_pc->primcolor.r = new_pc->primcolor.g = new_pc->primcolor.b = new_pc->primcolor.a = 0xFF;
//     new_pc->envcolor.r = new_pc->envcolor.g = new_pc->envcolor.b = new_pc->envcolor.a = 0x00;
//     new_pc->size_target_length = new_pc->primcolor_target_length = new_pc->envcolor_target_length = 0;
//     new_pc->gn = gn;
//  return new_pc;
// }
// LBParticle* lbParticleMakeChildScriptID(LBParticle *pc, s32 bank_id, s32 script_id)
// {
//  LBScript *script;
//  s32 id = bank_id & 7;
//  if (id >= 8)
//  {
//   return 0;
//  }
//  if (script_id >= sLBParticleScriptBanksNum[id])
//  {
//   return 0;
//  }
//  script = sLBParticleScriptBanks[id][script_id];
//  return lbParticleMakeStruct
//  (
//   pc,
//   bank_id,
//   script->flags,
//   script->texture_id,
//   script->bytecode,
//   script->particle_lifetime,
//   0.0F, 0.0F, 0.0F,
//   script->vel.x, script->vel.y, script->vel.z,
//   script->size,
//   script->gravity,
//   script->friction,
//   sLBParticleTextureBanks[id][script->texture_id]->flags,
//   0
//  );
// }
// LBParticle* lbParticleMakeParam
// (
//  s32 bank_id,
//  u32 flags,
//  u16 texture_id,
//  u8 *bytecode,
//  s32 lifetime,
//  f32 pos_x,
//  f32 pos_y,
//  f32 pos_z,
//  f32 vel_x,
//  f32 vel_y,
//  f32 vel_z,
//  f32 size,
//  f32 gravity,
//  f32 friction,
//  u32 texture_flags,
//  LBGenerator *gn
// )
// {
//  LBParticle *pc = lbParticleMakeStruct
//  (
//   0,
//   bank_id,
//   flags,
//   texture_id,
//   bytecode,
//   lifetime,
//   pos_x, pos_y, pos_z,
//   vel_x, vel_y, vel_z,
//   size,
//   gravity,
//   friction,
//   texture_flags,
//   gn
//  );
//  if (pc != 0)
//  {
//   lbParticleUpdateStruct(pc, 0, bank_id >> 3);
//  }
//  return pc;
// }
// LBParticle* lbParticleMakeCommon(s32 bank_id, s32 script_id)
// {
//  LBParticle *pc = lbParticleMakeChildScriptID(0, bank_id, script_id);
//  if (pc != 0)
//  {
//   lbParticleUpdateStruct(pc, 0, bank_id >> 3);
//  }
//  return pc;
// }
// LBParticle* lbParticleMakePosVel(s32 bank_id, s32 script_id, f32 pos_x, f32 pos_y, f32 pos_z, f32 vel_x, f32 vel_y, f32 vel_z)
// {
//  LBParticle *pc;
//  LBScript *script;
//  s32 id = bank_id & 7;
//  if (id >= 8)
//  {
//   return 0;
//  }
//  if (script_id >= sLBParticleScriptBanksNum[id])
//  {
//   return 0;
//  }
//  script = sLBParticleScriptBanks[id][script_id];
//  pc = lbParticleMakeStruct
//  (
//   0,
//   bank_id,
//   script->flags,
//   script->texture_id,
//   script->bytecode,
//   script->particle_lifetime,
//   pos_x, pos_y, pos_z,
//   vel_x, vel_y, vel_z,
//   script->size,
//   script->gravity,
//   script->friction,
//   sLBParticleTextureBanks[id][script->texture_id]->flags,
//   0
//  );
//  if (pc != 0)
//  {
//   lbParticleUpdateStruct(pc, 0, bank_id >> 3);
//  }
//  return pc;
// }
// LBParticle* lbParticleMakeScriptID(s32 bank_id, s32 script_id)
// {
//  return lbParticleMakeChildScriptID(0, bank_id, script_id);
// }
// void LBParticleProcessStruct(LBParticle *pc)
// {
//  if (pc != 0)
//  {
//   lbParticleUpdateStruct(pc, 0, pc->bank_id >> 3);
//  }
// }
// void lbParticleEjectStruct(LBParticle *this_pc)
// {
//  LBParticle *prev_pc, *current_pc;
//  LBGenerator *gn;
//  s32 bank_id;
//  bank_id = this_pc->bank_id >> 3;
//  current_pc = sLBParticleStructsAllocLinks[bank_id];
//  prev_pc = 0;
//  while (current_pc != 0)
//  {
//   if (current_pc == this_pc)
//   {
//    if (prev_pc == 0)
//    {
//     sLBParticleStructsAllocLinks[bank_id] = current_pc->next;
//    }
//    else prev_pc->next = current_pc->next;
//    gn = this_pc->gn;
//    if ((gn != 0) && (this_pc->flags & 0x4) && (gn->kind == nLBParticleKindVortex))
//    {
//     gn->generator_vars.vortex.lifetime--;
//    }
//    if (this_pc->xf != 0)
//    {
//     this_pc->xf->users_num--;
//     if (this_pc->xf->users_num == 0)
//     {
//      lbParticleEjectTransform(this_pc->xf);
//     }
//    }
//    current_pc->next = sLBParticleStructsAllocFree;
//    sLBParticleStructsAllocFree = current_pc;
//    gLBParticleStructsUsedNum--;
//    break;
//   }
//   prev_pc = current_pc;
//   current_pc = current_pc->next;
//  }
// }
// void lbParticleEjectStructAll(void)
// {
//  LBParticle *current_pc, *next_pc;
//  s32 i;
//  for (i = 0; i < (s32)(sizeof(sLBParticleStructsAllocLinks) / sizeof(sLBParticleStructsAllocLinks[0])); i++)
//  {
//   current_pc = sLBParticleStructsAllocLinks[i];
//   while (current_pc != 0)
//   {
//    next_pc = current_pc->next;
//    lbParticleEjectStruct(current_pc);
//    current_pc = next_pc;
//   }
//  }
// }
// u8* lbParticleReadFloatBigEnd(u8 *csr, f32 *f)
// {
//  u8 bytes[4];
//  bytes[0] = *csr++;
//  bytes[1] = *csr++;
//  bytes[2] = *csr++;
//  bytes[3] = *csr++;
//  *f = *(f32*)bytes;
//  return csr;
// }
// u8* lbParticleReadUShort(u8 *csr, u16 *s)
// {
//  u16 value = *csr++;
//  if (value & 0x80)
//  {
//   value = ((value & 0x7F) << 8) + *csr++;
//  }
//  *s = value + 1;
//  return csr;
// }
// void lbParticleRotateVel(LBParticle *pc, f32 angle)
// {
//  Vec3f vel;
//  f32 sin_angle;
//  f32 magnitude;
//  f32 pitch;
//  f32 yaw;
//  f32 sin_pitch;
//  f32 cos_pitch;
//  f32 sin_yaw;
//  f32 cos_yaw;
//  f32 cos_angle;
//  vel.x = pc->vel.x;
//  vel.y = pc->vel.y;
//  vel.z = pc->vel.z;
//  pitch = syUtilsArcTan2(vel.y, vel.z);
//  sin_pitch = __sinf(pitch);
//  cos_pitch = __cosf(pitch);
//  yaw = syUtilsArcTan2(vel.x, (vel.y * sin_pitch) + (vel.z * cos_pitch));
//  sin_yaw = __sinf(yaw);
//  cos_yaw = __cosf(yaw);
//  magnitude = sqrtf(((vel.x) * (vel.x)) + ((vel.y) * (vel.y)) + ((vel.z) * (vel.z)));
//  vel.y = syUtilsRandFloat() * ((float)((360.0F) * ((float)(3.14159265358979323846 / 180))));
//  sin_angle = __sinf(angle) * magnitude;
//  vel.z = sin_yaw;
//  vel.x = __cosf(vel.y) * sin_angle;
//  vel.y = __sinf(vel.y) * sin_angle;
//  cos_angle = __cosf(angle) * magnitude;
//  pc->vel.x = (vel.x * cos_yaw) + (cos_angle * sin_yaw);
//  pc->vel.y = (((-vel.x * sin_pitch) * sin_yaw) + (vel.y * cos_pitch)) + ((cos_angle * sin_pitch) * cos_yaw);
//  pc->vel.z = (((-vel.x * cos_pitch) * vel.z) - (vel.y * sin_pitch)) + ((cos_angle * cos_pitch) * cos_yaw);
// }
// void lbParticleSetDistVelDObj(LBParticle *pc, DObj *dobj)
// {
//  f32 dx, dy, dz, dist;
//  if (dobj == 0)
//  {
//   return;
//  }
//  dx = dobj->translate.vec.f.x - pc->pos.x;
//  dy = dobj->translate.vec.f.y - pc->pos.y;
//  dz = dobj->translate.vec.f.z - pc->pos.z;
//  dist = sqrtf(((pc->vel.x) * (pc->vel.x)) + ((pc->vel.y) * (pc->vel.y)) + ((pc->vel.z) * (pc->vel.z)));
//  if ((((dx) * (dx)) + ((dy) * (dy)) + ((dz) * (dz))) != 0.0F)
//  {
//   dist /= sqrtf(((dx) * (dx)) + ((dy) * (dy)) + ((dz) * (dz)));
//   pc->vel.x = dx * dist;
//   pc->vel.y = dy * dist;
//   pc->vel.z = dz * dist;
//  }
// }
// void lbParticleAddDistVelMagDObj(LBParticle *pc, DObj *dobj, f32 magnitude)
// {
//  f32 dx, dy, dz, dist;
//  if (dobj == 0)
//  {
//   return;
//  }
//  dx = dobj->translate.vec.f.x - pc->pos.x;
//  dy = dobj->translate.vec.f.y - pc->pos.y;
//  dz = dobj->translate.vec.f.z - pc->pos.z;
//  dist = ((dx) * (dx)) + ((dy) * (dy)) + ((dz) * (dz));
//  if (dist != 0.0F)
//  {
//   dist = magnitude / dist;
//   pc->vel.x += dist * dx;
//   pc->vel.y += dist * dy;
//   pc->vel.z += dist * dz;
//  }
// }
// void lbParticleStructFuncRun(GObj *gobj)
// {
//  u32 flags = gobj->flags;
//  s32 i;
//  LBParticle *prev_pc;
//  LBParticle *current_pc;
//  LBParticle *next_pc;
//  for (i = 0; i < (s32)(sizeof(sLBParticleStructsAllocLinks) / sizeof(sLBParticleStructsAllocLinks[0])); i++, flags >>= 1)
//  {
//   if (flags & 0x10000)
//   {
//    continue;
//   }
//   prev_pc = 0;
//   current_pc = sLBParticleStructsAllocLinks[i];
//   while (current_pc != 0)
//   {
//    next_pc = lbParticleUpdateStruct(current_pc, prev_pc, i);
//    if (current_pc->next == next_pc)
//    {
//     prev_pc = current_pc;
//     current_pc = next_pc;
//    }
//    else current_pc = next_pc;
//   }
//  }
// }
// void lbParticleDrawTextures(GObj *gobj)
// {
//     LBParticle *pc;
//     void *prev_image, *prev_palette;
//     u32 prev_ac, prev_alpha;
//     s32 tlut;
//     Mtx44f look_at_f;
//     Mtx44f projection_f;
//     u8 ac, alpha;
//     s32 bank_id;
//     void **p_palette;
//     f32 pos_x, pos_y, pos_z;
//     f32 tx, ty, tz;
//     f32 pc0_magnitude;
//     f32 pc1_magnitude;
//     f32 tm;
//     CObj *cobj;
//     s32 s;
//     s32 t;
//     f32 vscale0;
//     f32 vtrans0;
//     f32 vscale1;
//     f32 vtrans1;
//     f32 vscale2;
//     f32 vtrans2;
//     s32 dsdx;
//     s32 dtdy;
//     s32 cms, cmt;
//     s32 fmt, siz;
//     s32 i;
//     u32 j;
//     s32 width, height;
//     f32 xh, yh;
//     f32 xl, yl;
//     void *image, *palette;
//     u8 masks, maskt;
//     f32 mx, my;
//     cobj = ((CObj*)(gGCCurrentCamera)->obj);
//     for (i = 0; i < cobj->xobjs_num; i++)
//     {
//         switch (cobj->xobjs[i]->kind)
//         {
//             case nGCMatrixKindPerspFastF:
//                 syMatrixPerspFastF
//                 (
//                     &projection_f,
//                     0,
//                     cobj->projection.persp.fovy,
//                     cobj->projection.persp.aspect,
//                     cobj->projection.persp.near,
//                     cobj->projection.persp.far,
//                     cobj->projection.persp.scale
//                 );
//                 break;
//             case nGCMatrixKindPerspF:
//                 syMatrixPerspF
//                 (
//                     &projection_f,
//                     0,
//                     cobj->projection.persp.fovy,
//                     cobj->projection.persp.aspect,
//                     cobj->projection.persp.near,
//                     cobj->projection.persp.far,
//                     cobj->projection.persp.scale
//                 );
//                 break;
//    case nGCMatrixKindOrtho:
//     syMatrixOrthoF
//                 (
//                     &projection_f,
//                     cobj->projection.ortho.l,
//                     cobj->projection.ortho.r,
//                     cobj->projection.ortho.b,
//                     cobj->projection.ortho.t,
//                     cobj->projection.ortho.n,
//                     cobj->projection.ortho.f,
//                     cobj->projection.ortho.scale
//                 );
//                 break;
//             case 6:
//             case 7:
//             case 12:
//             case 13:
//                 syMatrixLookAtF
//                 (
//                     &look_at_f,
//                     cobj->vec.eye.x,
//                     cobj->vec.eye.y,
//                     cobj->vec.eye.z,
//                     cobj->vec.at.x,
//                     cobj->vec.at.y,
//                     cobj->vec.at.z,
//                     cobj->vec.up.x,
//                     cobj->vec.up.y,
//                     cobj->vec.up.z
//                 );
//                 break;
//             case 8:
//             case 9:
//             case 14:
//             case 15:
//                 syMatrixModLookAtF
//                 (
//                     &look_at_f,
//                     cobj->vec.eye.x,
//                     cobj->vec.eye.y,
//                     cobj->vec.eye.z,
//                     cobj->vec.at.x,
//                     cobj->vec.at.y,
//                     cobj->vec.at.z,
//                     cobj->vec.up.x,
//                     0.0F,
//                     1.0F,
//                     0.0F
//                 );
//                 break;
//             case 10:
//             case 11:
//             case 16:
//             case 17:
//                 syMatrixModLookAtF
//                 (
//                     &look_at_f,
//                     cobj->vec.eye.x,
//                     cobj->vec.eye.y,
//                     cobj->vec.eye.z,
//                     cobj->vec.at.x,
//                     cobj->vec.at.y,
//                     cobj->vec.at.z,
//                     cobj->vec.up.x,
//                     0.0F,
//                     0.0F,
//                     1.0F
//                 );
//                 break;
//             default:
//                 syMatrixPerspFastF
//                 (
//                     &projection_f,
//                     0,
//                     cobj->projection.persp.fovy,
//                     cobj->projection.persp.aspect,
//                     cobj->projection.persp.near,
//                     cobj->projection.persp.far,
//                     cobj->projection.persp.scale
//                 );
//                 syMatrixLookAtF
//                 (
//                     &look_at_f,
//                     cobj->vec.eye.x,
//                     cobj->vec.eye.y,
//                     cobj->vec.eye.z,
//                     cobj->vec.at.x,
//                     cobj->vec.at.y,
//                     cobj->vec.at.z,
//                     cobj->vec.up.x,
//                     cobj->vec.up.y,
//                     cobj->vec.up.z
//                 );
//                 break;
//         }
//     }
//     if (cobj->xobjs_num != 0)
//     {
//         guMtxCatF(look_at_f, projection_f, projection_f);
//         vscale0 = cobj->viewport.vp.vscale[0];
//         vscale1 = -cobj->viewport.vp.vscale[1];
//         vscale2 = cobj->viewport.vp.vscale[2];
//         vtrans0 = cobj->viewport.vp.vtrans[0];
//         vtrans1 = cobj->viewport.vp.vtrans[1];
//         vtrans2 = cobj->viewport.vp.vtrans[2];
//     }
//     else
//     {
//         vscale0 = cobj->viewport.vp.vscale[0];
//         vscale1 = -cobj->viewport.vp.vscale[1];
//         vscale2 = cobj->viewport.vp.vscale[2];
//         vtrans0 = cobj->viewport.vp.vtrans[0];
//         vtrans1 = cobj->viewport.vp.vtrans[1];
//         vtrans2 = cobj->viewport.vp.vtrans[2];
//         guMtxIdentF(projection_f);
//         projection_f[0][0] = 1.0F / vscale0;
//         projection_f[1][1] = 1.0F / vscale1;
//         projection_f[2][2] = -1.0F / vscale2;
//         projection_f[3][0] = -vtrans0 / vscale0;
//         projection_f[3][1] = -vtrans1 / vscale1;
//         projection_f[3][2] = vtrans2 / vscale2;
//     }
//     pc0_magnitude = sqrtf(((projection_f[0][0]) * (projection_f[0][0])) + ((projection_f[1][0]) * (projection_f[1][0])) + ((projection_f[2][0]) * (projection_f[2][0])));
//     xl = ((projection_f[0][1]) * (projection_f[0][1])) + ((projection_f[1][1]) * (projection_f[1][1])) + ((projection_f[2][1]) * (projection_f[2][1]));
//     pc1_magnitude = sqrtf(xl);
//     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe7) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; };
//     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe3) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(19)-(1)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((0 << 19)); };
//     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe2) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(2)-(1)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((1 << 2)); };
//     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe3) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(6)-(2)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((2)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((0 << 6) | dLBParticleColorDitherMode); };
//     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe3) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(4)-(2)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((2)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((0 << 4) | dLBParticleAlphaDitherMode); };
//     prev_image = 0;
//     prev_palette = 0;
//     prev_ac = -1;
//     prev_alpha = -1;
//     tlut = -1;
//     dLBParticleCurrentTransformID++;
//     for (j = 0; j < (s32)(sizeof(sLBParticleStructsAllocLinks) / sizeof(sLBParticleStructsAllocLinks[0])); j++)
//     {
//         if (gobj->camera_mask & (1 << j))
//         {
//             for (pc = sLBParticleStructsAllocLinks[j]; pc != 0; pc = pc->next)
//             {
//                 if (pc->size != 0.0F)
//                 {
//                     pos_x = pc->pos.x;
//                     yl = pc->pos.y;
//                     pos_y = yl;
//                     if (pc->pos.z);
//                     pos_z = pc->pos.z;
//                     if (pc->xf != 0)
//                     {
//                         if (pc->xf->transform_id != dLBParticleCurrentTransformID)
//                         {
//        if (pc->xf->transform_status != nLBTransformStatusFinished)
//        {
//                                 syMatrixTraRotRpyRScaF
//                                 (
//                                     &pc->xf->affine,
//                                     pc->xf->translate.x,
//                                     pc->xf->translate.y,
//                                     pc->xf->translate.z,
//                                     pc->xf->rotate.x,
//                                     pc->xf->rotate.y,
//                                     pc->xf->rotate.z,
//                                     pc->xf->scale.x,
//                                     pc->xf->scale.y,
//                                     pc->xf->scale.z
//                                 );
//                             }
//        if (pc->xf->transform_status == nLBTransformStatusReady)
//        {
//         pc->xf->transform_status = nLBTransformStatusFinished;
//        }
//                             guMtxCatF(pc->xf->affine, projection_f, pc->xf->projection);
//                             pc->xf->pc0_magnitude = sqrtf
//                             (
//                                 ((pc->xf->projection[0][0]) * (pc->xf->projection[0][0])) +
//                                 ((pc->xf->projection[1][0]) * (pc->xf->projection[1][0])) +
//                                 ((pc->xf->projection[2][0]) * (pc->xf->projection[2][0]))
//                             );
//                             pc->xf->pc1_magnitude = sqrtf
//                             (
//                                 ((pc->xf->projection[0][1]) * (pc->xf->projection[0][1])) +
//                                 ((pc->xf->projection[1][1]) * (pc->xf->projection[1][1])) +
//                                 ((pc->xf->projection[2][1]) * (pc->xf->projection[2][1]))
//                             );
//                             pc->xf->transform_id = dLBParticleCurrentTransformID;
//                         }
//                         s = (pc->xf->affine[0][0] >= 0.0F) ? 0 : -1;
//                         t = (pc->xf->affine[1][1] >= 0.0F) ? 0 : -1;
//                         mx = pc->xf->pc0_magnitude;
//                         my = pc->xf->pc1_magnitude;
//                         tx = ((pc->xf->projection[0][0] * pos_x) + (pc->xf->projection[1][0] * pos_y) + (pc->xf->projection[2][0] * pos_z)) + pc->xf->projection[3][0];
//                         ty = ((pc->xf->projection[0][1] * pos_x) + (pc->xf->projection[1][1] * pos_y) + (pc->xf->projection[2][1] * pos_z)) + pc->xf->projection[3][1];
//                         tz = ((pc->xf->projection[0][2] * pos_x) + (pc->xf->projection[1][2] * pos_y) + (pc->xf->projection[2][2] * pos_z)) + pc->xf->projection[3][2];
//                         tm = ((pc->xf->projection[0][3] * pos_x) + (pc->xf->projection[1][3] * pos_y) + (pc->xf->projection[2][3] * pos_z)) + pc->xf->projection[3][3];
//                     }
//                     else
//                     {
//                         s = t = 0;
//                         mx = pc0_magnitude;
//                         my = pc1_magnitude;
//                         tx = ((projection_f[0][0] * pos_x) + (projection_f[1][0] * pos_y) + (projection_f[2][0] * pos_z)) + projection_f[3][0];
//                         ty = ((projection_f[0][1] * pos_x) + (projection_f[1][1] * pos_y) + (projection_f[2][1] * pos_z)) + projection_f[3][1];
//                         tz = ((projection_f[0][2] * pos_x) + (projection_f[1][2] * pos_y) + (projection_f[2][2] * pos_z)) + projection_f[3][2];
//                         tm = ((projection_f[0][3] * pos_x) + (projection_f[1][3] * pos_y) + (projection_f[2][3] * pos_z)) + projection_f[3][3];
//                     }
//                     if (tm == 0.0F)
//                     {
//                     }
//                     else
//                     {
//                         tm = 1.0F / tm;
//                         tx *= tm;
//                         ty *= tm;
//                         tz *= tm;
//                         if
//                         (
//                             (tx < -1.0F) || (tx > 1.0F) ||
//                             (ty < -1.0F) || (ty > 1.0F) ||
//                             (tz < +0.0F) || (tz > 1.0F)
//                         )
//                         {
//                         }
//                         else
//                         {
//                             tm *= pc->size;
//                             xh = (tm * mx) + tx;
//                             yh = (tm * my) + ty;
//                             tx = tx * vscale0 + vtrans0;
//                             xh = xh * vscale0 + vtrans0;
//                             if (tx < xh)
//                             {
//                                 xh = xh;
//                                 xl = tx - (xh - tx);
//                             }
//                             else
//                             {
//                                 xl = xh;
//                                 xh = tx - (xh - tx);
//                             }
//                             ty = ty * vscale1 + vtrans1;
//                             yh = yh * vscale1 + vtrans1;
//                             if (mx);
//                             if (ty < yh)
//                             {
//                                 yh = yh;
//                                 yl = ty - (yh - ty);
//                             }
//                             else
//                             {
//                                 yl = yh;
//                                 yh = ty - (yh - ty);
//                             }
//                             tz = tz * vscale2 + vtrans2;
//                             bank_id = pc->bank_id & 7;
//                             fmt = sLBParticleTextureBanks[bank_id][pc->texture_id]->fmt;
//                             siz = sLBParticleTextureBanks[bank_id][pc->texture_id]->siz;
//                             width = sLBParticleTextureBanks[bank_id][pc->texture_id]->width;
//                             height = sLBParticleTextureBanks[bank_id][pc->texture_id]->height;
//                             image = sLBParticleTextureBanks[bank_id][pc->texture_id]->data[pc->frame_id];
//                             if (fmt == 2)
//                             {
//                                 p_palette = &sLBParticleTextureBanks[bank_id][pc->texture_id]->data[sLBParticleTextureBanks[bank_id][pc->texture_id]->count];
//                                 palette = (!(pc->flags & 0x10)) ? p_palette[pc->frame_id] : p_palette[0];
//                             }
//                             dsdx = (width * 4096.0F) / (xh - xl);
//                             dtdy = (height * 4096.0F) / (yh - yl);
//                             if (s < 0)
//                             {
//                                 s = width * 32;
//                                 dsdx = -dsdx;
//                             }
//                             if (t < 0)
//                             {
//                                 t = height * 32;
//                                 dtdy = -dtdy;
//                             }
//        if (pc->flags & 0x20)
//        {
//                                 dsdx *= 2;
//                                 cms = 1;
//                                 switch (width)
//                                 {
//                                 case 2:
//                                     masks = 1;
//                                     break;
//                                 case 4:
//                                     masks = 2;
//                                     break;
//                                 case 8:
//                                     masks = 3;
//                                     break;
//                                 case 16:
//                                     masks = 4;
//                                     break;
//                                 case 32:
//                                     masks = 5;
//                                     break;
//                                 case 64:
//                                     masks = 6;
//                                     break;
//                                 case 128:
//                                     masks = 7;
//                                     break;
//                                 case 256:
//                                     masks = 8;
//                                     break;
//                                 default:
//                                     masks = 0;
//                                     break;
//                                 }
//                             }
//                             else
//                             {
//                                 cms = 2;
//                                 masks = 0;
//                             }
//                             if (pc->flags & 0x40)
//                             {
//                                 dtdy *= 2;
//                                 cmt = 1;
//                                 switch (height)
//                                 {
//                                 case 2:
//                                     maskt = 1;
//                                     break;
//                                 case 4:
//                                     maskt = 2;
//                                     break;
//                                 case 8:
//                                     maskt = 3;
//                                     break;
//                                 case 16:
//                                     maskt = 4;
//                                     break;
//                                 case 32:
//                                     maskt = 5;
//                                     break;
//                                 case 64:
//                                     maskt = 6;
//                                     break;
//                                 case 128:
//                                     maskt = 7;
//                                     break;
//                                 case 256:
//                                     maskt = 8;
//                                     break;
//                                 default:
//                                     maskt = 0;
//                                     break;
//                                 }
//                             }
//                             else
//                             {
//                                 cmt = 2;
//                                 maskt = 0;
//                             }
//                             if (fmt == 2)
//                             {
//                                 if (palette != prev_palette)
//                                 {
//                                     { { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfd) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = (unsigned int)(palette); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe8) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(256) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(0) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe6) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)gSYTaskmanDLHeads[0]++; _g->words.w0 = ((unsigned int)(((unsigned int)(0xf0) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((255)) & ((0x01 << (10)) - 1)) << (14)));}; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe7) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; } };
//                                     prev_palette = palette;
//                                 }
//                                 if (tlut != 1)
//                                 {
//                                     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe3) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(14)-(2)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((2)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((2 << 14)); };
//                                     tlut = 1;
//                                 }
//                             }
//                             else if (tlut != 0)
//                             {
//                                 { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe3) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(14)-(2)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((2)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((0 << 14)); };
//                                 tlut = 0;
//                             }
//                             if (image != prev_image)
//                             {
//                                 switch (siz)
//                                 {
//                                 case 0:
//                                     { { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfd) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = (unsigned int)(image); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe6) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xf3) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0)))); _g->words.w1 = (((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((((((width)*(height)+3)>>2)-1) < (2047) ? ((((width)*(height)+3)>>2)-1) : (2047)))) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((((1 << 11) + ((1) > (((width)/16)) ? (1) : (((width)/16))) - 1) / ((1) > (((width)/16)) ? (1) : (((width)/16))))) & ((0x01 << (12)) - 1)) << (0)))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe7) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)(((((width)>>1)+7)>>3)) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf2) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((width)-1) << 2) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(((height)-1) << 2) & ((0x01 << (12)) - 1)) << (0))); } };
//                                     if ((width * height) >= 4096)
//                                     {
//                                         prev_palette = 0;
//                                     }
//                                     break;
//                                 case 1:
//                                     { { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfd) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = (unsigned int)(image); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe6) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xf3) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0)))); _g->words.w1 = (((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((((((width)*(height) + 1) >> 1) -1) < (2047) ? ((((width)*(height) + 1) >> 1) -1) : (2047)))) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((((1 << 11) + ((1) > (((width)*(1)/8)) ? (1) : (((width)*(1)/8))) - 1) / ((1) > (((width)*(1)/8)) ? (1) : (((width)*(1)/8))))) & ((0x01 << (12)) - 1)) << (0)))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe7) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(1) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((((width) * 1)+7)>>3) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf2) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((width)-1) << 2) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(((height)-1) << 2) & ((0x01 << (12)) - 1)) << (0))); } };
//                                     if ((width * height) >= 2048)
//                                     {
//                                         prev_palette = 0;
//                                     }
//                                     break;
//                                 case 2:
//                                     { { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfd) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = (unsigned int)(image); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe6) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xf3) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0)))); _g->words.w1 = (((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((((((width)*(height) + 0) >> 0) -1) < (2047) ? ((((width)*(height) + 0) >> 0) -1) : (2047)))) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((((1 << 11) + ((1) > (((width)*(2)/8)) ? (1) : (((width)*(2)/8))) - 1) / ((1) > (((width)*(2)/8)) ? (1) : (((width)*(2)/8))))) & ((0x01 << (12)) - 1)) << (0)))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe7) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(2) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((((width) * 2)+7)>>3) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf2) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((width)-1) << 2) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(((height)-1) << 2) & ((0x01 << (12)) - 1)) << (0))); } };
//                                     if ((width * height) >= 1024)
//                                     {
//                                         prev_palette = 0;
//                                     }
//                                     break;
//                                 case 3:
//                                     { { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfd) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(3) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((1)-1) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = (unsigned int)(image); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(3) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe6) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xf3) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0)))); _g->words.w1 = (((unsigned int)(((unsigned int)(7) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((((((width)*(height) + 0) >> 0) -1) < (2047) ? ((((width)*(height) + 0) >> 0) -1) : (2047)))) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((((1 << 11) + ((1) > (((width)*(4)/8)) ? (1) : (((width)*(4)/8))) - 1) / ((1) > (((width)*(4)/8)) ? (1) : (((width)*(4)/8))))) & ((0x01 << (12)) - 1)) << (0)))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xe7) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = 0; }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf5) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(fmt) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)(3) & ((0x01 << (2)) - 1)) << (19))) | ((unsigned int)(((unsigned int)((((width) * 2)+7)>>3) & ((0x01 << (9)) - 1)) << (9))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (9)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)(cmt) & ((0x01 << (2)) - 1)) << (18))) | ((unsigned int)(((unsigned int)(maskt) & ((0x01 << (4)) - 1)) << (14))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (10))) |((unsigned int)(((unsigned int)(cms) & ((0x01 << (2)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(masks) & ((0x01 << (4)) - 1)) << (4))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (4)) - 1)) << (0))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf2) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (12)) - 1)) << (0))); _g->words.w1 = ((unsigned int)(((unsigned int)(0) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(((width)-1) << 2) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)(((height)-1) << 2) & ((0x01 << (12)) - 1)) << (0))); } };
//                                     if ((width * height) >= 512)
//                                     {
//                                         prev_palette = 0;
//                                     }
//                                     break;
//                                 default:
//                                     break;
//                                 }
//                                 prev_image = image;
//                             }
//                             { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xfa) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (8)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (((unsigned int)(((unsigned int)(pc->primcolor.r) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(pc->primcolor.g) & ((0x01 << (8)) - 1)) << (16))) | ((unsigned int)(((unsigned int)(pc->primcolor.b) & ((0x01 << (8)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(pc->primcolor.a) & ((0x01 << (8)) - 1)) << (0)))); };
//                             if (pc->flags & 0x80)
//                             {
//                                 { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfb) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)(pc->envcolor.r) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(pc->envcolor.g) & ((0x01 << (8)) - 1)) << (16))) | ((unsigned int)(((unsigned int)(pc->envcolor.b) & ((0x01 << (8)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(pc->envcolor.a) & ((0x01 << (8)) - 1)) << (0))))); };
//                                 { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfc) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((((unsigned int)(((unsigned int)((3)) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (5)) - 1)) << (15))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (3)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (3)) - 1)) << (9)))) | (((unsigned int)(((unsigned int)((3)) & ((0x01 << (4)) - 1)) << (5))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (5)) - 1)) << (0))))) & ((0x01 << (24)) - 1)) << (0))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)((5)) & ((0x01 << (4)) - 1)) << (28))) | ((unsigned int)(((unsigned int)((5)) & ((0x01 << (3)) - 1)) << (15))) | ((unsigned int)(((unsigned int)((5)) & ((0x01 << (3)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((5)) & ((0x01 << (3)) - 1)) << (9)))) | (((unsigned int)(((unsigned int)((5)) & ((0x01 << (4)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (3)) - 1)) << (18))) | ((unsigned int)(((unsigned int)((5)) & ((0x01 << (3)) - 1)) << (6))) | ((unsigned int)(((unsigned int)((5)) & ((0x01 << (3)) - 1)) << (3))) | ((unsigned int)(((unsigned int)((5)) & ((0x01 << (3)) - 1)) << (0))))); };
//                             }
//                             else if (pc->flags & 0x100)
//                             {
//                                 { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfc) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((((unsigned int)(((unsigned int)((7)) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (5)) - 1)) << (15))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (3)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (3)) - 1)) << (9)))) | (((unsigned int)(((unsigned int)((7)) & ((0x01 << (4)) - 1)) << (5))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (5)) - 1)) << (0))))) & ((0x01 << (24)) - 1)) << (0))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)((31)) & ((0x01 << (4)) - 1)) << (28))) | ((unsigned int)(((unsigned int)((31)) & ((0x01 << (3)) - 1)) << (15))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (9)))) | (((unsigned int)(((unsigned int)((31)) & ((0x01 << (4)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (3)) - 1)) << (18))) | ((unsigned int)(((unsigned int)((31)) & ((0x01 << (3)) - 1)) << (6))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (3))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (0))))); };
//                             }
//                             else { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xfc) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((((unsigned int)(((unsigned int)((1)) & ((0x01 << (4)) - 1)) << (20))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (5)) - 1)) << (15))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (3)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (3)) - 1)) << (9)))) | (((unsigned int)(((unsigned int)((1)) & ((0x01 << (4)) - 1)) << (5))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (5)) - 1)) << (0))))) & ((0x01 << (24)) - 1)) << (0))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)((31)) & ((0x01 << (4)) - 1)) << (28))) | ((unsigned int)(((unsigned int)((31)) & ((0x01 << (3)) - 1)) << (15))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (9)))) | (((unsigned int)(((unsigned int)((31)) & ((0x01 << (4)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((1)) & ((0x01 << (3)) - 1)) << (21))) | ((unsigned int)(((unsigned int)((3)) & ((0x01 << (3)) - 1)) << (18))) | ((unsigned int)(((unsigned int)((31)) & ((0x01 << (3)) - 1)) << (6))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (3))) | ((unsigned int)(((unsigned int)((7)) & ((0x01 << (3)) - 1)) << (0))))); };
//                             if (pc->flags & 0x400)
//                             {
//                                 ac = (3 << 0);
//                             }
//                             else
//                             {
//                                 ac = (1 << 0);
//         if (pc->flags & 0x200)
//         {
//                                     alpha = pc->envcolor.a;
//                                 }
//                                 else alpha = 0x08;
//                                 if (prev_alpha != alpha)
//                                 {
//                                     { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xf9) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)(0x00) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)(0x00) & ((0x01 << (8)) - 1)) << (16))) | ((unsigned int)(((unsigned int)(0x00) & ((0x01 << (8)) - 1)) << (8))) | ((unsigned int)(((unsigned int)(alpha) & ((0x01 << (8)) - 1)) << (0))))); };
//                                     prev_alpha = alpha;
//                                 }
//                             }
//                             if (prev_ac != ac)
//                             {
//                                 { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe2) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(0)-(2)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((2)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)(ac); };
//                                 prev_ac = ac;
//                             }
//                             { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)(0xee) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = (unsigned int)(((unsigned int)(((unsigned int)((s32) (tz * 32.0F)) & ((0x01 << (16)) - 1)) << (16))) | ((unsigned int)(((unsigned int)(0) & ((0x01 << (16)) - 1)) << (0)))); };
//                             { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe4) & ((0x01 << (8)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((((s16)(xh)) > (0) ? ((s16)(xh)) : (0))) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((((s16)(yh)) > (0) ? ((s16)(yh)) : (0))) & ((0x01 << (12)) - 1)) << (0)))); _g->words.w1 = (((unsigned int)(((unsigned int)((0)) & ((0x01 << (3)) - 1)) << (24))) | ((unsigned int)(((unsigned int)((((s16)(xl)) > (0) ? ((s16)(xl)) : (0))) & ((0x01 << (12)) - 1)) << (12))) | ((unsigned int)(((unsigned int)((((s16)(yl)) > (0) ? ((s16)(yl)) : (0))) & ((0x01 << (12)) - 1)) << (0)))); { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)((0xe1)) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)(((s) - (((s16)(xl) < 0) ? (((s16)(dsdx) < 0) ? ((((((s16)(xl)*(s16)(dsdx))>>7)) > (0) ? ((((s16)(xl)*(s16)(dsdx))>>7)) : (0))) : ((((((s16)(xl)*(s16)(dsdx))>>7)) < (0) ? ((((s16)(xl)*(s16)(dsdx))>>7)) : (0)))) : 0))) & ((0x01 << (16)) - 1)) << (16))) | ((unsigned int)(((unsigned int)(((t) - (((s32)(yl) < 0) ? (((s16)(dtdy) < 0) ? ((((((s16)(yl)*(s16)(dtdy))>>7)) > (0) ? ((((s16)(yl)*(s16)(dtdy))>>7)) : (0))) : ((((((s16)(yl)*(s16)(dtdy))>>7)) < (0) ? ((((s16)(yl)*(s16)(dtdy))>>7)) : (0)))) : 0))) & ((0x01 << (16)) - 1)) << (0))))); }; { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = ((unsigned int)(((unsigned int)((0xf1)) & ((0x01 << (8)) - 1)) << (24))); _g->words.w1 = (unsigned int)((((unsigned int)(((unsigned int)((dsdx)) & ((0x01 << (16)) - 1)) << (16))) | ((unsigned int)(((unsigned int)((dtdy)) & ((0x01 << (16)) - 1)) << (0))))); }; };
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     if (tlut != 0)
//     {
//         { Gfx *_g = (Gfx *)(gSYTaskmanDLHeads[0]++); _g->words.w0 = (((unsigned int)(((unsigned int)(0xe3) & ((0x01 << (8)) - 1)) << (24)))|((unsigned int)(((unsigned int)(32-(14)-(2)) & ((0x01 << (8)) - 1)) << (8)))| ((unsigned int)(((unsigned int)((2)-1) & ((0x01 << (8)) - 1)) << (0)))); _g->words.w1 = (unsigned int)((0 << 14)); };
//     }
// }
// void lbParticleAddAttachDObj(s32 bank_id, DObj *dobj)
// {
//  if ((bank_id >= 1) && (bank_id <= (s32)(sizeof(sLBParticleAttachDObjs) / sizeof(sLBParticleAttachDObjs[0]))))
//  {
//   sLBParticleAttachDObjs[bank_id - 1] = dobj;
//  }
// }
// void lbParticleSetDitherModes(s32 colordither_mode, s32 alphadither_mode)
// {
//  dLBParticleColorDitherMode = colordither_mode;
//  dLBParticleAlphaDitherMode = alphadither_mode;
// }
// GObj* lbParticleAllocGenerators(s32 num)
// {
//  s32 i;
//  sLBParticleGeneratorsAllocFree = sLBParticleGeneratorsQueued = 0;
//  for (i = num - 1; i >= 0; i--)
//  {
//   LBGenerator *gn = syTaskmanMalloc(sizeof(*gn), 0x4);
//   if (gn == 0)
//   {
//    return 0;
//   }
//   gn->next = sLBParticleGeneratorsAllocFree;
//   sLBParticleGeneratorsAllocFree = gn;
//  }
//  gLBParticleGeneratorsUsedNum = 0;
//  D_ovl0_800D6450 = 0;
//  return gcMakeGObjSPAfter(~0x6, lbParticleGeneratorFuncRun, 0, 0x80000000);
// }
// void lbParticleGetPosVelDObj(Vec3f *pos, Vec3f *vel, DObj *dobj)
// {
//  Mtx44f dst;
//  Mtx44f tmp;
//  f32 x, y, z;
//  guMtxIdentF(dst);
//  do
//  {
//   if ((dobj->scale.vec.f.x != 1.0F) || (dobj->scale.vec.f.y != 1.0F) || (dobj->scale.vec.f.z != 1.0F))
//   {
//    syMatrixScaF(&tmp, dobj->scale.vec.f.x, dobj->scale.vec.f.y, dobj->scale.vec.f.z);
//    guMtxCatF(dst, tmp, dst);
//   }
//   if ((dobj->rotate.vec.f.x != 0.0F) || (dobj->rotate.vec.f.y != 0.0F) || (dobj->rotate.vec.f.z != 0.0F))
//   {
//    syMatrixRotRpyRF(&tmp, dobj->rotate.vec.f.x, dobj->rotate.vec.f.y, dobj->rotate.vec.f.z);
//    guMtxCatF(dst, tmp, dst);
//   }
//   if ((dobj->translate.vec.f.x != 0.0F) || (dobj->translate.vec.f.y != 0.0F) || (dobj->translate.vec.f.z != 0.0F))
//   {
//    syMatrixTraF(&tmp, dobj->translate.vec.f.x, dobj->translate.vec.f.y, dobj->translate.vec.f.z);
//    guMtxCatF(dst, tmp, dst);
//   }
//   if (dobj->vec != 0)
//   {
//    GCTranslate *translate = 0;
//    GCRotate *rotate = 0;
//    GCScale *scale = 0;
//    uintptr_t csr = (uintptr_t)dobj->vec->data;
//    s32 i;
//    for (i = 0; i < (s32)(sizeof(dobj->vec->kinds) / sizeof(dobj->vec->kinds[0])); i++)
//    {
//     switch (dobj->vec->kinds[i])
//     {
//     case nGCDrawVectorKindNone:
//                     break;
//     case nGCDrawVectorKindTranslate:
//      translate = (GCTranslate*)csr;
//      csr += sizeof(*translate);
//      break;
//     case nGCDrawVectorKindRotate:
//      rotate = (GCRotate*)csr;
//      csr += sizeof(*rotate);
//      break;
//     case nGCDrawVectorKindScale:
//      scale = (GCScale*)csr;
//      csr += sizeof(*scale);
//      break;
//     }
//    }
//    if (scale != 0)
//    {
//     if ((scale->vec.f.x != 1.0F) || (scale->vec.f.y != 1.0F) || (scale->vec.f.z != 1.0F))
//     {
//      syMatrixScaF(&tmp, scale->vec.f.x, scale->vec.f.y, scale->vec.f.z);
//      guMtxCatF(dst, tmp, dst);
//     }
//    }
//    if (rotate != 0)
//    {
//     if ((rotate->vec.f.x != 0.0F) || (rotate->vec.f.y != 0.0F) || (rotate->vec.f.z != 0.0F))
//     {
//      syMatrixRotRpyRF(&tmp, rotate->vec.f.x, rotate->vec.f.y, rotate->vec.f.z);
//      guMtxCatF(dst, tmp, dst);
//     }
//    }
//    if (translate != 0)
//    {
//     if ((translate->vec.f.x != 0.0F) || (translate->vec.f.y != 0.0F) || (translate->vec.f.z != 0.0F))
//     {
//      syMatrixTraF(&tmp, translate->vec.f.x, translate->vec.f.y, translate->vec.f.z);
//      guMtxCatF(dst, tmp, dst);
//     }
//    }
//   }
//   dobj = dobj->parent;
//  }
//     while (dobj != ((DObj*)1));
//  pos->x = dst[3][0];
//  pos->y = dst[3][1];
//  pos->z = dst[3][2];
//  x = vel->x, y = vel->y, z = vel->z;
//  guNormalize(&dst[0][0], &dst[1][0], &dst[2][0]);
//  guNormalize(&dst[0][1], &dst[1][1], &dst[2][1]);
//  guNormalize(&dst[0][2], &dst[1][2], &dst[2][2]);
//  vel->x = (dst[0][0] * x) + (dst[1][0] * y) + (dst[2][0] * z);
//  vel->y = (dst[0][1] * x) + (dst[1][1] * y) + (dst[2][1] * z);
//  vel->z = (dst[0][2] * x) + (dst[1][2] * y) + (dst[2][2] * z);
// }
// void lbParticleGeneratorFuncRun(GObj *gobj)
// {
//     LBGenerator *gn, *next_gn;
//     f32 pos_random;
//     Vec3f pos;
//     Vec3f vel;
//     f32 zero;
//     f32 temp_vel_x;
//     f32 temp_vel_y;
//     f32 temp_vel_z;
//     f32 magnitude;
//     f32 angle1;
//     f32 angle2;
//     f32 sin_angle1;
//     f32 cos_angle1;
//     f32 sin_angle2;
//     f32 cos_angle2;
//     f32 spEC;
//     f32 vel_x;
//     f32 vel_y;
//     f32 vel_z;
//     f32 pv0;
//     s32 unused;
//     f32 temp_f26;
//     f32 pos_x;
//     f32 pos_y;
//     f32 pos_z;
//     f32 pm1;
//     f32 var_f20;
//     f32 pv1;
//     f32 spB8;
//     f32 vmag;
//     gn = sLBParticleGeneratorsQueued;
//     sLBParticleGeneratorsLastProcessed = 0;
//     while (gn != 0)
//     {
//         if (gobj->flags & (1 << ((gn->bank_id >> 3) + 0x10)))
//         {
//             sLBParticleGeneratorsLastProcessed = gn;
//             gn = gn->next;
//             continue;
//         }
//         if (gn->flags & 0x800)
//         {
//             sLBParticleGeneratorsLastProcessed = gn;
//             gn = gn->next;
//             continue;
//         }
//         if (gn->update_rate < 0.0F)
//         {
//             gn->frame -= gn->update_rate;
//         }
//         else gn->frame += (syUtilsRandFloat() * gn->update_rate);
//         if (gn->frame >= 1.0F)
//         {
//             vel.x = gn->vel.x;
//             vel.y = gn->vel.y;
//             vel.z = gn->vel.z;
//             if (gn->dobj != 0)
//             {
//                 lbParticleGetPosVelDObj(&pos, &vel, gn->dobj);
//                 gn->pos.x = pos.x;
//                 gn->pos.y = pos.y;
//                 gn->pos.z = pos.z;
//             }
//             switch (gn->kind)
//             {
//             case 0:
//             case 3:
//             case 4:
//                 pv0 = gn->generator_vars.rotate.base + (syUtilsRandFloat() * (gn->generator_vars.rotate.target - gn->generator_vars.rotate.base));
//                 spB8 = (gn->generator_vars.rotate.target - gn->generator_vars.rotate.base) / (s32) gn->frame;
//                 break;
//             default:
//                 pv0 = ((float)((360.0F) * ((float)(3.14159265358979323846 / 180)))) * syUtilsRandFloat();
//                 spB8 = ((float)((360.0F) * ((float)(3.14159265358979323846 / 180)))) / (s32) gn->frame;
//                 break;
//             }
//         }
//         while (gn->frame >= 1.0F)
//         {
//             switch (gn->kind)
//             {
//             case 0:
//             case 3:
//             case 4:
//                 vel_x = vel.x;
//                 vel_y = vel.y;
//                 vel_z = vel.z;
//                 angle1 = syUtilsArcTan2(vel_y, vel_z);
//                 sin_angle1 = __sinf(angle1);
//                 cos_angle1 = __cosf(angle1);
//                 angle2 = syUtilsArcTan2(vel_x, (vel_y * sin_angle1) + (vel_z * cos_angle1));
//                 sin_angle2 = __sinf(angle2);
//                 cos_angle2 = __cosf(angle2);
//                 magnitude = sqrtf(((vel_x) * (vel_x)) + ((vel_y) * (vel_y)) + ((vel_z) * (vel_z)));
//                 if (gn->unk_gn_0x38 < 0.0F)
//                 {
//                     vmag = pv1 = 1.0F;
//                     var_f20 = -gn->unk_gn_0x38;
//                 }
//                 else
//                 {
//                     pv1 = vmag = syUtilsRandFloat();
//                     if (gn->kind != 0)
//                     {
//                         vmag = pv1 = sqrtf(pv1);
//                     }
//                     var_f20 = gn->unk_gn_0x38 * pv1;
//                 }
//                 if (gn->unk_gn_0x3C < 0.0F)
//                 {
//                     pv0 += spB8;
//                     pv1 = -gn->unk_gn_0x3C;
//                 }
//                 else
//                 {
//                     pv0 = gn->generator_vars.rotate.base + (syUtilsRandFloat() * (gn->generator_vars.rotate.target - gn->generator_vars.rotate.base));
//                     pv1 *= gn->unk_gn_0x3C;
//                 }
//                 zero = 0.0F;
//                 spEC = __cosf(pv0) * var_f20;
//                 temp_f26 = __sinf(pv0) * var_f20;
//                 pm1 = __sinf(pv1) * magnitude;
//                 vel_x = __cosf(pv0) * pm1;
//                 vel_y = __sinf(pv0) * pm1;
//                 vel_z = __cosf(pv1) * magnitude;
//                 pos_x = (spEC * cos_angle2) + zero + gn->pos.x;
//                 pos_y = (-spEC * sin_angle1 * sin_angle2) + (temp_f26 * cos_angle1) + zero + gn->pos.y;
//                 pos_z = (-spEC * cos_angle1 * sin_angle2) - (temp_f26 * sin_angle1) + zero + gn->pos.z;
//                 temp_vel_x = (vel_x * cos_angle2) + (vel_z * sin_angle2);
//                 temp_vel_y = (-vel_x * sin_angle1 * sin_angle2) + (vel_y * cos_angle1) + (vel_z * sin_angle1 * cos_angle2);
//                 temp_vel_z = (-vel_x * cos_angle1 * sin_angle2) - (vel_y * sin_angle1) + (vel_z * cos_angle1 * cos_angle2);
//                 if (gn->kind == 3)
//                 {
//                     temp_vel_x *= vmag;
//                     temp_vel_y *= vmag;
//                     temp_vel_z *= vmag;
//                 }
//                 lbParticleMakeParam
//                 (
//                     gn->bank_id,
//                     gn->flags,
//                     gn->texture_id,
//                     gn->bytecode,
//                     gn->particle_lifetime,
//                     pos_x,
//                     pos_y,
//                     pos_z,
//                     temp_vel_x,
//                     temp_vel_y,
//                     temp_vel_z,
//                     gn->size,
//                     gn->gravity,
//                     gn->friction,
//                     0,
//                     gn
//                 );
//                 break;
//             case 1:
//                 vel_x = vel.x;
//                 vel_y = vel.y;
//                 vel_z = vel.z;
//                 pos_random = syUtilsRandFloat();
//                 pos_x = gn->pos.x + (pos_random * (gn->generator_vars.move.x - gn->pos.x));
//                 pos_y = gn->pos.y + (pos_random * (gn->generator_vars.move.y - gn->pos.y));
//                 pos_z = gn->pos.z + (pos_random * (gn->generator_vars.move.z - gn->pos.z));
//                 lbParticleMakeParam
//                 (
//                     gn->bank_id,
//                     gn->flags,
//                     gn->texture_id,
//                     gn->bytecode,
//                     gn->particle_lifetime,
//                     pos_x,
//                     pos_y,
//                     pos_z,
//                     vel.x,
//                     vel.y,
//                     vel.z,
//                     gn->size,
//                     gn->gravity,
//                     gn->friction,
//                     0,
//                     gn
//                 );
//                 break;
//             case 2:
//                 vel_x = vel.x;
//                 vel_y = vel.y;
//                 vel_z = vel.z;
//                 angle1 = syUtilsArcTan2(vel_y, vel_z);
//                 sin_angle1 = __sinf(angle1);
//                 cos_angle1 = __cosf(angle1);
//                 angle2 = syUtilsArcTan2(vel_x, (vel_y * sin_angle1) + (vel_z * cos_angle1));
//                 magnitude = sqrtf(((vel_x) * (vel_x)) + ((vel_y) * (vel_y)) + ((vel_z) * (vel_z)));
//                 pv1 = (gn->unk_gn_0x38 < 0.0F) ? 1.0F : syUtilsRandFloat();
//                 pv0 = (gn->unk_gn_0x3C < 0.0F) ? pv0 + spB8 : syUtilsRandFloat() * ((float)((360.0F) * ((float)(3.14159265358979323846 / 180))));
//                 gn->generator_vars.vortex.f = magnitude;
//                 if
//                 (
//                     lbParticleMakeParam
//                     (
//                         gn->bank_id,
//                         gn->flags | 0x4,
//                         gn->texture_id,
//                         gn->bytecode,
//                         gn->particle_lifetime,
//                         0,
//                         0,
//                         0,
//                         pv0,
//                         pv1,
//                         0,
//                         gn->size,
//                         angle1,
//                         angle2,
//                         0,
//                         gn
//                     ) != 0
//                 )
//                 {
//                     gn->generator_vars.vortex.lifetime++;
//                 }
//                 break;
//             default:
//                 if (sLBParticleGeneratorFuncDefault != 0)
//                 {
//                     sLBParticleGeneratorFuncDefault(gn, &vel);
//                 }
//                 break;
//             }
//             gn->frame -= 1.0F;
//         }
//         if (gn->generator_lifetime != 0)
//         {
//             gn->generator_lifetime--;
//             if (gn->generator_vars.rotate.target);
//             if (gn->generator_lifetime == 0)
//             {
//                 if ((gn->kind == nLBParticleKindVortex) && (gn->generator_vars.vortex.lifetime != 0))
//                 {
//                     gn->update_rate = 0.0F;
//                     gn->generator_lifetime = 1;
//                 }
//                 else
//                 {
//                     if (sLBParticleGeneratorsLastProcessed == 0)
//                     {
//                         sLBParticleGeneratorsQueued = gn->next;
//                     }
//                     else sLBParticleGeneratorsLastProcessed->next = gn->next;
//                     next_gn = gn->next;
//                     if (gn->xf != 0)
//                     {
//                         gn->xf->users_num--;
//                         if (gn->xf->users_num == 0)
//                         {
//                             lbParticleEjectTransform(gn->xf);
//                         }
//                     }
//                     gn->next = sLBParticleGeneratorsAllocFree;
//                     sLBParticleGeneratorsAllocFree = gn;
//                     gn = next_gn;
//                     gLBParticleGeneratorsUsedNum--;
//                     continue;
//                 }
//             }
//         }
//         sLBParticleGeneratorsLastProcessed = gn;
//         gn = gn->next;
//     }
// }
// LBGenerator* lbParticleGetGenerator(void)
// {
//     LBGenerator *gn = sLBParticleGeneratorsAllocFree;
//     if (sLBParticleGeneratorsAllocFree == 0)
//     {
//         return 0;
//     }
//     gLBParticleGeneratorsUsedNum++;
//     if (D_ovl0_800D6450 < gLBParticleGeneratorsUsedNum)
//     {
//         D_ovl0_800D6450 = gLBParticleGeneratorsUsedNum;
//     }
//     sLBParticleGeneratorsAllocFree = gn->next;
//     gn->next = sLBParticleGeneratorsQueued;
//     sLBParticleGeneratorsQueued = gn;
//     if (sLBParticleGeneratorsLastProcessed == 0)
//     {
//         sLBParticleGeneratorsLastProcessed = gn;
//     }
//     gn->generator_id = ++dLBParticleCurrentGeneratorID;
//     gn->xf = 0;
//     return gn;
// }
// LBGenerator* lbParticleMakeGenerator(s32 bank_id, s32 script_id)
// {
//     LBGenerator *gn;
//     s32 id = bank_id & 7;
//     s32 unused;
//     if (id >= 8)
//     {
//         return 0;
//     }
//     if (script_id >= sLBParticleScriptBanksNum[id])
//     {
//         return 0;
//     }
//     gn = lbParticleGetGenerator();
//     if (gn != 0)
//     {
//         gn->kind = sLBParticleScriptBanks[id][script_id]->kind;
//         gn->bank_id = bank_id;
//         gn->flags = sLBParticleScriptBanks[id][script_id]->flags;
//         gn->texture_id = sLBParticleScriptBanks[id][script_id]->texture_id;
//         gn->particle_lifetime = sLBParticleScriptBanks[id][script_id]->particle_lifetime;
//         gn->generator_lifetime = sLBParticleScriptBanks[id][script_id]->generator_lifetime;
//         gn->pos.x = 0.0F;
//         gn->pos.y = 0.0F;
//         gn->pos.z = 0.0F;
//         gn->vel.x = sLBParticleScriptBanks[id][script_id]->vel.x;
//         gn->vel.y = sLBParticleScriptBanks[id][script_id]->vel.y;
//         gn->vel.z = sLBParticleScriptBanks[id][script_id]->vel.z;
//         gn->gravity = sLBParticleScriptBanks[id][script_id]->gravity;
//         gn->friction = sLBParticleScriptBanks[id][script_id]->friction;
//         gn->size = sLBParticleScriptBanks[id][script_id]->size;
//         gn->bytecode = sLBParticleScriptBanks[id][script_id]->bytecode;
//         gn->unk_gn_0x38 = sLBParticleScriptBanks[id][script_id]->unk_script_0x20;
//         gn->unk_gn_0x3C = sLBParticleScriptBanks[id][script_id]->unk_script_0x24;
//         gn->update_rate = sLBParticleScriptBanks[id][script_id]->update_rate;
//         gn->frame = 0.0F;
//         if (sLBParticleTextureBanks[id][sLBParticleScriptBanks[id][script_id]->texture_id]->flags != 0)
//         {
//             gn->flags |= 0x10;
//         }
//         gn->dobj = 0;
//         switch (gn->kind)
//         {
//         case 0:
//         case 3:
//         case 4:
//             gn->generator_vars.rotate.base = 0;
//             gn->generator_vars.rotate.target = ((float)((360.0F) * ((float)(3.14159265358979323846 / 180))));
//             break;
//         case 1:
//             gn->generator_vars.move.x = gn->pos.x + gn->vel.x;
//             gn->generator_vars.move.y = gn->pos.y + gn->vel.y;
//             gn->generator_vars.move.z = gn->pos.z + gn->vel.z;
//             break;
//         case 2:
//             gn->generator_vars.vortex.lifetime = 0;
//             break;
//         default:
//             if (sLBParticleGeneratorFuncSetup != 0)
//             {
//                 sLBParticleGeneratorFuncSetup(gn);
//             }
//             break;
//         }
//     }
//     return gn;
// }
// void lbParticleEjectGenerator(LBGenerator *this_gn)
// {
//     LBGenerator *prev_gn = 0, *current_gn = sLBParticleGeneratorsQueued;
//     while (current_gn != 0)
//     {
//         if (current_gn == this_gn)
//         {
//             if ((this_gn->kind == nLBParticleKindVortex) && (this_gn->generator_vars.vortex.lifetime != 0))
//             {
//                 this_gn->update_rate = 0.0F;
//                 this_gn->generator_lifetime = 1;
//                 break;
//             }
//             if (prev_gn == 0)
//             {
//                 sLBParticleGeneratorsQueued = current_gn->next;
//             }
//             else prev_gn->next = current_gn->next;
//             if (this_gn->xf != 0)
//             {
//                 this_gn->xf->users_num--;
//                 if (this_gn->xf->users_num == 0)
//                 {
//                     lbParticleEjectTransform(this_gn->xf);
//                 }
//             }
//             current_gn->next = sLBParticleGeneratorsAllocFree;
//             sLBParticleGeneratorsAllocFree = current_gn;
//             gLBParticleGeneratorsUsedNum--;
//             break;
//         }
//         prev_gn = current_gn;
//         current_gn = current_gn->next;
//     }
// }
// void lbParticleEjectGeneratorAll(void)
// {
//  LBGenerator *current_gn = sLBParticleGeneratorsQueued;
//  while (current_gn != 0)
//  {
//   LBGenerator *next_gn = current_gn->next;
//   lbParticleEjectGenerator(current_gn);
//   current_gn = next_gn;
//  }
// }
// void lbParticleSetGeneratorFuncs(void (*func_setup)(LBGenerator*), void (*func_default)(LBGenerator*, Vec3f*))
// {
//  sLBParticleGeneratorFuncSetup = func_setup;
//  sLBParticleGeneratorFuncDefault = func_default;
// }
// void lbParticleEjectStructID(u16 generator_id, s32 link_id)
// {
//     LBParticle *next_pc;
//     LBParticle *current_pc;
//     LBParticle *prev_pc;
//     LBGenerator *next_gn;
//     LBGenerator *current_gn;
//     LBGenerator *prev_gn;
//     prev_pc = 0;
//     current_pc = sLBParticleStructsAllocLinks[link_id];
//     while (current_pc != 0)
//     {
//         next_pc = current_pc->next;
//         if (current_pc->generator_id == generator_id)
//         {
//             if (prev_pc == 0)
//             {
//                 sLBParticleStructsAllocLinks[link_id] = current_pc->next;
//             }
//             else prev_pc->next = current_pc->next;
//             if ((current_pc->gn != 0) && (current_pc->flags & 0x4) && (current_pc->gn->kind == nLBParticleKindVortex))
//             {
//                 current_pc->gn->generator_vars.vortex.lifetime--;
//             }
//             if (current_pc->xf != 0)
//             {
//                 current_pc->xf->users_num--;
//                 if (current_pc->xf->users_num == 0)
//                 {
//                     lbParticleEjectTransform(current_pc->xf);
//                 }
//             }
//             current_pc->next = sLBParticleStructsAllocFree;
//             sLBParticleStructsAllocFree = current_pc;
//             gLBParticleStructsUsedNum--;
//         }
//         else prev_pc = current_pc;
//         current_pc = next_pc;
//     }
//     prev_gn = 0;
//     current_gn = sLBParticleGeneratorsQueued;
//     while (current_gn != 0)
//     {
//         next_gn = current_gn->next;
//         if (current_gn->generator_id == generator_id)
//         {
//             if ((current_gn->kind == nLBParticleKindVortex) && (current_gn->generator_vars.vortex.lifetime != 0))
//             {
//                 current_gn->update_rate = 0.0F;
//                 current_gn->generator_lifetime = 1;
//                 prev_gn = current_gn;
//             }
//             else
//             {
//                 if (prev_gn == 0)
//                 {
//                     sLBParticleGeneratorsQueued = current_gn->next;
//                 }
//                 else prev_gn->next = current_gn->next;
//                 if (current_gn->xf != 0)
//                 {
//                     current_gn->xf->users_num--;
//                     if (current_gn->xf->users_num == 0)
//                     {
//                         lbParticleEjectTransform(current_gn->xf);
//                     }
//                 }
//                 current_gn->next = sLBParticleGeneratorsAllocFree;
//                 sLBParticleGeneratorsAllocFree = current_gn;
//                 gLBParticleGeneratorsUsedNum--;
//             }
//         }
//         else prev_gn = current_gn;
//         current_gn = next_gn;
//     }
// }
// void lbParticleEjectStructSelf(LBParticle *pc)
// {
//  lbParticleEjectStructID(pc->generator_id, pc->bank_id >> 3);
// }
// void lbParticleEjectStructGenerator(LBGenerator *gn)
// {
//  lbParticleEjectStructID(gn->generator_id, gn->bank_id >> 3);
// }
// void lbParticleEjectGeneratorDObj(GObj *gobj)
// {
//  DObj *dobj;
//  LBGenerator *current_gn, *next_gn;
//  if (gobj->obj_kind == nGCCommonAppendDObj)
//  {
//   for (dobj = ((DObj*)(gobj)->obj); dobj != 0; dobj = gcGetTreeDObjNext(dobj))
//   {
//    for (current_gn = sLBParticleGeneratorsQueued; current_gn != 0; current_gn = next_gn)
//    {
//     next_gn = current_gn->next;
//     if (current_gn->dobj == dobj)
//     {
//      lbParticleEjectGenerator(current_gn);
//     }
//    }
//   }
//  }
// }
// void lbParticleSetStructPosAll(f32 pos_x, f32 pos_y, f32 pos_z)
// {
//     LBGenerator *gn;
//     s32 i;
//     for (i = 0; i < (s32)(sizeof(sLBParticleStructsAllocLinks) / sizeof(sLBParticleStructsAllocLinks[0])); i++)
//     {
//         LBParticle *pc = sLBParticleStructsAllocLinks[i];
//         while (pc != 0)
//         {
//             pc->pos.x = pos_x;
//             pc->pos.y = pos_y;
//             pc->pos.z = pos_z;
//             pc = pc->next;
//         }
//     }
//     gn = sLBParticleGeneratorsQueued;
//     while (gn != 0)
//     {
//         gn->pos.x = pos_x;
//         gn->pos.y = pos_y;
//         gn->pos.z = pos_z;
//         gn = gn->next;
//     }
// }
// void lbParticlePauseAllID(u16 generator_id, s32 link_id)
// {
//  LBParticle *pc;
//  LBGenerator *gn;
//  for (pc = sLBParticleStructsAllocLinks[link_id]; pc != 0; pc = pc->next)
//  {
//   if (pc->generator_id == generator_id)
//   {
//    pc->flags |= 0x800;
//   }
//  }
//  for (gn = sLBParticleGeneratorsQueued; gn != 0; gn = gn->next)
//  {
//   if (gn->generator_id == generator_id)
//   {
//    gn->flags |= 0x800;
//   }
//  }
// }
// void lbParticleResumeAllID(u16 generator_id, s32 link_id)
// {
//  LBParticle *pc;
//  LBGenerator *gn;
//  for (pc = sLBParticleStructsAllocLinks[link_id]; pc != 0; pc = pc->next)
//  {
//   if (pc->generator_id == generator_id)
//   {
//    pc->flags &= ~0x800;
//   }
//  }
//  for (gn = sLBParticleGeneratorsQueued; gn != 0; gn = gn->next)
//  {
//   if (gn->generator_id == generator_id)
//   {
//    gn->flags &= ~0x800;
//   }
//  }
// }