//---------------------------------------------------------------------------------------
// mission_07_ChopShop2
// Date 8/11/2004, Time 17:33:15
// Martin Fuller: Automatically Produced By ALE Editor
//---------------------------------------------------------------------------------------
#ifndef __MISSION_07_CHOPSHOP2_H__
#define __MISSION_07_CHOPSHOP2_H__

    //-----------------------------------------------------------------------------------
    // External Includes
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External Defines
    //-----------------------------------------------------------------------------------
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_LEFT_2216                           2216
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_LEFT_IDLE_2222                      2222
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_LEFT_STEPBACK_2223                  2223
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_RIGHT_2217                          2217
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_RIGHT_IDLE_2224                     2224
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_RIGHT_STEPBACK_2225                 2225
    #define ANIM_HENCHMAN_AIM_SNIPER_KNEEL_2277                                2277
    #define ANIM_HENCHMAN_AIM_SNIPER_STANDING_2276                             2276
    #define ANIM_HENCHMAN_AIM_STAND_TO_KNEEL_2279                              2279
    #define ANIM_HENCHMAN_CROUCHED_RUN_2239                                    2239
    #define ANIM_HENCHMAN_CUFFED_IDLE_2238                                     2238
    #define ANIM_HENCHMAN_DAMAGE_EXPLOSION_HEAVY_2282                          2282
    #define ANIM_TUBBS_IDLE_LOOK_9098                                          9098
    #define ANIM_HENCHMAN_DAMAGE_EXPLOSION_HEAVY_DEAD_2286                     2286
    #define ANIM_HENCHMAN_DAMAGE_EXPLOSION_LIGHT_2283                          2283
    #define ANIM_HENCHMAN_DAMAGE_EXPLOSION_LIGHT_DEAD_2285                     2285
    #define ANIM_HENCHMAN_DAMAGE_EXPLOSION_LIGHT_GETUP_2284                    2284
    #define ANIM_HENCHMAN_DAMAGE_HEAD_2220                                     2220
    #define ANIM_HENCHMAN_DAMAGE_LOW_2270                                      2270
    #define ANIM_HENCHMAN_DEAD_2218                                            2218
    #define ANIM_HENCHMAN_DEAD_2266                                            2266
    #define ANIM_HENCHMAN_DIE_2206                                             2206
    #define ANIM_HENCHMAN_DIE_2265                                             2265
    #define ANIM_HENCHMAN_DIE_BACK_2275                                        2275
    #define ANIM_HENCHMAN_DIE_BALCONY_BACKWARD_HIT_2287                        2287
    #define ANIM_HENCHMAN_DIE_BALCONY_FORWARD_FALL_2291                        2291
    #define ANIM_HENCHMAN_DIE_BALCONY_FORWARD_HIT_2292                         2292
    #define ANIM_HENCHMAN_DIE_BALCONY_FORWARD_LAND_2290                        2290
    #define ANIM_HENCHMAN_DIE_FALL_BACKWARDS_FALL_2294                         2294
    #define ANIM_HENCHMAN_DIE_FALL_BACKWARDS_HIT_2295                          2295
    #define ANIM_HENCHMAN_DIE_FALL_BACKWARDS_LAND_2293                         2293
    #define ANIM_HENCHMAN_DIE_FALL_FORWARD_2272                                2272
    #define ANIM_HENCHMAN_DIE_FALL_FORWARD_FALL_2273                           2273
    #define ANIM_CROCKETT_WALK_RUN_9081                                        9081
    #define ANIM_TUBBS_WALK_RUN_9082                                           9082
    #define ANIM_HENCHMAN_DIE_FALL_FORWARD_LAND_2271                           2271
    #define ANIM_CROCKETT_IDLE_LOOK_9083                                       9083
    #define ANIM_HENCHMAN_DIE_FALL_TO_KNEES_2274                               2274
    #define ANIM_HENCHMAN_DIVE_ROLL_LEFT_2228                                  2228
    #define ANIM_HENCHMAN_DIVE_ROLL_RIGHT_2227                                 2227
    #define ANIM_HENCHMAN_EXTENDED_IDLE_2219                                   2219
    #define ANIM_HENCHMAN_FIRE_SNIPER_RIFLE_2278                               2278
    #define ANIM_HENCHMAN_GETTING_CUFFED_2234                                  2234
    #define ANIM_HENCHMAN_HANDS_UP_2235                                        2235
    #define ANIM_HENCHMAN_HANDS_UP_IDLE_2236                                   2236
    #define ANIM_HENCHMAN_HANDS_UP_PULL_GUN_2237                               2237
    #define ANIM_HENCHMAN_IDLE_2200                                            2200
    #define ANIM_HENCHMAN_IDLE_AGAINST_WALL_2226                               2226
    #define ANIM_HENCHMAN_KICK_DOOR_2229                                       2229
    #define ANIM_HENCHMAN_KNEEL_2203                                           2203
    #define ANIM_HENCHMAN_KNEEL_AIM_TO_STAND_2281                              2281
    #define ANIM_HENCHMAN_KNEEL_IDLE_2204                                      2204
    #define ANIM_HENCHMAN_KNEEL_STAND_2205                                     2205
    #define ANIM_HENCHMAN_RUN_2201                                             2201
    #define ANIM_HENCHMAN_SIDESTEP_LEFT_2207                                   2207
    #define ANIM_HENCHMAN_SIDESTEP_RIGHT_2208                                  2208
    #define ANIM_HENCHMAN_SOLO_ARRESTED_2240                                   2240
    #define ANIM_HENCHMAN_SOLO_ARRESTED_IDLE_2241                              2241
    #define ANIM_HENCHMAN_STRAFE_BACKWARD_2209                                 2209
    #define ANIM_HENCHMAN_STRAFE_FORWARD_2210                                  2210
    #define ANIM_HENCHMAN_STRAFE_LEFT_2211                                     2211
    #define ANIM_HENCHMAN_STRAFE_RIGHT_2212                                    2212
    #define ANIM_HENCHMAN_UPPERBODY_AIM_RIFLE_2253                             2253
    #define ANIM_HENCHMAN_UPPERBODY_AIM_SHOTGUN_2260                           2260
    #define ANIM_HENCHMAN_UPPERBODY_AIM_UZI_2215                               2215
    #define ANIM_HENCHMAN_UPPERBODY_DAMAGE_2264                                2264
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_RIFLE_2252                            2252
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_SHOTGUN_2261                          2261
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_UZI_2213                              2213
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_RIFLE_2259                            2259
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_SHOTGUN_2263                          2263
    #define ANIM_HENCHMAN_UPPERBODY_LOOK_2221                                  2221
    #define ANIM_HENCHMAN_UPPERBODY_LOOK_2231                                  2231
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_RIFLE_2251                          2251
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_SHOTGUN_2262                        2262
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_UZI_2214                            2214
    #define ANIM_HENCHMAN_WALK_2202                                            2202
    #define ANIM_TUBBS_EXPLOSION_9312                                          9312
    #define ANIM_CROCKETT_EXPLOSION_9313                                       9313
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_UZI_2256                              2256
    #define ANIM_TUBBS_GETUP_9344                                              9344
    #define ANIM_CROCKETT_GETUP_9345                                           9345
    #define ANIM_CROCKETT_GETOUT_CAR_9355                                      9355
    #define ANIM_TUBBS_9356                                                    9356
    #define ANIM_DAYTONA_9357                                                  9357
    #define ANIM_CROCKETT_OPEN_GATE_9358                                       9358
    #define ANIM_TUBBS_9359                                                    9359
    #define ANIM_HENCHMAN_IDLE_SMOKING_2296                                    2296
    #define ANIM_HENCHMAN_DIE_KNEES_2421                                       2421
    #define ANIM_HENCHMAN_DIE_KNEES_DEAD_2422                                  2422

    #define SOUND_DATA_0049                                                    0x51eaae35
    #define SOUND_DATA_0048                                                    0x18e7c9b8
    #define SOUND_DATA_DAYTONA_DOOR_OPEN                                       0x34e85b94
    #define SOUND_DATA_DAYTONA_DOOR_CLOSE                                      0xd923d959
    #define SOUND_DATA_CORVETTE_DOOR_OPEN                                      0x5432ffb8
    #define SOUND_DATA_CORVETTE_DOOR_CLOSE                                     0xaf2230cf
    #define SOUND_DATA_BUILDING_FIRE_EXTERIOR_11SEC                            0xd10ce892
    #define SOUND_DATA_POLICE_SIREN_3SEC                                       0x3c926567
    #define SOUND_DATA_PHONE_RING_B                                            0x6f069b34
    #define SOUND_DATA_EXPLOSION                                               0x73891833

    #define TEXTURE_SMOKEY                                                     0xb9811f0c 	// FX Texture, Storage Texture, 
    #define TEXTURE_FOAM_PARTICLE                                              0xef432c05 	// FX Texture, Storage Texture, 
    #define TEXTURE_SMOKE1                                                     0x82b57d7e 	// FX Texture, Storage Texture, 
    #define TEXTURE_FLAME3                                                     0x6733e02c 	// FX Texture, 
    #define TEXTURE_LIGHT1                                                     0xa5519b84 	// FX Texture, 
    #define TEXTURE_BEACH_WALL_CREAM                                           0x4c2ed9e7 	// Geometry Texture, 
    #define TEXTURE_MV_HERRING_BRICK                                           0x780a72c9 	// Geometry Texture, 
    #define TEXTURE_CHOP_APARTDOOR                                             0x15c8d0b3 	// Geometry Texture, 
    #define TEXTURE_FLOOR1                                                     0xa58a783 	// Geometry Texture, 
    #define TEXTURE_CHOP_WALL_CREAM                                            0xefc18bdb 	// Geometry Texture, 
    #define TEXTURE_CHOP_ROAD02                                                0x79234929 	// Geometry Texture, 
    #define TEXTURE_CHOP_PAVING                                                0x77d69d27 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_NECK1W                                       0x781f2a2 	// Geometry Texture, 
    #define TEXTURE_SKIN_SPEC_02                                               0xe1cd0ef4 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY01                                       0x107939b8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU02                                       0xf7709498 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM01                                        0x917e8bb3 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICWHAND02                                       0xd1715cec 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICSHOE01                                        0x1a16f7bb 	// Geometry Texture, 
    #define TEXTURE_TESTSHADER01                                               0x79f152a0 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSUITVEST02                                          0x6de28680 	// Geometry Texture, 
    #define TEXTURE_KEY                                                        0xcec12741 	// Geometry Texture, 
    #define TEXTURE_BLUE_CARP                                                  0xb1292b63 	// Geometry Texture, 
    #define TEXTURE_PINK_CARP                                                  0xed7c50fe 	// Geometry Texture, 
    #define TEXTURE_GAL_PALMBARK                                               0x5a484154 	// Geometry Texture, 
    #define TEXTURE_GAL_PALMTOP                                                0xaeb28cf8 	// Geometry Texture, 
    #define TEXTURE_SEPARATETROU                                               0x341551c4 	// Geometry Texture, 
    #define TEXTURE_CROK_VEST_SPEC_01                                          0xa2adc6e8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBSFACE04                                          0xe93fcf12 	// Geometry Texture, 
    #define TEXTURE_TUBBS_MOUTH_TEETH                                          0xecc735c0 	// Geometry Texture, 
    #define TEXTURE_EYE_DKBROWN                                                0x513ff7e0 	// Geometry Texture, 
    #define TEXTURE_NEWSHOE                                                    0x2f45492c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_NEW_ALHA_E3                                    0x4f63ea4b 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_SHIRT01                                        0x41129ce5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_CHEST01                                        0x946e09cf 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_CHAIN01                                        0xf7a5b73c 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_MOD2                                  0xeef33f8a 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_SUITBODY01                                     0x22ed9f7c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_SUITARM01                                      0x6fe8e3f2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBSHAND01                                          0xadadcab1 	// Geometry Texture, 
    #define TEXTURE_SPEC1                                                      0xdb85bbf 	// Geometry Texture, 
    #define TEXTURE_MOUTH_TEETH1                                               0xc1452e3c 	// Geometry Texture, 
    #define TEXTURE_SPEC2                                                      0x9f6c2acc 	// Geometry Texture, 
    #define TEXTURE_CHEVRON_WHITE                                              0x2d48ae46 	// Geometry Texture, 
    #define TEXTURE_BEACH_SAND                                                 0x2f78d10d 	// Geometry Texture, 
    #define TEXTURE_BEACH_GRASS                                                0x7868f104 	// Geometry Texture, 
    #define TEXTURE_MV_BEACH_CLIFF03                                           0xac7a9152 	// Geometry Texture, 
    #define TEXTURE_CHOP_SEA                                                   0x9ac380b 	// Geometry Texture, 
    #define TEXTURE_SEA_FOAM                                                   0x10cc5377 	// Geometry Texture, 
    #define TEXTURE_SKYDOME                                                    0xd06b80cb 	// Geometry Texture, 
    #define TEXTURE_CHOP_LAMPOST                                               0xfc4b6810 	// Geometry Texture, 
    #define TEXTURE_CHOP_BARRIER                                               0xa81bb58 	// Geometry Texture, 
    #define TEXTURE_CHOP_PALM                                                  0x1120769f 	// Geometry Texture, 
    #define TEXTURE_WHITEBITS                                                  0xe2272d61 	// Geometry Texture, 
    #define TEXTURE_SPEC2PALE                                                  0x7bd89809 	// Geometry Texture, 
    #define TEXTURE_AS_BLACK_RAILGALLERY                                       0x247aa7f2 	// Geometry Texture, 
    #define TEXTURE_LIGHTS                                                     0x8b20b51d 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_WINDOWS                                   0xaebbb30b 	// Geometry Texture, 
    #define TEXTURE_LICENSEPLATE                                               0x9e5bbebc 	// Geometry Texture, 
    #define TEXTURE_GRILLE1                                                    0xdc627347 	// Geometry Texture, 
    #define TEXTURE_WHEEL                                                      0x8a5c34b8 	// Geometry Texture, 
    #define TEXTURE_CHOP_POSTER                                                0x136ac7d3 	// Geometry Texture, 
    #define TEXTURE_CHOP_CAFEWINDOW                                            0x6d95da3e 	// Geometry Texture, 
    #define TEXTURE_CHOP_AWNING                                                0x18756413 	// Geometry Texture, 
    #define TEXTURE_CHOP_PARASOL                                               0x515c6104 	// Geometry Texture, 
    #define TEXTURE_CHOP_NOISEGRAD                                             0xabb46047 	// Geometry Texture, 
    #define TEXTURE_CHOP_SLATS                                                 0x66eb9241 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKHANDSB                                          0x351d6650 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKHOLSTER                                         0xf1a29d4b 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKGLASSB1                                         0xa7a57194 	// Geometry Texture, 
    #define TEXTURE_CROCK_HAIRB                                                0xbbdd6db4 	// Geometry Texture, 
    #define TEXTURE_CROCK15B                                                   0xedcabf4a 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKTREWS2B                                         0x7d4937c8 	// Geometry Texture, 
    #define TEXTURE_SUBTLESPEC                                                 0x7c0509ed 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKT02B                                            0x68b4e31c 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKARM02                                           0x2d61fb37 	// Geometry Texture, 
    #define TEXTURE_MV_JB_CROCKSHOE02                                          0x870d7894 	// Geometry Texture, 
    #define TEXTURE_EYEBL1                                                     0x34adfb96 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_MOD                                   0x72134445 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_ADD                                   0x131b22ba 	// Geometry Texture, 
    #define TEXTURE_CHOP_WIND01                                                0x45501bc0 	// Geometry Texture, 
    #define TEXTURE_CHOP_SHOPS                                                 0x1b76a2b4 	// Geometry Texture, 
    #define TEXTURE_CHOP_POOLTILES                                             0x1acc9924 	// Geometry Texture, 
    #define TEXTURE_CHOP_NEON01                                                0x69a7649a 	// Geometry Texture, 
    #define TEXTURE_CHOP_WIND04                                                0x91687a9f 	// Geometry Texture, 
    #define TEXTURE_WHITE_NOISE_DIRT                                           0xb121ad03 	// Geometry Texture, 
    #define TEXTURE_CHOP_CHEESE                                                0xd88ee74e 	// Geometry Texture, 
    #define TEXTURE_CHOP_NEON011                                               0x8005137 	// Geometry Texture, 
    #define TEXTURE_CHOP_DUMPSTER                                              0xd662c84c 	// Geometry Texture, 
    #define TEXTURE_CARDBOARD                                                  0x63662a74 	// Geometry Texture, 
    #define TEXTURE_OSAMA_BIN_LINER                                            0x1588d00a 	// Geometry Texture, 
    #define TEXTURE_AS_MESH_FENCE_POST                                         0x2c43e2c0 	// Geometry Texture, 
    #define TEXTURE_RAILING                                                    0x6c1d60f8 	// Geometry Texture, 
    #define TEXTURE_CHOP_NEON02                                                0xa2f2257 	// Geometry Texture, 
    #define TEXTURE_CHOP_WIND03                                                0x35983559 	// Geometry Texture, 
    #define TEXTURE_CHOP_WIND05                                                0x808c7c0e 	// Geometry Texture, 
    #define TEXTURE_CHOP_WIND06                                                0xccea9a2a 	// Geometry Texture, 
    #define TEXTURE_CHOP_NEON03                                                0xa4c0661c 	// Geometry Texture, 
    #define TEXTURE_BDOOR                                                      0xa5c6413a 	// Geometry Texture, 
    #define TEXTURE_BSIDE                                                      0x23c3a60a 	// Geometry Texture, 
    #define TEXTURE_BBONNET                                                    0x3b3a5685 	// Geometry Texture, 
    #define TEXTURE_WHEELS                                                     0xfcfe3367 	// Geometry Texture, 
    #define TEXTURE_BFRONT_N_REAR_INSET                                        0x363ae794 	// Geometry Texture, 
    #define TEXTURE_BMIDDLE_INSET                                              0xcd37b31d 	// Geometry Texture, 
    #define TEXTURE_BFRONT_SIDE_WING                                           0x744a01d4 	// Geometry Texture, 
    #define TEXTURE_BROOFS                                                     0x29a3e5bd 	// Geometry Texture, 
    #define TEXTURE_BWHEEL_ARCHES                                              0x7246b8bc 	// Geometry Texture, 
    #define TEXTURE_ALMOST_BLACK                                               0x44414554 	// Geometry Texture, 
    #define TEXTURE_GRILLE                                                     0x7e0aea42 	// Geometry Texture, 
    #define TEXTURE_LIGHT_TOP                                                  0x61da9d86 	// Geometry Texture, 
    #define TEXTURE_LIGHT_BOTTOM                                               0x2d9d3684 	// Geometry Texture, 
    #define TEXTURE_GRILLMOUNT22                                               0xe9f8fe90 	// Geometry Texture, 
    #define TEXTURE_BUMPER                                                     0xac85cfe5 	// Geometry Texture, 
    #define TEXTURE_BREAR_LIGHTS                                               0xee6374c9 	// Geometry Texture, 
    #define TEXTURE_CHOP_WINREF                                                0xbeb3656b 	// Geometry Texture, 
    #define TEXTURE_MANHOLE_QUATER                                             0x7d8e3625 	// Geometry Texture, 
    #define TEXTURE_METAL                                                      0x34480892 	// Geometry Texture, 
    #define TEXTURE_METAL_PIPE                                                 0x6ea1a5ec 	// Geometry Texture, 
    #define TEXTURE_32X_GENERIC                                                0xf0354629 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_CHROME                                    0xfa554e64 	// Geometry Texture, 
    #define TEXTURE_RED_LIGHTS                                                 0x3c79a13e 	// Geometry Texture, 
    #define TEXTURE_AS_DUCT_GREYLEFT_BASEMENT                                  0x1df1c3cd 	// Geometry Texture, 
    #define TEXTURE_WHEELPORSCHE                                               0x73c6f7b2 	// Geometry Texture, 
    #define TEXTURE_SHADOW2                                                    0x57e674f6 	// Geometry Texture, 
    #define TEXTURE_TOOLCHEST                                                  0xd2018ecc 	// Geometry Texture, 
    #define TEXTURE_WARNING_LIGHT_ORANGE                                       0x4aaeba13 	// Geometry Texture, 
    #define TEXTURE_AS_LIGHT_COVER                                             0xd927e949 	// Geometry Texture, 
    #define TEXTURE_WIRE                                                       0x22f58a44 	// Geometry Texture, 
    #define TEXTURE_WHITEALPHA8X8                                              0xe760cb9f 	// Geometry Texture, 
    #define TEXTURE_DOWNLIGHT                                                  0x68b82e84 	// Geometry Texture, 
    #define TEXTURE_DIRT                                                       0x31299204 	// Geometry Texture, 
    #define TEXTURE_DESKWOOD2                                                  0x450e1955 	// Geometry Texture, 
    #define TEXTURE_LEATHER_OFFICE                                             0x2a8a0c4 	// Geometry Texture, 
    #define TEXTURE_FILING_CABINET                                             0xb256d494 	// Geometry Texture, 
    #define TEXTURE_TOILET                                                     0xda62ab21 	// Geometry Texture, 
    #define TEXTURE_METAL_HORIZ_TILE                                           0x2c4aa95b 	// Geometry Texture, 
    #define TEXTURE_AS_BLACK_RAILGALLERY1                                      0xec8dd4f9 	// Geometry Texture, 
    #define TEXTURE_TIN_METAL                                                  0xa02017b7 	// Geometry Texture, 
    #define TEXTURE_GAL_SOIL_DRY01                                             0x47486459 	// Geometry Texture, 
    #define TEXTURE_CONTAINER                                                  0xafe40dd9 	// Geometry Texture, 
    #define TEXTURE_DOORLOCK2                                                  0x8322d687 	// Geometry Texture, 
    #define TEXTURE_CHOP_PATCHB                                                0x70796519 	// Geometry Texture, 
    #define TEXTURE_CHOP_DRAIN                                                 0xe1f2a58a 	// Geometry Texture, 
    #define TEXTURE_CHOP_PATCHA                                                0x7ad4630a 	// Geometry Texture, 
    #define TEXTURE_AIR_CON2                                                   0xe4157294 	// Geometry Texture, 
    #define TEXTURE_LEATHER1                                                   0xc0b734b8 	// Geometry Texture, 
    #define TEXTURE_REDWOOD                                                    0xa7f7f058 	// Geometry Texture, 
    #define TEXTURE_BEDWHITE1                                                  0x7e7ee904 	// Geometry Texture, 
    #define TEXTURE_TV_CARCASS                                                 0x65bf24d1 	// Geometry Texture, 
    #define TEXTURE_TV_SCREEN                                                  0x2be85cd7 	// Geometry Texture, 
    #define TEXTURE_BEACH_WHITE_RAIL                                           0xd0b4a249 	// Geometry Texture, 
    #define TEXTURE_TOOL_BOARD                                                 0x5ae3f293 	// Geometry Texture, 
    #define TEXTURE_OXYGAUGE                                                   0x8b2ab536 	// Geometry Texture, 
    #define TEXTURE_OXYTANK                                                    0xa6446025 	// Geometry Texture, 
    #define TEXTURE_UPLIGHTER_GLASS                                            0xc6d522ad 	// Geometry Texture, 
    #define TEXTURE_UPLIGHTER_METAL                                            0x934a50ac 	// Geometry Texture, 
    #define TEXTURE_GLASSTABLE                                                 0x7c39c046 	// Geometry Texture, 
    #define TEXTURE_CHOP_LILLY                                                 0x32d178b4 	// Geometry Texture, 
    #define TEXTURE_CHOP_SEPIA                                                 0xf8bb065f 	// Geometry Texture, 
    #define TEXTURE_BRIEF_CHAIR                                                0xd5341106 	// Geometry Texture, 
    #define TEXTURE_CHOP_PLATE                                                 0x13b5f715 	// Geometry Texture, 
    #define TEXTURE_CHOP_APARTDOORB                                            0x92ae5df7 	// Geometry Texture, 
    #define TEXTURE_PHONE_BLACK                                                0xae2b7ff6 	// Geometry Texture, 
    #define TEXTURE_CHOP_GATE                                                  0x3750c224 	// Geometry Texture, 
    #define TEXTURE_SCORCH1                                                    0xb970f9e2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_TROU                                     0x1868224c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICSHOE03                                        0xd6c6f905 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_GLOVE                                    0x45584f0f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_FULL_ARM03W                                  0x26e4c7fa 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_SLEAVE                                   0xe98092e2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_BODY                                     0x3315942d 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TSHIRT                                               0x7ccc6ee8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY04                                       0x42548470 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU01                                       0x668b6438 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM04                                        0xeae34166 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SLEAVLESS04                                          0x4f9be70b 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY02                                       0x4eec444e 	// Geometry Texture, 
    #define TEXTURE_MV_JBGS_GENTROU3                                           0x7b464179 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM02                                        0x3b02463e 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSUITVESTO_04                                        0x354040f2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTBODY09                                         0x8343cb27 	// Geometry Texture, 
    #define TEXTURE_MV_JBGS_GENTROU4                                           0x6c335dd5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_FULL_ARM02W                                  0xfcf3c292 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY05                                       0x875f992f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU05                                       0x5e941ca3 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM05                                        0x9a55e3e3 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTFRONT03                                        0xa75991bd 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_BODY                                      0x5cd97ecc 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_BLACK_LEATHER                             0xbbd3f3bd 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_LIGHTS                                    0xa5902d15 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_LIGHTS2                                   0x6f794b9e 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_INTERIORTAN                               0x130ebfdc 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_WHEELS                                    0xabec66bb 	// Geometry Texture, 
    #define TEXTURE_00_LD_MV_DAYTONA_SPOKES                                    0x87e0beed 	// Geometry Texture, 
    #define TEXTURE_HANGER_DOOR                                                0xf2cb2b0a 	// Geometry Texture, 
    #define TEXTURE_WATERDAMAGE                                                0x892ecfab 	// Geometry Texture, 
    #define TEXTURE_FAB                                                        0x6f9f1ccd 	// Geometry Texture, 
    #define TEXTURE_CBCABLE                                                    0xcf06c752 	// Geometry Texture, 

    #define GEOMETRY_02_APARTMENT                                              0x9fa59be1
    #define GEOMETRY_03_APARTMENT_LOUNGE                                       0xb8b3a672
    #define GEOMETRY_03_GARAGE_A                                               0x720c4d4d
    #define GEOMETRY_03_GARAGE_B                                               0xdf6c1540
    #define GEOMETRY_04_ROAD                                                   0x73162c29
    #define GEOMETRY_05_ROAD_A                                                 0x3b9c2140
    #define GEOMETRY_06_ROAD                                                   0x7c35f65b
    #define GEOMETRY_07_PARKING                                                0x22c5aac8
    #define GEOMETRY_08_STREET_OUT                                             0x502773e6
    #define GEOMETRY_DOOR                                                      0x410a524e
    #define GEOMETRY_JUAN_HENCHMAN_01                                          0x9e13780b
    #define GEOMETRY_KEY                                                       0x27b642cf
    #define GEOMETRY_02_APARTMENT_ENTRANCE                                     0xceb4afcb
    #define GEOMETRY_04_3ROAD                                                  0x6c9f808c
    #define GEOMETRY_04_2ROAD                                                  0x199e67b4
    #define GEOMETRY_03_APARTMENT_LOUNGE2                                      0x21e3d921
    #define GEOMETRY_03_APARTMENT_LOUNGE3                                      0xd04f8e68
    #define GEOMETRY_PALMTREE_BASE                                             0xb2e529af
    #define GEOMETRY_05_ROAD_A3                                                0x974bfbfa
    #define GEOMETRY_05_ROAD_A2                                                0xcbccda9c
    #define GEOMETRY_05_ROAD_A23                                               0xd585b233
    #define GEOMETRY_03_GARAGE_A4                                              0xd1c6b102
    #define GEOMETRY_03_GARAGE_A2                                              0x7c6c7486
    #define GEOMETRY_03_GARAGE_A3                                              0xb2605e55
    #define GEOMETRY_03_GARAGE_B22                                             0x7cf930fd
    #define GEOMETRY_TUBBS_BODY5                                               0x1d0be275
    #define GEOMETRY_CHEVRON_WHITE                                             0x7601f299
    #define GEOMETRY_BEACH_BEACH                                               0xf00ad3ff
    #define GEOMETRY_CHOP_BEACH_PATH                                           0x3c04ecb8
    #define GEOMETRY_CHOP_SEA                                                  0x558d2a2a
    #define GEOMETRY_CHOP_FOAM                                                 0xa3b5d29c
    #define GEOMETRY_SKYDOME_CHOPSHOP                                          0xfce29254
    #define GEOMETRY_CHOPLAMPOST                                               0xa48e424b
    #define GEOMETRY_CHOP_CARPARK                                              0x6b9deeda
    #define GEOMETRY_CHOP_BARRIER                                              0x83f2f227
    #define GEOMETRY_CHOP_PALM                                                 0x4a14e8ad
    #define GEOMETRY_SALOON_BODY                                               0x1e0426bf
    #define GEOMETRY_SALOON_CHROME                                             0x18c7880d
    #define GEOMETRY_SALOON_GLASSUNDER                                         0xba516a9
    #define GEOMETRY_WHEEL                                                     0xdfbd1a0c
    #define GEOMETRY_CHOP_POSTER                                               0xbc8339df
    #define GEOMETRY_CHOP_CAFEWINDOW                                           0x7883fd20
    #define GEOMETRY_CHOP_AWNING                                               0xe0f9cab0
    #define GEOMETRY_CHOP_PARASOL                                              0xbb7255e1
    #define GEOMETRY_CHOP_PARAPOLE                                             0x50fa694e
    #define GEOMETRY_CHOP_CHAIR                                                0xb715a0b9
    #define GEOMETRY_CHOP_TABLE                                                0x7e9f5567
    #define GEOMETRY_CROCKETT_SKIN_2                                           0x6ca3f709
    #define GEOMETRY_CHOP_LOWERWALL                                            0xefc9a46e
    #define GEOMETRY_CHOP_BALCL                                                0x3b866c98
    #define GEOMETRY_CHOP_BALCR                                                0xc659fb2e
    #define GEOMETRY_CHOP_CENT                                                 0x610df06b
    #define GEOMETRY_CHOP_ROOFB                                                0xc12eee3c
    #define GEOMETRY_CHOP_SIDESTREET                                           0x2b6df0f2
    #define GEOMETRY_CHOP_SHOPSA                                               0x8c14bf68
    #define GEOMETRY_CHOP_SHOPSB                                               0x2174e765
    #define GEOMETRY_CHOP_SHOPSC                                               0xb9ebdbf3
    #define GEOMETRY_09_ROAD                                                   0x564f1c3c
    #define GEOMETRY_CHOP_FLATWINDOW                                           0x5c4af4f1
    #define GEOMETRY_CHOP_POOL                                                 0x93209cf1
    #define GEOMETRY_CHOP_HOTEL_SIGN                                           0x967f2d89
    #define GEOMETRY_CHOP_LOWERWALLSH                                          0xcbfa04ca
    #define GEOMETRY_CHOP_UPPERWALLC                                           0xae0f4f5d
    #define GEOMETRY_CHOP_UPPERWALLB                                           0x870d1bbd
    #define GEOMETRY_CHOP_HFACADE                                              0xa872d528
    #define GEOMETRY_CHOP_UPPERWALLD                                           0x7100e1fd
    #define GEOMETRY_CHOP_RAILING                                              0x1a52951c
    #define GEOMETRY_CHOP_STEPS                                                0x64ce6353
    #define GEOMETRY_CHOP_BEDS                                                 0xb777e24e
    #define GEOMETRY_CHOP_CHEESE                                               0xbf734965
    #define GEOMETRY_CHOP_NEON01                                               0xbd72f51e
    #define GEOMETRY_CHOP_NEON02                                               0xc674083e
    #define GEOMETRY_CHOP_NEON03                                               0xef765cde
    #define GEOMETRY_CHOP_NEON04                                               0x3079f27e
    #define GEOMETRY_CHOP_NEON05                                               0x197ba69e
    #define GEOMETRY_CHOP_NEON06                                               0x627d5bbe
    #define GEOMETRY_CHOP_NEON07                                               0x4b7f0f5e
    #define GEOMETRY_CHOP_DUMP                                                 0x65a2ca33
    #define GEOMETRY_CHOP_DUMPLID                                              0x2352db62
    #define GEOMETRY_CARD_SMALLBOX_OPEN                                        0x3bc291bf
    #define GEOMETRY_CARD_SMALLBOX_CLOSED                                      0xdf1c04fa
    #define GEOMETRY_CHOP_REFUSE                                               0xc4def393
    #define GEOMETRY_MESH_RAILING                                              0x3cbbcd18
    #define GEOMETRY_CHOP_NEONSTRIP                                            0xda8f0572
    #define GEOMETRY_CHOP_DOOR01                                               0x693bafcf
    #define GEOMETRY_CHOP_UPPERWALLE                                           0x5802b51d
    #define GEOMETRY_CHOP_LOWWIND                                              0xbf33efef
    #define GEOMETRY_CHOP_NEON13                                               0x57c8fa31
    #define GEOMETRY_CHOP_NEON08                                               0xd8a31b49
    #define GEOMETRY_CHOP_NEON09                                               0xf1a14fa9
    #define GEOMETRY_CHOP_NEON10                                               0x2cce0711
    #define GEOMETRY_CHOP_NEON11                                               0x5cc53f1
    #define GEOMETRY_CHOP_NEON12                                               0x7ecaaed1
    #define GEOMETRY_CHOP_VARIBRICK                                            0xa69b9d7a
    #define GEOMETRY_GMC_BLACK_SOLID                                           0xc2115466
    #define GEOMETRY_MESH_GATE                                                 0x7677ba8d
    #define GEOMETRY_MANHOLE                                                   0x2d0546bf
    #define GEOMETRY_METAL_WALKWAY_NOSIDE                                      0xad78a5ec
    #define GEOMETRY_METALCORNER                                               0x5d05574e
    #define GEOMETRY_METALSTEP                                                 0xba3a3cdb
    #define GEOMETRY_ESPRIT                                                    0x3170d0be
    #define GEOMETRY_ESPRIT_TRIM                                               0xf37ea6aa
    #define GEOMETRY_MUSTANG                                                   0x8dbf5ac
    #define GEOMETRY_MUSTANG_TRIM                                              0x3e3285dc
    #define GEOMETRY_PORSCHE911                                                0xfaf339c4
    #define GEOMETRY_PORSCHE_TRIM                                              0x9e272a98
    #define GEOMETRY_SPORTS_WHEEL                                              0x92589023
    #define GEOMETRY_METAL_SUPPORT                                             0x4d66afc7
    #define GEOMETRY_SHADOW_GENERIC                                            0x7d3fcdb2
    #define GEOMETRY_CHOP_AUTORAMP                                             0xaa8be897
    #define GEOMETRY_METAL_POST                                                0x5b9a797d
    #define GEOMETRY_TOOL_CHEST                                                0xf7646103
    #define GEOMETRY_CHOP_GARWIN01                                             0x854b6e31
    #define GEOMETRY_ORANGE_LIGHT                                              0x47bbbffc
    #define GEOMETRY_STRIPLIGHT_HUNG                                           0x399a65f1
    #define GEOMETRY_LIGHTRAYS                                                 0x56a21bca
    #define GEOMETRY_DIRT                                                      0xbd8ac1b2
    #define GEOMETRY_EXHAUST_PIPE_BEND                                         0x83b4a0fc
    #define GEOMETRY_EXHAUST_PIPE_LONG                                         0x24d6a9b4
    #define GEOMETRY_METAL_WALKWAY                                             0xc2d36be5
    #define GEOMETRY_METALRAIL                                                 0xcbdf969d
    #define GEOMETRY_DESK_DARKWOOD                                             0x42bde79f
    #define GEOMETRY_LEATHER_CHAIR                                             0x8934c3b7
    #define GEOMETRY_FILING_CABINET_LARGE                                      0xa41e2a82
    #define GEOMETRY_CABINET_DRAWER                                            0x739b5707
    #define GEOMETRY_LEDGER_GREEN                                              0x9d98b621
    #define GEOMETRY_LEDGER_BROWN                                              0x801ef458
    #define GEOMETRY_TOILET                                                    0x587acc01
    #define GEOMETRY_MOPBUCKET                                                 0x7ea1e625
    #define GEOMETRY_MELAMINE_PANEL                                            0xce7fd88f
    #define GEOMETRY_PANEL_FOOT                                                0xd304d5aa
    #define GEOMETRY_CHOP_OFFICEINNER                                          0x605b2b40
    #define GEOMETRY_CHOP_PATCHB                                               0xad3d0b70
    #define GEOMETRY_CHOP_DRAIN                                                0x63c3b958
    #define GEOMETRY_CHOP_PATCHA                                               0x5d537d
    #define GEOMETRY_AIRCON2                                                   0x5936c184
    #define GEOMETRY_COUCH_2SEATER                                             0xaee33f5a
    #define GEOMETRY_BED_WHITE                                                 0xceea3654
    #define GEOMETRY_CHOP_BLINDS                                               0x6ff6249d
    #define GEOMETRY_BIGTV                                                     0x11b650ec
    #define GEOMETRY_CHOP_PANE                                                 0x94e66d1a
    #define GEOMETRY_TOOL_BOARD                                                0xc364ca2a
    #define GEOMETRY_OXY_GAUGE                                                 0x3840a835
    #define GEOMETRY_OXY_TANK                                                  0x80c19251
    #define GEOMETRY_UPLIGHTER                                                 0xe6c3c4d0
    #define GEOMETRY_GLASS_TABLE                                               0x3513157f
    #define GEOMETRY_CHOP_LILLY                                                0x6f7ab26f
    #define GEOMETRY_CHOP_SKIRTING                                             0xb7fd08b9
    #define GEOMETRY_CHOP_SEPIAB                                               0xcf75fd69
    #define GEOMETRY_CHOP_SEPIAA                                               0x6215a564
    #define GEOMETRY_PLAIN_CHAIR                                               0x4c86bf64
    #define GEOMETRY_DOOR_CHOPAPART                                            0x1bd42f0d
    #define GEOMETRY_CHOP_SHAFT                                                0xffa24506
    #define GEOMETRY_DOOR_CHOPAPARTB                                           0x8eb40728
    #define GEOMETRY_PHONE_MAIN                                                0xa29d1dad
    #define GEOMETRY_PHONE_HANDSET                                             0x1ca5c364
    #define GEOMETRY_CHOP_WIRES                                                0xcd7b928e
    #define GEOMETRY_CHEVRON_CURVE                                             0x42d88941
    #define GEOMETRY_DOOR_CHOPGATE                                             0x5110425b
    #define GEOMETRY_BSCORCH1                                                  0xe9a59da9
    #define GEOMETRY_CARGO_SHIP_WORKER02                                       0x9bb33dbc
    #define GEOMETRY_JUAN_HENCHMAN_05                                          0x840f878
    #define GEOMETRY_JUAN_HENCHMAN_02                                          0x33fe9198
    #define GEOMETRY_JUAN_HENCHMAN_03                                          0x575a36e9
    #define GEOMETRY_JUAN_HENCHMAN_04                                          0x6ce45f09
    #define GEOMETRY_DAYTONA                                                   0x81ef53a3
    #define GEOMETRY_HANGER_MAIN_DOOR                                          0x9ef5ef26
    #define GEOMETRY_WATERDAMAGE                                               0x59aed453
    #define GEOMETRY_MOVEMENT_COLLISION_BOX                                    0x2212f138
    #define GEOMETRY_CAMERA_COLLISION_BOX                                      0x2aa5746d
    #define GEOMETRY_METALSTEP_END                                             0xb8f534df
    #define GEOMETRY_METALSTEP_START                                           0x6aaf97d
    #define GEOMETRY_FIRSTAID                                                  0xc0877e88
    #define GEOMETRY_CBCABLE                                                   0xca703328

    #define FX_MANHOLE_SMOKE                                                   0x4aeb3f10
    #define FX_FIRE                                                            0xba6c6fbe
    #define FX_LARGE_FIRE                                                      0x6700fcb6
    #define FX_FLAMES                                                          0x3d27eb19
    #define FX_SMOKEBLACK                                                      0x28ac1ee1
    #define FX_FLAMES2                                                         0x1fa4a2ba
    #define FX_OILYFIRE                                                        0x16dbd75a
    #define FX_EXPLOSION                                                       0xf1319fe8
    #define FX_FLARE                                                           0x457df493
    #define FX_EXPLOSION2                                                      0x6156574a

    #define PLAYER_START_POINT_CROCKETT_START                                  0x3091fb5f
    #define PLAYER_START_POINT_TUBBS_START                                     0x77983874
    #define PLAYER_START_POINT_PARKINGLOT_CP_1                                 0xc2b251f3
    #define PLAYER_START_POINT_PARKINGLOT_CP_2                                 0xcff1772a
    #define PLAYER_START_POINT_PARKINGLOT_CP_3                                 0xcb306a9d
    #define PLAYER_START_POINT_PARKINGLOT_CP_4                                 0xd5773a98
    #define PLAYER_START_POINT_GARAGE2_CP_1                                    0x7424c001
    #define PLAYER_START_POINT_GARAGE3_CP_1                                    0xa8495ab6
    #define PLAYER_START_POINT_GARAGE3_CP_2                                    0xa50a7c6f
    #define PLAYER_START_POINT_GARAGE3_CP_3                                    0xa1cb61d8
    #define PLAYER_START_POINT_GARAGE3_CP_4                                    0xbf8c31dd
    #define PLAYER_START_POINT_GARAGE4_CP_1                                    0xb4cba4dd
    #define PLAYER_START_POINT_GARAGE4_CP_2                                    0xb9888204
    #define PLAYER_START_POINT_GARAGE_CP_1                                     0xd2986f8
    #define PLAYER_START_POINT_GARAGE_CP_1_COPY_1                              0x7568665e
    #define PLAYER_START_POINT_GARAGE4_CP_1_COPY_1                             0x2c788cc5
    #define PLAYER_START_POINT_GARAGE4_CP_2_COPY_1                             0x1009b4d
    #define PLAYER_START_POINT_GARAGE3_CP_1_COPY_1                             0xfbf9e099
    #define PLAYER_START_POINT_GARAGE3_CP_2_COPY_1                             0xd681f711
    #define PLAYER_START_POINT_GARAGE2_CP_1_COPY_2                             0x4ba6c26
    #define PLAYER_START_POINT_GARAGE3_CP_4_COPY_1                             0x8c71d801
    #define PLAYER_START_POINT_GARAGE2_CP_1_COPY_1                             0x9f94aff
    #define PLAYER_START_POINT_PARKINGLOT_CP_1_COPY_1                          0x3328a5e5
    #define PLAYER_START_POINT_PARKINGLOT_CP_2_COPY_1                          0x1e50b26d
    #define PLAYER_START_POINT_PARKINGLOT_CP_3_COPY_1                          0x578bf15
    #define PLAYER_START_POINT_PARKINGLOT_CP_4_COPY_1                          0x44a09d7d
    #define PLAYER_START_POINT_GARAGE3_CP_1_COPY_2                             0xf6bac640
    #define PLAYER_START_POINT_GARAGE3_CP_2_COPY_2                             0xdbc2d1c8

    #define POINT_GROUP_BAD_RUN02_00                                           0x2a9f202e
    #define POINT_GROUP_BAD_RUN02_00_POINT_BAD_RUN02_01                        0x2e5e3d99
    #define POINT_GROUP_BAD_RUN02_00_POINT_BAD_RUN02_02                        0x231d1b40
    #define POINT_GROUP_BAD_RUN02_00_POINT_BAD_RUN02_03                        0x27dc06f7
    #define POINT_GROUP_BAD_RUN02_00_POINT_BAD_RUN02_04                        0x399b56f2
    #define POINT_GROUP_BAD_RUN02_00_POINT_BAD_RUN02_05                        0x3d5a4b45
    #define POINT_GROUP_BAD_RUN02_00_POINT_BAD_RUN02_06                        0x30196d9c

    #define POINT_GROUP_BAD_RUN01_00                                           0x28f6d5a7
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_01                        0x2c37c810
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_02                        0x2174eec9
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_03                        0x25b5f37e
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_04                        0x3bf2a37b
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_05                        0x3f33becc
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_06                        0x32709815
    #define POINT_GROUP_BAD_RUN01_00_POINT_BAD_RUN01_08                        0xefe381f

    #define TIMELINE_INSTANCE_TIMELINE_SINGLEDOOR                              0x9dcdcadb
    #define TIMELINE_INSTANCE_TIMELINE_ASSASSINESCAPEDOOR                      0xb17d7fca
    #define TIMELINE_INSTANCE_TIMELINE_BACKTOAPARTMENTLOBBY                    0x7a7a5dca
    #define TIMELINE_INSTANCE_TIMELINE_DOUBLEDOOR                              0xfa836a8c
    #define TIMELINE_INSTANCE_TIMELINE_EXIT2STREET                             0xb0741ee6
    #define TIMELINE_INSTANCE_CUT_SCENE_19                                     0xb34f997e
    #define TIMELINE_INSTANCE_CUT_SCENE_20                                     0xe36d36a2
    #define TIMELINE_INSTANCE_CUT_SCENE_20B                                    0x98d8e3b2
    #define TIMELINE_INSTANCE_CHOP_SHOP_START                                  0x8ea975af
    #define TIMELINE_INSTANCE_KEY_FLIGHT                                       0xf68e3991
    #define TIMELINE_INSTANCE_DOOR_FIX                                         0xf6a4c6cb

    #define NAVMESH_NAVMESH                                                    0x755a642d
    #define NAVMESH_GARAGE_NAVMESH                                             0x180c0531
    #define NAVMESH_LOWER_GARAGE_NAVMESH                                       0x76450b26
    #define NAVMESH_APARTMENT_NAVMESH                                          0xe81128d7
    #define NAVMESH_OFFICE_NAVMESH                                             0xcf1f4c97
    #define NAVMESH_GARAGE                                                     0x66be444d
    #define NAVMESH_TOPFLOORBURN                                               0x5235869a

    #define HULL_CHOP_SHOP                                                     0xc27ea450
    #define HULL_STORAGE                                                       0xad83647a
    #define HULL_APARTMENT_ENTRANCE                                            0xecd30b33
    #define HULL_ROAD_4_2                                                      0x3805af63
    #define HULL_ROAD_4_3                                                      0x3cc4b2d4
    #define HULL_ROAD_4                                                        0x97deef97
    #define HULL_APARTMENT_MAIN                                                0x4d4a8050
    #define HULL_ROAD_5_A                                                      0x7eb5581
    #define HULL_LOUNGE2                                                       0xea2c5cac
    #define HULL_LOUNGE3                                                       0xeeed411b
    #define HULL_APARTMENT_BALCONY                                             0x831017c1
    #define HULL_ROAD_6                                                        0x9e5cd4f9
    #define HULL_ROAD_7                                                        0x9a9dc94e
    #define HULL_PARKING_LOTT                                                  0x522d03d7
    #define HULL_GARAGE                                                        0x66be444d
    #define HULL_ROAD_FRONT_CORNER                                             0x97644859
    #define HULL_ROAD_23                                                       0xd9120d72
    #define HULL_GARAGE2                                                       0xd5d796dc
    #define HULL_GARAGE3                                                       0xd1168b6b
    #define HULL_GARAGE4                                                       0xcf51db6e
    #define HULL_PARKING_VIEW                                                  0x2b1109a3
    #define HULL_GARAGE_OFFICE22                                               0x1c65971c
    #define HULL_ROAD_ONLY_MIDDLEFRONT                                         0x7c1118ed
    #define HULL_BEACH_HULL                                                    0xa590bb5b
    #define HULL_SKYDOME_HULL                                                  0x4896a91
    #define HULL_CARPARK_HULL                                                  0xe6a6761a
    #define HULL_SIDE_STREET                                                   0x84fe2247
    #define HULL_STREET_END_HULL                                               0x537fe91e
    #define HULL_APARTMENT_POOL                                                0x56ee8a9
    #define HULL_APART_MINOR_A_HULL                                            0xa4e174e5
    #define HULL_APART_MINOR_B_HULL                                            0x7ff6dc72
    #define HULL_APART_MINOR_C_HULL                                            0x36fbbbff
    #define HULL_APART_MINOR_D_HULL                                            0xcd1890eb
    #define HULL_APART_MINOR_E_HULL                                            0x8415f766
    #define HULL_OFFICE_INNER_HULL                                             0x3c6c7df
    #define HULL_GARAGE_SHAFT                                                  0x33f52907
    #define HULL_CHOP_SHOP_B                                                   0x17a8b8e7
    #define HULL_GARAGE_SHAFT_B                                                0x115c0c5c
    #define HULL_GARAGE_OFFICE22_B                                             0x218e1902
    #define HULL_GARAGE_B                                                      0x35638b3b
    #define HULL_GARAGE4_B                                                     0x91a0f35
    #define HULL_OFFICE_INNER_HULL_B                                           0xf680bdd0
    #define HULL_GARAGE3_B                                                     0x3ed5714f
    #define HULL_GARAGE2_B                                                     0xecccb093
    #define HULL_PARKING_LOTT_B                                                0x6112077c

    // Hull: Chop_Shop
    #define FX_INSTANCE_FIRE_AREA1_02                                          0x817bfc9e
    #define FX_INSTANCE_FIRE_AREA1_01_COPY_3                                   0xde076215
    #define FX_INSTANCE_FIRE_AREA1_22                                          0x21896291
    #define FX_INSTANCE_FIRE_AREA1_25                                          0x3fce3294

    // Hull: road_4_3
    #define FX_INSTANCE_MANHOLE_SMOKE_COPY_1                                   0x786639e0

    // Hull: road 6
    #define FX_INSTANCE_MANHOLE_SMOKE                                          0x4aeb3f10

    // Hull: parking lott
    #define FX_INSTANCE_MANHOLE_SMOKE_COPY_2                                   0x75251f39
    #define FX_INSTANCE_FIRE                                                   0xba6c6fbe
    #define FX_INSTANCE_FIRE_COPY_1                                            0x65b34867
    #define FX_INSTANCE_FIRE_COPY_2                                            0x68f06ebe
    #define FX_INSTANCE_FIRE_COPY_3                                            0x6c317309
    #define FX_INSTANCE_FIRE_COPY_4                                            0x7276230c
    #define FX_INSTANCE_FIRE_COPY_5                                            0x76b73ebb
    #define FX_INSTANCE_FIRE_COPY_6                                            0x7bf41862
    #define FX_INSTANCE_FIRE_COPY_7                                            0x7f3505d5
    #define FX_INSTANCE_FIRE_COPY_8                                            0x477ab868
    #define FX_INSTANCE_LARGE_FIRE                                             0x6700fcb6
    #define FX_INSTANCE_LARGE_FIRE_COPY_1                                      0x1f423c21
    #define FX_INSTANCE_LARGE_FIRE_COPY_2                                      0x12011af8
    #define FX_INSTANCE_LARGE_FIRE_COPY_3                                      0x16c0074f
    #define FX_INSTANCE_LARGE_FIRE_COPY_4                                      0x887574a
    #define FX_INSTANCE_LARGE_FIRE_COPY_5                                      0xc464afd
    #define FX_INSTANCE_LARGE_FIRE_COPY_6                                      0x1056c24

    // Hull: garage
    #define FX_INSTANCE_FLARE_COPY_2                                           0x60d5b166
    #define FX_INSTANCE_FLARE_COPY_3                                           0x6414acd1

    // Hull: garage3
    #define FX_INSTANCE_FLARE                                                  0x457df493
    #define FX_INSTANCE_FLARE_COPY_1                                           0x6d9697bf

    // Hull: garage4
    #define FX_INSTANCE_FLARE_COPY_4                                           0x7a53fcd4
    #define FX_INSTANCE_FLARE_COPY_5                                           0x7e92e163

    // Hull: garage office22
    #define FX_INSTANCE_FIRE_COPY_9                                            0x43bba5df
    #define FX_INSTANCE_EXPLOSION_01                                           0x8e327503
    #define FX_INSTANCE_EXPLOSION                                              0xf1319fe8
    #define FX_INSTANCE_EXPLOSION_COPY_1                                       0x93a4c6ef
    #define FX_INSTANCE_EXPLOSION_COPY_2                                       0x9ee7e036
    #define FX_INSTANCE_EXPLOSION2                                             0x6156574a

    // Hull: garage_shaft
    #define FX_INSTANCE_FLARE_COPY_6                                           0x73d1c7ba
    #define FX_INSTANCE_FLARE_COPY_7                                           0x7710da0d

    // Hull: Chop_Shop B
    #define FX_INSTANCE_LARGE_FIRE_COPY_7                                      0x5c47193
    #define FX_INSTANCE_LARGE_FIRE_COPY_8                                      0x3d8bcc2e
    #define FX_INSTANCE_LARGE_FIRE_COPY_9                                      0x394ad199
    #define FX_INSTANCE_LARGE_FIRE_COPY_10                                     0xe2502452
    #define FX_INSTANCE_LARGE_FIRE_COPY_11                                     0xe69139e5
    #define FX_INSTANCE_LARGE_FIRE_COPY_12                                     0xebd21f3c
    #define FX_INSTANCE_LARGE_FIRE_COPY_13                                     0xef13028b
    #define FX_INSTANCE_LARGE_FIRE_COPY_14                                     0xf154528e
    #define FX_INSTANCE_LARGE_FIRE_COPY_15                                     0xf5954f39
    #define FX_INSTANCE_FLAMES                                                 0x3d27eb19
    #define FX_INSTANCE_FLAMES_COPY_1                                          0x56c20ab
    #define FX_INSTANCE_FLAMES_COPY_2                                          0x82f0672
    #define FX_INSTANCE_FLAMES_COPY_3                                          0xcee1bc5
    #define FX_INSTANCE_FLAMES_COPY_4                                          0x12a94bc0
    #define FX_INSTANCE_FLAMES_COPY_5                                          0x16685677
    #define FX_INSTANCE_FLAMES_COPY_6                                          0x1b2b70ae
    #define FX_INSTANCE_FLAMES_COPY_7                                          0x1fea6d19
    #define FX_INSTANCE_FLAMES_COPY_8                                          0x27a5d0a4
    #define FX_INSTANCE_FLAMES_COPY_9                                          0x2364cd13
    #define FX_INSTANCE_FLAMES_COPY_10                                         0xafd7a6f7
    #define FX_INSTANCE_FLAMES_COPY_11                                         0xab16bb40
    #define FX_INSTANCE_FLAMES_COPY_12                                         0xa6559d99
    #define FX_INSTANCE_FLAMES_COPY_26                                         0xc7bab496
    #define FX_INSTANCE_LARGE_FIRE_COPY_36                                     0x5824f7ef
    #define FX_INSTANCE_LARGE_FIRE_COPY_37                                     0x5ce5ea58
    #define FX_INSTANCE_FLAMES_COPY_27                                         0xc37ba921
    #define FX_INSTANCE_FLAMES_COPY_28                                         0xfb34149c
    #define FX_INSTANCE_FLAMES_COPY_62                                         0x919ae3e3
    #define FX_INSTANCE_FLAMES_COPY_63                                         0x955bfe54
    #define FX_INSTANCE_FLAMES_COPY_64                                         0x8b1cae51
    #define FX_INSTANCE_FLAMES_COPY_65                                         0x8fddb3e6
    #define FX_INSTANCE_FLAMES_COPY_66                                         0x829e953f
    #define FX_INSTANCE_FLAMES_COPY_67                                         0x865f8888
    #define FX_INSTANCE_LARGE_FIRE_COPY_60                                     0xd59f5a28
    #define FX_INSTANCE_LARGE_FIRE_COPY_61                                     0xd15e479f
    #define FX_INSTANCE_LARGE_FIRE_COPY_62                                     0xdc1d6146
    #define FX_INSTANCE_LARGE_FIRE_COPY_63                                     0xd8dc7cf1
    #define FX_INSTANCE_LARGE_FIRE_COPY_64                                     0xc69b2cf4
    #define FX_INSTANCE_LARGE_FIRE_COPY_65                                     0xc25a3143
    #define FX_INSTANCE_LARGE_FIRE_COPY_66                                     0xcf19179a
    #define FX_INSTANCE_LARGE_FIRE_COPY_67                                     0xcbd80a2d
    #define FX_INSTANCE_LARGE_FIRE_COPY_68                                     0xf397b790
    #define FX_INSTANCE_LARGE_FIRE_COPY_69                                     0xf756aa27
    #define FX_INSTANCE_FLAMES_COPY_68                                         0xbe103535
    #define FX_INSTANCE_FLAMES_COPY_69                                         0xbad12882
    #define FX_INSTANCE_FLAMES_COPY_70                                         0x4a011951
    #define FX_INSTANCE_FLAMES_COPY_71                                         0x4ec004e6
    #define FX_INSTANCE_FLAMES_COPY_72                                         0x4383223f
    #define FX_INSTANCE_FLAMES_COPY_73                                         0x47423f88
    #define FX_INSTANCE_FLAMES_COPY_74                                         0x59056f8d
    #define FX_INSTANCE_FLAMES_COPY_75                                         0x5dc4723a
    #define FX_INSTANCE_FLAMES_COPY_76                                         0x508754e3
    #define FX_INSTANCE_LARGE_FIRE_COPY_70                                     0x7869bf4
    #define FX_INSTANCE_FLAMES_COPY_77                                         0x54464954
    #define FX_INSTANCE_FLAMES_COPY_78                                         0x6c09f4e9
    #define FX_INSTANCE_FLAMES_COPY_79                                         0x68c8e95e
    #define FX_INSTANCE_LARGE_FIRE_COPY_71                                     0x3478643
    #define FX_INSTANCE_UNNAMED_1                                              0x52cfb1cf
    #define FX_INSTANCE_SMOKEBLACK                                             0x28ac1ee1
    #define FX_INSTANCE_SMOKEBLACK_COPY_1                                      0xdc78c1d7
    #define FX_INSTANCE_SMOKEBLACK_COPY_2                                      0xd13be70e
    #define FX_INSTANCE_SMOKEBLACK_COPY_3                                      0xd5fafab9
    #define FX_INSTANCE_SMOKEBLACK_COPY_4                                      0xcbbdaabc
    #define FX_INSTANCE_SMOKEBLACK_COPY_5                                      0xcf7cb70b
    #define FX_INSTANCE_FLAMES_COPY_103                                        0xc7b75bf7
    #define FX_INSTANCE_FLAMES_COPY_104                                        0xd9f00bf2
    #define FX_INSTANCE_FLAMES_COPY_105                                        0xdd311645
    #define FX_INSTANCE_LARGE_FIRE_COPY_90                                     0x68186700
    #define FX_INSTANCE_FLAMES2                                                0x1fa4a2ba
    #define FX_INSTANCE_FLAMES2_COPY_1                                         0x2969f8a4
    #define FX_INSTANCE_FLAMES2_COPY_2                                         0x242ade7d
    #define FX_INSTANCE_FLAMES2_COPY_3                                         0x20ebc3ca
    #define FX_INSTANCE_OILYFIRE_COPY_2                                        0xda8fb80
    #define FX_INSTANCE_OILYFIRE_COPY_3                                        0x969e637
    #define FX_INSTANCE_FLAMES_COPY_111                                        0x1c2ca145
    #define FX_INSTANCE_FLAMES_COPY_112                                        0x116f879c

    // Hull: garage_shaft B
    #define FX_INSTANCE_LARGE_FIRE_COPY_51                                     0xa3b5184c
    #define FX_INSTANCE_LARGE_FIRE_COPY_52                                     0xaef63e95
    #define FX_INSTANCE_LARGE_FIRE_COPY_53                                     0xaa372322
    #define FX_INSTANCE_LARGE_FIRE_COPY_54                                     0xb4707327
    #define FX_INSTANCE_LARGE_FIRE_COPY_55                                     0xb0b16e90
    #define FX_INSTANCE_LARGE_FIRE_COPY_56                                     0xbdf24849
    #define FX_INSTANCE_FLAMES_COPY_48                                         0x1ee2ab3a
    #define FX_INSTANCE_FLAMES_COPY_49                                         0x1a23b68d
    #define FX_INSTANCE_FLAMES_COPY_50                                         0xeaf3875e
    #define FX_INSTANCE_FLAMES_COPY_51                                         0xee329ae9
    #define FX_INSTANCE_FLAMES_COPY_52                                         0xe371bc30
    #define FX_INSTANCE_FLAMES_COPY_53                                         0xe7b0a187
    #define FX_INSTANCE_FLAMES_COPY_54                                         0xf9f7f182
    #define FX_INSTANCE_FLARE_COPY_14                                          0xccc9ee03
    #define FX_INSTANCE_FLARE_COPY_15                                          0xc808f3b4

    // Hull: garage office22 B
    #define FX_INSTANCE_FLAMES_COPY_35                                         0x18e05393
    #define FX_INSTANCE_FLAMES_COPY_36                                         0x15a3754a
    #define FX_INSTANCE_FLAMES_COPY_37                                         0x116268fd
    #define FX_INSTANCE_FLAMES_COPY_38                                         0x292dd540
    #define FX_INSTANCE_FLAMES_COPY_39                                         0x2decc8f7
    #define FX_INSTANCE_FLAMES_COPY_41                                         0x3c2b5b35
    #define FX_INSTANCE_LARGE_FIRE_COPY_45                                     0x62a8af4c
    #define FX_INSTANCE_LARGE_FIRE_COPY_46                                     0x6feb8995
    #define FX_INSTANCE_LARGE_FIRE_COPY_47                                     0x6b2a9422
    #define FX_INSTANCE_LARGE_FIRE_COPY_48                                     0x5365299f
    #define FX_INSTANCE_LARGE_FIRE_COPY_49                                     0x57a43428
    #define FX_INSTANCE_LARGE_FIRE_COPY_50                                     0xa77405fb

    // Hull: garage B
    #define FX_INSTANCE_LARGE_FIRE_COPY_16                                     0xf8d669e0
    #define FX_INSTANCE_LARGE_FIRE_COPY_17                                     0xfc177457
    #define FX_INSTANCE_LARGE_FIRE_COPY_18                                     0xc458c9ea
    #define FX_INSTANCE_LARGE_FIRE_COPY_19                                     0xc099d45d
    #define FX_INSTANCE_LARGE_FIRE_COPY_20                                     0x90bb7b81
    #define FX_INSTANCE_LARGE_FIRE_COPY_26                                     0x8a3d3633
    #define FX_INSTANCE_LARGE_FIRE_COPY_32                                     0x4b208133
    #define FX_INSTANCE_LARGE_FIRE_COPY_33                                     0x4fe19c84
    #define FX_INSTANCE_LARGE_FIRE_COPY_34                                     0x51a6cc81
    #define FX_INSTANCE_LARGE_FIRE_COPY_35                                     0x5567d136
    #define FX_INSTANCE_FLAMES_COPY_13                                         0xa294802e
    #define FX_INSTANCE_FLAMES_COPY_14                                         0xbcd3d02b
    #define FX_INSTANCE_FLAMES_COPY_15                                         0xb812cd9c
    #define FX_INSTANCE_FLAMES_COPY_16                                         0xb551eb45
    #define FX_INSTANCE_FLAMES_COPY_17                                         0xb190f6f2
    #define FX_INSTANCE_FLAMES_COPY_18                                         0x89df4b4f
    #define FX_INSTANCE_FLAMES_COPY_19                                         0x8d1e56f8
    #define FX_INSTANCE_FLAMES_COPY_20                                         0xdd3cf924
    #define FX_INSTANCE_FLAMES_COPY_21                                         0xd9fde493
    #define FX_INSTANCE_FLAMES_COPY_22                                         0xd4bec24a
    #define FX_INSTANCE_FLAMES_COPY_23                                         0xd07fdffd
    #define FX_INSTANCE_FLAMES_COPY_24                                         0xce388ff8
    #define FX_INSTANCE_FLAMES_COPY_25                                         0xcaf9924f
    #define FX_INSTANCE_LARGE_FIRE_COPY_38                                     0x64aa57e5
    #define FX_INSTANCE_FLAMES_COPY_29                                         0xfff5092b
    #define FX_INSTANCE_FLAMES_COPY_91                                         0x215ef812
    #define FX_INSTANCE_LARGE_FIRE_COPY_78                                     0x218e764c
    #define FX_INSTANCE_LARGE_FIRE_COPY_79                                     0x254f6bfb
    #define FX_INSTANCE_LARGE_FIRE_COPY_80                                     0xba01a6dc
    #define FX_INSTANCE_FLAMES_COPY_92                                         0x2c1ddecb
    #define FX_INSTANCE_LARGE_FIRE_COPY_23                                     0x9df85d58
    #define FX_INSTANCE_FLAMES_COPY_45                                         0x2f2f2de9
    #define FX_INSTANCE_FLAMES_COPY_44                                         0x2bee305e
    #define FX_INSTANCE_FLAMES_COPY_46                                         0x226c0b30
    #define FX_INSTANCE_LARGE_FIRE_COPY_21                                     0x947a6636
    #define FX_INSTANCE_LARGE_FIRE_COPY_22                                     0x993940ef
    #define FX_INSTANCE_FLAMES_COPY_40                                         0x38ea4682
    #define FX_INSTANCE_FLAMES_COPY_106                                        0xd072309c
    #define FX_INSTANCE_FLAMES_COPY_107                                        0xd4b32d2b
    #define FX_INSTANCE_FLAMES_COPY_108                                        0xecfc9096
    #define FX_INSTANCE_FLAMES_COPY_109                                        0xe83d8d21
    #define FX_INSTANCE_FLAMES2_COPY_4                                         0x3eac93cf
    #define FX_INSTANCE_FLAMES2_COPY_5                                         0x3a6d8e78
    #define FX_INSTANCE_OILYFIRE                                               0x16dbd75a
    #define FX_INSTANCE_LARGE_FIRE_COPY_91                                     0x6cd97ab7
    #define FX_INSTANCE_LARGE_FIRE_COPY_92                                     0x619a5c6e
    #define FX_INSTANCE_LARGE_FIRE_COPY_93                                     0x655b41d9
    #define FX_INSTANCE_FLARE_COPY_10                                          0xdfcd98df
    #define FX_INSTANCE_FLARE_COPY_11                                          0xdb0c8568

    // Hull: garage4 B
    #define FX_INSTANCE_LARGE_FIRE_COPY_27                                     0x8efc2b84
    #define FX_INSTANCE_LARGE_FIRE_COPY_28                                     0xb6b39639
    #define FX_INSTANCE_LARGE_FIRE_COPY_29                                     0xb2728b8e
    #define FX_INSTANCE_LARGE_FIRE_COPY_30                                     0x42a2ba5d
    #define FX_INSTANCE_LARGE_FIRE_COPY_31                                     0x4663a7ea
    #define FX_INSTANCE_LARGE_FIRE_COPY_39                                     0x606b4a52
    #define FX_INSTANCE_LARGE_FIRE_COPY_40                                     0x756dc427
    #define FX_INSTANCE_LARGE_FIRE_COPY_41                                     0x71acd990
    #define FX_INSTANCE_LARGE_FIRE_COPY_42                                     0x7cefff49
    #define FX_INSTANCE_LARGE_FIRE_COPY_43                                     0x782ee2fe
    #define FX_INSTANCE_LARGE_FIRE_COPY_44                                     0x6669b2fb
    #define FX_INSTANCE_FLAMES_COPY_30                                         0xf2538f8
    #define FX_INSTANCE_FLAMES_COPY_31                                         0xbe4254f
    #define FX_INSTANCE_FLAMES_COPY_32                                         0x6a70396
    #define FX_INSTANCE_FLAMES_COPY_33                                         0x2661e21
    #define FX_INSTANCE_FLAMES_COPY_34                                         0x1c214e24
    #define FX_INSTANCE_LARGE_FIRE_COPY_57                                     0xb93355fe
    #define FX_INSTANCE_LARGE_FIRE_COPY_58                                     0x817ce843
    #define FX_INSTANCE_LARGE_FIRE_COPY_59                                     0x85bdf5f4
    #define FX_INSTANCE_FLAMES_COPY_55                                         0xfd36ec35
    #define FX_INSTANCE_FLAMES_COPY_56                                         0xf075caec
    #define FX_INSTANCE_FLAMES_COPY_57                                         0xf4b4d75b
    #define FX_INSTANCE_FLAMES_COPY_58                                         0xccfb6ae6
    #define FX_INSTANCE_FLAMES_COPY_59                                         0xc83a7751
    #define FX_INSTANCE_FLAMES_COPY_60                                         0x9818d88d
    #define FX_INSTANCE_FLAMES_COPY_61                                         0x9cd9c53a
    #define FX_INSTANCE_FLAMES_COPY_110                                        0x18edbcf2
    #define FX_INSTANCE_FLARE_COPY_12                                          0xd64fa3b1
    #define FX_INSTANCE_FLARE_COPY_13                                          0xd28ebe06

    // Hull: garage3 B
    #define FX_INSTANCE_LARGE_FIRE_COPY_24                                     0x83bf0d5d
    #define FX_INSTANCE_LARGE_FIRE_COPY_25                                     0x877e10ea
    #define FX_INSTANCE_FLAMES_COPY_42                                         0x31687dec
    #define FX_INSTANCE_FLAMES_COPY_43                                         0x35a9605b
    #define FX_INSTANCE_FLAMES_COPY_47                                         0x26ad1687
    #define FX_INSTANCE_LARGE_FIRE_COPY_72                                     0xe04a09a
    #define FX_INSTANCE_LARGE_FIRE_COPY_73                                     0xac5bd2d
    #define FX_INSTANCE_LARGE_FIRE_COPY_74                                     0x1482ed28
    #define FX_INSTANCE_LARGE_FIRE_COPY_75                                     0x1043f09f
    #define FX_INSTANCE_LARGE_FIRE_COPY_76                                     0x1d00d646
    #define FX_INSTANCE_LARGE_FIRE_COPY_77                                     0x19c1cbf1
    #define FX_INSTANCE_FLAMES_COPY_82                                         0xfe041f17
    #define FX_INSTANCE_FLAMES_COPY_83                                         0xfac502a0
    #define FX_INSTANCE_FLAMES_COPY_84                                         0xe48252a5
    #define FX_INSTANCE_FLAMES_COPY_85                                         0xe0434f12
    #define FX_INSTANCE_FLAMES_COPY_86                                         0xed0069cb
    #define FX_INSTANCE_FLAMES_COPY_87                                         0xe9c1747c
    #define FX_INSTANCE_FLAMES_COPY_88                                         0xd18ec9c1
    #define FX_INSTANCE_FLAMES_COPY_89                                         0xd54fd476
    #define FX_INSTANCE_FLAMES_COPY_90                                         0x259fe5a5
    #define FX_INSTANCE_LARGE_FIRE_COPY_81                                     0xbec0bb6b
    #define FX_INSTANCE_LARGE_FIRE_COPY_82                                     0xb3839db2
    #define FX_INSTANCE_LARGE_FIRE_COPY_83                                     0xb7428005
    #define FX_INSTANCE_LARGE_FIRE_COPY_84                                     0xa905d000
    #define FX_INSTANCE_LARGE_FIRE_COPY_85                                     0xadc4cdb7
    #define FX_INSTANCE_FLAMES_COPY_93                                         0x28dcc37c
    #define FX_INSTANCE_FLAMES_COPY_94                                         0x369b9379
    #define FX_INSTANCE_FLAMES_COPY_95                                         0x325a8ece
    #define FX_INSTANCE_FLAMES_COPY_96                                         0x3f19a817
    #define FX_INSTANCE_FLAMES_COPY_97                                         0x3bd8b5a0
    #define FX_INSTANCE_FLAMES_COPY_98                                         0x397081d
    #define FX_INSTANCE_OILYFIRE_COPY_1                                        0xebdd59
    #define FX_INSTANCE_FLARE_COPY_9                                           0x4b9e7a07

    // Hull: garage2 B
    #define FX_INSTANCE_FLAMES_COPY_99                                         0x75615aa
    #define FX_INSTANCE_FLAMES_COPY_100                                        0xcaf47d2e
    #define FX_INSTANCE_FLAMES_COPY_101                                        0xce356099
    #define FX_INSTANCE_FLAMES_COPY_102                                        0xc3764640
    #define FX_INSTANCE_LARGE_FIRE_COPY_86                                     0xa087eb6e
    #define FX_INSTANCE_LARGE_FIRE_COPY_87                                     0xa446f6d9
    #define FX_INSTANCE_LARGE_FIRE_COPY_88                                     0x9c094b64
    #define FX_INSTANCE_LARGE_FIRE_COPY_89                                     0x98c856d3
    #define FX_INSTANCE_FLARE_COPY_8                                           0x4f5f67b0

    // Hull: Chop_Shop
    #define INSTANCE_SINGLEDOOR                                                0x972a9877
    #define INSTANCE_DOUBLEDOOR1                                               0x3d73a725
    #define INSTANCE_COPY_1_OF_DOUBLEDOOR1                                     0x3376e595
    #define INSTANCE_CROCKETT_19SCENE_END                                      0xa0aafd3f
    #define INSTANCE_TUBBS_19SCENE_END                                         0xfdf14c1

    // Hull: Storage
    #define INSTANCE_JUAN_HENCHMAN_01                                          0x2422a7a9
    #define INSTANCE_JUAN_HENCHMAN_05                                          0x3726d175
    #define INSTANCE_JUAN_HENCHMAN_02                                          0x29618170
    #define INSTANCE_JUAN_HENCHMAN_03                                          0x2da09cc7
    #define INSTANCE_JUAN_HENCHMAN_04                                          0x33e7ccc2
    #define INSTANCE_CARGO_SHIP_WORKER02                                       0xb7d5c90d

    // Hull: apartment main
    #define INSTANCE_DOOR_BACKTOAPARTMENTLOBBY                                 0xa5230c5f
    #define INSTANCE_DOOR_APARTMENT1                                           0x139106d3
    #define INSTANCE_NIGHCLUBGF1                                               0x1d8bea99

    // Hull: lounge3
    #define INSTANCE_ASSASSIN                                                  0x7c9e4956
    #define INSTANCE_KEY_GARAGEDOORS                                           0x76e8fae9

    // Hull: road 6
    #define INSTANCE_DAYTONA                                                   0xd2cd39e8
    #define INSTANCE_CROCKETT_START                                            0x3091fb5f
    #define INSTANCE_TUBBS_BODY5                                               0x85b38f08

    // Hull: parking lott
    #define INSTANCE_COPY_1_OF_DOOR2CHOPSHOP                                   0xbf60930b
    #define INSTANCE_CROCKETT_20                                               0x30de20de
    #define INSTANCE_TUBBS_20                                                  0x8e096497
    #define INSTANCE_DOOR_EXIT2STREET                                          0x4a89993c
    #define INSTANCE_COPY_1_OF_DOOR_EXIT2STREET                                0x47642f2a

    // Hull: garage
    #define INSTANCE_CROCKETT_WARPTOBOTTM                                      0xe5a5e2fc
    #define INSTANCE_TUBBS_WARPTOBOTTOM                                        0xd30d6fb2
    #define INSTANCE_DOOR_APARTMENT1_COPY_1                                    0x44d5fac8
    #define INSTANCE_CHOP10_COPY_4                                             0xfeb98e08

    // Hull: garage3
    #define INSTANCE_CHOP10_COPY_2                                             0xe43fc3ba
    #define INSTANCE_CHOP10_COPY_3                                             0xe0fede0d
    #define INSTANCE_FIRSTAID                                                  0xd60c6b32

    // Hull: garage office22
    #define INSTANCE_DOOR_COPY_3                                               0x45ed5cee
    #define INSTANCE_CROCKETT_19                                               0x60fc8f02
    #define INSTANCE_TUBBS_19                                                  0xde2bcb4b
    #define INSTANCE_PHONE_MAIN_COPY_1                                         0x6726a182
    #define INSTANCE_PHONE_HANDSET_COPY_1                                      0x37804249
    #define INSTANCE_DESK_DARKWOOD_COPY_13                                     0x2597eb6a
    #define INSTANCE_DOOR_COPY_4                                               0x5baa0ceb
    #define INSTANCE_CBCABLE                                                   0xabf484d1

    // Hull: road only middlefront
    #define INSTANCE_DOOR_NIGHTCLUB1                                           0xa663900
    #define INSTANCE_COPY_1_OF_DOOR_NIGHTCLUB1                                 0x3491d5d

    // Hull: office inner Hull
    #define INSTANCE_DESK_DARKWOOD                                             0xc377ccbc
    #define INSTANCE_KEY_EXIT                                                  0x7ad284be
    #define INSTANCE_DOOR_APARTMENT1_COPY_7                                    0x5e53b77a
    #define INSTANCE_DOOR_APARTMENT1_COPY_8                                    0x661c0ac7
    #define INSTANCE_DOOR_APARTMENT1_COPY_9                                    0x62dd1770

    // Hull: Chop_Shop B
    #define INSTANCE_SINGLEDOOR_COPY_1                                         0x12d6e9a4
    #define INSTANCE_DOUBLEDOOR1_COPY_1                                        0xc2f94a4e
    #define INSTANCE_70                                                        0xd30fbedd
    #define INSTANCE_CROCKETT_19SCENE_END_COPY_1                               0xd5f7a8f2
    #define INSTANCE_TUBBS_19SCENE_END_COPY_1                                  0x328d497b

    // Hull: garage_shaft B
    #define INSTANCE_CHOP12_COPY_2                                             0xd26fd94a
    #define INSTANCE_CHOP12_COPY_3                                             0xd6aec4fd

    // Hull: garage office22 B
    #define INSTANCE_DOOR_COPY_1                                               0x4c6f6780
    #define INSTANCE_DOOR_COPY_2                                               0x412c4159

    // Hull: garage B
    #define INSTANCE_CROCKETT_WARPTOBOTTM_COPY_1                               0x2ad0e8ca
    #define INSTANCE_TUBBS_WARPTOBOTTOM_COPY_1                                 0xc76f7f8c
    #define INSTANCE_DOOR_APARTMENT1_COPY_13                                   0x2b0996f6
    #define INSTANCE_CHOP13_COPY_1                                             0xc404f2eb
    #define INSTANCE_DOOR_APARTMENT1_COPY_14                                   0x354ec6f3
    #define INSTANCE_CHOP11_COPY_1                                             0xf254e81b

    // Hull: garage4 B
    #define INSTANCE_CHOP12_COPY_1                                             0xdf2cff93

    // Hull: garage3 B
    #define INSTANCE_JIMMY1                                                    0x1e3b8129
    #define INSTANCE_CHOP5_COPY_1                                              0xba268820
    #define INSTANCE_CHOP10_COPY_1                                             0xe97ce563
    #define INSTANCE_FIRSTAIDB                                                 0x3a72774b

    // Hull: parking lott B
    #define INSTANCE_78                                                        0xf5075365
    #define INSTANCE_DOOR_EXIT2STREET_COPY_1                                   0xb132f4e4
    #define INSTANCE_CHOP9_COPY_1                                              0xfc6d600
    #define INSTANCE_CHOP3_COPY_1                                              0xe0d6a730
    #define INSTANCE_CHOP3_COPY_2                                              0xed9581e9
    #define INSTANCE_CHOP9_COPY_2                                              0x285f0d9
    #define INSTANCE_CHOP3_COPY_3                                              0xe9549c5e
    #define INSTANCE_CHOP9_COPY_3                                              0x644ed6e

    // Hull: road 6
    #define SFX_POINT_ROAD_6_DAYTONA_DOOR_OPEN                                 0x393f6ee7
    #define SFX_POINT_ROAD_6_DAYTONA_DOOR_CLOSE                                0xf9900dbd
    #define SFX_POINT_ROAD_6_CORVETTE_DOOR_OPEN                                0x8b93604e
    #define SFX_POINT_ROAD_6_CORVETTE_DOOR_CLOSE                               0xe12213ae

    // Hull: parking lott
    #define SFX_POINT_BUILDING_FIRE_EXTERIOR_11SEC                             0x7a7bed11

    // Hull: garage office22
    #define SFX_POINT_03_GARAGE_B22_EXPLOSION                                  0x3a3dc832

    // Hull: carpark_Hull
    #define SFX_POINT_POLICE_SIREN_3SEC                                        0x7a43bb49

    // Hull: garage office22 B
    #define SFX_POINT_PHONE_RING_B                                             0xa33f398f
    #define SFX_POINT_EXPLOSION                                                0xf1319fe8

    // Hull: garage_shaft
    #define SPHERE_TRIGGER_TRIGGER_CAM_STAIRS1                                 0x6190e86e
    #define SPHERE_TRIGGER_UNNAMED_1                                           0x52cfb1cf
    #define SPHERE_TRIGGER_TRIGGER_CAM_STAIRS2                                 0x6cd3ceb7

    // Hull: garage_shaft B
    #define SPHERE_TRIGGER_TRIGGER_CAM_STAIRS1_COPY_1                          0x257caea6
    #define SPHERE_TRIGGER_UNNAMED_1_COPY_1                                    0xe139c5ee
    #define SPHERE_TRIGGER_TRIGGER_CAM_STAIRS2_COPY_1                          0x804b92e

    // Hull: apartment_balcony
    #define AABB_TRIGGER_TRIGGER_OPENDOORBACKTOLOBBY                           0x4ab7fbab

    // Hull: road 6
    #define AABB_TRIGGER_TRIGGER_ENDOFLEVEL                                    0x1b0bbafc
    #define AABB_TRIGGER_START_CUT_SCENE                                       0x5e79eb94

    // Hull: parking lott
    #define AABB_TRIGGER_FORCE_END_OF_LEVEL                                    0xcd2fa3ca

    // Hull: garage office22
    #define AABB_TRIGGER_TRIGGER_CUTSCENE19                                    0xaa10e942
    #define AABB_TRIGGER_CHECKPOINT1                                           0x8251a439

    // Hull: office inner Hull
    #define AABB_TRIGGER_KEY_FLIGHT                                            0xf68e3991

    // Hull: garage_shaft
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_1                             0x31cca86d
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_2                             0x3c8f8eb4
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_3                             0x384e9303
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_4                             0x2609c306
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_5                             0x22c8deb1
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_6                             0x2f8bf868

    // Hull: Chop_Shop B
    #define AABB_TRIGGER_FIRE_PAIN_01                                          0xa8ee44d6
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_1                                   0xdd0d782e
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_3                                   0xd48f4340
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_4                                   0xcac81345
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_17                                  0xe75bd1bf
    #define AABB_TRIGGER_CHECKPOINT2                                           0x8f1282e0
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_18                                  0xdf146c02
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_19                                  0xdbd571b5
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_20                                  0x8bf7de69

    // Hull: garage_shaft B
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_8                             0x13055862
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_9                             0x17c445d5
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_10                            0xc86964a2
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_11                            0xcca87915
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_12                            0xc1eb5fcc
    #define AABB_TRIGGER_TRIGGER_STAIRS_1_1_COPY_13                            0xc52a427b
    #define AABB_TRIGGER_FIRE_STARTER03                                        0x4447b638
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_5                                   0xce090ef2
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_21                                  0x8f36c3de

    // Hull: garage office22 B
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_2                                   0xd04e5ef7

    // Hull: garage B
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_6                                   0xc34a282b
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_7                                   0xc78b359c
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_8                                   0xffc48821
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_14                                  0xea18f766
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_22                                  0x8275e507

    // Hull: garage4 B
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_9                                   0xfb059596
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_10                                  0xf91c81ba
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_16                                  0xe39acc08

    // Hull: garage3 B
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_11                                  0xfddd9c0d
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_13                                  0xf45fa763
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_15                                  0xeed9ead1

    // Hull: garage2 B
    #define AABB_TRIGGER_FIRE_PAIN_01_COPY_12                                  0xf09ebad4

    // Hull: parking lott B
    #define AABB_TRIGGER_TRIGGER_CUTSCENE20                                    0xfa32469e

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

#endif // __MISSION_07_CHOPSHOP2_H__
