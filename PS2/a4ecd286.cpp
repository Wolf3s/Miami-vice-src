//---------------------------------------------------------------------------------------
// mission_06_cargoship
// Date 22/10/2004, Time 14:58:19
// Martin Fuller: Automatically Produced By ALE Editor
//---------------------------------------------------------------------------------------
#ifndef __MISSION_06_CARGOSHIP_H__
#define __MISSION_06_CARGOSHIP_H__

    //-----------------------------------------------------------------------------------
    // External Includes
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External Defines
    //-----------------------------------------------------------------------------------
    #define ANIM_CROCKETT_WALK0001                                             1
    #define ANIM_TUBBS_WALK1001                                                1001
    #define ANIM_TUBBS_AIMING_9200                                             9200
    #define ANIM_CROCKETT_IDLE0005                                             5
    #define ANIM_TUBBS_STRAFE_IDLE_1054                                        1054
    #define ANIM_TUBBS_IDLE1005                                                1005
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_LEFT_2216                           2216
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_LEFT_IDLE_2222                      2222
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_LEFT_STEPBACK_2223                  2223
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_RIGHT_2217                          2217
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_RIGHT_IDLE_2224                     2224
    #define ANIM_HENCHMAN_AIM_ROUND_CORNER_RIGHT_STEPBACK_2225                 2225
    #define ANIM_TUBBS_JUMP_DOWN_9391                                          9391
    #define ANIM_CROCKETT_JUMP_DOWN_9392                                       9392
    #define ANIM_ASSASIN_9393                                                  9393
    #define ANIM_HENCHMAN_CROUCHED_RUN_2239                                    2239
    #define ANIM_HENCHMAN_CUFFED_IDLE_2238                                     2238
    #define ANIM_HENCHMAN_DAMAGE_EXPLOSION_HEAVY_2282                          2282
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
    #define ANIM_HENCHMAN_IDLE_AGAINST_WALL_2226                               2226
    #define ANIM_HENCHMAN_AIM_STAND_TO_KNEEL_2279                              2279
    #define ANIM_ASSASIN_FIRE_9397                                             9397
    #define ANIM_HENCHMAN_DIE_KNEES_2421                                       2421
    #define ANIM_HENCHMAN_DIE_KNEES_DEAD_2422                                  2422
    #define ANIM_HENCHMAN_DIVE_FOR_COVER_2304                                  2304
    #define ANIM_HENCHMAN_DIVE_ROLL_LEFT_2228                                  2228
    #define ANIM_HENCHMAN_DIVE_ROLL_RIGHT_2227                                 2227
    #define ANIM_HENCHMAN_EXTENDED_IDLE_2219                                   2219
    #define ANIM_HENCHMAN_GETTING_CUFFED_2234                                  2234
    #define ANIM_SYLVIA_BEING_HELD_9016                                        9016
    #define ANIM_ORTEGA_HOLDING_SYLVIA_9017                                    9017
    #define ANIM_ORTEGA_DIE_9062                                               9062
    #define ANIM_SYLVIA_BEING_HELD_9063                                        9063
    #define ANIM_CROCKETT_CHECK_PULSE_9061                                     9061
    #define ANIM_HENCHMAN_HANDS_UP_2235                                        2235
    #define ANIM_HENCHMAN_HANDS_UP_IDLE_2236                                   2236
    #define ANIM_HENCHMAN_HANDS_UP_PULL_GUN_2237                               2237
    #define ANIM_HENCHMAN_IDLE_2200                                            2200
    #define ANIM_HENCHMAN_IDLE_SMOKING_2296                                    2296
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
    #define ANIM_HENCHMAN_STRAFFE_IDLE_2307                                    2307
    #define ANIM_HENCHMAN_UPPERBODY_AIM_RIFLE_2253                             2253
    #define ANIM_HENCHMAN_UPPERBODY_AIM_SHOTGUN_2260                           2260
    #define ANIM_HENCHMAN_UPPERBODY_AIM_UZI_2215                               2215
    #define ANIM_HENCHMAN_UPPERBODY_DAMAGE_2264                                2264
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_RIFLE_2252                            2252
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_SHOTGUN_2261                          2261
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_UZI_2213                              2213
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_RIFLE_2259                            2259
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_SHOTGUN_2263                          2263
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_UZI_2256                              2256
    #define ANIM_HENCHMAN_UPPERBODY_LOOK_2221                                  2221
    #define ANIM_CROCKETT_JUMP0014                                             14
    #define ANIM_TUBBS_JUMP1014                                                1014
    #define ANIM_HENCHMAN_UPPERBODY_LOOK_2231                                  2231
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_RIFLE_2251                          2251
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_SHOTGUN_2262                        2262
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_UZI_2214                            2214
    #define ANIM_HENCHMAN_WALK_2202                                            2202
    #define ANIM_TUBBS_PULL_GUN_9310                                           9310
    #define ANIM_TUBBS_CHECK_PULSE_9311                                        9311
    #define ANIM_ORTEGA_TALKING_9318                                           9318
    #define ANIM_CROCKETT_JUMP_RAILING_9346                                    9346
    #define ANIM_TUBBS_JUMP_RAILING_9347                                       9347
    #define ANIM_AIM_5511                                                      5511
    #define ANIM_AIM_OVER_CRATE_DOWN_5515                                      5515
    #define ANIM_AIM_OVER_CRATE_FIRE_5514                                      5514
    #define ANIM_AIM_OVER_CRATE_UP_5513                                        5513
    #define ANIM_AIM_ROUND_CORNER_LEFT_5519                                    5519
    #define ANIM_AIM_ROUND_CORNER_LEFT_BACK_5520                               5520
    #define ANIM_AIM_ROUND_CORNER_LEFT_FIRE_5521                               5521
    #define ANIM_AIM_ROUND_CORNER_RIGHT_5522                                   5522
    #define ANIM_AIM_ROUND_CORNER_RIGHT_BACK_5524                              5524
    #define ANIM_AIM_ROUND_CORNER_RIGHT_FIRE_5523                              5523
    #define ANIM_CROUCH_DOWN_5503                                              5503
    #define ANIM_CROUCH_IDLE_5505                                              5505
    #define ANIM_CROUCH_UP_5506                                                5506
    #define ANIM_DAMAGE_HEAVY_5508                                             5508
    #define ANIM_DAMAGE_LIGHT_5509                                             5509
    #define ANIM_FIRE_5507                                                     5507
    #define ANIM_GETUP_5510                                                    5510
    #define ANIM_IDLE_5502                                                     5502
    #define ANIM_IDLE_DAMAGED_5512                                             5512
    #define ANIM_RELOAD_5504                                                   5504
    #define ANIM_RUN_5501                                                      5501
    #define ANIM_SIDESTEP_LEFT_5517                                            5517
    #define ANIM_SIDESTEP_RIGHT_5518                                           5518
    #define ANIM_TURN_TO_WALL_5516                                             5516
    #define ANIM_WALK_5500                                                     5500
    #define ANIM_CAPTAIN_9341                                                  9341
    #define ANIM_CROCKETT_TALKING_9356                                         9356

    #define SOUND_DATA_0021                                                    0x4af38623
    #define SOUND_DATA_0094                                                    0xd7321e65
    #define SOUND_DATA_0095                                                    0x9e3f79e8
    #define SOUND_DATA_0026                                                    0xb110ad37
    #define SOUND_DATA_0036                                                    0xaa38a04f
    #define SOUND_DATA_0020                                                    0x3fee1ae
    #define SOUND_DATA_0093                                                    0x2cd13571
    #define SOUND_DATA_0111                                                    0x28dcf9ba
    #define SOUND_DATA_0014                                                    0xe7275a5
    #define SOUND_DATA_0019                                                    0x266296ad
    #define SOUND_DATA_0025                                                    0x6a0705a0
    #define SOUND_DATA_CROCKETT_LANDS_ON_FLOOR                                 0xd091a871
    #define SOUND_DATA_TUBBS_LANDS_ON_FLOOR                                    0x53d2bdd1
    #define SOUND_DATA_BULLET_IMPACT_C                                         0x58fe1d09
    #define SOUND_DATA_BODY_FALL_ON_METAL_FLOOR                                0xbe4251cc
    #define SOUND_DATA_ORTEGA_INCIDENTAL_0002                                  0xa198542e
    #define SOUND_DATA_0025                                                    0x4243f111
    #define SOUND_DATA_0045                                                    0x18b3de01

    #define TEXTURE_SMOKE1                                                     0x82b57d7e 	// FX Texture, Storage Texture, 
    #define TEXTURE_LIGHT1                                                     0xa5519b84 	// FX Texture, Storage Texture, 
    #define TEXTURE_BLOOD                                                      0x35c25bc6 	// FX Texture, Storage Texture, 
    #define TEXTURE_CSHIP_INT_WALLS_4                                          0xdf6ac11c 	// Geometry Texture, 
    #define TEXTURE_SHIPDECK                                                   0x3d21588e 	// Geometry Texture, 
    #define TEXTURE_SHIPDECK2                                                  0x1e3bcc7a 	// Geometry Texture, 
    #define TEXTURE_KEY                                                        0xcec12741 	// Geometry Texture, 
    #define TEXTURE_CONTAINER                                                  0xafe40dd9 	// Geometry Texture, 
    #define TEXTURE_CRATE1                                                     0x3a0cf863 	// Geometry Texture, 
    #define TEXTURE_SEPARATETROU                                               0x341551c4 	// Geometry Texture, 
    #define TEXTURE_CROK_VEST_SPEC_01                                          0xa2adc6e8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBSFACE04                                          0xe93fcf12 	// Geometry Texture, 
    #define TEXTURE_SKIN_SPEC_02                                               0xe1cd0ef4 	// Geometry Texture, 
    #define TEXTURE_TUBBS_MOUTH_TEETH                                          0xecc735c0 	// Geometry Texture, 
    #define TEXTURE_EYE_DKBROWN                                                0x513ff7e0 	// Geometry Texture, 
    #define TEXTURE_TESTSHADER01                                               0x79f152a0 	// Geometry Texture, 
    #define TEXTURE_NEWSHOE                                                    0x2f45492c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_NEW_ALHA_E3                                    0x4f63ea4b 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_SHIRT01                                        0x41129ce5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_CHEST01                                        0x946e09cf 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_CHAIN01                                        0xf7a5b73c 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_MOD2                                  0xeef33f8a 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_SUITBODY01                                     0x22ed9f7c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBS_SUITARM01                                      0x6fe8e3f2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TUBBSHAND01                                          0xadadcab1 	// Geometry Texture, 
    #define TEXTURE_MOUTH_TEETH1                                               0xc1452e3c 	// Geometry Texture, 
    #define TEXTURE_SPEC2                                                      0x9f6c2acc 	// Geometry Texture, 
    #define TEXTURE_LIP_SPEC_01                                                0xe6d4f855 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPE_MOD                                   0x72134445 	// Geometry Texture, 
    #define TEXTURE_SKIN_SPEC_021                                              0x954d3944 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_SKIRT                                    0x65f6351d 	// Geometry Texture, 
    #define TEXTURE_SILVIA_SUIT_SPEC01                                         0x7c8a4dc0 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_SKIN                                     0xb76ee1f1 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_BOOTS                                    0xa71f8bb5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_TOP                                      0x8ae82908 	// Geometry Texture, 
    #define TEXTURE_MV_JB_SYLVIA_SUIT_HAND                                     0x48e69e89 	// Geometry Texture, 
    #define TEXTURE_MV_JBGS_SYLVIA_FACE02                                      0xe7b2abcc 	// Geometry Texture, 
    #define TEXTURE_MV_JB_SYLVIAHAIR                                           0xca358fd4 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_HAIRBUN                                  0x888f7c03 	// Geometry Texture, 
    #define TEXTURE_EYEBROWNL                                                  0x1e0fc8b0 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_ARMS                                     0x60223ee5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_SYLVIA_SUIT_PANTS                                    0xa429fff6 	// Geometry Texture, 
    #define TEXTURE_DOOR_BUT                                                   0x7a4d8ae9 	// Geometry Texture, 
    #define TEXTURE_YELLOW_METAL                                               0x5dab5a97 	// Geometry Texture, 
    #define TEXTURE_METAL                                                      0x34480892 	// Geometry Texture, 
    #define TEXTURE_METAL_PIPE                                                 0x6ea1a5ec 	// Geometry Texture, 
    #define TEXTURE_WHITEBITS                                                  0xe2272d61 	// Geometry Texture, 
    #define TEXTURE_CSHIP_CARGODECK                                            0xed11a6c5 	// Geometry Texture, 
    #define TEXTURE_CARGO_PANEL                                                0x1c44b062 	// Geometry Texture, 
    #define TEXTURE_CSHIP_INT_WALLS_1                                          0xfec63217 	// Geometry Texture, 
    #define TEXTURE_CSHIP_INT_WALLS_2                                          0x94714ce6 	// Geometry Texture, 
    #define TEXTURE_SHIPDECK3                                                  0x43f2b315 	// Geometry Texture, 
    #define TEXTURE_CSHIP_INT_WALLS_3                                          0x99540829 	// Geometry Texture, 
    #define TEXTURE_CSHIP_INT_WALLS_2B                                         0x904ef08 	// Geometry Texture, 
    #define TEXTURE_CONTROL_PANEL                                              0xa5df815e 	// Geometry Texture, 
    #define TEXTURE_CONTROL_PANEL_VENT                                         0xda6c09d5 	// Geometry Texture, 
    #define TEXTURE_CHEVRON_WHITE                                              0x2d48ae46 	// Geometry Texture, 
    #define TEXTURE_YELLOW_METAL3                                              0xb19884b2 	// Geometry Texture, 
    #define TEXTURE_YELLOW_METAL2                                              0xd5f75b6e 	// Geometry Texture, 
    #define TEXTURE_WATER2                                                     0x248d235a 	// Geometry Texture, 
    #define TEXTURE_WIRE                                                       0x23c0ecc1 	// Geometry Texture, 
    #define TEXTURE_CRATE11                                                    0xd672569c 	// Geometry Texture, 
    #define TEXTURE_BARREL_BL                                                  0x507a6ee4 	// Geometry Texture, 
    #define TEXTURE_FIREEXTING                                                 0x8d71d51b 	// Geometry Texture, 
    #define TEXTURE_AS_MESH_FENCE_POST                                         0x2c43e2c0 	// Geometry Texture, 
    #define TEXTURE_RAILING                                                    0x6c1d60f8 	// Geometry Texture, 
    #define TEXTURE_WARNING_LIGHT_ORANGE                                       0x4aaeba13 	// Geometry Texture, 
    #define TEXTURE_AS_BLACK_RAILGALLERY                                       0x247aa7f2 	// Geometry Texture, 
    #define TEXTURE_BUNK_COVER_BOT                                             0xe40b2a8e 	// Geometry Texture, 
    #define TEXTURE_BUNK_COVER_TOP                                             0x93e45112 	// Geometry Texture, 
    #define TEXTURE_METAL_TILE                                                 0x338123a8 	// Geometry Texture, 
    #define TEXTURE_FLOOR1                                                     0xa58a783 	// Geometry Texture, 
    #define TEXTURE_AS_LIGHT_COVER                                             0xd927e949 	// Geometry Texture, 
    #define TEXTURE_WHITEALPHA8X8                                              0xe760cb9f 	// Geometry Texture, 
    #define TEXTURE_DIRT                                                       0x31299204 	// Geometry Texture, 
    #define TEXTURE_WOOD_PLANK                                                 0xfde7a883 	// Geometry Texture, 
    #define TEXTURE_AS_GLASS_FOYER                                             0x8d91d36c 	// Geometry Texture, 
    #define TEXTURE_WOOD_PLANK2                                                0x7667614d 	// Geometry Texture, 
    #define TEXTURE_DOCKS_SKY_NIGHT                                            0x3324092 	// Geometry Texture, 
    #define TEXTURE_BUSY_CLOUDS01                                              0x6a6998dd 	// Geometry Texture, 
    #define TEXTURE_BUSY_CLOUDS02                                              0x393b1970 	// Geometry Texture, 
    #define TEXTURE_CUPBOARDS                                                  0x6b347962 	// Geometry Texture, 
    #define TEXTURE_TOILET                                                     0xda62ab21 	// Geometry Texture, 
    #define TEXTURE_SINK                                                       0x80d5d065 	// Geometry Texture, 
    #define TEXTURE_LOCKER                                                     0xd1cc7801 	// Geometry Texture, 
    #define TEXTURE_NEWSPAPER                                                  0x48ae14b2 	// Geometry Texture, 
    #define TEXTURE_CARGOSERVICES2                                             0xa7ecc51e 	// Geometry Texture, 
    #define TEXTURE_BLACK_METAL2                                               0x5eb01d3a 	// Geometry Texture, 
    #define TEXTURE_WHEEL                                                      0x8a5c34b8 	// Geometry Texture, 
    #define TEXTURE_SHADOW2                                                    0x57e674f6 	// Geometry Texture, 
    #define TEXTURE_PINUP1                                                     0xca5481fe 	// Geometry Texture, 
    #define TEXTURE_PINUP2                                                     0x143b09a4 	// Geometry Texture, 
    #define TEXTURE_DOORLOCK2                                                  0x8322d687 	// Geometry Texture, 
    #define TEXTURE_LEATHER_OFFICE                                             0x2a8a0c4 	// Geometry Texture, 
    #define TEXTURE_WINEBOTTLE                                                 0x528ae55c 	// Geometry Texture, 
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
    #define TEXTURE_REFLECT_SHINY_STRIPE_ADD                                   0x131b22ba 	// Geometry Texture, 
    #define TEXTURE_BRENTEN2                                                   0xed56253 	// Geometry Texture, 
    #define TEXTURE_SHGUN                                                      0x6f5db09a 	// Geometry Texture, 
    #define TEXTURE_MAGNUM440                                                  0x878a1f8d 	// Geometry Texture, 
    #define TEXTURE_KCUPBOARDS                                                 0x719ffb61 	// Geometry Texture, 
    #define TEXTURE_DOORDOCKS                                                  0x5d351835 	// Geometry Texture, 
    #define TEXTURE_DOWNLIGHT                                                  0x68b82e84 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICWHAND02                                       0xd1715cec 	// Geometry Texture, 
    #define TEXTURE_MV_JB_MANUAL04                                             0x1422398 	// Geometry Texture, 
    #define TEXTURE_MANUEL_TASH                                                0x3baacf6a 	// Geometry Texture, 
    #define TEXTURE_MV_JB_MANUSHOES                                            0xededdf07 	// Geometry Texture, 
    #define TEXTURE_MV_JB_MANUJACKET                                           0x52f20cbe 	// Geometry Texture, 
    #define TEXTURE_MV_JB_MANUTROU                                             0x8ac7dd97 	// Geometry Texture, 
    #define TEXTURE_MV_JB_MANUBELT                                             0xec0b7ee 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_TROU                                     0x1868224c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICSHOE03                                        0xd6c6f905 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_GLOVE                                    0x45584f0f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_NECK1W                                       0x781f2a2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_FULL_ARM03W                                  0x26e4c7fa 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_SLEAVE                                   0xe98092e2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_BODY                                     0x3315942d 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TSHIRT                                               0x7ccc6ee8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_WAISTCOAT                                0xbb4274c5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY01                                       0x107939b8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU01                                       0x668b6438 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM01                                        0x917e8bb3 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICSHOE01                                        0x1a16f7bb 	// Geometry Texture, 
    #define TEXTURE_MV_GS_DEFAULT_SPEC01                                       0x890605f7 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTFRONT03                                        0xa75991bd 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY02                                       0x4eec444e 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU02                                       0xf7709498 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM02                                        0x3b02463e 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTFRONT01                                        0x7139dc94 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TIE01                                        0x5795abc6 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTBODY01                                         0xb86c9c09 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_FULL_ARM02W                                  0xfcf3c292 	// Geometry Texture, 
    #define TEXTURE_SKIN_SPEC_01                                               0x1a0fe4c3 	// Geometry Texture, 
    #define TEXTURE_ASSASIN_SPEC_01                                            0xddd3173f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTARM01S                                         0x47b49098 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTBODY02                                         0x3d809f4f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTARM02S                                         0xc181d962 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTBODY03                                         0x289a61b5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU03                                       0x98f8f34c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICSHOE04                                        0xeb7da07f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GSHIRTARM03S                                         0xb9a2d1a7 	// Geometry Texture, 
    #define TEXTURE_MV_GS_CARGOCO_JACKET                                       0xa913d0ed 	// Geometry Texture, 
    #define TEXTURE_MV_GS_CARGOCO_HEAD                                         0x2bc88ab9 	// Geometry Texture, 
    #define TEXTURE_MV_GS_CARGOCO_HAND                                         0x62e00ef5 	// Geometry Texture, 
    #define TEXTURE_MV_GS_CARGOCO_HAT                                          0xb0a81378 	// Geometry Texture, 
    #define TEXTURE_MV_JBGS_GENTROU2                                           0xc4fc752b 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_SHIRT_FRONT01                                0x4352be24 	// Geometry Texture, 
    #define TEXTURE_CARGO_CHAINWINCH                                           0xcef29479 	// Geometry Texture, 
    #define TEXTURE_BRICKWALL                                                  0x2f3bc7c8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITBODY05                                       0x875f992f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_TROU05                                       0x5e941ca3 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GEN_SUITARM05                                        0x9a55e3e3 	// Geometry Texture, 
    #define TEXTURE_WARNING_LIGHT_GREY                                         0xda0de8be 	// Geometry Texture, 
    #define TEXTURE_COMPTEXTS                                                  0xd777e9ef 	// Geometry Texture, 
    #define TEXTURE_ENGINE_CONSOLE                                             0x8d65e88c 	// Geometry Texture, 
    #define TEXTURE_ENGINE_GREEN                                               0x98ce5da0 	// Geometry Texture, 
    #define TEXTURE_WIRE1                                                      0x22f58a44 	// Geometry Texture, 
    #define TEXTURE_SKYLINE                                                    0xc0b753b0 	// Geometry Texture, 
    #define TEXTURE_DRUGS_BAG                                                  0xf1d62836 	// Geometry Texture, 
    #define TEXTURE_M16                                                        0x26f6a629 	// Geometry Texture, 
    #define TEXTURE_FILING_CABINET                                             0xb256d494 	// Geometry Texture, 
    #define TEXTURE_SWES2                                                      0x50868516 	// Geometry Texture, 
    #define TEXTURE_WATERDAMAGE                                                0x892ecfab 	// Geometry Texture, 
    #define TEXTURE_MUCK1                                                      0x32f4c360 	// Geometry Texture, 
    #define TEXTURE_MV_GS_ASSASINSHIRTBODY02                                   0x7040fdfa 	// Geometry Texture, 
    #define TEXTURE_MV_GS_ASSASINSHIRTARM02                                    0xe645fa33 	// Geometry Texture, 
    #define TEXTURE_MV_GS_ASSASINTROU01                                        0x6664a674 	// Geometry Texture, 
    #define TEXTURE_MV_GS_ASSASINSHOE01                                        0x68d34efc 	// Geometry Texture, 
    #define TEXTURE_MV_GS_ASSASINFACE01                                        0x997579d8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_ASSASINHAIRALPHA                                     0xd517ad29 	// Geometry Texture, 
    #define TEXTURE_PSG                                                        0x9a49517f 	// Geometry Texture, 
    #define TEXTURE_SILVERTABLE                                                0x7a98273d 	// Geometry Texture, 
    #define TEXTURE_TABLE_ENV                                                  0x8cf22ea5 	// Geometry Texture, 
    #define TEXTURE_FAB                                                        0x6f9f1ccd 	// Geometry Texture, 

    #define GEOMETRY_01_CARGOSHIP                                              0x3702ec19
    #define GEOMETRY_KEY                                                       0x27b642cf
    #define GEOMETRY_CONTAINER_CLOSED                                          0xd15246e9
    #define GEOMETRY_CONTAINER_HOLLOW                                          0xae4be9
    #define GEOMETRY_CRATE_WOOD1M                                              0xfd2c85a3
    #define GEOMETRY_3X3CRATE_METAL                                            0xddf2906
    #define GEOMETRY_1X1CRATE_WOOD                                             0x99968325
    #define GEOMETRY_TUBBS_BODY5                                               0x1d0be275
    #define GEOMETRY_SYLVIA_MESH                                               0x4135413c
    #define GEOMETRY_CONT_D_LEFT                                               0x2c75ead9
    #define GEOMETRY_CONT_D_RIGHT                                              0xbaa790aa
    #define GEOMETRY_DOOR_BUTTON                                               0xa0ad0f99
    #define GEOMETRY_CRANE_BODY                                                0xf5c36675
    #define GEOMETRY_METALSTEP                                                 0xba3a3cdb
    #define GEOMETRY_METALRAIL                                                 0xcbdf969d
    #define GEOMETRY_METALRAIL_SML                                             0xbb429c54
    #define GEOMETRY_METALCORNER                                               0x5d05574e
    #define GEOMETRY_METAL_PILLAR                                              0x1ecdbea0
    #define GEOMETRY_METAL_SUPPORT                                             0x4d66afc7
    #define GEOMETRY_01_CARGOSHIP_SIDE_REAR                                    0xae5833f8
    #define GEOMETRY_01_CARGOSHIP_SIDE_FRONT                                   0x7d1810c3
    #define GEOMETRY_CONTAINER_RUNNERS                                         0x8556bf14
    #define GEOMETRY_RSJ_GIRDER                                                0xd33144f9
    #define GEOMETRY_01_CARGOSHIP_1                                            0x784e33c2
    #define GEOMETRY_01_CARGOSHIP_2                                            0x9dc75068
    #define GEOMETRY_01_CARGOSHIP_3                                            0xc140710e
    #define GEOMETRY_01_CARGOSHIP_4                                            0x52148a8b
    #define GEOMETRY_01_CARGOSHIP_6                                            0xeb1ac847
    #define GEOMETRY_01_CARGOSHIP_EXTERIORA                                    0x39a7718e
    #define GEOMETRY_01_CARGOSHIP_EXTERIORB                                    0x2fe990da
    #define GEOMETRY_01_CARGOSHIP_FRONT_INSIDE                                 0x82c4757d
    #define GEOMETRY_01_CARGOSHIP_FRONT_WINDOW_GLASS                           0x54a3f6ee
    #define GEOMETRY_METAL_POST                                                0x5b9a797d
    #define GEOMETRY_01_CARGOSHIP_REARDECK                                     0x444b884d
    #define GEOMETRY_01_CARGOSHIP_4TOP                                         0xcc1c350d
    #define GEOMETRY_01_CARGOSHIP_1TOP                                         0xd9b5b9fd
    #define GEOMETRY_01_CARGOSHIP_2TOP                                         0xd52d3dad
    #define GEOMETRY_01_CARGOSHIP_3TOP                                         0x2d1a4af0
    #define GEOMETRY_METAL_LADDER                                              0x88ad4487
    #define GEOMETRY_CRANE                                                     0x67dba927
    #define GEOMETRY_CRANE_CONTROL                                             0xf0892ce
    #define GEOMETRY_WATER_IN_HANGER                                           0xa8b32c98
    #define GEOMETRY_METALWIRE                                                 0x29bcf749
    #define GEOMETRY_LADDER_SECURE_FRAME                                       0x7865a12a
    #define GEOMETRY_WOODEN_PALETTE_HIGH                                       0xea48106
    #define GEOMETRY_BARREL                                                    0x43a01dbe
    #define GEOMETRY_BARREL_GROUPX4                                            0xad36ed54
    #define GEOMETRY_FIREEX                                                    0x250c2068
    #define GEOMETRY_MESH_GATE                                                 0x7677ba8d
    #define GEOMETRY_MESH_RAILING                                              0x3cbbcd18
    #define GEOMETRY_ORANGE_LIGHT                                              0x47bbbffc
    #define GEOMETRY_ENGINE_STACK                                              0x2319b920
    #define GEOMETRY_ENGINE_BASE                                               0xc3efe322
    #define GEOMETRY_ENGINE_RAIL                                               0x5d432576
    #define GEOMETRY_METAL_WALKWAY                                             0xc2d36be5
    #define GEOMETRY_HOOK                                                      0xbb0e8b9d
    #define GEOMETRY_BUNK                                                      0x58badb89
    #define GEOMETRY_STRIPLIGHT                                                0x1e70f91e
    #define GEOMETRY_DIRT                                                      0xbd8ac1b2
    #define GEOMETRY_EXHAUST_PIPE_TEE                                          0x8fcb014e
    #define GEOMETRY_EXHAUST_PIPE_BEND                                         0x83b4a0fc
    #define GEOMETRY_EXHAUST_PIPE_LONG                                         0x24d6a9b4
    #define GEOMETRY_EXHAUST_PIPE_SHORT                                        0x79a2f93d
    #define GEOMETRY_EXHAUST_PIPE_START                                        0x33a5b950
    #define GEOMETRY_EXHAUST_THIN_TO_THICK                                     0x5b26f38
    #define GEOMETRY_PLANK                                                     0x17bc990f
    #define GEOMETRY_ENGINE_STACK_END                                          0x6f37b108
    #define GEOMETRY_ENGINE_STACK_RING                                         0x8ca62070
    #define GEOMETRY_FLOATING_CEILING                                          0xf69fa5b
    #define GEOMETRY_OFFICEFRONT_DOOR                                          0xf717bedb
    #define GEOMETRY_OFFICEFRONT                                               0x65da4caf
    #define GEOMETRY_CHEVRON_WHITE                                             0x7601f299
    #define GEOMETRY_PLANK2                                                    0x67fe7582
    #define GEOMETRY_SKYDOME_DOCKSIDE                                          0xc1f343b3
    #define GEOMETRY_CLOUDS                                                    0x94da1de1
    #define GEOMETRY_DOORLOCK                                                  0x817885e0
    #define GEOMETRY_DOORLOCK_SRND                                             0xe53dae1e
    #define GEOMETRY_SHIP_PILLAR                                               0x465620cd
    #define GEOMETRY_TOILET_OPEN                                               0x6701a9f7
    #define GEOMETRY_LOCKER                                                    0xa063f342
    #define GEOMETRY_NEWSPAPER                                                 0xa9d8aa22
    #define GEOMETRY_PILLOW                                                    0xcfd5ee73
    #define GEOMETRY_FORKLIFT                                                  0xa5d803d1
    #define GEOMETRY_TRUCK_WHEEL                                               0x5fe45af2
    #define GEOMETRY_SHADOW_GENERIC                                            0x7d3fcdb2
    #define GEOMETRY_PINUP1                                                    0x9930e30
    #define GEOMETRY_PINUP2                                                    0xa4f3563d
    #define GEOMETRY_PANEL_FOOT                                                0xd304d5aa
    #define GEOMETRY_MELAMINE_PANEL                                            0xce7fd88f
    #define GEOMETRY_TELLY                                                     0xcf249610
    #define GEOMETRY_RADARMONITOR                                              0x9fafe249
    #define GEOMETRY_LEATHER_CHAIR                                             0x8934c3b7
    #define GEOMETRY_WINEBOTTLE                                                0x18d16c31
    #define GEOMETRY_WINEBOTTLE2                                               0x7f5711c2
    #define GEOMETRY_CHOPPING_BOARD                                            0xd49fd87b
    #define GEOMETRY_PAN1                                                      0x979ec4a6
    #define GEOMETRY_CUP                                                       0x54c85e94
    #define GEOMETRY_CROCKETT_SKIN_2                                           0x6ca3f709
    #define GEOMETRY_BREN                                                      0x9b4890b
    #define GEOMETRY_SHOTGUN                                                   0x5526256f
    #define GEOMETRY_MAGNUM440                                                 0xa1afa9b1
    #define GEOMETRY_SHIPCOVER                                                 0xc08ee2ed
    #define GEOMETRY_KITCHEN_SINK008                                           0x2ce1cc11
    #define GEOMETRY_KITCHEN_COUNTER11                                         0x598f9d0e
    #define GEOMETRY_KITCHEN_COUNTER21                                         0x1e742834
    #define GEOMETRY_KITCHEN_COUNTER31                                         0x2322bb22
    #define GEOMETRY_DOOR_DOCK                                                 0x7cfcf5c4
    #define GEOMETRY_LIGHTRAYS                                                 0x56a21bca
    #define GEOMETRY_SQUAREGLARE                                               0x8fb02fff
    #define GEOMETRY_ORTEGA                                                    0xa97b452a
    #define GEOMETRY_CARGO_SHIP_WORKER02                                       0x9bb33dbc
    #define GEOMETRY_CARGO_SHIP_WORKER01                                       0x69180f68
    #define GEOMETRY_ORTEGAS_HENCHMAN_06                                       0x324348d9
    #define GEOMETRY_ORTEGAS_HENCHMAN_01                                       0x5104c817
    #define GEOMETRY_ORTEGAS_HENCHMAN_02                                       0x7b12180
    #define GEOMETRY_ORTEGAS_HENCHMAN_03                                       0xc99d7260
    #define GEOMETRY_ORTEGAS_HENCHMAN_04                                       0xaadaf2ae
    #define GEOMETRY_CONTAINER_SHIP_CAPTAIN                                    0xadcc7568
    #define GEOMETRY_CARGO_WINCH                                               0x806a7dab
    #define GEOMETRY_CARGO_CHAIN                                               0x3fd6b968
    #define GEOMETRY_CAPSTAN                                                   0x3cc86c07
    #define GEOMETRY_SAFETYLIGHT                                               0x6649433d
    #define GEOMETRY_JUAN_HENCHMAN_04                                          0x6ce45f09
    #define GEOMETRY_DOCK_CHAIR                                                0x7b90e8e2
    #define GEOMETRY_METAL_WALKWAY_NOSIDE                                      0xad78a5ec
    #define GEOMETRY_SAFETYCONE                                                0x7c4559f5
    #define GEOMETRY_SQUAREGLARETEXT                                           0x8d713468
    #define GEOMETRY_ENGINE_CONSOLE                                            0x36d653c9
    #define GEOMETRY_CONTAINER_CRANE                                           0xf2843fb5
    #define GEOMETRY_CAMERA_COLLISION_BOX                                      0x2aa5746d
    #define GEOMETRY_MOVEMENT_COLLISION_BOX                                    0x2212f138
    #define GEOMETRY_METALSTEPNR                                               0x77af9e31
    #define GEOMETRY_DOCK_LOWA                                                 0xce2d560
    #define GEOMETRY_DOCK_LOWB                                                 0xd651adbf
    #define GEOMETRY_DOCK_WAREHOUSE                                            0xdf3bc4b8
    #define GEOMETRY_DOCK_GROUND                                               0xc39acdfd
    #define GEOMETRY_BUILDINGS                                                 0x8dd35acf
    #define GEOMETRY_LAMP_POST                                                 0x2e728c7c
    #define GEOMETRY_DRUGS                                                     0x8157cc56
    #define GEOMETRY_M16                                                       0xe5355b0f
    #define GEOMETRY_LEDGER_BROWN                                              0x801ef458
    #define GEOMETRY_SMITHWES01                                                0xaf2f8839
    #define GEOMETRY_WATERDAMAGE                                               0x59aed453
    #define GEOMETRY_MUCK1                                                     0x83b1e000
    #define GEOMETRY_ASSASIN02                                                 0x55955c68
    #define GEOMETRY_PSG1                                                      0xa3463560
    #define GEOMETRY_CRATE_WOOD_OPEN_PLN                                       0x7a10b9af
    #define GEOMETRY_METALSTEP_START                                           0x6aaf97d
    #define GEOMETRY_METALSTEP_END                                             0xb8f534df
    #define GEOMETRY_DRUGS_TABLE                                               0x9f8ae3b7
    #define GEOMETRY_CAMERA_COLLISION_CURVE                                    0xcb6396c4
    #define GEOMETRY_FIRSTAID                                                  0xc0877e88
    #define GEOMETRY_MOVEMENT_COLLISION_CURVE                                  0x83ffb656

    #define FX_LIGHTFX                                                         0x8fdca41d
    #define FX_STEAM_FX                                                        0x4f7179f0
    #define FX_BOW_FRET_FX                                                     0x8db329aa
    #define FX_BLOOD                                                           0x667addb9
    #define FX_FASHY_THINGY                                                    0x53f7c47
    #define FX_SWITCH_FX                                                       0xe1c16477

    #define PLAYER_START_POINT_CROCKETT_START                                  0x3091fb5f
    #define PLAYER_START_POINT_TUBBS_START                                     0x77983874
    #define PLAYER_START_POINT_BOSSCOVER_1_1                                   0xd46df8ad
    #define PLAYER_START_POINT_BOSS_COVER_1_2                                  0xd92ede74
    #define PLAYER_START_POINT_CAPTAIN_COVER01                                 0x5e6a7fef
    #define PLAYER_START_POINT_CAPTAIN_COVER02                                 0x53295936
    #define PLAYER_START_POINT_GANGWAY_COVER_01                                0x3d34cebc
    #define PLAYER_START_POINT_416_1                                           0x4398b1f0
    #define PLAYER_START_POINT_701_2                                           0x18bbf7ba
    #define PLAYER_START_POINT_202_1                                           0xc78b5802
    #define PLAYER_START_POINT_121_5                                           0xc5a29a6d
    #define PLAYER_START_POINT_111_1                                           0xd4cf1938
    #define PLAYER_START_POINT_111_2                                           0xd98c3fe1
    #define PLAYER_START_POINT_808_4                                           0xbf045ee7
    #define PLAYER_START_POINT_333_1                                           0xcb96f6e0
    #define PLAYER_START_POINT_707_3                                           0xf9ac55ab
    #define PLAYER_START_POINT_444_1                                           0xe5d03164
    #define PLAYER_START_POINT_555_1                                           0xea7cc688
    #define PLAYER_START_POINT_666_1                                           0xfa89debc
    #define PLAYER_START_POINT_777_1                                           0xf5252950
    #define PLAYER_START_POINT_777_2                                           0xf8660f89
    #define PLAYER_START_POINT_777_3                                           0xfca7123e
    #define PLAYER_START_POINT_777_4                                           0xe2e0423b
    #define PLAYER_START_POINT_888_1                                           0xa60451b4
    #define PLAYER_START_POINT_888_2                                           0xab47776d
    #define PLAYER_START_POINT_888_3                                           0xaf866ada
    #define PLAYER_START_POINT_888_4                                           0xb1c13adf
    #define PLAYER_START_POINT_131_1                                           0xd77e4036
    #define PLAYER_START_POINT_808_2                                           0xa5821355
    #define PLAYER_START_POINT_808_3                                           0xa1430ee2
    #define PLAYER_START_POINT_707_1                                           0xf02e6ec5
    #define PLAYER_START_POINT_707_2                                           0xfd6d481c
    #define PLAYER_START_POINT_606_1                                           0xfe5a35ae
    #define PLAYER_START_POINT_606_2                                           0xf3191377
    #define PLAYER_START_POINT_606_3                                           0xf7d80ec0
    #define PLAYER_START_POINT_505_2                                           0xe185feca
    #define PLAYER_START_POINT_505_3                                           0xe544e37d
    #define PLAYER_START_POINT_121_1                                           0xd6a6ecb1
    #define PLAYER_START_POINT_121_2                                           0xdbe5ca68
    #define PLAYER_START_POINT_202_2                                           0xcac87edb
    #define PLAYER_START_POINT_132_1                                           0xa5951fe5
    #define PLAYER_START_POINT_131_2                                           0xda3d66ef
    #define PLAYER_START_POINT_121_4                                           0xc16387da
    #define PLAYER_START_POINT_141_1                                           0xd27507a3
    #define PLAYER_START_POINT_151_1                                           0xd3adab24
    #define PLAYER_START_POINT_161_1                                           0xd1c45ead
    #define PLAYER_START_POINT_171_1                                           0xd01cf22a
    #define PLAYER_START_POINT_BLANCO_S_COVER_POINT                            0x6f3da595
    #define PLAYER_START_POINT_799_1                                           0x90ad5a8e
    #define PLAYER_START_POINT_788_1                                           0x436c37d5
    #define PLAYER_START_POINT_788_2                                           0x4e2f110c
    #define PLAYER_START_POINT_766_1                                           0x26e4440b
    #define PLAYER_START_POINT_799_2                                           0x9dee7c57
    #define PLAYER_START_POINT_766_2                                           0x2ba762d2
    #define PLAYER_START_POINT_808_5                                           0xbbc54350
    #define PLAYER_START_POINT_716_1                                           0x23ef039e
    #define PLAYER_START_POINT_816_1                                           0xc68765ff
    #define PLAYER_START_POINT_626_1                                           0xfdeb6ca0
    #define PLAYER_START_POINT_876_1                                           0xc2548eed
    #define PLAYER_START_POINT_413_1                                           0xd4a55185
    #define PLAYER_START_POINT_413_2                                           0xd9e6775c
    #define PLAYER_START_POINT_314_1                                           0xffe8d194
    #define PLAYER_START_POINT_314_2                                           0xf2abf74d
    #define PLAYER_START_POINT_314_3                                           0xf66aeafa
    #define PLAYER_START_POINT_BOSSCOVER_1_1_COPY_1                            0x649cae2a
    #define PLAYER_START_POINT_1                                               0xd0f37026
    #define PLAYER_START_POINT_2                                               0xddb056ff
    #define PLAYER_START_POINT_3                                               0xd9714b48
    #define PLAYER_START_POINT_4                                               0xc7361b4d
    #define PLAYER_START_POINT_5                                               0xc3f706fa
    #define PLAYER_START_POINT_6                                               0xceb42023
    #define PLAYER_START_POINT_7                                               0xca753d94
    #define PLAYER_START_POINT_GANGWAY_COVER_01_COPY_1                         0x10fa7c9c
    #define PLAYER_START_POINT_GANGWAY_COVER_01_COPY_2                         0x1db95a45
    #define PLAYER_START_POINT_8                                               0xf23a8029
    #define PLAYER_START_POINT_9                                               0xf6fb9d9e

    #define POINT_GROUP_ENGINE1                                                0xc27e9338
    #define POINT_GROUP_ENGINE1_POINT_ENGINE11                                 0xfa68e4d8
    #define POINT_GROUP_ENGINE1_POINT_ENGINE12                                 0xf72bc201
    #define POINT_GROUP_ENGINE1_POINT_ENGINE13                                 0xf3eadfb6

    #define POINT_GROUP_ENGINE2                                                0xcf3db5e1
    #define POINT_GROUP_ENGINE2_POINT_ENGINE21                                 0x8883bb0b
    #define POINT_GROUP_ENGINE2_POINT_ENGINE22                                 0x85c09dd2
    #define POINT_GROUP_ENGINE2_POINT_ENGINE23                                 0x81018065
    #define POINT_GROUP_ENGINE2_POINT_ENGINE24                                 0x9f46d060
    #define POINT_GROUP_ENGINE2_POINT_ENGINE25                                 0x9b87cdd7

    #define POINT_GROUP_DECK1PATROL                                            0x2dc60110
    #define POINT_GROUP_DECK1PATROL_POINT_DECK1PATROL1                         0xbf1c5b18
    #define POINT_GROUP_DECK1PATROL_POINT_DECK1PATROL2                         0xb25f7dc1
    #define POINT_GROUP_DECK1PATROL_POINT_DECK1PATROL3                         0xb69e6076

    #define POINT_GROUP_DECK2PATROL                                            0xfc3fb923
    #define POINT_GROUP_DECK2PATROL_POINT_DECK2PATROL1                         0x53fe3e46
    #define POINT_GROUP_DECK2PATROL_POINT_DECK2PATROL2                         0x5ebd189f
    #define POINT_GROUP_DECK2PATROL_POINT_DECK2PATROL3                         0x5a7c0528

    #define POINT_GROUP_BESIDECRANEPATROL                                      0xf31a6fba
    #define POINT_GROUP_BESIDECRANEPATROL_POINT_BESIDECRANEPATROL1             0x4e6700e5
    #define POINT_GROUP_BESIDECRANEPATROL_POINT_BESIDECRANEPATROL2             0x4324263c
    #define POINT_GROUP_BESIDECRANEPATROL_POINT_BESIDECRANEPATROL3             0x47e53b8b

    #define POINT_GROUP_1CARGO_AMBUSH                                          0x4d608e94
    #define POINT_GROUP_1CARGO_AMBUSH_POINT_1CARGO_AMBUSH1                     0xb5361e8e
    #define POINT_GROUP_1CARGO_AMBUSH_POINT_1CARGO_AMBUSH2                     0xb8753857
    #define POINT_GROUP_1CARGO_AMBUSH_POINT_1CARGO_AMBUSH3                     0xbcb425e0

    #define POINT_GROUP_2CARGO_AMBUSH                                          0x457bab9e
    #define POINT_GROUP_2CARGO_AMBUSH_POINT_2CARGO_AMBUSH1                     0x881bf936
    #define POINT_GROUP_2CARGO_AMBUSH_POINT_2CARGO_AMBUSH2                     0x8558dfef

    #define POINT_GROUP_ENGINE3                                                0xcbfca856
    #define POINT_GROUP_ENGINE3_POINT_ENGINE31                                 0x5a9a7ad7
    #define POINT_GROUP_ENGINE3_POINT_ENGINE32                                 0x57d95c0e
    #define POINT_GROUP_ENGINE3_POINT_ENGINE33                                 0x531841b9
    #define POINT_GROUP_ENGINE3_POINT_ENGINE34                                 0x4d5f11bc
    #define POINT_GROUP_ENGINE3_POINT_ENGINE35                                 0x499e0c0b

    #define POINT_GROUP_CARGOBALCONY1LEFT                                      0xece5c24a
    #define POINT_GROUP_CARGOBALCONY1LEFT_POINT_CARGOBALCONY1LEFT1             0xc5949628
    #define POINT_GROUP_CARGOBALCONY1LEFT_POINT_CARGOBALCONY1LEFT2             0xc8d7b0f1
    #define POINT_GROUP_CARGOBALCONY1LEFT_POINT_CARGOBALCONY1LEFT3             0xcc16ad46

    #define POINT_GROUP_CARGOBALCONY2RIGHT                                     0x78a3e8af
    #define POINT_GROUP_CARGOBALCONY2RIGHT_POINT_CARGOBALCONY2RIGHT1           0xb5a73d6b
    #define POINT_GROUP_CARGOBALCONY2RIGHT_POINT_CARGOBALCONY2RIGHT2           0xb8e41bb2
    #define POINT_GROUP_CARGOBALCONY2RIGHT_POINT_CARGOBALCONY2RIGHT3           0xbc250605

    #define POINT_GROUP_CARGOBALCONYLOW                                        0xc6ccbd52
    #define POINT_GROUP_CARGOBALCONYLOW_POINT_CARGOBALCONYLOW1                 0x5b42f01c
    #define POINT_GROUP_CARGOBALCONYLOW_POINT_CARGOBALCONYLOW2                 0x5601d6c5
    #define POINT_GROUP_CARGOBALCONYLOW_POINT_CARGOBALCONYLOW3                 0x52c0cb72
    #define POINT_GROUP_CARGOBALCONYLOW_POINT_CARGOBALCONYLOW4                 0x4c879b77
    #define POINT_GROUP_CARGOBALCONYLOW_POINT_CARGOBALCONYLOW5                 0x484686c0

    #define POINT_GROUP_CONTDECKEXT_CHARGEGUARD                                0x75bfe349
    #define POINT_GROUP_CONTDECKEXT_CHARGEGUARD_POINT_CONTDECKEXT_CHARGEGUARD1 0x986159bc
    #define POINT_GROUP_CONTDECKEXT_CHARGEGUARD_POINT_CONTDECKEXT_CHARGEGUARD2 0x95227f65
    #define POINT_GROUP_CONTDECKEXT_CHARGEGUARD_POINT_CONTDECKEXT_CHARGEGUARD3 0x91e362d2

    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE001                             0x2d952bc1
    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE001_POINT_ENGCONSOFFCHARGE001   0x47c4840e
    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE001_POINT_ENGCONSCHARGE002      0x3c920f77
    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE001_POINT_ENGCONSCHARGE003      0x385312c0

    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE002                             0x20d60d18
    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE002_POINT_ENGCONSOFFCHARGEB001  0x9c5b5f43
    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE002_POINT_ENGCONSOFFCHARGEB002  0x9118799a
    #define POINT_GROUP_ENGINECONSOLEOFF_CHARGE002_POINT_ENGCONSOFFCHARGEB003  0x95d9642d

    // Hull: interior4
    #define POINT_UNNAMED_1                                                    0x52cfb1cf

    // Hull: top_4
    #define POINT_UNNAMED_2                                                    0x5f8c9716

    #define TIMELINE_INSTANCE_TIMELINE_DOOR2MAIN                               0x14466b9d
    #define TIMELINE_INSTANCE_TIMELINE_UPFROMHOLD                              0x7e2d6d5e
    #define TIMELINE_INSTANCE_TIMELINE_LIFTBLOCKINGCRATE                       0x3781e51f
    #define TIMELINE_INSTANCE_CUT_SCENE_16                                     0x8b0024c3
    #define TIMELINE_INSTANCE_TIMELINE_CRATE1                                  0x89f62a1b
    #define TIMELINE_INSTANCE_TIMELINE_CRATE2                                  0x84b50cc2
    #define TIMELINE_INSTANCE_TIMELINE_CARGOBAYDOOR                            0xf5a7ce10
    #define TIMELINE_INSTANCE_TIMELINE_MOVINGPLATFORM                          0x6d628414
    #define TIMELINE_INSTANCE_CUT_SCENE_17                                     0x8fc13974
    #define TIMELINE_INSTANCE_TIMELINE_ENGINECAMERA                            0xffcc4321
    #define TIMELINE_INSTANCE_CARGO_HOLD_DOOR_OPEN                             0xeb739d95
    #define TIMELINE_INSTANCE_CRATE_BACK_ALT                                   0xeefe8477
    #define TIMELINE_INSTANCE_CARGOSHIP_START                                  0xab0dd4ed
    #define TIMELINE_INSTANCE_CUT_SCENE_17A                                    0xa03d4e98
    #define TIMELINE_INSTANCE_GATEONLY                                         0x1afe3827
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE1SOUNDOFF                     0x2cccf558
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE2SOUNDOFF                     0x3e0c1645
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE3SOUNDOFF                     0xcc0cbc23
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE4SOUNDOFF                     0x1b8dd07f
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE5SOUNDOFF                     0xe98d7a19
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE6SOUNDOFF                     0xfb4d9904
    #define TIMELINE_INSTANCE_ENGINE_ROOM_CONSOLE7SOUNDOFF                     0x94d3362

    #define NAVMESH_TOPDECK4                                                   0x4d4a4aa6
    #define NAVMESH_TOPDECK3                                                   0x530d1aa3
    #define NAVMESH_MIDTOWER_DECK                                              0x4b656016
    #define NAVMESH_TOWER_TOPDECK                                              0xb454e99e
    #define NAVMESH_INTERIOR_WET_DECK                                          0x93289331
    #define NAVMESH_ENGINE_ROOM_NAV                                            0x562a5092
    #define NAVMESH_HOLD_KEY_BIT                                               0x7173f51c

    #define HULL_INTERIOR1                                                     0xf931bb1f
    #define HULL_INTERIOR2                                                     0xf4729dc6
    #define HULL_INTERIOR3                                                     0xf0b38071
    #define HULL_INTERIOR4                                                     0xeef4d074
    #define HULL_EXTERIOR3                                                     0xcb6d7cc5
    #define HULL_CONTROLDECK_EXTERIOR                                          0xf2ad6b7c
    #define HULL_CONTROLDECK_INTERIOR                                          0xd2742c0
    #define HULL_ENGINE_ROOM                                                   0x4f5adae9
    #define HULL_SKYDOME                                                       0xa531be78
    #define HULL_TOP_4                                                         0xb1361f89
    #define HULL_TOP_3                                                         0xaf714f8c
    #define HULL_TOP_2                                                         0xabb0523b
    #define HULL_TOP_1                                                         0xa6f374e2
    #define HULL_SEAFRET                                                       0x8fcdec3d
    #define HULL_STORAGE                                                       0xad83647a
    #define HULL_DOCKSIDE_HULL                                                 0xd95c2fd1

    // Hull: interior1
    #define FX_INSTANCE_SWITCH_FX_COPY_14                                      0x7e59cfd7
    #define FX_INSTANCE_SWITCH_FX_COPY_15                                      0x7a98d260
    #define FX_INSTANCE_LIGHTFX_COPY_37                                        0x7f2c464e
    #define FX_INSTANCE_LIGHTFX_COPY_38                                        0x4763fbf3
    #define FX_INSTANCE_LIGHTFX_COPY_39                                        0x43a2e644
    #define FX_INSTANCE_LIGHTFX_COPY_40                                        0x56a46831
    #define FX_INSTANCE_LIGHTFX_COPY_41                                        0x52657586
    #define FX_INSTANCE_LIGHTFX_COPY_42                                        0x5f26535f
    #define FX_INSTANCE_LIGHTFX_COPY_75                                        0x338a5c89
    #define FX_INSTANCE_LIGHTFX_COPY_76                                        0x3ec97a50
    #define FX_INSTANCE_LIGHTFX_COPY_77                                        0x3a0867e7
    #define FX_INSTANCE_LIGHTFX_COPY_78                                        0x247da5a

    // Hull: interior2
    #define FX_INSTANCE_LIGHTFX_COPY_43                                        0x5be74ee8
    #define FX_INSTANCE_LIGHTFX_COPY_44                                        0x45a01eed
    #define FX_INSTANCE_LIGHTFX_COPY_45                                        0x4161035a
    #define FX_INSTANCE_LIGHTFX_COPY_46                                        0x4c222583
    #define FX_INSTANCE_LIGHTFX_COPY_47                                        0x48e33834
    #define FX_INSTANCE_LIGHTFX_COPY_48                                        0x70ac8589
    #define FX_INSTANCE_LIGHTFX_COPY_67                                        0xe811a63b
    #define FX_INSTANCE_LIGHTFX_COPY_68                                        0xd05e1b86
    #define FX_INSTANCE_LIGHTFX_COPY_69                                        0xd49f0631
    #define FX_INSTANCE_LIGHTFX_COPY_70                                        0x244f37e2

    // Hull: interior3
    #define FX_INSTANCE_LIGHTFX_COPY_49                                        0x746d983e
    #define FX_INSTANCE_LIGHTFX_COPY_50                                        0x84bda9ed
    #define FX_INSTANCE_LIGHTFX_COPY_51                                        0x807cb45a
    #define FX_INSTANCE_LIGHTFX_COPY_52                                        0x8d3f9283
    #define FX_INSTANCE_LIGHTFX_COPY_53                                        0x89fe8f34
    #define FX_INSTANCE_LIGHTFX_COPY_54                                        0x97b9df31
    #define FX_INSTANCE_LIGHTFX_COPY_66                                        0xecd0bb8c
    #define FX_INSTANCE_LIGHTFX_COPY_71                                        0x208e2a55

    // Hull: interior4
    #define FX_INSTANCE_LIGHTFX_COPY_55                                        0x9378c286
    #define FX_INSTANCE_LIGHTFX_COPY_56                                        0x9e3be45f
    #define FX_INSTANCE_LIGHTFX_COPY_57                                        0x9afaf9e8
    #define FX_INSTANCE_LIGHTFX_COPY_58                                        0xa2b54455
    #define FX_INSTANCE_LIGHTFX_COPY_59                                        0xa67459e2
    #define FX_INSTANCE_LIGHTFX_COPY_60                                        0xf656f63e
    #define FX_INSTANCE_LIGHTFX_COPY_61                                        0xf297eb89
    #define FX_INSTANCE_LIGHTFX_COPY_63                                        0xfb15d0e7
    #define FX_INSTANCE_LIGHTFX_COPY_64                                        0xe55280e2
    #define FX_INSTANCE_LIGHTFX_COPY_65                                        0xe1939d55
    #define FX_INSTANCE_LIGHTFX_COPY_72                                        0x2dcd0c8c
    #define FX_INSTANCE_SWITCH_FX_COPY_16                                      0x77dbf4b9
    #define FX_INSTANCE_SWITCH_FX_COPY_17                                      0x731ae90e
    #define FX_INSTANCE_LIGHTFX_COPY_73                                        0x290c113b
    #define FX_INSTANCE_LIGHTFX_COPY_74                                        0x374b413e

    // Hull: exterior3
    #define FX_INSTANCE_FASHY_THINGY                                           0x53f7c47

    // Hull: controldeck_exterior
    #define FX_INSTANCE_BLOOD                                                  0x667addb9
    #define FX_INSTANCE_LIGHTFX_COPY_10                                        0xc1998844
    #define FX_INSTANCE_LIGHTFX_COPY_11                                        0xc55895f3
    #define FX_INSTANCE_LIGHTFX_COPY_16                                        0xdb1fc5f6
    #define FX_INSTANCE_LIGHTFX_COPY_17                                        0xdfded841
    #define FX_INSTANCE_LIGHTFX_COPY_18                                        0xe79165fc
    #define FX_INSTANCE_LIGHTFX_COPY_19                                        0xe350784b
    #define FX_INSTANCE_LIGHTFX_COPY_20                                        0xb372d797
    #define FX_INSTANCE_LIGHTFX_COPY_21                                        0xb7b3ca20
    #define FX_INSTANCE_LIGHTFX_COPY_22                                        0xbaf0ecf9
    #define FX_INSTANCE_LIGHTFX_COPY_23                                        0xbe31f14e
    #define FX_INSTANCE_LIGHTFX_COPY_24                                        0xa076a14b

    // Hull: controldeck_interior
    #define FX_INSTANCE_LIGHTFX_COPY_4                                         0x14dd83a4
    #define FX_INSTANCE_LIGHTFX_COPY_5                                         0x101c9e13

    // Hull: engine_room
    #define FX_INSTANCE_LIGHTFX_COPY_3                                         0xa9ad3a1
    #define FX_INSTANCE_STEAM_FX                                               0x4f7179f0
    #define FX_INSTANCE_STEAM_FX_COPY_1                                        0x6caf293f
    #define FX_INSTANCE_STEAM_FX_COPY_2                                        0x61ec0fe6
    #define FX_INSTANCE_STEAM_FX_COPY_3                                        0x652d1251
    #define FX_INSTANCE_STEAM_FX_COPY_4                                        0x7b6a4254
    #define FX_INSTANCE_STEAM_FX_COPY_5                                        0x7fab5fe3
    #define FX_INSTANCE_STEAM_FX_COPY_6                                        0x72e8793a
    #define FX_INSTANCE_STEAM_FX_COPY_8                                        0x4e66d930
    #define FX_INSTANCE_STEAM_FX_COPY_9                                        0x4aa7c487
    #define FX_INSTANCE_STEAM_FX_COPY_10                                       0xe2b2036e
    #define FX_INSTANCE_STEAM_FX_COPY_11                                       0xe6731ed9
    #define FX_INSTANCE_LIGHTFX_COPY_6                                         0x1d5fb8ca
    #define FX_INSTANCE_LIGHTFX_COPY_7                                         0x199ea57d
    #define FX_INSTANCE_STEAM_FX_COPY_7                                        0x7629648d
    #define FX_INSTANCE_STEAM_FX_COPY_12                                       0xeb303800
    #define FX_INSTANCE_STEAM_FX_COPY_13                                       0xeff125b7
    #define FX_INSTANCE_LIGHTFX_COPY_1                                         0x318e8cf
    #define FX_INSTANCE_LIGHTFX_COPY_2                                         0xe5bce16
    #define FX_INSTANCE_LIGHTFX_COPY_8                                         0x21d118c0
    #define FX_INSTANCE_LIGHTFX_COPY_9                                         0x25100577
    #define FX_INSTANCE_LIGHTFX_COPY_25                                        0xa4b7bcfc
    #define FX_INSTANCE_LIGHTFX_COPY_26                                        0xa9f49a25
    #define FX_INSTANCE_LIGHTFX_COPY_27                                        0xad358792
    #define FX_INSTANCE_LIGHTFX_COPY_28                                        0x957a3a2f
    #define FX_INSTANCE_LIGHTFX_COPY_29                                        0x91bb2798
    #define FX_INSTANCE_LIGHTFX_COPY_30                                        0x616b164b
    #define FX_INSTANCE_LIGHTFX_COPY_31                                        0x65aa0bfc
    #define FX_INSTANCE_LIGHTFX_COPY_32                                        0x68e92d25
    #define FX_INSTANCE_LIGHTFX_COPY_33                                        0x6c283092
    #define FX_INSTANCE_LIGHTFX_COPY_34                                        0x726f6097
    #define FX_INSTANCE_LIGHTFX_COPY_35                                        0x76ae7d20
    #define FX_INSTANCE_LIGHTFX_COPY_36                                        0x7bed5bf9
    #define FX_INSTANCE_CONSOLE1GREEN                                          0xb263d02c
    #define FX_INSTANCE_CONSOLE1RED                                            0xc06514d4
    #define FX_INSTANCE_CONSOLE5GREEN                                          0xdec3e5cc
    #define FX_INSTANCE_CONSOLE5RED                                            0xbc9058d1
    #define FX_INSTANCE_CONSOLE4GREEN                                          0xc5ebe8b4
    #define FX_INSTANCE_CONSOLE4RED                                            0x60fdc266
    #define FX_INSTANCE_CONSOLE6GREEN                                          0xf3bbf244
    #define FX_INSTANCE_CONSOLE6RED                                            0xdce7eabf
    #define FX_INSTANCE_CONSOLE2GREEN                                          0x9f1bc7a4
    #define FX_INSTANCE_CONSOLE2RED                                            0xa012a6ba
    #define FX_INSTANCE_CONSOLE7GREEN                                          0xe893ff3c
    #define FX_INSTANCE_CONSOLE7RED                                            0x8a7008
    #define FX_INSTANCE_CONSOLE3GREEN                                          0x8433cadc
    #define FX_INSTANCE_CONSOLE3RED                                            0x7c7f3c0d
    #define FX_INSTANCE_LIGHTFX_COPY_62                                        0xffd4cd50

    // Hull: top_3
    #define FX_INSTANCE_FASHY_THINGY_COPY_1                                    0x1de7f955
    #define FX_INSTANCE_LIGHTFX_COPY_14                                        0xd29dfe98

    // Hull: top_2
    #define FX_INSTANCE_LIGHTFX_COPY_12                                        0xc81bb32a
    #define FX_INSTANCE_LIGHTFX_COPY_13                                        0xccdaae9d
    #define FX_INSTANCE_LIGHTFX_COPY_15                                        0xd65ce32f

    // Hull: top_1
    #define FX_INSTANCE_FASHY_THINGY_COPY_2                                    0x10a4df8c

    // Hull: seafret
    #define FX_INSTANCE_BOW_FRET_FX_COPY_1                                     0x41965912
    #define FX_INSTANCE_BOW_FRET_FX                                            0x8db329aa
    #define FX_INSTANCE_BOW_FRET_FX_COPY_2                                     0x4cd57fcb

    // Hull: interior1
    #define INSTANCE_3X3CRATE_METAL                                            0xbeeab758
    #define INSTANCE_CONTAINER_CARGOHOLD                                       0xda3c4106
    #define INSTANCE_ENGINECONSOLEOFF001                                       0xaa6cacac
    #define INSTANCE_ENGINECONSOLEOFF002                                       0xa72f8a75
    #define INSTANCE_CONSOLE1                                                  0x1d9349b2
    #define INSTANCE_DRUGS3                                                    0xa4150ac8
    #define INSTANCE_CONTAINER_LIFTME                                          0x41b19817
    #define INSTANCE_DRUGS2                                                    0xa0d4177f
    #define INSTANCE_CARGOBAY2PATROL                                           0x121d8aa9
    #define INSTANCE_DOOR_CARGOSHUTTER                                         0x68caf714
    #define INSTANCE_CARGOBAY1PATROL                                           0xc3e4329a
    #define INSTANCE_KEY_CREWQUARTERS                                          0xa6f68ae9
    #define INSTANCE_BLANCO_NEENIO_II_RIP                                      0x392a6444
    #define INSTANCE_ENGINECONSOLEOFF003                                       0xa3ee97c2
    #define INSTANCE_BACK_PLATFORM                                             0x73abb3df
    #define INSTANCE_BLANCO_S_CRATE_COPY_1                                     0x6d17ad13
    #define INSTANCE_BLANCO_S_CRATE_COPY_4                                     0x7ad2c678
    #define INSTANCE_BLANCO_S_CRATE_COPY_6                                     0x7350fd16
    #define INSTANCE_DRUGS8                                                    0x8f5ec1a9
    #define INSTANCE_HOLD_EXIT_BARRIER                                         0x8791a01

    // Hull: interior2
    #define INSTANCE_DRUGS5                                                    0xbe93477a
    #define INSTANCE_CARGO23                                                   0x60db897f
    #define INSTANCE_CARGO21                                                   0x6959b211

    // Hull: interior3
    #define INSTANCE_CONTAINER_CLOSEDRE                                        0x85443538
    #define INSTANCE_CONT_D_RIGHTU                                             0x268a2037
    #define INSTANCE_DRUGS6                                                    0xb3d061a3
    #define INSTANCE_CARGO22                                                   0x641a94c8
    #define INSTANCE_CARGOBALCONY1LEFT1                                        0xc5949628
    #define INSTANCE_DRUGS4                                                    0xba525acd

    // Hull: interior4
    #define INSTANCE_DRUGS7                                                    0xb7117c14
    #define INSTANCE_COPY_2_OF_CONTAINER_CLOSEDX                               0x39795fea
    #define INSTANCE_PLATFORM_BUTTON                                           0xbc14d5aa
    #define INSTANCE_DRUGS10                                                   0x83e11d4a
    #define INSTANCE_CROCKETT_MOVINGPLATFORM                                   0x7bf11e04
    #define INSTANCE_TUBBS_MOVINGPLATFORM                                      0xf74a649b
    #define INSTANCE_MOVING_PLATFORM                                           0xd32e1318
    #define INSTANCE_CARGOBAY3PATROL                                           0x5d4ae2b8
    #define INSTANCE_CARGOBALCONY2LEFT_COPY_1                                  0xba1821e0
    #define INSTANCE_CARGOBALCONY2LEFT_COPY_2                                  0xb75b0739

    // Hull: exterior3
    #define INSTANCE_387                                                       0x54397ee8
    #define INSTANCE_388                                                       0x6c76c355

    // Hull: controldeck_exterior
    #define INSTANCE_BOSSCOVER_2                                               0x26f4d026
    #define INSTANCE_OTREGA_FIGHTER                                            0xfdc8cfe
    #define INSTANCE_STERN2                                                    0x4a370c5
    #define INSTANCE_STERN1                                                    0x9e0561c
    #define INSTANCE_STERN3                                                    0x626d72
    #define INSTANCE_SYLVIA_17                                                 0x48243987
    #define INSTANCE_CARGO_AMBUSH1                                             0x820f15d3
    #define INSTANCE_CONTAINER_SHIP_CAPTAIN_FIGHTER                            0xa7401c80
    #define INSTANCE_CARGO_AMBUSH2                                             0x8f4c330a
    #define INSTANCE_CROCKETT_16                                               0x58b332bf
    #define INSTANCE_TUBBS_16                                                  0xe66476f6
    #define INSTANCE_TUBBS_17                                                  0xe2a56b41
    #define INSTANCE_SYLVIA_16                                                 0x4ce52430
    #define INSTANCE_DOORLOCK_COPY_6                                           0x6d059bea
    #define INSTANCE_ORTEGA_16                                                 0xf3f60835
    #define INSTANCE_BREN_16                                                   0xd03e6fca
    #define INSTANCE_SHOTGUN                                                   0xf1f6b1de
    #define INSTANCE_CROCKETT_17                                               0x5c722f08
    #define INSTANCE_ORTEGA_17                                                 0xf7371582
    #define INSTANCE_BOSSCOVER_2_COPY_1                                        0x94fc8870
    #define INSTANCE_CONTAINER_SHIP_CAPTAIN_16                                 0x6dc52119
    #define INSTANCE_JOES_BOOM_STICK                                           0x47d891ba
    #define INSTANCE_SMITHWES01                                                0x3bb93f02
    #define INSTANCE_ASSASIN02                                                 0x3f84691c
    #define INSTANCE_ASSASIN02FGHH                                             0xca9db450
    #define INSTANCE_PSG1                                                      0xe9b5c3da
    #define INSTANCE_HOLD_EXIT_BARRIER_COPY_2                                  0x81116078

    // Hull: controldeck_interior
    #define INSTANCE_GF_CORRIDOR                                               0x6467c65f
    #define INSTANCE_GF_LOCKER2                                                0x8ad70483
    #define INSTANCE_GF_LOCKER1                                                0x8794225a
    #define INSTANCE_1F_RECROOM2                                               0xd1d808d3
    #define INSTANCE_1F_PANTRYHIDE                                             0x4e242b94
    #define INSTANCE_GFLADDER                                                  0x5a9d412e
    #define INSTANCE_1F_RECROOM1                                               0xdc9b2e0a
    #define INSTANCE_2F_EL_SANCHO                                              0x3eb0114e
    #define INSTANCE_1FHALL                                                    0xa1a561eb
    #define INSTANCE_DINING1                                                   0x64e727c5
    #define INSTANCE_LADDERCOLLISION                                           0x8ddd311e
    #define INSTANCE_DOORLOCK3                                                 0x50a74819
    #define INSTANCE_LEDGER_BROWN                                              0xbf2a7726

    // Hull: engine_room
    #define INSTANCE_CONSOLE4R                                                 0x8bd97b6
    #define INSTANCE_ENGINEOFFICE1_1                                           0x6c9ef44
    #define INSTANCE_CONSOLE3R_COPY_1                                          0xeb792f64
    #define INSTANCE_ENGINETOP1                                                0xf7db9e8d
    #define INSTANCE_CONSOLE2R                                                 0xed6b2810
    #define INSTANCE_ENGINE1                                                   0xc27e9338
    #define INSTANCE_CONSOLE5R                                                 0xdaa4566a
    #define INSTANCE_ENGINE3                                                   0xcbfca856
    #define INSTANCE_CONSOLE3R_COPY_1_COPY_1                                   0x5b9ad7b4
    #define INSTANCE_ENGINE2                                                   0xcf3db5e1
    #define INSTANCE_METAL_LADDER2_COPY_3                                      0xee445c48
    #define INSTANCE_METAL_LADDER2_COPY_1                                      0xe7c66726
    #define INSTANCE_13_COPY_4_COPY_2_COPY_1                                   0x79fa95ba
    #define INSTANCE_ENGINEOFFICE1_2                                           0xb8ac99d
    #define INSTANCE_ENGINEOFFICE2_1                                           0x7422b097
    #define INSTANCE_ENGINETOP2                                                0xfa98b854
    #define INSTANCE_CONSOLE1R                                                 0x9f8077c3
    #define INSTANCE_CONSOLE3R                                                 0x3f72e9cc
    #define INSTANCE_CONSOLE6R                                                 0xa84f09b9
    #define INSTANCE_SQUAREGLARE_COPY_12                                       0xf825c3f0
    #define INSTANCE_SQUAREGLARE_COPY_11                                       0xf566e529
    #define INSTANCE_SQUAREGLARE_COPY_14                                       0xe2a38e42
    #define INSTANCE_SQUAREGLARE_COPY_16                                       0xeb21b52c
    #define INSTANCE_SQUAREGLARE_COPY_15                                       0xe66293f5
    #define INSTANCE_CONSOLE7R                                                 0x7a56c865
    #define INSTANCE_SQUAREGLARE_COPY_29                                       0xa1855742
    #define INSTANCE_CARGO_HOLD_DOOR                                           0xb6d5c1b3
    #define INSTANCE_METAL_LADDER2_COPY_2                                      0xea8541ff
    #define INSTANCE_SQUAREGLARE_COPY_33                                       0x5c164048
    #define INSTANCE_SQUAREGLARE_COPY_35                                       0x46900dfa
    #define INSTANCE_SQUAREGLARE_COPY_37                                       0x4f123694
    #define INSTANCE_SQUAREGLARE_COPY_39                                       0x739c969e
    #define INSTANCE_SQUAREGLARE_COPY_40                                       0x669a18eb
    #define INSTANCE_SQUAREGLARE_COPY_42                                       0x6f182385
    #define INSTANCE_SQUAREGLARE_COPY_44                                       0x759e6e37
    #define INSTANCE_SQUAREGLARE_COPY_45                                       0x715f7380
    #define INSTANCE_METAL_LADDER2_COPY_4                                      0xf0030c4d

    // Hull: top_4
    #define INSTANCE_DECK2                                                     0x47a23445
    #define INSTANCE_CONTAINER_SIDE                                            0xa0a2eadf
    #define INSTANCE_DECK1                                                     0x4ae1129c
    #define INSTANCE_CONT_D_RIGHT                                              0x71adadea
    #define INSTANCE_CONT_D_LEFT                                               0x185b088b
    #define INSTANCE_317                                                       0xc68fc66
    #define INSTANCE_TUBBS_CARGO_START                                         0x9972407b
    #define INSTANCE_CROCKETT_CARGOSHIP                                        0xa37dc416
    #define INSTANCE_DOOR_CARGOSHUTTER_COPY_1                                  0xd13cf52e
    #define INSTANCE_DOOR_CARGOSHUTTER_COPY_2                                  0xdc7fd3f7

    // Hull: top_3
    #define INSTANCE_DRUGS1                                                    0xad9731a6
    #define INSTANCE_2X2CRATE_METALW                                           0x4dd6aebf
    #define INSTANCE_COPY_8_OF_CONTAINER_CLOSED                                0x8a658b6b
    #define INSTANCE_DECKAMBUSH2                                               0x62c63945
    #define INSTANCE_DECKAMBUSH3                                               0x660724f2
    #define INSTANCE_COPY_3_OF_MESH_GATE                                       0xd4e20640
    #define INSTANCE_COPY_6_OF_METAL_LADDER                                    0x7ea4a31f
    #define INSTANCE_20                                                        0x44325ea8
    #define INSTANCE_21                                                        0x40f3431f
    #define INSTANCE_2                                                         0xddb056ff
    #define INSTANCE_93                                                        0xb1d264f0
    #define INSTANCE_94                                                        0xaf9534f5

    // Hull: top_2
    #define INSTANCE_METAL_LADDER                                              0xa3a7945f
    #define INSTANCE_COPY_1_OF_METAL_LADDER                                    0xada2d6ef
    #define INSTANCE_COPY_2_OF_METAL_LADDER                                    0x65ba85ac
    #define INSTANCE_BESIDECRANEPATROL                                         0xf31a6fba
    #define INSTANCE_COPY_1_OF_CRATEDOOR2                                      0xf97a931c
    #define INSTANCE_CRATEDOOR2                                                0xea35c4b8
    #define INSTANCE_IN_CRATE1                                                 0xfc842142
    #define INSTANCE_IN_CRATE2                                                 0xf1c7079b
    #define INSTANCE_FIRSTAID                                                  0xd60c6b32

    // Hull: top_1
    #define INSTANCE_DOOR_UPFROMHOLD                                           0xc64ca6a5
    #define INSTANCE_DOOR_UPFROMHOLD_COPY_1                                    0x3f1276c4

    // Hull: Storage
    #define INSTANCE_CARGO_SHIP_WORKER02                                       0xb7d5c90d
    #define INSTANCE_CARGO_SHIP_WORKER01                                       0xba96efd4
    #define INSTANCE_ORTEGAS_HENCHMAN_06                                       0x9fbd6c99
    #define INSTANCE_ORTEGAS_HENCHMAN_01                                       0x81fa3c9c
    #define INSTANCE_ORTEGAS_HENCHMAN_02                                       0x8cb91a45
    #define INSTANCE_ORTEGAS_HENCHMAN_03                                       0x887807f2
    #define INSTANCE_ORTEGAS_HENCHMAN_04                                       0x963f57f7
    #define INSTANCE_CONTAINER_SHIP_CAPTAIN                                    0x6b685265
    #define INSTANCE_JUAN_HENCHMAN_04                                          0x33e7ccc2
    #define INSTANCE_ORTEGA                                                    0x33b2290a

    // Hull: interior3
    #define SFX_POINT_INTERIOR_3_CARGOBAYDOOR_OPEN_0025                        0x85a42730

    // Hull: interior4
    #define SFX_POINT_CRANE_NOISE                                              0x1a1a3780

    // Hull: controldeck_exterior
    #define SFX_POINT_BULLET_IMPACT_C                                          0xaa49d6d7
    #define SFX_POINT_BODY_FALL_ON_METAL_FLOOR                                 0xbfe82e3c
    #define SFX_POINT_ORTEGA_HIT01                                             0x98b0f303

    // Hull: engine_room
    #define SFX_POINT_CARGO_DOOR_OPEN                                          0xc8257bff
    #define SFX_POINT_CARGO_DOOR_CLANG                                         0x604c6068
    #define SFX_POINT_CONSOLE2_ENGINENOISE_0036                                0xf67fd031
    #define SFX_POINT_CONSOLE7_ENGINENOISE_0093                                0x5a6925d5
    #define SFX_POINT_CONSOLE4_ENGINENOISE_0094                                0x34f6b49e
    #define SFX_POINT_CONSOLE5_ENGINENOISE_0095                                0x1f801613
    #define SFX_POINT_CONSOLE6_ENGINENOISE_0111                                0xf7cc4e54
    #define SFX_POINT_CONSOLE1_ENGINENOISE_0026                                0x54bed0a3
    #define SFX_POINT_CONSOLE3_ENGINENOISE_0020                                0x1157e365
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK001                              0xfa7d75bf
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK002                              0xf73e5366
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK003                              0xf3ff4ed1
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK004                              0xedb81ed4
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK005                              0xe9790363
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK006                              0xe43a25ba
    #define SFX_POINT_ENGINE_ROOM_CONSOLECLICK007                              0xe0fb380d

    // Hull: top_4
    #define SFX_POINT_TOP_4_CARGODOOR_OPEN_0025                                0x72513390
    #define SFX_POINT_TOP_4_CUTSCENELANDINGC_CROCK_LANDS                       0x82b85b35
    #define SFX_POINT_TOP_4_CUTSCENELANDINGT_CROCK_LANDS                       0xc5fa348c

    // Hull: top_3
    #define SFX_POINT_DOOR_KICK                                                0x99b50e8f

    // Hull: top_2
    #define SFX_POINT_TOP_2_CRATE2DOOR_OPEN_0025                               0x371bdaa3

    // Hull: top_1
    #define SFX_POINT_TOP_1_CARGODOOR1_OPEN                                    0xdbb4f9d9
    #define SFX_POINT_TOP_1_CARGODOOR2_OPEN                                    0xa3514e
    #define SFX_POINT_TOP_1_ENGINE_FALLOFF1_0026                               0x27bd0b69
    #define SFX_POINT_TOP_1_ENGINE_FALLOFF2_0094                               0xd8b8411
    #define SFX_POINT_TOP_1_ENGINE_FALLOFF3_0095                               0x4047fe2b

    // Hull: interior1
    #define SPHERE_TRIGGER_INTERIOR1_CARGOEXIT_CAMSPHERE1                      0x99e45a9b

    // Hull: interior4
    #define SPHERE_TRIGGER_INTERIOR4_TUBBSWAYIN_CAMSPHERE                      0x2465770b
    #define SPHERE_TRIGGER_INTERIOR4_STAIRS1CAMSPHERE                          0x82ab606d

    // Hull: controldeck_exterior
    #define SPHERE_TRIGGER_WAR_CAM01                                           0x50217d97
    #define SPHERE_TRIGGER_INTERIOR1_CARGOEXIT_CAMSPHERE2                      0x94a77c42

    // Hull: controldeck_interior
    #define SPHERE_TRIGGER_CONTDECKINT_1FCAMSPHERE1                            0x8c5c401a
    #define SPHERE_TRIGGER_CONTDECKINT_1FCAMSPHERE2                            0x811f66c3
    #define SPHERE_TRIGGER_CONTDECKINT_CAMSPHERE1                              0xa8d9308d
    #define SPHERE_TRIGGER_CONTDECKINT_CAMSPHERE2                              0xa59a1654
    #define SPHERE_TRIGGER_CONTDECKINT_CAMSPHERE3                              0xa15b0be3
    #define SPHERE_TRIGGER_CONTDECKINT_CAMSPHERE4                              0xbf1c5be6
    #define SPHERE_TRIGGER_CONTDECKINT_1FCAMSPHERE3                            0x85de7b74
    #define SPHERE_TRIGGER_CONTDECKINT_1FCAMSPHERE4                            0x9b992b71
    #define SPHERE_TRIGGER_CONTDECKINT_1FCAMSPHERE5                            0x9f5836c6
    #define SPHERE_TRIGGER_CONTDECKINT_1FCAMSPHERE7                            0x96da0da8
    #define SPHERE_TRIGGER_CONTDECKINT_2FCAMSPHERE1                            0x84476510
    #define SPHERE_TRIGGER_CONTDECKINT_2FCAMSPHERE2                            0x890443c9
    #define SPHERE_TRIGGER_CONTDECKINT_2FCAMSPHERE3                            0x8dc55e7e

    // Hull: engine_room
    #define SPHERE_TRIGGER_CAM_ENGINE_RIGHT_LADDER                             0x371036ae
    #define SPHERE_TRIGGER_CAM_ENGINE_LEFT_LADDER                              0xe0670e17

    // Hull: interior1
    #define AABB_TRIGGER_CARGOJUMP1                                            0x96f2f715
    #define AABB_TRIGGER_CARGOJUMP2                                            0x9bb1d1cc
    #define AABB_TRIGGER_INTERIOR1_CARGOEXIT_CAMBOX1                           0xf73d2445
    #define AABB_TRIGGER_INTERIOR1_CARGOEXIT_CAMBOX2                           0xfa7e029c
    #define AABB_TRIGGER_INTERIOR1_CARGOEXIT_CAMBOX3                           0xfebf1f2b
    #define AABB_TRIGGER_INTERIOR1_CARGOEXIT_CAMBOX4                           0xe0f84f2e
    #define AABB_TRIGGER_CROK_ZONE_FLOOR1_COPY_1                               0x6c630a03
    #define AABB_TRIGGER_FIXEL                                                 0xf2253788

    // Hull: interior2
    #define AABB_TRIGGER_CARGOJUMP42                                           0x87e1dfac
    #define AABB_TRIGGER_CARGOJUMP41                                           0x8aa2f975
    #define AABB_TRIGGER_CARGOJUMP22                                           0x6237600a
    #define AABB_TRIGGER_UNNAMED_1                                             0x52cfb1cf
    #define AABB_TRIGGER_CROK_ZONE12                                           0xe8a2c951
    #define AABB_TRIGGER_CROK_ZONE11                                           0xe5e1ef88
    #define AABB_TRIGGER_CROK_ZONE11_COPY_1                                    0xf3d9b763
    #define AABB_TRIGGER_CROK_ZONE12_COPY_1                                    0xdea1a0eb
    #define AABB_TRIGGER_CROK_ZONE12_COPY_2                                    0xd3e28632

    // Hull: interior3
    #define AABB_TRIGGER_CARGOJUMP21                                           0x6f7446d3
    #define AABB_TRIGGER_TRIGGER_CARGOWAVE3                                    0x30461242
    #define AABB_TRIGGER_CARGOJUMP51                                           0x58bb38a9
    #define AABB_TRIGGER_INTERIOR3_TUBBSWAYIN_CAMBOX                           0xa387547b
    #define AABB_TRIGGER_CROK_ZONE07                                           0x2d7e63e6
    #define AABB_TRIGGER_CROK_ZONE0XTEST                                       0xd73bd385
    #define AABB_TRIGGER_CROK_ZONE01_COPY_11                                   0xd61e1b2d
    #define AABB_TRIGGER_CROK_ZONE01_COPY_13                                   0xdf9c2043
    #define AABB_TRIGGER_CROK_ZONE13                                           0xec63d4e6
    #define AABB_TRIGGER_CROK_ZONE07_COPY_1                                    0xe67ef062

    // Hull: interior4
    #define AABB_TRIGGER_CARGOJUMP52                                           0x55f81e70
    #define AABB_TRIGGER_INTERIOR4_TUBBSWAYIN_CAMBOX                           0xc4bec2e8
    #define AABB_TRIGGER_UNNAMED_2                                             0x5f8c9716
    #define AABB_TRIGGER_INTERIOR4_STAIRS1CAMBOXB                              0xfcc4446e
    #define AABB_TRIGGER_INTERIOR4_STAIRS1CAMBOXC                              0xf80559d9
    #define AABB_TRIGGER_INTERIOR4_STAIRS1CAMBOXA                              0xf18762b7
    #define AABB_TRIGGER_CROK_ZONE08                                           0x1531de5b
    #define AABB_TRIGGER_CROK_ZONE01_COPY_10                                   0xd2df069a
    #define AABB_TRIGGER_CROK_ZONE_FLOOR1                                      0x2aef7797

    // Hull: controldeck_exterior
    #define AABB_TRIGGER_TRIGGER_STERN                                         0xd5d36c59
    #define AABB_TRIGGER_TRIGGER_IN2ENGINEROOM                                 0xd5ac45ae
    #define AABB_TRIGGER_TRIGGER_ENDOFLEVEL                                    0x1b0bbafc
    #define AABB_TRIGGER_TRIGGER_ASSASIN_SNIPER                                0x2f62188
    #define AABB_TRIGGER_WAR_CAMBOX01                                          0xb38b11d9

    // Hull: controldeck_interior
    #define AABB_TRIGGER_GFLADDER_TOP                                          0x17aff82e
    #define AABB_TRIGGER_1F_ENEMIES                                            0x35975f0d
    #define AABB_TRIGGER_GFLADDER_BOTTOM                                       0x88941982
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX1                                 0x19cfa4cc
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX2A                                0xe3d0c179
    #define AABB_TRIGGER_CONTDECKINT_CAMBOX1A                                  0xc18a0e1
    #define AABB_TRIGGER_CONTDECKINT_CAMBOX1B                                  0x15b8638
    #define AABB_TRIGGER_CONTDECKINT_CAMBOX2                                   0x89057190
    #define AABB_TRIGGER_CONTDECKINT_CAMBOX4                                   0x93833c22
    #define AABB_TRIGGER_CONTDECKINT_CAMBOX3                                   0x8dc46c27
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX2B                                0xee93e7a0
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX3                                 0x104d9fa2
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX2C                                0xea52fa17
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX4A                                0x6067edf
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX4B                                0xb455806
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX5                                 0xacbd210
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOXLOO                               0x21deabf2
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX7A                                0x74ed210c
    #define AABB_TRIGGER_CONTDECKINT_1FCAMBOX7B                                0x79ae07d5
    #define AABB_TRIGGER_CONTDECKINT_2FCAMBOX1                                 0xb0f47d1
    #define AABB_TRIGGER_CONTDECKINT_2FCAMBOX2A                                0x66a03c67
    #define AABB_TRIGGER_CONTDECKINT_2FCAMBOX2B                                0x6be31abe
    #define AABB_TRIGGER_CONTDECKINT_2FCAMBOX3                                 0x28d7cbf
    #define AABB_TRIGGER_CONTDECKINT_2FCAMBOX2C                                0x6f220709

    // Hull: engine_room
    #define AABB_TRIGGER_ENG_LADDER_BOTTOM                                     0x3c05ef57
    #define AABB_TRIGGER_ENG_LADDER_TOP                                        0x5ce403fc
    #define AABB_TRIGGER_ENG_LADDER_BOTTOM_2                                   0x3961f81a
    #define AABB_TRIGGER_ENG_LADDER_TOP_2                                      0x74289690
    #define AABB_TRIGGER_TRIGGER_ENGINECONSOLES                                0x539521df
    #define AABB_TRIGGER_TRIGGER_ALERTENGINEGUARDS                             0xaf54c965
    #define AABB_TRIGGER_TRIGGER_ENTERCARGOBAY                                 0xb231cc6e
    #define AABB_TRIGGER_CAM_ENGINE_LEFT_LADDERA                               0x92e04fad
    #define AABB_TRIGGER_CAM_ENGINE_RIGHT_LADDERA                              0xea04ea40

    // Hull: top_4
    #define AABB_TRIGGER_DECKJUMP12                                            0x8a3b223f
    #define AABB_TRIGGER_TURN_OFF_TELEPORT01                                   0x2caf7225
    #define AABB_TRIGGER_START_TRIGGER                                         0x94905db9
    #define AABB_TRIGGER_CROK_ZONE01                                           0x37f82e54
    #define AABB_TRIGGER_CROK_ZONE01_COPY_2                                    0xb1cdf9ab

    // Hull: top_3
    #define AABB_TRIGGER_DECKJUMP11                                            0x877804e6
    #define AABB_TRIGGER_DECKJUMP21                                            0xf5935b35
    #define AABB_TRIGGER_CROK_ZONE01_COPY_1                                    0xbc8edf72

    // Hull: top_2
    #define AABB_TRIGGER_TRIGGER_CRANEENEMIES                                  0xaae90842
    #define AABB_TRIGGER_DECKJUMP22                                            0xf8d07dec
    #define AABB_TRIGGER_CROK_ZONE01_COPY_3                                    0xb50ce41c
    #define AABB_TRIGGER_CROK_ZONE01_COPY_4                                    0xab4bb419
    #define AABB_TRIGGER_CROK_ZONE01_COPY_5                                    0xaf8aa9ae

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

#endif // __MISSION_06_CARGOSHIP_H__
