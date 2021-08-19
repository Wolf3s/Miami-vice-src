//---------------------------------------------------------------------------------------
// AV_CargoshipWorker
// Date 20/10/2004, Time 21:18:53
// Martin Fuller: Automatically Produced By ALE Editor
//---------------------------------------------------------------------------------------
#ifndef __AV_CARGOSHIPWORKER_H__
#define __AV_CARGOSHIPWORKER_H__

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
    #define ANIM_HENCHMAN_DIE_BALCONY_BACKWARD_FALL_2288                       2288
    #define ANIM_HENCHMAN_DIE_BALCONY_BACKWARD_HIT_2287                        2287
    #define ANIM_HENCHMAN_DIE_BALCONY_BACKWARD_LAND_2289                       2289
    #define ANIM_HENCHMAN_DIE_BALCONY_FORWARD_FALL_2291                        2291
    #define ANIM_HENCHMAN_DIE_BALCONY_FORWARD_HIT_2292                         2292
    #define ANIM_HENCHMAN_DIE_BALCONY_FORWARD_LAND_2290                        2290
    #define ANIM_HENCHMAN_DIE_FALL_BACKWARDS_FALL_2294                         2294
    #define ANIM_HENCHMAN_DIE_FALL_BACKWARDS_HIT_2295                          2295
    #define ANIM_HENCHMAN_DIE_FALL_BACKWARDS_LAND_2293                         2293
    #define ANIM_HENCHMAN_DIE_FALL_FORWARD_2272                                2272
    #define ANIM_HENCHMAN_DIE_FALL_FORWARD_FALL_2273                           2273
    #define ANIM_HENCHMAN_DIE_FALL_FORWARD_LAND_2271                           2271
    #define ANIM_HENCHMAN_DIE_FALL_TO_KNEES_2274                               2274
    #define ANIM_HENCHMAN_DIVE_FOR_COVER_2304                                  2304
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
    #define ANIM_HENCHMAN_IDLE_SITTING_ASLEEP_2301                             2301
    #define ANIM_HENCHMAN_IDLE_SITTING_ASLEEP_WAKEUP_2302                      2302
    #define ANIM_HENCHMAN_IDLE_SITTING_DESK_2300                               2300
    #define ANIM_HENCHMAN_IDLE_SMOKING_2296                                    2296
    #define ANIM_HENCHMAN_IDLE_SMOKING_TURN_ROUND_2297                         2297
    #define ANIM_HENCHMAN_JUMP_OVER_CRATE_2303                                 2303
    #define ANIM_HENCHMAN_KICK_DOOR_2229                                       2229
    #define ANIM_HENCHMAN_KNEEL_2203                                           2203
    #define ANIM_HENCHMAN_KNEEL_AIM_TO_STAND_2281                              2281
    #define ANIM_HENCHMAN_KNEEL_IDLE_2204                                      2204
    #define ANIM_HENCHMAN_KNEEL_STAND_2205                                     2205
    #define ANIM_HENCHMAN_RUN_2201                                             2201
    #define ANIM_HENCHMAN_SIDESTEP_LEFT_2207                                   2207
    #define ANIM_HENCHMAN_SIDESTEP_RIGHT_2208                                  2208
    #define ANIM_HENCHMAN_SLIDE_DOWN_LADDER_2305                               2305
    #define ANIM_HENCHMAN_SOLO_ARRESTED_2240                                   2240
    #define ANIM_HENCHMAN_SOLO_ARRESTED_IDLE_2241                              2241
    #define ANIM_HENCHMAN_STRAFE_BACKWARD_2209                                 2209
    #define ANIM_HENCHMAN_STRAFE_FORWARD_2210                                  2210
    #define ANIM_HENCHMAN_STRAFE_LEFT_2211                                     2211
    #define ANIM_HENCHMAN_STRAFE_RIGHT_2212                                    2212
    #define ANIM_HENCHMAN_STRAFFE_IDLE_2307                                    2307
    #define ANIM_HENCHMAN_TURN_DESK_OVER_INTO_DUCK_2299                        2299
    #define ANIM_HENCHMAN_UPPERBODY_AIM_RIFLE_2253                             2253
    #define ANIM_HENCHMAN_UPPERBODY_AIM_SHOTGUN_2260                           2260
    #define ANIM_HENCHMAN_UPPERBODY_AIM_UZI_2215                               2215
    #define ANIM_HENCHMAN_UPPERBODY_DAMAGE_2264                                2264
    #define ANIM_HENCHMAN_UPPERBODY_EQUIP_2400                                 2400
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_RIFLE_2252                            2252
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_SHOTGUN_2261                          2261
    #define ANIM_HENCHMAN_UPPERBODY_FIRE_UZI_2213                              2213
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_RIFLE_2259                            2259
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_SHOTGUN_2263                          2263
    #define ANIM_HENCHMAN_UPPERBODY_HOLD_UZI_2256                              2256
    #define ANIM_HENCHMAN_UPPERBODY_LOOK_2221                                  2221
    #define ANIM_HENCHMAN_UPPERBODY_LOOK_2231                                  2231
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_RIFLE_2251                          2251
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_SHOTGUN_2262                        2262
    #define ANIM_HENCHMAN_UPPERBODY_RELOAD_UZI_2214                            2214
    #define ANIM_HENCHMAN_UPPERBODY_UKEQUIP_2401                               2401
    #define ANIM_HENCHMAN_WALK_2202                                            2202

    #define TEXTURE_MV_GS_BOILER_SUIT_TROU                                     0x1868224c 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERICSHOE03                                        0xd6c6f905 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_GLOVE                                    0x45584f0f 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_NECK1W                                       0x781f2a2 	// Geometry Texture, 
    #define TEXTURE_SKIN_SPEC_02                                               0x954d3944 	// Geometry Texture, 
    #define TEXTURE_MV_GS_GENERIC_FULL_ARM03W                                  0x26e4c7fa 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_SLEAVE                                   0xe98092e2 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_BODY                                     0x3315942d 	// Geometry Texture, 
    #define TEXTURE_MV_GS_TSHIRT                                               0x7ccc6ee8 	// Geometry Texture, 
    #define TEXTURE_MV_GS_BOILER_SUIT_WAISTCOAT                                0xbb4274c5 	// Geometry Texture, 
    #define TEXTURE_AS_ARTFOYER_FLOOR                                          0x2d18a86f 	// Geometry Texture, 
    #define TEXTURE_REFLECT_SHINY_STRIPESUB_ADD                                0xe6475b0d 	// Geometry Texture, 

    #define GEOMETRY_CARGO_SHIP_WORKER01                                       0x69180f68
    #define GEOMETRY_CARGO_SHIP_WORKER02                                       0x9bb33dbc
    #define GEOMETRY_MESH_BASE                                                 0x7afd8b6e

    #define HULL_HULL                                                          0xca421ad4

    // Hull: Hull
    #define INSTANCE_CARGO_SHIP_WORKER01                                       0xba96efd4
    #define INSTANCE_CARGO_SHIP_WORKER02                                       0xb7d5c90d

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

#endif // __AV_CARGOSHIPWORKER_H__
