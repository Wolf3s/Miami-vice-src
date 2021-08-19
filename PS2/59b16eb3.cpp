//---------------------------------------------------------------------------------------
// Tubbs
// Date 20/10/2004, Time 21:22:9
// Martin Fuller: Automatically Produced By ALE Editor
//---------------------------------------------------------------------------------------
#ifndef __TUBBS_H__
#define __TUBBS_H__

    //-----------------------------------------------------------------------------------
    // External Includes
    //-----------------------------------------------------------------------------------

    //-----------------------------------------------------------------------------------
    // External Defines
    //-----------------------------------------------------------------------------------
    #define TUBBS_ANIM_TUBBS_1METERCLIMB1008                                   1008
    #define TUBBS_ANIM_TUBBS_2METERCLIMB1009                                   1009
    #define TUBBS_ANIM_TUBBS_AIM_ROUND_CORNER_LEFT_1206                        1206
    #define TUBBS_ANIM_TUBBS_AIM_ROUND_CORNER_LEFT_BACK_1207                   1207
    #define TUBBS_ANIM_TUBBS_AIM_ROUND_CORNER_LEFT_IDLE_1208                   1208
    #define TUBBS_ANIM_TUBBS_AIM_ROUND_CORNER_RIGHT_1209                       1209
    #define TUBBS_ANIM_TUBBS_AIM_ROUND_CORNER_RIGHT_BACK_1210                  1210
    #define TUBBS_ANIM_TUBBS_AIM_ROUND_CORNER_RIGHT_IDLE_1211                  1211
    #define TUBBS_ANIM_TUBBS_ARREST_1089                                       1089
    #define TUBBS_ANIM_TUBBS_BACKWARD_DIVE_1043                                1043
    #define TUBBS_ANIM_TUBBS_CALLFORHELP1020                                   1020
    #define TUBBS_ANIM_TUBBS_CLIMB_DOWN_1072                                   1072
    #define TUBBS_ANIM_TUBBS_CLIMB_UP_1070                                     1070
    #define TUBBS_ANIM_TUBBS_CROUCHED_WALK_1217                                1217
    #define TUBBS_ANIM_TUBBS_DIE_1106                                          1106
    #define TUBBS_ANIM_TUBBS_DISARM_1048                                       1048
    #define TUBBS_ANIM_TUBBS_DISMOUNT_BOTTOM_1075                              1075
    #define TUBBS_ANIM_TUBBS_DISMOUNT_TOP_1077                                 1077
    #define TUBBS_ANIM_TUBBS_EXPLOSION_LIGHT_1218                              1218
    #define TUBBS_ANIM_TUBBS_EXPLOSION_LIGHT_GETUP_1222                        1222
    #define TUBBS_ANIM_TUBBS_EXTENDED_IDLE_1061                                1061
    #define TUBBS_ANIM_TUBBS_FALL1007                                          1007
    #define TUBBS_ANIM_TUBBS_FORWARD_DIVE_1040                                 1040
    #define TUBBS_ANIM_TUBBS_FREE_1067                                         1067
    #define TUBBS_ANIM_TUBBS_GETUP_1065                                        1065
    #define TUBBS_ANIM_TUBBS_GIVE_ITEM_1066                                    1066
    #define TUBBS_ANIM_TUBBS_HEAL_PARTNER_1064                                 1064
    #define TUBBS_ANIM_TUBBS_HEAVYLANDING1011                                  1011
    #define TUBBS_ANIM_TUBBS_HIT1019                                           1019
    #define TUBBS_ANIM_TUBBS_IDLE1005                                          1005
    #define TUBBS_ANIM_TUBBS_IDLE_AGAINST_WALL_1202                            1202
    #define TUBBS_ANIM_TUBBS_JUMP1014                                          1014
    #define TUBBS_ANIM_TUBBS_KICKDOOR_1030                                     1030
    #define TUBBS_ANIM_TUBBS_KNEEL_DOWN_1046                                   1046
    #define TUBBS_ANIM_TUBBS_KNEEL_IDLE_1045                                   1045
    #define TUBBS_ANIM_TUBBS_KNEEL_STAND_1047                                  1047
    #define TUBBS_ANIM_TUBBS_LEFT_DIVE_1042                                    1042
    #define TUBBS_ANIM_TUBBS_LIGHTLANDING1010                                  1010
    #define TUBBS_ANIM_TUBBS_LOOK_ROUND_CORNER_LEFT_1201                       1201
    #define TUBBS_ANIM_TUBBS_LOOK_ROUND_CORNER_LEFT_BACK_1200                  1200
    #define TUBBS_ANIM_TUBBS_LOOK_ROUND_CORNER_LEFT_IDLE_1215                  1215
    #define TUBBS_ANIM_TUBBS_LOOK_ROUND_CORNER_RIGHT_1205                      1205
    #define TUBBS_ANIM_TUBBS_LOOK_ROUND_CORNER_RIGHT_BACK_1212                 1212
    #define TUBBS_ANIM_TUBBS_LOOK_ROUND_CORNER_RIGHT_IDLE_1216                 1216
    #define TUBBS_ANIM_TUBBS_MANIPULATE_SWITCH_1103                            1103
    #define TUBBS_ANIM_TUBBS_MOUNT_LADDER_BOTTOM_1071                          1071
    #define TUBBS_ANIM_TUBBS_MOUNT_LADDER_TOP_1076                             1076
    #define TUBBS_ANIM_TUBBS_NORMAL_JUMP_1038                                  1038
    #define TUBBS_ANIM_TUBBS_OPEN_DOOR_AWAY_1068                               1068
    #define TUBBS_ANIM_TUBBS_OPEN_DOOR_TOWARD_1069                             1069
    #define TUBBS_ANIM_TUBBS_PICKUP_1085                                       1085
    #define TUBBS_ANIM_TUBBS_PICKUP_TABLE_DOWN_1090                            1090
    #define TUBBS_ANIM_TUBBS_PICKUP_TABLE_UP_1091                              1091
    #define TUBBS_ANIM_TUBBS_PICKUP_UP_1092                                    1092
    #define TUBBS_ANIM_TUBBS_RIGHT_DIVE_1041                                   1041
    #define TUBBS_ANIM_TUBBS_ROLL_LEFT_1062                                    1062
    #define TUBBS_ANIM_TUBBS_ROLL_RIGHT_1063                                   1063
    #define TUBBS_ANIM_TUBBS_RUN1004                                           1004
    #define TUBBS_ANIM_TUBBS_RUN_UNARMED_1060                                  1060
    #define TUBBS_ANIM_TUBBS_SHIMMY_AGAINST_WALL_LEFT_1204                     1204
    #define TUBBS_ANIM_TUBBS_SHIMMY_AGAINST_WALL_RIGHT_1203                    1203
    #define TUBBS_ANIM_TUBBS_SLIDE_1073                                        1073
    #define TUBBS_ANIM_TUBBS_SLIDE_DISMOUNT_1074                               1074
    #define TUBBS_ANIM_TUBBS_SNEAK1006                                         1006
    #define TUBBS_ANIM_TUBBS_STEPDOWN_1013                                     1013
    #define TUBBS_ANIM_TUBBS_STEPUP1012                                        1012
    #define TUBBS_ANIM_TUBBS_STRAFE_BACKWARD_1051                              1051
    #define TUBBS_ANIM_TUBBS_STRAFE_FORWARD_1050                               1050
    #define TUBBS_ANIM_TUBBS_STRAFE_IDLE_1054                                  1054
    #define TUBBS_ANIM_TUBBS_STRAFE_LEFT_1052                                  1052
    #define TUBBS_ANIM_TUBBS_STRAFE_RIGHT_1053                                 1053
    #define TUBBS_ANIM_TUBBS_TURN_TO_WALL_1214                                 1214
    #define TUBBS_ANIM_TUBBS_UPPERBODY_AIM_PISTOL_1094                         1094
    #define TUBBS_ANIM_TUBBS_UPPERBODY_AIM_RIFE_1102                           1102
    #define TUBBS_ANIM_TUBBS_UPPERBODY_AIM_SHOTGUN_1080                        1080
    #define TUBBS_ANIM_TUBBS_UPPERBODY_AIM_UZI_1097                            1097
    #define TUBBS_ANIM_TUBBS_UPPERBODY_DAMAGE_1093                             1093
    #define TUBBS_ANIM_TUBBS_UPPERBODY_FIRE_PISTOL_1095                        1095
    #define TUBBS_ANIM_TUBBS_UPPERBODY_FIRE_RIFLE_1220                         1220
    #define TUBBS_ANIM_TUBBS_UPPERBODY_FIRE_SHOTGUN_1079                       1079
    #define TUBBS_ANIM_TUBBS_UPPERBODY_FIRE_UZI_1098                           1098
    #define TUBBS_ANIM_TUBBS_UPPERBODY_HOLD_PISTOL_1100                        1100
    #define TUBBS_ANIM_TUBBS_UPPERBODY_HOLD_RIFLE_1101                         1101
    #define TUBBS_ANIM_TUBBS_UPPERBODY_HOLD_SHOTGUN_1084                       1084
    #define TUBBS_ANIM_TUBBS_UPPERBODY_HOLD_UZI_1099                           1099
    #define TUBBS_ANIM_TUBBS_UPPERBODY_HOLSTER_SHOTGUN_1083                    1083
    #define TUBBS_ANIM_TUBBS_UPPERBODY_RELOAD_AUTOMATIC_1213                   1213
    #define TUBBS_ANIM_TUBBS_UPPERBODY_RELOAD_PISTOL_1096                      1096
    #define TUBBS_ANIM_TUBBS_UPPERBODY_RELOAD_SHOTGUN_1081                     1081
    #define TUBBS_ANIM_TUBBS_UPPERBODY_UNHOLSTER_SHOTGUN_1082                  1082
    #define TUBBS_ANIM_TUBBS_WALK1001                                          1001

    #define TUBBS_TEXTURE_SEPARATETROU                                         0x341551c4 	// Geometry Texture, 
    #define TUBBS_TEXTURE_CROK_VEST_SPEC_01                                    0xa2adc6e8 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBSFACE04                                    0xe93fcf12 	// Geometry Texture, 
    #define TUBBS_TEXTURE_SKIN_SPEC_02                                         0xe1cd0ef4 	// Geometry Texture, 
    #define TUBBS_TEXTURE_TUBBS_MOUTH_TEETH                                    0xecc735c0 	// Geometry Texture, 
    #define TUBBS_TEXTURE_EYE_DKBROWN                                          0x513ff7e0 	// Geometry Texture, 
    #define TUBBS_TEXTURE_TESTSHADER01                                         0x79f152a0 	// Geometry Texture, 
    #define TUBBS_TEXTURE_NEWSHOE                                              0x2f45492c 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBS_NEW_ALHA_E3                              0x4f63ea4b 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBS_SHIRT01                                  0x41129ce5 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBS_CHEST01                                  0x946e09cf 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBS_CHAIN01                                  0xf7a5b73c 	// Geometry Texture, 
    #define TUBBS_TEXTURE_REFLECT_SHINY_STRIPE_MOD2                            0xeef33f8a 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBS_SUITBODY01                               0x22ed9f7c 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBS_SUITARM01                                0x6fe8e3f2 	// Geometry Texture, 
    #define TUBBS_TEXTURE_MV_GS_TUBBSHAND01                                    0xadadcab1 	// Geometry Texture, 

    #define TUBBS_GEOMETRY_TUBBS_BODY5                                         0x1d0be275

    #define TUBBS_HULL_TUBBS                                                   0xc289e2c3

    // Hull: Tubbs
    #define TUBBS_INSTANCE_TUBBSSKIN                                           0x1db4e27

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

#endif // __TUBBS_H__
