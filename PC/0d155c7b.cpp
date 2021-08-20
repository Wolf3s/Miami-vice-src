//---------------------------------------------------------------------------------------
// Inventory
// Date 8/11/2004, Time 17:38:50
// Martin Fuller: Automatically Produced By ALE Editor
//---------------------------------------------------------------------------------------
#ifndef __INVENTORY_H__
#define __INVENTORY_H__

    //-----------------------------------------------------------------------------------
    // External Includes
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External Defines
    //-----------------------------------------------------------------------------------
    #define SOUND_DATA_0004                                                    0x155a78dd

    #define TEXTURE_AS_BLACK_RAILGALLERY                                       0x56468e28 	// Geometry Texture, 
    #define TEXTURE_B2F0000                                                    0xedec883e 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0004                                                    0xa024099a 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0008                                                    0x3aec2a8d 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0012                                                    0x8913c5cf 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0016                                                    0xbdf224a1 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0020                                                    0xe2ea4a2d 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0024                                                    0x7b4eaeb9 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0028                                                    0x576f4a7c 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0032                                                    0x6d385 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0036                                                    0xf822e753 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0040                                                    0x38bc132f 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0044                                                    0xab1b7614 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0048                                                    0x6712d9de 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0052                                                    0xae305cb7 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0056                                                    0x84bb3ecb 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0060                                                    0x5afb5e93 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0064                                                    0x3b50c0b2 	// FX Texture, Storage Texture, 
    #define TEXTURE_B2F0068                                                    0x63d4460 	// FX Texture, Storage Texture, 
    #define TEXTURE_B0245                                                      0x1d98e910 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0172                                                    0xd5e86588 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0176                                                    0x9489e6c9 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0180                                                    0x1beaf461 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0184                                                    0x28429b18 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0188                                                    0x4e24d76 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0192                                                    0x9c0748cb 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0196                                                    0xf3b0a2a3 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0200                                                    0x8cc9f0b9 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0204                                                    0x63fa4fd7 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0208                                                    0xa1938e71 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0212                                                    0x3ccf1605 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0216                                                    0xc4a05ace 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0220                                                    0x879a0059 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0224                                                    0xea900527 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0228                                                    0xed9fc5a8 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0232                                                    0x54977caf 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0236                                                    0x5b2e12aa 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0240                                                    0xc2628b9f 	// FX Texture, Storage Texture, 
    #define TEXTURE_F2B0244                                                    0xa58bd9ab 	// FX Texture, Storage Texture, 
    #define TEXTURE_F0070                                                      0x1c8a9f40 	// FX Texture, Storage Texture, 
    #define TEXTURE_MUZZLE1                                                    0xfb685ecc 	// FX Texture, Storage Texture, 
    #define TEXTURE_SMOKE1                                                     0x82b57d7e 	// FX Texture, Storage Texture, 
    #define TEXTURE_MATERIAL                                                   0xa08f7ace 	// FX Texture, Storage Texture, 
    #define TEXTURE_DAMAGE                                                     0x305c900c 	// FX Texture, Storage Texture, 
    #define TEXTURE_BERETTA                                                    0xfd6c514b 	// FX Texture, Storage Texture, 
    #define TEXTURE_BREN10                                                     0xe4463e26 	// FX Texture, Storage Texture, 
    #define TEXTURE_HEALTH                                                     0x11d16b05 	// FX Texture, Storage Texture, 
    #define TEXTURE_GENERADE_LAUNCHER                                          0x8e59072f 	// FX Texture, Storage Texture, 
    #define TEXTURE_M16_AR                                                     0xac219ef 	// FX Texture, Storage Texture, 
    #define TEXTURE_M16_MG                                                     0x593a7131 	// FX Texture, Storage Texture, 
    #define TEXTURE_M16_SMG                                                    0xe02672c6 	// FX Texture, Storage Texture, 
    #define TEXTURE_MAC10                                                      0x152fa3d7 	// FX Texture, Storage Texture, 
    #define TEXTURE_MAGNUM440                                                  0xa660188f 	// FX Texture, Storage Texture, 
    #define TEXTURE_PUMPACTION_SHOTGUN                                         0xa4698459 	// FX Texture, Storage Texture, 
    #define TEXTURE_SAWNOFF_SHOTGUN                                            0xa4350f26 	// FX Texture, Storage Texture, 
    #define TEXTURE_SILENCED_BERETTA                                           0x1bf1b26e 	// FX Texture, Storage Texture, 
    #define TEXTURE_MAIN                                                       0xdead1b90 	// FX Texture, Storage Texture, 
    #define TEXTURE_SNIPER_RIFLE                                               0x8f52c637 	// FX Texture, Storage Texture, 
    #define TEXTURE_SW_45                                                      0xd3734d20 	// FX Texture, Storage Texture, 
    #define TEXTURE_UZI                                                        0xe65bd842 	// FX Texture, Storage Texture, 
    #define TEXTURE_FOLLOW                                                     0x760964a0 	// FX Texture, Storage Texture, 
    #define TEXTURE_IDLE                                                       0xa6fbaff 	// FX Texture, Storage Texture, 
    #define TEXTURE_INACTIVE                                                   0x7c4932b3 	// FX Texture, Storage Texture, 
    #define TEXTURE_TAKECOVER                                                  0x761257e2 	// FX Texture, Storage Texture, 
    #define TEXTURE_UNDER_ATTACK                                               0xfc6fdf1f 	// FX Texture, Storage Texture, 
    #define TEXTURE_BACKUP                                                     0x4cf9b4c1 	// FX Texture, Storage Texture, 
    #define TEXTURE_BAD                                                        0xd5178e60 	// FX Texture, Storage Texture, 
    #define TEXTURE_BLANK                                                      0x835c113f 	// FX Texture, Storage Texture, 
    #define TEXTURE_DOOR_LOCKED                                                0xd497196b 	// FX Texture, Storage Texture, 
    #define TEXTURE_DOOR_NOWAY                                                 0xc309d8e 	// FX Texture, Storage Texture, 
    #define TEXTURE_DOOR_STURDY                                                0xe6f224da 	// FX Texture, Storage Texture, 
    #define TEXTURE_DOOR_UNLOCKED                                              0x9963a87d 	// FX Texture, Storage Texture, 
    #define TEXTURE_USING_ITEM                                                 0xfbdd0a11 	// FX Texture, Storage Texture, 
    #define TEXTURE_GRABBED                                                    0x859cfb0a 	// FX Texture, Storage Texture, 
    #define TEXTURE_CLIP                                                       0x4c95a4b1 	// FX Texture, Storage Texture, 
    #define TEXTURE_EVIDENCE                                                   0x440f0143 	// FX Texture, Storage Texture, 
    #define TEXTURE_FIRSTAID                                                   0xbcccda97 	// FX Texture, Storage Texture, 
    #define TEXTURE_KEY                                                        0xb310d4fb 	// FX Texture, Storage Texture, 
    #define TEXTURE_SWIPE_CARD                                                 0x2de4110f 	// FX Texture, Storage Texture, 
    #define TEXTURE_CONCRETE                                                   0x7e8b7edf 	// FX Texture, Storage Texture, 
    #define TEXTURE_CROSS                                                      0x7b02847d 	// FX Texture, Storage Texture, 
    #define TEXTURE_JUMP                                                       0xe27470c0 	// FX Texture, Storage Texture, 
    #define TEXTURE_LADDER                                                     0x5baf9163 	// FX Texture, Storage Texture, 
    #define TEXTURE_RELOAD                                                     0xd8167ffa 	// FX Texture, Storage Texture, 
    #define TEXTURE_COLLECTABLE                                                0x14deadb 	// FX Texture, Storage Texture, 
    #define TEXTURE_FRIENDLY                                                   0x5e097ad 	// FX Texture, Storage Texture, 
    #define TEXTURE_UNFRIENDLY                                                 0xf2752f5d 	// FX Texture, Storage Texture, 
    #define TEXTURE_RELOAD2                                                    0xfc5c0ca8 	// FX Texture, Storage Texture, 
    #define TEXTURE_TRIANGLE                                                   0xa43f142f 	// FX Texture, Storage Texture, 
    #define TEXTURE_NOTCOLLECTABLE                                             0x4d5e7be4 	// FX Texture, Storage Texture, 
    #define TEXTURE_MOVEOFF                                                    0x609f9a90 	// FX Texture, Storage Texture, 
    #define TEXTURE_GUNFLASH                                                   0x5f035466 	// FX Texture, Storage Texture, 
    #define TEXTURE_DEBRIS                                                     0xef23cfd6 	// FX Texture, Storage Texture, 
    #define TEXTURE_BLOOD                                                      0x35c25bc6 	// FX Texture, Storage Texture, 
    #define TEXTURE_SHARD                                                      0xde7a41bd 	// FX Texture, Storage Texture, 
    #define TEXTURE_GLASS                                                      0xea06f0ed 	// FX Texture, Storage Texture, 
    #define TEXTURE_METAL                                                      0xcb4da776 	// FX Texture, Storage Texture, 
    #define TEXTURE_WOOD2                                                      0xc63a131 	// FX Texture, 
    #define TEXTURE_LIGHT1                                                     0xa5519b84 	// FX Texture, Storage Texture, 
    #define TEXTURE_RICOCHET2                                                  0x7a0368e7 	// FX Texture, 
    #define TEXTURE_XBOX_A                                                     0xcb053fa7 	// Storage Texture, 
    #define TEXTURE_XBOX_B                                                     0x37d4ce66 	// Storage Texture, 
    #define TEXTURE_XBOX_X                                                     0xab379e1d 	// Storage Texture, 
    #define TEXTURE_XBOX_Y                                                     0xc25dfaf9 	// Storage Texture, 
    #define TEXTURE_VAN                                                        0xccde0118 	// Storage Texture, 
    #define TEXTURE_CUFFS                                                      0x1d02965a 	// Storage Texture, 
    #define TEXTURE_DRUGS                                                      0xd6ff5a73 	// Storage Texture, 
    #define TEXTURE_GRENADEDIRT                                                0xdbbb604f 	// FX Texture, 
    #define TEXTURE_GRENADEFIRE                                                0xa63f511d 	// FX Texture, 
    #define TEXTURE_GRENADESMOKE                                               0x256ef430 	// FX Texture, 
    #define TEXTURE_SHARD2                                                     0x76110b6b 	// FX Texture, 
    #define TEXTURE_SHARD1                                                     0xd7fe688d 	// FX Texture, 
    #define TEXTURE_RETURN                                                     0x28e671b1 	// Storage Texture, 
    #define TEXTURE_ESC                                                        0x5029fe2d 	// Storage Texture, 
    #define TEXTURE_ROCK                                                       0xad94d287 	// Geometry Texture, 
    #define TEXTURE_HEALTHREDTRANSPARENT                                       0xf1335636 	// Geometry Texture, 
    #define TEXTURE_HEALTHRED                                                  0x6d921e47 	// Geometry Texture, 
    #define TEXTURE_BULLET_CASE                                                0xde81333b 	// Geometry Texture, 
    #define TEXTURE_BULLET                                                     0x99d0bcd5 	// Geometry Texture, 
    #define TEXTURE_RED2                                                       0x756470c5 	// Geometry Texture, 
    #define TEXTURE_BERETTA92                                                  0x94200fa1 	// Geometry Texture, 
    #define TEXTURE_BRENTEN2                                                   0xed56253 	// Geometry Texture, 
    #define TEXTURE_M79                                                        0xd31eec5f 	// Geometry Texture, 
    #define TEXTURE_M16                                                        0x26f6a629 	// Geometry Texture, 
    #define TEXTURE_M10                                                        0xfd9afde3 	// Geometry Texture, 
    #define TEXTURE_MAGNUM4401                                                 0x878a1f8d 	// Geometry Texture, 
    #define TEXTURE_12GAUGE                                                    0x841e1231 	// Geometry Texture, 
    #define TEXTURE_SHGUN                                                      0x6f5db09a 	// Geometry Texture, 
    #define TEXTURE_PSG                                                        0x9a49517f 	// Geometry Texture, 
    #define TEXTURE_SWES2                                                      0x50868516 	// Geometry Texture, 
    #define TEXTURE_MV_GS_MATTF01                                              0x25e6c896 	// Geometry Texture, 
    #define TEXTURE_SKIN_SPEC_02                                               0x954d3944 	// Geometry Texture, 
    #define TEXTURE_EYEBL                                                      0x34adfb96 	// Geometry Texture, 
    #define TEXTURE_LIP_SPEC_01                                                0xe6d4f855 	// Geometry Texture, 
    #define TEXTURE_MV_GS_MATHEW01                                             0x54edf5f2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_MATHEW_HAIR01                                        0xc90248c4 	// Geometry Texture, 
    #define TEXTURE_MV_GS_MATHEW_ALPHA01                                       0x48e11a9d 	// Geometry Texture, 
    #define TEXTURE_MV_GS_JOE02                                                0xfed155e1 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKGLASSB                                          0xa7a57194 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_ADD                                   0x131b22ba 	// Geometry Texture, 
    #define TEXTURE_MV_GS_LEIGH02                                              0x4eb26113 	// Geometry Texture, 
    #define TEXTURE_MV_GS_LEIGHALPHA03                                         0xcc336c59 	// Geometry Texture, 
    #define TEXTURE_MV_GS_DAVEWESTFACE01                                       0xdaaa40cf 	// Geometry Texture, 
    #define TEXTURE_WESTALPHA_COPY                                             0x5f48531a 	// Geometry Texture, 
    #define TEXTURE_M60                                                        0x60cd7d19 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HEAD_FB01                                    0x17794696 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIR_FB01                                    0xa8d2c52b 	// Geometry Texture, 
    #define TEXTURE_TESTSHADER01                                               0x79f152a0 	// Geometry Texture, 
    #define TEXTURE_EYEBROWNL                                                  0x1e0fc8b0 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_EYELASHES                                    0x46616c87 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SARAALPHA03                                          0xe11c158d 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SARAHAIR                                             0xe754bab 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HEAD_FW03                                    0x25c22ceb 	// Geometry Texture, 
    #define TEXTURE_EYEHZ                                                      0xfbb3ac7f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIR_W01                                     0x39737e58 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIRALPHA_FW03                               0xf3e7ef45 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HEAD_FW01                                    0x31c02692 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_CHAIN01                                        0xf7a5b73c 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_MOD                                   0x72134445 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIR_WB01                                    0x6c348596 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HEAD_FW02                                    0x86084d4c 	// Geometry Texture, 
    #define TEXTURE_EYE_BROWN                                                  0x3cc707cb 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIR_WB01_BLACK                              0xd9933d2c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIRUNDER_WB01                               0xdf3c2aa1 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_HAIRA02LPHA01                                0x27fed3eb 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SARA02                                               0x70d2c526 	// Geometry Texture, 
    #define TEXTURE_SCOPE_BLACK                                                0x29d6a2ba 	// Geometry Texture, 
    #define TEXTURE_SCOPE_SPECULAR                                             0x2b7dc2c8 	// Geometry Texture, 
    #define TEXTURE_SCOPE                                                      0xbf0f7c94 	// Geometry Texture, 
    #define TEXTURE_GRENADE                                                    0x1edd3e02 	// Geometry Texture, 
    #define TEXTURE_PROJECTILE21                                               0xa2c9bdf0 	// Geometry Texture, 
    #define TEXTURE_UZI1                                                       0x568f33b8 	// Geometry Texture, 
    #define TEXTURE_WOOD                                                       0xdc09ca4f 	// Geometry Texture, 
    #define TEXTURE_CONCRETE1                                                  0x2dbb2e2c 	// Geometry Texture, 
    #define TEXTURE_AS_GLASS_FOYER                                             0x8d91d36c 	// Geometry Texture, 
    #define TEXTURE_SPEC1                                                      0xdb85bbf 	// Geometry Texture, 
    #define TEXTURE_DIRECTION                                                  0xfd49ff61 	// Geometry Texture, 

    #define GEOMETRY_JACKIEIMPACT_L00                                          0xa4f7cb4b
    #define GEOMETRY_JACKIEIMPACT_L001                                         0xa5c1ac43
    #define GEOMETRY_OBJ_PICKUP_AIR_SMALL                                      0x2b60e0a
    #define GEOMETRY_HEALTHPICKUP_LARGE                                        0xcfb5ed9
    #define GEOMETRY_HEALTHPICKUP_MEDIUM                                       0xf575ce6
    #define GEOMETRY_BULLET_CASE                                               0x4fd0eb1d
    #define GEOMETRY_BULLET                                                    0xdd76a1e8
    #define GEOMETRY_TARGET                                                    0x78bf4016
    #define GEOMETRY_BERRETTA                                                  0x172f02c7
    #define GEOMETRY_BREN                                                      0x9b4890b
    #define GEOMETRY_M79B                                                      0x19d0ccd2
    #define GEOMETRY_M16                                                       0xe5355b0f
    #define GEOMETRY_SWAT                                                      0x32840ff
    #define GEOMETRY_MAC10                                                     0xb305d103
    #define GEOMETRY_OUZI                                                      0xa8846384
    #define GEOMETRY_MAGNUM440                                                 0xa1afa9b1
    #define GEOMETRY_REMINGTON                                                 0xfa2fbeba
    #define GEOMETRY_SHOTGUN                                                   0x5526256f
    #define GEOMETRY_BERRETTASD                                                0xaf7a5a44
    #define GEOMETRY_PSG1                                                      0xa3463560
    #define GEOMETRY_SMITHWES01                                                0xaf2f8839
    #define GEOMETRY_GENERIC_HEAD01                                            0x32ef3916
    #define GEOMETRY_GENERIC_HEAD02                                            0x9f02d085
    #define GEOMETRY_GENERIC_HEAD03                                            0xfba677f4
    #define GEOMETRY_GENERIC_HEAD04                                            0xc0181e14
    #define GEOMETRY_GENERIC_HEAD05                                            0xa4bcb965
    #define GEOMETRY_GENERIC_HEAD06                                            0x95150f6
    #define GEOMETRY_M60                                                       0xd135650f
    #define GEOMETRY_GENERIC_HEAD_BF01                                         0x214e3363
    #define GEOMETRY_GENERIC_HEAD_BF02                                         0xd3e501b7
    #define GEOMETRY_GENERIC_HEAD_WF01                                         0x471128a3
    #define GEOMETRY_GENERIC_HEAD_WF02                                         0xb5ba1a77
    #define GEOMETRY_GENERIC_HEAD_WF03                                         0x1863ff56
    #define GEOMETRY_GENERIC_HEAD_WF04                                         0x542d6268
    #define GEOMETRY_GENERIC_HEAD_WF05                                         0xf9f48749
    #define GEOMETRY_SCOPE                                                     0x41b534fd
    #define GEOMETRY_GRENADE                                                   0xcf67d71b
    #define GEOMETRY_PROJECTILE2                                               0x2b709909
    #define GEOMETRY_UZI_9MM                                                   0x2d1b2ae2
    #define GEOMETRY_WOOD                                                      0xd404a73c
    #define GEOMETRY_CONCRETE                                                  0xe1fae504
    #define GEOMETRY_GLASS                                                     0xcc3b4b6f
    #define GEOMETRY_SCULPTSHARD3                                              0x29e5526f
    #define GEOMETRY_SCULPTSHARD1                                              0xbba20513
    #define GEOMETRY_SCULPTSHARD2                                              0x60c6f9d1
    #define GEOMETRY_DIRECTION_HELPER                                          0xebe509e8

    #define FX_SHOTGUN                                                         0xf1f6b1de
    #define FX_HIT_CONCRETE                                                    0xc97605c9
    #define FX_BLOOD                                                           0x667addb9
    #define FX_M60                                                             0x7f422463
    #define FX_UZI                                                             0xf95d52
    #define FX_M79                                                             0x8f9215b0
    #define FX_PUMPACTION                                                      0x3515fcf6
    #define FX_M16                                                             0x520b17ab
    #define FX_SWAT                                                            0xd016d1f2
    #define FX_BREN                                                            0xdb6a5472
    #define FX_BRENSD                                                          0xf81f8d26
    #define FX_BERETTA                                                         0x831566d3
    #define FX_PSG                                                             0x629c614d
    #define FX_VOLUME_FLASH                                                    0x805fdeec
    #define FX_EXPOSION                                                        0x9f4ff2eb
    #define FX_SHARD                                                           0xd7624f23
    #define FX_SPANGLY                                                         0xc542542e
    #define FX_HIT_METAL                                                       0x69a9c491
    #define FX_HIT_WOOD                                                        0xcc936fec
    #define FX_ALT_BLOOD                                                       0x577276a5

    #define TIMELINE_INSTANCE_DOOR_AWAY                                        0x2eb88717
    #define TIMELINE_INSTANCE_DOOR_TOWARD                                      0xa235db77
    #define TIMELINE_INSTANCE_DOOR_AWAY_SILENT                                 0xaf5c700f
    #define TIMELINE_INSTANCE_DOOR_TOWARD_SILENT                               0x77647081
    #define TIMELINE_INSTANCE_DOOR_KICKED                                      0x9f09ad88
    #define TIMELINE_INSTANCE_DOOR_DOUBLE_TOWARD                               0xfdddc2d8
    #define TIMELINE_INSTANCE_DOOR_SLIDING_RIGHT_LEFT                          0x3c17441c
    #define TIMELINE_INSTANCE_DOOR_SLIDING_DOUBLE                              0xec2aeb4e
    #define TIMELINE_INSTANCE_DOOR_DOUBLE_AWAY                                 0xb5e0ec18

    #define HULL_INVENTORY                                                     0xa19ba980

    // Hull: Inventory
    #define FX_INSTANCE_SHOTGUN                                                0xf1f6b1de
    #define FX_INSTANCE_CONCRETE                                               0xec2ddee
    #define FX_INSTANCE_BLOOD                                                  0x667addb9
    #define FX_INSTANCE_M60_MUZZLE                                             0xe30b0bd3
    #define FX_INSTANCE_UZI                                                    0xf95d52
    #define FX_INSTANCE_COPY_1_OF_UZI                                          0x34ee8470
    #define FX_INSTANCE_M79                                                    0x8f9215b0
    #define FX_INSTANCE_PUMPACTION                                             0x3515fcf6
    #define FX_INSTANCE_M16                                                    0x520b17ab
    #define FX_INSTANCE_SWAT                                                   0xd016d1f2
    #define FX_INSTANCE_BREN                                                   0xdb6a5472
    #define FX_INSTANCE_SMITHWES                                               0x3c5d6d74
    #define FX_INSTANCE_MAGNUM                                                 0x43470565
    #define FX_INSTANCE_BRENSD                                                 0xf81f8d26
    #define FX_INSTANCE_BERETTA                                                0x831566d3
    #define FX_INSTANCE_PSG                                                    0x629c614d
    #define FX_INSTANCE_VOLUME_FLASH                                           0x805fdeec
    #define FX_INSTANCE_EXPOSION                                               0x9f4ff2eb
    #define FX_INSTANCE_SHARD                                                  0xd7624f23
    #define FX_INSTANCE_SPANGLY                                                0xc542542e
    #define FX_INSTANCE_HIT_METAL                                              0x69a9c491
    #define FX_INSTANCE_HIT_WOOD                                               0xcc936fec
    #define FX_INSTANCE_BLOOD_GREEN                                            0x5131c09
    #define FX_INSTANCE_ALT_BLOOD                                              0x577276a5

    // Hull: Inventory
    #define INSTANCE_HEALTHPICKUP_LARGE                                        0x1780402
    #define INSTANCE_HEALTHPICKUP_MEDIUM                                       0x6fee2bbc
    #define INSTANCE_HEALTHPICKUP_SMALL                                        0x78362364
    #define INSTANCE_JACKIEIMPACT_L00                                          0x6b8b6730
    #define INSTANCE_JACKIEIMPACT_L001                                         0xdc7a42c1
    #define INSTANCE_BULLET_CASE                                               0xed3532d5
    #define INSTANCE_TARGET                                                    0x11762a28
    #define INSTANCE_BULLET                                                    0x9c5c0244
    #define INSTANCE_BERRETTA                                                  0x954a9695
    #define INSTANCE_BREN                                                      0xdb6a5472
    #define INSTANCE_M79B                                                      0xfe52a54e
    #define INSTANCE_M16                                                       0x520b17ab
    #define INSTANCE_SWAT                                                      0xd016d1f2
    #define INSTANCE_MAC10                                                     0x613f3f81
    #define INSTANCE_OUZI                                                      0x3482ab61
    #define INSTANCE_MAGNUM440                                                 0xf617a69d
    #define INSTANCE_REMINGTON                                                 0x3557f561
    #define INSTANCE_SHOTGUN                                                   0xf1f6b1de
    #define INSTANCE_BERRETTASD                                                0x8c0fab72
    #define INSTANCE_SMITHWES01                                                0x3bb93f02
    #define INSTANCE_PROJECTILE                                                0x6b32d464
    #define INSTANCE_OBJ_PICKUP_AIR_SMALL                                      0x23119efe
    #define INSTANCE_GENERIC_HEAD01                                            0xcd67d537
    #define INSTANCE_GENERIC_HEAD02                                            0xc024f3ee
    #define INSTANCE_GENERIC_HEAD03                                            0xc4e5ee59
    #define INSTANCE_GENERIC_HEAD04                                            0xdaa2be5c
    #define INSTANCE_GENERIC_HEAD05                                            0xde63a3eb
    #define INSTANCE_GENERIC_HEAD06                                            0xd3208532
    #define INSTANCE_M60                                                       0x7f422463
    #define INSTANCE_PSG1                                                      0xe9b5c3da
    #define INSTANCE_STORAGE_PICKUP_BREN                                       0xff3bcdd6
    #define INSTANCE_STORAGE_PICKUP_BERRETTA                                   0x1a5c8887
    #define INSTANCE_STORAGE_PICKUP_BERRETTASD                                 0xfb9cd81d
    #define INSTANCE_STORAGE_PICKUP_SMITHWES01                                 0x4c2a4c6d
    #define INSTANCE_STORAGE_PICKUP_MAGNUM440                                  0xb14af4d1
    #define INSTANCE_STORAGE_PICKUP_SHOTGUN                                    0xf85b6e23
    #define INSTANCE_STORAGE_PICKUP_REMINGTON                                  0x720aa72d
    #define INSTANCE_STORAGE_PICKUP_MAC10                                      0xbb814eaa
    #define INSTANCE_STORAGE_PICKUP_OUZI                                       0x10d332c5
    #define INSTANCE_STORAGE_PICKUP_SWAT                                       0xf4474856
    #define INSTANCE_STORAGE_PICKUP_M16                                        0xaa80f631
    #define INSTANCE_STORAGE_PICKUP_M60                                        0x87c9c5f9
    #define INSTANCE_STORAGE_PICKUP_M79B                                       0xda033cea
    #define INSTANCE_STORAGE_PICKUP_PSG1                                       0xcde45a7e
    #define INSTANCE_GENERIC_HEAD_BF01                                         0x7c2db167
    #define INSTANCE_GENERIC_HEAD_BF02                                         0x716e97be
    #define INSTANCE_GENERIC_HEAD_WF01                                         0x2ba14a76
    #define INSTANCE_GENERIC_HEAD_WF02                                         0x26e26caf
    #define INSTANCE_GENERIC_HEAD_WF03                                         0x22237118
    #define INSTANCE_GENERIC_HEAD_WF04                                         0x3c64211d
    #define INSTANCE_GENERIC_HEAD_WF05                                         0x38a53caa
    #define INSTANCE_SCOPE                                                     0xe0da69d5
    #define INSTANCE_OUZI_COPY_1                                               0xcc3ad098
    #define INSTANCE_WOOD                                                      0x9c23163b
    #define INSTANCE_CONCRETE                                                  0xec2ddee
    #define INSTANCE_GLASS                                                     0x88fec400
    #define INSTANCE_SCULPTSHARD1                                              0xd4d52a27
    #define INSTANCE_SCULPTSHARD2                                              0xd9960cfe
    #define INSTANCE_SCULPTSHARD3                                              0xdd571149
    #define INSTANCE_DIRECTION_HELPER                                          0x3eeae7ba

    // Hull: Inventory
    #define SFX_POINT_DEFAULT                                                  0x3be10e55
    #define SFX_POINT_DEFAULT_NEAR                                             0x40961da6

    //-----------------------------------------------------------------------------------
    // External Enums
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External Types
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External Variables
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External functions
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // Inline functions
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // Additional includes that depend on this header
    //-----------------------------------------------------------------------------------

#endif // __INVENTORY_H__
