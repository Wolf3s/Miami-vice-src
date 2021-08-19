//---------------------------------------------------------------------------------------
// UserData
// Date 13/10/2004, Time 15:11:16
// Martin Fuller: Automatically Produced By ALE Editor
//---------------------------------------------------------------------------------------
#ifndef __USERDATA_H__
#define __USERDATA_H__

    //-----------------------------------------------------------------------------------
    // External Includes
    //-----------------------------------------------------------------------------------
    #include "SG.h"

    //-----------------------------------------------------------------------------------
    // External Defines
    //-----------------------------------------------------------------------------------
    #define USERDATA_VERSION_NUMBER 890

    #define USERDATA_UID_NONE                                                  0
    #define USERDATA_UID_SAVE_GAME                                             1
    #define USERDATA_UID_PICKUP_TYPE_WEAPON                                    11
    #define USERDATA_UID_PICKUP_TYPE_HEALTH                                    12
    #define USERDATA_UID_PICKUP_TYPE_AMMO                                      13
    #define USERDATA_UID_PICKUP_TYPE_ITEM                                      14
    #define USERDATA_UID_ZONECAMERA                                            17
    #define USERDATA_UID_CHARACTERSWITCHTRIGGER                                18
    #define USERDATA_UID_CUTSCENETRIGGER                                       22
    #define USERDATA_UID_PICKUP_ACTIVE_OBJECT                                  23
    #define USERDATA_UID_BACKUPZONE                                            25
    #define USERDATA_UID_GMCVAN                                                27
    #define USERDATA_UID_LIMO                                                  29
    #define USERDATA_UID_CROCKETT                                              30
    #define USERDATA_UID_TUBBS                                                 31
    #define USERDATA_UID_DRUG_DEALER                                           32
    #define USERDATA_UID_HITMAN                                                33
    #define USERDATA_UID_ORTEGA_HENCHMEN                                       34
    #define USERDATA_UID_ONCE_ONLY                                             35
    #define USERDATA_UID_EXAMINED_OBJECT                                       40
    #define USERDATA_UID_GEOMETRY_BREAKABLE                                    41
    #define USERDATA_UID_LONGJUMP                                              42
    #define USERDATA_UID_NPC_CHARACTER                                         43
    #define USERDATA_UID_PICKUP_TYPE_EVIDENCE                                  44
    #define USERDATA_UID_LADDER                                                47
    #define USERDATA_UID_PLAYER_CHARACTER                                      51
    #define USERDATA_UID_COVERPOINT                                            52
    #define USERDATA_UID_CAMERAZONE                                            53
    #define USERDATA_UID_COLLISION_BARRIER                                     54
    #define USERDATA_UID_CUTSCENECHARACTER                                     55
    #define USERDATA_UID_CHECKPOINT                                            57
    #define USERDATA_UID_PICKUP_TYPE_DRUGS                                     58
    #define USERDATA_UID_HIGH_CLIMB                                            59
    #define USERDATA_UID_LOW_CLIMB                                             60
    #define USERDATA_UID_NPC_DEATHZONE                                         61
    #define USERDATA_UID_SPEED_BARRIER                                         62
    #define USERDATA_UID_GENERICFX                                             63
    #define USERDATA_UID_UVSCROLLINGOBJECT                                     64
    #define USERDATA_UID_HIERARCHICALOBJECT                                    65
    #define USERDATA_UID_TUTORIALZONE                                          66
    #define USERDATA_UID_DAMAGEZONE                                            67
    #define USERDATA_UID_PICKUP_TYPE_IDENTIFY                                  68

    #define USERDATA_SAVE_GAME_BIT_INDEX_FLAG_TESTFLAG                         0
    #define USERDATA_SAVE_GAME_BIT_INDEX_FLAG_MAX                              1

    #define USERDATA_PICKUP_TYPE_HEALTH_BIT_INDEX_FLAG_EASY                    0
    #define USERDATA_PICKUP_TYPE_HEALTH_BIT_INDEX_FLAG_NORMAL                  1
    #define USERDATA_PICKUP_TYPE_HEALTH_BIT_INDEX_FLAG_HARD                    2
    #define USERDATA_PICKUP_TYPE_HEALTH_BIT_INDEX_FLAG_MAX                     3

    #define USERDATA_ZONECAMERA_BIT_INDEX_FLAG_ZOOM                            0
    #define USERDATA_ZONECAMERA_BIT_INDEX_FLAG_TRACKPLAYER                     1
    #define USERDATA_ZONECAMERA_BIT_INDEX_FLAG_MAX                             2

    #define USERDATA_CUTSCENETRIGGER_BIT_INDEX_FLAG_PLAYING                    0
    #define USERDATA_CUTSCENETRIGGER_BIT_INDEX_FLAG_MAX                        1

    #define USERDATA_PICKUP_ACTIVE_OBJECT_BIT_INDEX_FLAG_TOME                  0
    #define USERDATA_PICKUP_ACTIVE_OBJECT_BIT_INDEX_FLAG_TOYOU                 1
    #define USERDATA_PICKUP_ACTIVE_OBJECT_BIT_INDEX_FLAG_CROCKETTUSE           2
    #define USERDATA_PICKUP_ACTIVE_OBJECT_BIT_INDEX_FLAG_TUBBSUSE              3
    #define USERDATA_PICKUP_ACTIVE_OBJECT_BIT_INDEX_FLAG_MAX                   4

    #define USERDATA_GMCVAN_BIT_INDEX_FLAG_PLAYING                             0
    #define USERDATA_GMCVAN_BIT_INDEX_FLAG_MAX                                 1

    #define USERDATA_LIMO_BIT_INDEX_FLAG_PLAYING                               0
    #define USERDATA_LIMO_BIT_INDEX_FLAG_MAX                                   1

    #define USERDATA_ONCE_ONLY_BIT_INDEX_FLAG_HAS_PLAYED                       0
    #define USERDATA_ONCE_ONLY_BIT_INDEX_FLAG_MAX                              1

    #define USERDATA_EXAMINED_OBJECT_BIT_INDEX_FLAG_EXAMINED                   0
    #define USERDATA_EXAMINED_OBJECT_BIT_INDEX_FLAG_MAX                        1

    #define USERDATA_GEOMETRY_BREAKABLE_BIT_INDEX_FLAG_OBJDESTROYED            0
    #define USERDATA_GEOMETRY_BREAKABLE_BIT_INDEX_FLAG_OBJTARGETABLE           1
    #define USERDATA_GEOMETRY_BREAKABLE_BIT_INDEX_FLAG_MAX                     2

    #define USERDATA_LONGJUMP_BIT_INDEX_FLAG_SHORTJUMP                         0
    #define USERDATA_LONGJUMP_BIT_INDEX_FLAG_MAX                               1

    #define USERDATA_NPC_CHARACTER_BIT_INDEX_FLAG_INZONE                       0
    #define USERDATA_NPC_CHARACTER_BIT_INDEX_FLAG_INCOVER                      1
    #define USERDATA_NPC_CHARACTER_BIT_INDEX_FLAG_ALLERTED                     2
    #define USERDATA_NPC_CHARACTER_BIT_INDEX_FLAG_TARGETLOCK                   3
    #define USERDATA_NPC_CHARACTER_BIT_INDEX_FLAG_GUNHOSTERED                  4
    #define USERDATA_NPC_CHARACTER_BIT_INDEX_FLAG_MAX                          5

    #define USERDATA_PICKUP_TYPE_EVIDENCE_BIT_INDEX_FLAG_VITAL                 0
    #define USERDATA_PICKUP_TYPE_EVIDENCE_BIT_INDEX_FLAG_MAX                   1

    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_GROUP1                          0
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_GROUP2                          1
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_GROUP3                          2
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_GROUP4                          3
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_ENABLED                         4
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_STEPOUTLEFT                     5
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_STEPOUTRIGHT                    6
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_LOWCOVER                        7
    #define USERDATA_COVERPOINT_BIT_INDEX_FLAG_MAX                             8

    #define USERDATA_CAMERAZONE_BIT_INDEX_FLAG_CHECKHULL                       0
    #define USERDATA_CAMERAZONE_BIT_INDEX_FLAG_MAX                             1

    #define USERDATA_COLLISION_BARRIER_BIT_INDEX_FLAG_ALLOWCROCKETT            0
    #define USERDATA_COLLISION_BARRIER_BIT_INDEX_FLAG_ALLOWTUBBS               1
    #define USERDATA_COLLISION_BARRIER_BIT_INDEX_FLAG_MAX                      2

    #define USERDATA_PICKUP_TYPE_DRUGS_BIT_INDEX_FLAG_VITAL                    0
    #define USERDATA_PICKUP_TYPE_DRUGS_BIT_INDEX_FLAG_MAX                      1

    #define USERDATA_GENERICFX_BIT_INDEX_FLAG_ISACTIVE                         0
    #define USERDATA_GENERICFX_BIT_INDEX_FLAG_CALCBESTROTATION                 1
    #define USERDATA_GENERICFX_BIT_INDEX_FLAG_MAX                              2

    #define USERDATA_PICKUP_TYPE_IDENTIFY_BIT_INDEX_FLAG_VITAL                 0
    #define USERDATA_PICKUP_TYPE_IDENTIFY_BIT_INDEX_FLAG_MAX                   1

    //-----------------------------------------------------------------------------------
    // External Enums
    //-----------------------------------------------------------------------------------

    typedef enum
    {
        NPC_DEATH_NULL,
        NPC_DEATH_FALL_BALCONY,
        NPC_DEATH_FALL_CLIFF,
    } eNPC_DEATH;

    typedef enum
    {
        PLAY_RANDOM,
        PLAY_IN_ORDER,
        IDLE_DEFAULT,
        PLAY_AND_SET_PENDING_BEHAVIOUR,
        PLAY_IN_ORDER_LOOPING,
    } eIDLE_ACTION;

    typedef enum
    {
        FX_GENERIC_NULL,
        FX_GENERIC_CONCRETE,
        FX_GENERIC_GUN_BREN10,
        FX_GENERIC_GUN_BERETTA,
        FX_GENERIC_GUN_SILENCED_BERETTA,
        FX_GENERIC_GUN_SW45,
        FX_GENERIC_GUN_MAGNUM440,
        FX_GENERIC_GUN_SAWN_OFF_SHOTGUN,
        FX_GENERIC_GUN_PUMP_ACTION_SHOTGUN,
        FX_GENERIC_GUN_MAC10,
        FX_GENERIC_GUN_UZI,
        FX_GENERIC_GUN_M16_SMG,
        FX_GENERIC_GUN_M16_ASSAULT_RIFLE,
        FX_GENERIC_GUN_M60_MACHINE_GUN,
        FX_GENERIC_GUN_M79_GRENADE_LAUNCHER,
        FX_GENERIC_GUN_PSG1_SNIPER_RIFLE,
        FX_GENERIC_EXPLOSION,
    } eFX_GENERIC;

    typedef enum
    {
        TUTORIAL_NULL,
        TUTORIAL_1,
        TUTORIAL_2,
        TUTORIAL_3,
        TUTORIAL_4,
        TUTORIAL_5,
        TUTORIAL_6,
        TUTORIAL_7,
        TUTORIAL_8,
        TUTORIAL_9,
    } eTUTORIAL;

    //-----------------------------------------------------------------------------------
    // External Types
    //-----------------------------------------------------------------------------------
    typedef struct s_USERDATA_SAVE_GAME
    {
        s32 TestInteger;                                                 // 4 - Saved To Save Game
    } t_USERDATA_SAVEGAME;                                               // == 4 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_WEAPON
    {
        void *pGameObject;                                               // 4
        s32 GunID;                                                       // 4
        s32 Ammunition;                                                  // 4
    } t_USERDATA_PICKUPTYPEWEAPON;                                       // == 12 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_HEALTH
    {
        void *pGameObject;                                               // 4
        s32 Health;                                                      // 4
    } t_USERDATA_PICKUPTYPEHEALTH;                                       // == 8 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_AMMO
    {
        void *pGameObject;                                               // 4
        s32 AmmoID;                                                      // 4
        s32 Ammunition;                                                  // 4
    } t_USERDATA_PICKUPTYPEAMMO;                                         // == 12 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_ITEM
    {
        void *pGameObject;                                               // 4
        t_TIMELINE_INSTANCE *pAnimationTimeline01;                       // 4
    } t_USERDATA_PICKUPTYPEITEM;                                         // == 8 bytes

    typedef struct s_USERDATA_ZONECAMERA
    {
        void *pGameObject;                                               // 4
        f32 fieldOfView;                                                 // 4
    } t_USERDATA_ZONECAMERA;                                             // == 8 bytes

    typedef struct s_USERDATA_CHARACTERSWITCHTRIGGER
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_CHARACTERSWITCHTRIGGER;                                 // == 4 bytes

    typedef struct s_USERDATA_CUTSCENETRIGGER
    {
        void *pGameObject;                                               // 4
        s32 id;                                                          // 4
        t_TIMELINE_INSTANCE *pTimeline;                                  // 4
    } t_USERDATA_CUTSCENETRIGGER;                                        // == 12 bytes

    typedef struct s_USERDATA_PICKUP_ACTIVE_OBJECT
    {
        void *pGameObject;                                               // 4
        s32 puzzleType;                                                  // 4
        s32 puzzleStatus;                                                // 4
        s32 puzzleCompletable;                                           // 4
        t_TIMELINE_INSTANCE *pAnimationTimeline01;                       // 4
        t_DYNAMIC_INSTANCE *pAttachedInstance01;                         // 4
        t_DYNAMIC_INSTANCE *pTriggerInstance01;                          // 4
    } t_USERDATA_PICKUPACTIVEOBJECT;                                     // == 28 bytes

    typedef struct s_USERDATA_BACKUPZONE
    {
        void *pGameObject;                                               // 4
        t_PLAYER_START_POINT *pSpawnPoint4;                              // 4
        t_PLAYER_START_POINT *pSpawnPoint3;                              // 4
        t_PLAYER_START_POINT *pSpawnPoint2;                              // 4
        t_PLAYER_START_POINT *pSpawnPoint1;                              // 4
    } t_USERDATA_BACKUPZONE;                                             // == 20 bytes

    typedef struct s_USERDATA_GMCVAN
    {
        void *pGameObject;                                               // 4
        f32 Timeforpath;                                                 // 4
        t_POINT_GROUP *pGMCpath;                                         // 4
    } t_USERDATA_GMCVAN;                                                 // == 12 bytes

    typedef struct s_USERDATA_LIMO
    {
        void *pGameObject;                                               // 4
        f32 Timeforpath;                                                 // 4
        t_POINT_GROUP *pLimopath;                                        // 4
    } t_USERDATA_LIMO;                                                   // == 12 bytes

    typedef struct s_USERDATA_ONCE_ONLY
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_ONCEONLY;                                               // == 4 bytes

    typedef struct s_USERDATA_EXAMINED_OBJECT
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_EXAMINEDOBJECT;                                         // == 4 bytes

    typedef struct s_USERDATA_GEOMETRY_BREAKABLE
    {
        void *pGameObject;                                               // 4
        s32 objType;                                                     // 4
        s32 objStrength;                                                 // 4
        s32 objThreshold;                                                // 4
        t_TIMELINE_INSTANCE *pAnimationTimeline01;                       // 4
        t_DYNAMIC_INSTANCE *pAttachedInstance01;                         // 4
        t_DYNAMIC_INSTANCE *pShard01;                                    // 4
        t_DYNAMIC_INSTANCE *pShard02;                                    // 4
        t_DYNAMIC_INSTANCE *pShard03;                                    // 4
        t_DYNAMIC_INSTANCE *pShard04;                                    // 4
        t_DYNAMIC_INSTANCE *pShard05;                                    // 4
        t_DYNAMIC_INSTANCE *pShard06;                                    // 4
        t_DYNAMIC_INSTANCE *pShard07;                                    // 4
        t_DYNAMIC_INSTANCE *pShard08;                                    // 4
        t_DYNAMIC_INSTANCE *pShard09;                                    // 4
        t_DYNAMIC_INSTANCE *pShard10;                                    // 4
        t_DYNAMIC_INSTANCE *pShard11;                                    // 4
        t_DYNAMIC_INSTANCE *pShard12;                                    // 4
        t_DYNAMIC_INSTANCE *pShard13;                                    // 4
        t_DYNAMIC_INSTANCE *pShard14;                                    // 4
        t_DYNAMIC_INSTANCE *pShard15;                                    // 4
        t_DYNAMIC_INSTANCE *pShard16;                                    // 4
        t_DYNAMIC_INSTANCE *pShard17;                                    // 4
        t_DYNAMIC_INSTANCE *pShard18;                                    // 4
        t_DYNAMIC_INSTANCE *pShard19;                                    // 4
        t_DYNAMIC_INSTANCE *pShard20;                                    // 4
        t_DYNAMIC_INSTANCE *pShard21;                                    // 4
        t_DYNAMIC_INSTANCE *pShard22;                                    // 4
        t_DYNAMIC_INSTANCE *pShard23;                                    // 4
        t_DYNAMIC_INSTANCE *pShard24;                                    // 4
        t_DYNAMIC_INSTANCE *pShard25;                                    // 4
        t_DYNAMIC_INSTANCE *pShard26;                                    // 4
        t_DYNAMIC_INSTANCE *pShard27;                                    // 4
        t_DYNAMIC_INSTANCE *pShard28;                                    // 4
        t_DYNAMIC_INSTANCE *pShard29;                                    // 4
        t_DYNAMIC_INSTANCE *pShard30;                                    // 4
        t_DYNAMIC_INSTANCE *pShard31;                                    // 4
        t_DYNAMIC_INSTANCE *pShard32;                                    // 4
    } t_USERDATA_GEOMETRYBREAKABLE;                                      // == 152 bytes

    typedef struct s_USERDATA_LONGJUMP
    {
        void *pGameObject;                                               // 4
        t_DYNAMIC_TRIGGER_INFO *pJumpArea;                               // 4
    } t_USERDATA_LONGJUMP;                                               // == 8 bytes

    typedef struct s_USERDATA_NPC_CHARACTER
    {
        void *pGameObject;                                               // 4
        s32 ZoneId;                                                      // 4
        s32 CoverPointId;                                                // 4
        eIDLE_ACTION IdleMode;                                           // 4
        f32 Resistance;                                                  // 4
        f32 Aggression;                                                  // 4
        s32 IdleAllertAnim;                                              // 4
        s32 IdleAllertBehaviour;                                         // 4
        s32 IdlePendingBehaviour;                                        // 4
        s32 VisualSenseCM;                                               // 4
        s32 AuditorySenseCM;                                             // 4
        s32 anim1;                                                       // 4
        s32 anim2;                                                       // 4
        s32 anim3;                                                       // 4
        s32 anim4;                                                       // 4
        f32 damageModifier;                                              // 4
        s32 health;                                                      // 4
        t_DYNAMIC_INSTANCE *pAIRefInstance;                              // 4
        t_DYNAMIC_TRIGGER_INFO *pAIRefPoint;                             // 4
        t_POINT_GROUP *pAIPath;                                          // 4
        s32 Behaviour;                                                   // 4
        t_DYNAMIC_INSTANCE *pitem2;                                      // 4
        t_DYNAMIC_INSTANCE *pitem1;                                      // 4
        s32 altWeaponId;                                                 // 4
        s32 weaponId;                                                    // 4
        s32 status;                                                      // 4
    } t_USERDATA_NPCCHARACTER;                                           // == 104 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_EVIDENCE
    {
        void *pGameObject;                                               // 4
        s32 Value;                                                       // 4
    } t_USERDATA_PICKUPTYPEEVIDENCE;                                     // == 8 bytes

    typedef struct s_USERDATA_LADDER
    {
        void *pGameObject;                                               // 4
        t_DYNAMIC_TRIGGER_INFO *pBottomTrigger;                          // 4
        t_DYNAMIC_TRIGGER_INFO *pTopTrigger;                             // 4
    } t_USERDATA_LADDER;                                                 // == 12 bytes

    typedef struct s_USERDATA_PLAYER_CHARACTER
    {
        void *pGameObject;                                               // 4
        s32 status;                                                      // 4
    } t_USERDATA_PLAYERCHARACTER;                                        // == 8 bytes

    typedef struct s_USERDATA_COVERPOINT
    {
        void *pGameObject;                                               // 4
        s32 Id;                                                          // 4
    } t_USERDATA_COVERPOINT;                                             // == 8 bytes

    typedef struct s_USERDATA_CAMERAZONE
    {
        void *pGameObject;                                               // 4
        t_DYNAMIC_TRIGGER_INFO *pCameraProxy;                            // 4
    } t_USERDATA_CAMERAZONE;                                             // == 8 bytes

    typedef struct s_USERDATA_COLLISION_BARRIER
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_COLLISIONBARRIER;                                       // == 4 bytes

    typedef struct s_USERDATA_CUTSCENECHARACTER
    {
        void *pGameObject;                                               // 4
        t_DYNAMIC_INSTANCE *pRightHandItem;                              // 4
        t_DYNAMIC_INSTANCE *pLeftHandItem;                               // 4
        t_DYNAMIC_INSTANCE *pHead;                                       // 4
    } t_USERDATA_CUTSCENECHARACTER;                                      // == 16 bytes

    typedef struct s_USERDATA_CHECKPOINT
    {
        void *pGameObject;                                               // 4
        s32 id;                                                          // 4
    } t_USERDATA_CHECKPOINT;                                             // == 8 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_DRUGS
    {
        void *pGameObject;                                               // 4
        s32 Value;                                                       // 4
    } t_USERDATA_PICKUPTYPEDRUGS;                                        // == 8 bytes

    typedef struct s_USERDATA_HIGH_CLIMB
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_HIGHCLIMB;                                              // == 4 bytes

    typedef struct s_USERDATA_LOW_CLIMB
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_LOWCLIMB;                                               // == 4 bytes

    typedef struct s_USERDATA_NPC_DEATHZONE
    {
        void *pGameObject;                                               // 4
        eNPC_DEATH AnimationID;                                          // 4
        s32 PercentageSuccess;                                           // 4
        t_DYNAMIC_TRIGGER_INFO *pBestDirection;                          // 4
        t_DYNAMIC_TRIGGER_INFO *pBestPosition;                           // 4
    } t_USERDATA_NPCDEATHZONE;                                           // == 20 bytes

    typedef struct s_USERDATA_SPEED_BARRIER
    {
        void *pGameObject;                                               // 4
    } t_USERDATA_SPEEDBARRIER;                                           // == 4 bytes

    typedef struct s_USERDATA_GENERICFX
    {
        void *pGameObject;                                               // 4
        t_DYNAMIC_INSTANCE *pAttachedInstance;                           // 4
        t_FX_INSTANCE *pCustomFX;                                        // 4
        eFX_GENERIC GenericFX;                                           // 4
        t_VECT3 Rotation;                                                // 12
    } t_USERDATA_GENERICFX;                                              // == 28 bytes

    typedef struct s_USERDATA_UVSCROLLINGOBJECT
    {
        void *pGameObject;                                               // 4
        f32 U;                                                           // 4
        f32 V;                                                           // 4
        f32 USpeed;                                                      // 4
        f32 VSpeed;                                                      // 4
    } t_USERDATA_UVSCROLLINGOBJECT;                                      // == 20 bytes

    typedef struct s_USERDATA_HIERARCHICALOBJECT
    {
        void *pGameObject;                                               // 4
        t_VECT3 PositionOffset1;                                         // 12
        t_VECT3 RotationOffset1;                                         // 12
        t_DYNAMIC_INSTANCE *pChild01;                                    // 4
        t_VECT3 PositionOffset2;                                         // 12
        t_VECT3 RotationOffset2;                                         // 12
        t_DYNAMIC_INSTANCE *pChild02;                                    // 4
        t_VECT3 PositionOffset3;                                         // 12
        t_VECT3 RotationAxis3;                                           // 12
        t_DYNAMIC_INSTANCE *pChild03;                                    // 4
        t_VECT3 PositionOffset4;                                         // 12
        t_VECT3 RotationAxis4;                                           // 12
        t_DYNAMIC_INSTANCE *pChild04;                                    // 4
    } t_USERDATA_HIERARCHICALOBJECT;                                     // == 116 bytes

    typedef struct s_USERDATA_TUTORIALZONE
    {
        void *pGameObject;                                               // 4
        eTUTORIAL Script;                                                // 4
    } t_USERDATA_TUTORIALZONE;                                           // == 8 bytes

    typedef struct s_USERDATA_DAMAGEZONE
    {
        void *pGameObject;                                               // 4
        s32 Damage;                                                      // 4
        f32 Time;                                                        // 4
    } t_USERDATA_DAMAGEZONE;                                             // == 12 bytes

    typedef struct s_USERDATA_PICKUP_TYPE_IDENTIFY
    {
        void *pGameObject;                                               // 4
        s32 Id;                                                          // 4
    } t_USERDATA_PICKUPTYPEIDENTIFY;                                     // == 8 bytes

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

#endif // __USERDATA_H__
