///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Example level script

Game( "Miami Vice" )
{
	//General_Variables
	Flag( crockettDown,	0 )
	Flag( tubbsDown,	0 )
	
	//Mission1_Objectives
	Flag( M1_P1_Complete,	0 )
	Flag( M1_P2_Complete,	0 )
	
	Var(  M1_P2_Counter,	0 )
	
	//Mission2a_Objectives
	Flag( M2a_P1_Complete,	0 )
	Flag( M2a_S1_Complete,	0 )
	Flag( M2a_S2_Complete,	0 )
	
	Var(  M2a_S1_Counter,	0 )
	Var(  M2a_S2_Counter,	0 )
	
	//Mission2b_Objectives
	Flag( M2b_P1_Complete,	0 )
	Flag( M2b_S1_Complete,	0 )
	Flag( M2b_S2_Complete,	0 )
	Flag( M2b_S3_Complete,	0 )
	
	Var(  M2b_P1_Counter,	0 )
	Var(  M2b_S1_Counter,	0 )
	Var(  M2b_S2_Counter,	0 )	
	Var(  M2b_S3_Counter,	0 )	
	
	//Mission3a_Objectives
	Flag( M3a_P1_Complete,	0 )
	Flag( M3a_P2_Complete,	0 )
	Flag( M3a_P3_Complete,	0 )
	
	//Mission3b_Objectives
	Flag( M3b_P1_Complete,	0 )
	Flag( M3b_S1_Complete,	0 )
		
	//Mission4a_Objectives
	Flag( M4a_P1_Complete,	0 )
	Flag( M4a_P2_Complete,	0 )
	Flag( M4a_S1_Complete,	0 )
	
	Var(  M4a_S1_Counter,	0 )
	
	//Mission4b_Objectives
	Flag( M4b_P1_Complete,	0 )
	Flag( M4b_P2_Complete,	0 )
	Flag( M4b_P3_Complete,	0 )
	Flag( M4b_P4_Complete,	0 )
	Flag( M4b_S1_Complete,	0 )
	
	Var(  M4b_S1_Counter,	0 )	
	
	//Mission5_Objectives
	Flag( M5_P1_Complete,	0 )
	Flag( M5_P2_Complete,	0 )
	Flag( M5_P3_Complete,	0 )
	Flag( M5_S1_Complete,	0 )
	Flag( M5_S2_Complete,	0 )
	Flag( M5_S3_Complete,	0 )
	Flag( M5_S4_Complete,	0 )
	
	Var(  M5_P1_Counter,	0 )	
	Var(  M5_S1_Counter,	0 )
	Var(  M5_S4_Counter,	0 )
	
	//Mission6a_Objectives
	Flag( M6a_P1_Complete,	0 ) 
	Flag( M6a_P2_Complete,	0 ) 
	Flag( M6a_P3_Complete,	0 ) 
	
	//Mission6b_Objectives
	Flag( M6b_P1_Complete,	0 ) 
	Flag( M6b_P2_Complete,	0 ) 
	Flag( M6b_P3_Complete,	0 ) 
	Flag( M6b_S1_Complete,	0 ) 
	
	//Mission7a_Objectives
	Flag( M7a_P1_Complete,	0 )
	Flag( M7a_P2_Complete,	0 )
	Flag( M7a_P3_Complete,	0 )
	Flag( M7a_S1_Complete,	0 )
	
	Var(  M7a_P3_Counter,	0 )
	Var(  M7a_S1_Counter,	0 )
		
	//Mission7b_Objectives
	Flag( M7b_P1_Complete,	0 )
	Flag( M7b_P2_Complete,	0 )
	Flag( M7b_P3_Complete,	0 )
	Flag( M7b_S1_Complete,	0 )
	
	Var(  M7b_P1_Counter,	0 )
	Var(  M7b_S1_Counter,	0 )
	
	//Mission8a_Objectives
	Flag( M8a_P1_Complete,	0 )
	Flag( M8a_S1_Complete,	0 )
	
	Var( M8a_S1_Counter,	0 )

	//Mission8b_Objectives	
	Flag( M8b_P1_Complete,	0 )
	Flag( M8b_P2_Complete,	0 )
	Flag( M8b_P3_Complete,	0 )
	Flag( M8b_S1_Complete,	0 )
	
	Var(  M8b_S1_Counter,	0 )	
	
	//Mission9a_Objectives
	Flag( M9a_P1_Complete,	0 )
	Flag( M9a_P2_Complete,	0 )
	Flag( M9a_S1_Complete,	0 )
	Flag( M9a_S2_Complete,	0 )
	
	Var(  M9a_S1_Counter,	0 )
	Var(  M9a_S2_Counter,	0 )
	
	//Mission9b_Objectives
	Flag( M9b_P1_Complete,	0 )
	
	SetState( OBJECTIVE_PLAYING )
	
	//General_Events
	OnEventFrom( EVENT_CHARACTER_DOWN, Crockett )
	{
		FlagSet( crockettDown )
	}
	
	OnEventFrom( EVENT_CHARACTER_DOWN, Tubbs )
	{
		FlagSet( tubbsDown )
	}
	
	Level( "Episode1" )
	{
		OnState( OBJECTIVE_PLAY ) 
		{	
			FlagClr( crockettDown )	
			FlagClr( tubbsDown ) 			
		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 1 Brief" )
		{		
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 1: HAFENGEBIET" )
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde Manuel Ortega" )
			
//			TextColour( 255, 255, 128, 255 )
//			TextScale( 150, 175 )
//			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "2. Schnappe alle Drogendealer" )		
		}

		Mission( "Mission 1" )
		{		
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission1_Objectives
				FlagClr( M1_P1_Complete )
				FlagClr( M1_P2_Complete )
				
				VarSet(  M1_P2_Counter,	0 )						
			}
			
			//Mission1_Events
			Objective( "M1_P1_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_cutscene2 )
				{
					FlagSet( M1_P1_Complete )
				}
			}
			
			Objective( "M1_P2_Complete" )
			{			
				OnEventFrom( EVENT_KILLED, van1 )
				{
					VarAdd( M1_P2_Counter, 1 )
				}	
				OnEventFrom( EVENT_KILLED, limo3 )
				{
					VarAdd( M1_P2_Counter, 1 )
				}
				OnEventFrom( EVENT_KILLED, van2 )
				{
					VarAdd( M1_P2_Counter, 1 )
				}
				OnEventFrom( EVENT_KILLED, limo2 )
				{
					VarAdd( M1_P2_Counter, 1 )
				}												
				FlagSetOnLogic( M1_P2_Complete )
				{
					VarGreaterThan( M1_P2_Counter, 3 )
				}
			}
						
			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			

		
			Map( LEVEL_MISSION1 )
		}
		
//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
		
		PreCutSeq( "CutSeq3" )
		{
			Map( CUT_SCENE3 )
		}

		MissionBriefing( "Episode 2a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 2a: STRANDHAUS" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Schleiche dich in das Strandhaus ein" )			

			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 4 Gangster f�r ein Verh�r" )
			TextSecondary( "2. Finde 4 schwarze Lieferwagen" )
		}
	
		Mission( "Mission 2a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
					
				//Mission2a_Objectives
				FlagClr( M2a_P1_Complete )
				FlagClr( M2a_S1_Complete )
				FlagClr( M2a_S2_Complete )
				
				VarSet(  M2a_S1_Counter,	0 )
				VarSet(  M2a_S2_Counter,	0 )
			}

			//Mission2a_Events	
			Objective( "M2a_P1_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_sideroom )
				{
					FlagSet( M2a_P1_Complete )
				}	
			}
			
			
			Objective( "M2a_S1_Complete" )
			{			
				OnEvent( EVENT_CHARACTER_ARRESTED )
				{
					VarAdd( M2a_S1_Counter, 1 )
				}
				FlagSetOnLogic( M2a_S1_Complete )
				{
					VarGreaterThan( M2a_S1_Counter, 3 )
				}
			}

			Objective( "M2a_S2_Complete" )
			{			
				OnEventFrom( EVENT_IDENTIFY, van1 )
				{
					VarAdd( M2a_S2_Counter, 1 )
				}	
				OnEventFrom( EVENT_IDENTIFY, Van2 )
				{
					VarAdd( M2a_S2_Counter, 1 )
				}
				OnEventFrom( EVENT_IDENTIFY, van3 )
				{
					VarAdd( M2a_S2_Counter, 1 )
				}
				OnEventFrom( EVENT_IDENTIFY, van4 )
				{
					VarAdd( M2a_S2_Counter, 1 )
				}								
				FlagSetOnLogic( M2a_S2_Complete )
				{
					VarGreaterThan( M2a_S2_Counter, 3 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION2a )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 2b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 2b: STRANDHAUS" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde die gestohlene Aktentasche" )

			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Finde 2 schwarze Lieferwagen" )
			TextSecondary( "2. Finde 8 Pakete mit Drogen" )
			TextSecondary( "3. Verhafte 6 Gangster f�r ein Verh�r" )
		}
	
		Mission( "Mission 2b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
					
				//Mission2b_Objectives
				FlagClr( M2b_P1_Complete )
				FlagClr( M2b_S1_Complete )
				FlagClr( M2b_S2_Complete )
				FlagClr( M2b_S3_Complete )
				
				VarSet(  M2b_P1_Counter,	0 )
				VarSet(  M2b_S1_Counter,	0 )
				VarSet(  M2b_S2_Counter,	0 )
				VarSet(  M2b_S3_Counter,	0 )
			}

			//Mission2a_Events
			Objective( "M2b_P1_Complete" )
			{
				// OnEventFrom( EVENT_COLLECTED_EVIDENCE, Breifcase1 )
				OnEventFrom( EVENT_USED, Door_end1 )
				{
					FlagSet( M2b_P1_Complete )
				}
				
				OnEventFrom( EVENT_USED, Door_end2 )
				{
					FlagSet( M2b_P1_Complete )
				}
			}

			Objective( "M2b_S1_Complete" )
			{			
				OnEventFrom( EVENT_IDENTIFY, gmc1 )
				{
					VarAdd( M2b_S1_Counter, 1 )
				}	
				OnEventFrom( EVENT_IDENTIFY, gmc2 )
				{
					VarAdd( M2b_S1_Counter, 1 )
				}
				FlagSetOnLogic( M2b_S1_Complete )
				{
					VarGreaterThan( M2b_S1_Counter, 1 )
				}
			}

			Objective( "M2b_S2_Complete" )
			{
				OnEvent( EVENT_COLLECTED_DRUGS )
				{
					VarAdd( M2b_S2_Counter, 1 )
				}
				FlagSetOnLogic( M2b_S2_Complete )
				{
					VarGreaterThan( M2b_S2_Counter, 7 )
				}
			}			

			Objective( "M2b_S3_Complete" )
			{			
				OnEvent( EVENT_CHARACTER_ARRESTED )
				{
					VarAdd( M2b_S3_Counter, 1 )
				}
				FlagSetOnLogic( M2b_S3_Complete )
				{
					VarGreaterThan( M2b_S3_Counter, 5 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION2b )
		}		
		
//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

		PreCutSeq( "CutSeq6a" )
		{
			Map( CUT_SCENE6a )
		}
		
		MissionBriefing( "Episode 3a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 3a: KUNSTGALERIE" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde das B�ro von Sylvia Ortega" )
			TextPrimary( "2. Schnappe 'Den M�rder'" )
			TextPrimary( "3. Finde Sylvia und fl�chte" )
		}
	
		Mission( "Mission 3a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
		
				//Mission3a_Objectives
				FlagClr( M3a_P1_Complete )
				FlagClr( M3a_P2_Complete )
				FlagClr( M3a_P3_Complete )
			}

			//Mission3a_Events
			Objective( "M3a_P1_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint_1 )
				{
					FlagSet( M3a_P1_Complete )
				}	
			}
			
			Objective( "M3a_P2_Complete" )
			{			
				OnEventFrom( EVENT_KILLED, Assasin_boss )
				{
					FlagSet( M3a_P2_Complete )
				}	
			}
			
			Objective( "M3a_P3_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_enter_lift )
				{
					FlagSet( M3a_P3_Complete )
				}	
			}						

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION3a )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 3b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 3b: KUNSTGALERIE" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Besch�tze Sylvia Ortega und fl�chte" )


			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Finde das Band der �berwachungscamera" )
		}

		Mission( "Mission 3b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission3b_Objectives
				FlagClr( M3b_P1_Complete )
				FlagClr( M3b_S1_Complete )
			}

			//Mission3b_Events
			Objective( "M3b_P1_Complete" )
			{			
				OnEventFrom( EVENT_USED, CardReader2_Copy_1 )
				{
					FlagSet( M3b_P1_Complete )
				}
			}	

			Objective( "M3b_S1_Complete" )
			{
				OnEventFrom( EVENT_COLLECTED_EVIDENCE, Beta_tape )
				{
					FlagSet( M3b_S1_Complete )
				}	
			}	

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION3b )
		}
				
		PostCutSeq( "CutSeq9" )
		{
			Map( CUT_SCENE9 )
		}
		
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

		PreCutSeq( "CutSeq12" )
		{
			Map( CUT_SCENE12 )
		}

		MissionBriefing( "Episode 4a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 4a: HAFEN" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde den DEA-Agenten" )
			TextPrimary( "2. Begleite den DEA-Agenten zur Lagerhalle" )


			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 4 Hafenarbeiter f�r ein Verh�r" )
		}
	
		Mission( "Mission 4a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission5_Objectives
				FlagClr( M4a_P1_Complete )
				FlagClr( M4a_P2_Complete )
				FlagClr( M4a_S1_Complete )
				
				VarSet(  M4a_S1_Counter,	0 )
			}

			//Mission5_Events
			Objective( "M4a_P1_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint1 )
				{
					FlagSet( M4a_P1_Complete )
				}
			}

			Objective( "M4a_P2_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, End_of_level )
				{
					FlagSet( M4a_P2_Complete )
				}
			}

			Objective( "M4a_S1_Complete" )
			{
				OnEventFrom( EVENT_CHARACTER_ARRESTED, outsideloadingbay1 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, warehouse_FL2_02 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, warehouse_FL2_01 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, whouse_TOP_01 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, Roof_patrol_guard_02 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, whouse_TOP_02 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}		
				OnEventFrom( EVENT_CHARACTER_ARRESTED, Ambush_npc_03 )
				{
					VarAdd( M4a_S1_Counter, 1 )
				}																						
				FlagSetOnLogic( M4a_S1_Complete )
				{
					VarGreaterThan( M4a_S1_Counter, 3 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION4a )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 4b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 4b: HAFEN" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde die Reederei" )
			TextPrimary( "2. Besch�tze Tubbs in der Reederei" )
			TextPrimary( "3. Finde Ortegas Boot" )
			TextPrimary( "4. Fl�chte aus der Reederei" )


			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 4 Hafenarbeiter f�r ein Verh�r" )
		}
	
		Mission( "Mission 4b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission5_Objectives
				FlagClr( M4b_P1_Complete )
				FlagClr( M4b_P2_Complete )
				FlagClr( M4b_P3_Complete )
				FlagClr( M4b_P4_Complete )
				FlagClr( M4b_S1_Complete )
				
				VarSet(  M4b_S1_Counter,	0 )
			}

			//Mission5_Events
			Objective( "M4b_P1_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint1 )
				{
					FlagSet( M4b_P1_Complete )
				}
			}

			Objective( "M4b_P2_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint2 )
				{
					FlagSet( M4b_P2_Complete )
				}
			}

			Objective( "M4b_P3_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint3 )
				{
					FlagSet( M4b_P3_Complete )
				}
			}
			
			Objective( "M4b_P4_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_endoflevel )
				{
					FlagSet( M4b_P4_Complete )
				}
			}			

			Objective( "M4b_S1_Complete" )
			{
				OnEventFrom( EVENT_CHARACTER_ARRESTED, D1 )
				{
					VarAdd( M4b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, D2 )
				{
					VarAdd( M4b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, D3 )
				{
					VarAdd( M4b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, D4 )
				{
					VarAdd( M4b_S1_Counter, 1 )
				}	
				OnEventFrom( EVENT_CHARACTER_ARRESTED, D5 )
				{
					VarAdd( M4b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, D6 )
				{
					VarAdd( M4b_S1_Counter, 1 )
				}
				FlagSetOnLogic( M4b_S1_Complete )
				{
					VarGreaterThan( M4b_S1_Counter, 3 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION4b )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 5 Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 5: FRACHTSCHIFF" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Deaktiviere alle Steuerkonsolen" )
			TextPrimary( "2. Schleuse dich in den Laderaum ein" )			
			TextPrimary( "3. Verhafte Manuel Ortega" )


			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 10 Crewmitglieder f�r ein Verh�r" )
			TextSecondary( "2. Verhafte den Schiffskapit�n f�r ein Verh�r" )
			TextSecondary( "3. Finde den Schiffsanlegeplan" )
			TextSecondary( "4. Finde 6 Pakete mit Drogen" )
		}
	
		Mission( "Mission 5" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission6_Objectives
				FlagClr( M5_P1_Complete )
				FlagClr( M5_P2_Complete )
				FlagClr( M5_P3_Complete )				
				FlagClr( M5_S1_Complete )
				FlagClr( M5_S2_Complete )
				FlagClr( M5_S3_Complete )
				FlagClr( M5_S4_Complete )
				
				VarSet(  M5_P1_Counter,	0 )				
				VarSet(  M5_S1_Counter,	0 )
				VarSet(  M5_S4_Counter,	0 )				
			}

			//Mission6_Events
			Objective( "M5_P1_Complete" )
			{			
				OnEventFrom( EVENT_USED, console1r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, console2r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, console3r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, console4r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, console5r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, console6r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, console7r )
				{
					VarAdd( M5_P1_Counter, 1 )
				}																				
				FlagSetOnLogic( M5_P1_Complete )
				{
					VarGreaterThan(  M5_P1_Counter, 6 )
				}

			}

			Objective( "M5_P2_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_entercargobay )
				{
					FlagSet( M5_P2_Complete )
				}
			}


			Objective( "M5_P3_Complete" )
			{
				OnEventFrom( EVENT_KILLED, Otrega_fighter )
				{
					FlagSet( M5_P3_Complete )
				}
			}

/////////
///////// so far
/////////

			Objective( "M5_S1_Complete" )
			{
				OnEventFrom( EVENT_CHARACTER_ARRESTED, Bosscover_2_Copy_1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, stern2 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, 1F_recroom1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, 1F_pantryhide )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, GF_corridor )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, GF_locker1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, GF_locker2 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargo_ambush1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, in_crate2 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, besidecranePATROL )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, deck1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engineoffice2_1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engineoffice1_1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engineoffice1_2 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, enginetop1 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, enginetop2 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engine3 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engineconsoleoff001 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engineconsoleoff002 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, engineconsoleoff003 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargobay1PATROL )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargobay2PATROL )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargo23 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargo21 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargo22 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargobay3PATROL )
				{
					VarAdd( M5_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, cargobalcony2left_Copy_2 )
				{
					VarAdd( M5_S1_Counter, 1 )
				}																																																																																																											
				FlagSetOnLogic( M5_S1_Complete )
				{
					VarGreaterThan( M5_S1_Counter, 9 )
				}
			}

			Objective( "M5_S2_Complete" )
			{
				OnEventFrom( EVENT_CHARACTER_ARRESTED, container_ship_captain_fighter )
				{
					FlagSet( M5_S2_Complete )
				}
			}

			Objective( "M5_S3_Complete" )
			{
				OnEventFrom( EVENT_COLLECTED_EVIDENCE, ledger_brown )
				{
					FlagSet( M5_S3_Complete )
				}
			}

			Objective( "M5_S4_Complete" )
			{
				OnEvent( EVENT_COLLECTED_DRUGS )
				{
					VarAdd( M5_S4_Counter, 1 )
				}
				FlagSetOnLogic( M5_S4_Complete )
				{
					VarGreaterThan( M5_S4_Counter, 5 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION5 )
			
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 6a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 6a: WERKSTATT" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde die Wohnung des Werkstattchefs" )
			TextPrimary( "2. Finde die Werkstatt" )		
			TextPrimary( "3. Fl�chte aus der Wohnung" )
		}

	
		Mission( "Mission 6a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission7_Objectives
				FlagClr( M6a_P1_Complete ) 
				FlagClr( M6a_P2_Complete ) 
				FlagClr( M6a_P3_Complete ) 
			}

			//Mission7_Events
			Objective( "M6a_P1_Complete" )
			{	
				OnEventFrom( EVENT_ENTER_CHECKPOINT, balcony_cut_scene	 )
				{
					FlagSet( M6a_P1_Complete )
				}	
			}

			Objective( "M6a_P2_Complete" )
			{
				OnEventFrom( EVENT_COLLECTED, Location_book )
				{
					FlagSet( M6a_P2_Complete )
				}
			}	
	
			Objective( "M6a_P3_Complete" )
			{	
				OnEventFrom( EVENT_ENTER_CHECKPOINT, End_of_Level	 )
				{
					FlagSet( M6a_P3_Complete )
				}	
			}	
	
			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION6a )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 6b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 6b: WERKSTATT" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde Beweise f�r den Mord" )
			TextPrimary( "2. Finde das B�ro von Juan" )
			TextPrimary( "3. Fl�chte aus dem brennenden Geb�ude" )
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 1 Mechaniker f�r ein Verh�r" )			
		}

	
		Mission( "Mission 6b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission7_Objectives
				FlagClr( M6b_P1_Complete ) 
				FlagClr( M6b_P2_Complete ) 
				FlagClr( M6b_P3_Complete ) 
				FlagClr( M6b_S1_Complete ) 
			}

			//Mission7_Events
			Objective( "M6b_P1_Complete" )
			{	
			
			//	OnEventFrom( EVENT_COLLECTED_EVIDENCE, ChopShopEvidence )
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint1 )
				{
					FlagSet( M6b_P1_Complete )
				}	
			}

			Objective( "M6b_P2_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint2 )
				{
					FlagSet( M6b_P2_Complete )
				}
			}	

			Objective( "M6b_P3_Complete" )
			{
//				Will be set on finishing the level by ForceLevelComplete			
//				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_cutscene20 )
//				{
//					FlagSet( M6b_P3_Complete )
//				}
			}
	
			Objective( "M6b_S1_Complete" )
			{	
				OnEventFrom( EVENT_CHARACTER_ARRESTED, chop5_Copy_1 )
				{
					VarAdd( M6b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, chop10_Copy_1 )
				{
					VarAdd( M6b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, chop12_Copy_2 )
				{
					VarAdd( M6b_S1_Counter, 1 )
				}								
				FlagSetOnLogic( M6b_S1_Complete )
				{
					VarGreaterThan( M6b_S1_Counter, 0 )
				}
			}	

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION6b )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

		PreCutSeq( "CutSeq18" )
		{
			Map( CUT_SCENE18 )
		}
		
		MissionBriefing( "Episode 7a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 7a: KUNSTGALERIE" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. T�te keine W�chter" )
			TextPrimary( "2. Finde den Aufzug im Kellergeschoss der Galerie" )
			TextPrimary( "3. Deaktiviere alle Klimaanlagen" )

			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 7 Wachm�nner f�r ein Verh�r" )
		}
	
		Mission( "Mission 7a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
			
				//Mission8a_Objectives
				FlagSet( M7a_P1_Complete )
				FlagClr( M7a_P2_Complete )
				FlagClr( M7a_P3_Complete )
				FlagClr( M7a_S1_Complete )
				
				VarSet(  M7a_P3_Counter,	0 )	
				VarSet(  M7a_S1_Counter,	0 )	
			}

			//Mission8a_Events
			Objective( "M7a_P1_Complete" )
			{	
				OnEventFrom( EVENT_KILLED, security_guard_asleep_01 )
				{
					FlagClr( M7a_P1_Complete )
				}
				OnEventFrom( EVENT_KILLED, security_patrol_01	 )
				{
					FlagClr( M7a_P1_Complete )
				}
				OnEventFrom( EVENT_KILLED, security_patrol_02 )
				{
					FlagClr( M7a_P1_Complete )
				}
				OnEventFrom( EVENT_KILLED, Security_guard_door_02 )
				{
					FlagClr( M7a_P1_Complete )
				}
				OnEventFrom( EVENT_KILLED, Security_guard_Door_01 )
				{
					FlagClr( M7a_P1_Complete )
				}
				OnEventFrom( EVENT_KILLED, Security_patrol_03 )
				{
					FlagClr( M7a_P1_Complete )
				}
				OnEventFrom( EVENT_KILLED, Security_patrol_04 )
				{
					FlagClr( M7a_P1_Complete )
				}	
				OnEventFrom( EVENT_KILLED, Security_patrol_07 )
				{
					FlagClr( M7a_P1_Complete )
				}	
				OnEventFrom( EVENT_KILLED, SEcurity_patrol_06 )
				{
					FlagClr( M7a_P1_Complete )
				}	
				OnEventFrom( EVENT_KILLED, security_Office_01 )
				{
					FlagClr( M7a_P1_Complete )
				}	
				OnEventFrom( EVENT_KILLED, security_Office_02 )
				{
					FlagClr( M7a_P1_Complete )
				}																																											
			}				
			
			Objective( "M7a_P2_Complete" )
			{
				OnEventFrom( EVENT_USED, CardReader_lift )
				{
					FlagSet( M7a_P2_Complete )
				}	
			}
			
			Objective( "M7a_P3_Complete" )
			{			
				OnEventFrom( EVENT_USED, AirCon_01 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_02 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_03 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_04 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_05 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_06 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_07 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}
				OnEventFrom( EVENT_USED, AirCon_08 )
				{
					VarAdd( M7a_P3_Counter, 1 )
				}								
				FlagSetOnLogic( M7a_P3_Complete )
				{
					VarGreaterThan( M7a_P3_Counter, 7 )
				}
			}

			Objective( "M7a_S1_Complete" )
			{
				OnEvent( EVENT_CHARACTER_ARRESTED )
				{
					VarAdd( M7a_S1_Counter, 1 )
				}																								
				FlagSetOnLogic( M7a_S1_Complete )
				{
					VarGreaterThan( M7a_S1_Counter, 6 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION7a )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 7b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 7b: KUNSTGALERIE" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde die Drogen" )
			TextPrimary( "2. Schnappe Juans 2. Mann")
			TextPrimary( "3. Verhafte den Direktor der Galerie f�r ein Verh�r" )

			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Finde Beweise in Sylvias B�ro" )
		}

		Mission( "Mission 7b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission8b_Objectives
				FlagClr( M7b_P1_Complete )
				FlagClr( M7b_P2_Complete )
				FlagClr( M7b_P3_Complete )
				FlagClr( M7b_S1_Complete )
			}

			//Mission8b_Events
			
			Objective( "M7b_P1_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint1 )
				{					
					FlagSet( M7b_P1_Complete )
				}
			}			
			
			Objective( "M7b_P2_Complete" )
			{			
				OnEventFrom( EVENT_KILLED, Enrico_fighter_02 )
				{
					FlagSet( M7b_P2_Complete )
				}
			}

			Objective( "M7b_P3_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, checkpoint2 )
				{					
					FlagSet( M7b_P3_Complete )
				}
			}

			Objective( "M7b_S1_Complete" )
			{
				OnEvent( EVENT_COLLECTED_DRUGS )
				{
					VarAdd( M7b_S1_Counter, 1 )
				}	
				FlagSetOnLogic( M7b_S1_Complete )
				{
					VarGreaterThan( M7b_S1_Counter, 1 )
				}
			}	

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION7b )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

		PreCutSeq( "CutSeq23" )
		{
			Map( CUT_SCENE23 )
		}

		MissionBriefing( "Episode 8a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 8a: DROGENFABRIK" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde den Eingang zur Drogenfabrik" )
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 2 Handlanger f�r ein Verh�r" )			
		}
			
		Mission( "Mission 8a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown )
			
				//Mission10_Objectives
				FlagClr( M8a_P1_Complete )	
				FlagClr( M8a_S1_Complete )
				
				VarSet(  M8a_S1_Counter,	0 )	
			}

			//Mission10_Events
			Objective( "M8a_P1_Complete" )
			{			
				OnEventFrom( EVENT_ENTER_CHECKPOINT, M8a_EndOfLevelTrigger )
				{
					FlagSet( M8a_P1_Complete )
				}	
			}	

			Objective( "M8a_S1_Complete" )
			{			
				OnEvent( EVENT_CHARACTER_ARRESTED )
				{
					VarAdd( M8a_S1_Counter, 1 )
				}								
				FlagSetOnLogic( M8a_S1_Complete )
				{
					VarGreaterThan( M8a_S1_Counter, 1 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION8a )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 8b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 8b: DROGENFABRIK" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextPrimary( "1. Finde heraus, was sich auf der Diskette befindet" )
			TextPrimary( "2. Schnappe 'Den M�rder'" )
			TextPrimary( "3. Fl�chte aus der Drogenfabrik" )


			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Verhafte 4 Arbeiter f�r ein Verh�r" )
		}
	
		Mission( "Mission 8b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown )
			
				//Mission10_Objectives
				FlagClr( M8b_P1_Complete )
				FlagClr( M8b_P2_Complete )
				FlagClr( M8b_P3_Complete )
				FlagClr( M8b_S1_Complete )
				
				VarSet(  M8b_S1_Counter,	0 )				
			}

			//Mission10_Events
			Objective( "M8b_P1_Complete" )
			{			
				OnEventFrom( EVENT_USED, PC_keyboard )
				{
					FlagSet( M8b_P1_Complete )
				}
			}

			Objective( "M8b_P2_Complete" )
			{
				OnEventFrom( EVENT_KILLED, Assasin02_fighter )
				{
					FlagSet( M8b_P2_Complete )
				}	
			}

			Objective( "M8b_P3_Complete" )
			{
				OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_endoflevelX )
				{
					FlagSet( M8b_P3_Complete )
				}	
			}

			Objective( "M8b_S1_Complete" )
			{
				OnEventFrom( EVENT_CHARACTER_ARRESTED, refiningAMBUSH1 )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, Juan_number2 )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, processingfloor2 )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, processingOFFICE2 )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, processingOFFICE1 )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}		
				OnEventFrom( EVENT_CHARACTER_ARRESTED, refiningroom_2ndwave2 )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}
				OnEventFrom( EVENT_CHARACTER_ARRESTED, next_to_table )
				{
					VarAdd( M8b_S1_Counter, 1 )
				}																			
				FlagSetOnLogic( M8b_S1_Complete )
				{
					VarGreaterThan( M8b_S1_Counter, 3 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_MISSION8b )
		}

//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		

//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 9a Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 9a: HOTEL" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )	
			TextPrimary( "1. Aktiviere die Stromversorgung des Aufzugs" )
			TextPrimary( "2. Versuche, den Drogendeal zu verhindern" )

			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Nebenziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )
			TextSecondary( "1. Finde 5 Pakete mit Drogen" )
			TextSecondary( "2. Verhafte 8 Drogendealer f�r ein Verh�r" )
		}
	
		Mission( "Mission 9a" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission11_Objectives
				FlagClr( M9a_P1_Complete )
				FlagClr( M9a_P2_Complete )
				FlagClr( M9a_S1_Complete )
				FlagClr( M9a_S2_Complete )
				
				VarSet(  M9a_S1_Counter,	0 )
				VarSet(  M9a_S2_Counter,	0 )				
			}

			//Mission11_Events
			Objective( "M9a_P1_Complete" )
			{
				OnEventFrom( EVENT_USED, Lever_handle )
				{
					FlagSet( M9a_P1_Complete )
				}	
			}				
			
			Objective( "M9a_P2_Complete" )
			{			
				//OnEventFrom( EVENT_ENTER_CHECKPOINT, Trigger_cutscene27 )
				OnEventFrom( EVENT_KILLED, Sylvia )
				{
					FlagSet( M9a_P2_Complete )
				}	
			}			

			Objective( "M9a_S1_Complete" )
			{
				OnEvent( EVENT_COLLECTED_DRUGS )
				{
					VarAdd( M9a_S1_Counter, 1 )
				}	
				FlagSetOnLogic( M9a_S1_Complete )
				{
					VarGreaterThan( M9a_S1_Counter, 4 )
				}
			}

			Objective( "M9a_S2_Complete" )
			{
				OnEvent( EVENT_CHARACTER_ARRESTED )
				{
					VarAdd( M9a_S2_Counter, 1 )
				}																												
				FlagSetOnLogic( M9a_S2_Complete )
				{
					VarGreaterThan( M9a_S2_Counter, 7 )
				}
			}

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_Mission9a )
		}
		
//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}		

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////		
	
//		PreCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}

		MissionBriefing( "Episode 9b Brief" )
		{
			TextColour( 255, 255, 255, 255 )
			TextScale( 175, 200 )
			TextLevel( "MISSION 9b: HOTEL ROOFTOP" )			
			
			TextColour( 255, 255, 128, 255 )
			TextScale( 150, 175 )
			Text( "Hauptziele:" )
			
			TextColour( 255, 255, 255, 255 )
			TextScale( 100, 125 )	
			TextPrimary( "1. Finde Juan" )
		}
	
		Mission( "Mission 9b" )
		{
			OnState( OBJECTIVE_PLAY ) 
			{	
				FlagClr( crockettDown )	
				FlagClr( tubbsDown ) 
				
				//Mission11_Objectives
				FlagClr( M9b_P1_Complete )		
			}

			//Mission11_Events
			Objective( "M9b_P1_Complete" )
			{
				OnEventFrom( EVENT_KILLED, Juan_fighter )
				{
					FlagSet( M9b_P1_Complete )
				}
			}	

			OnEvent( EVENT_LEVEL_CHEAT )
			{
				SetState( OBJECTIVE_COMPLETING )
			}

			OnEventData( EVENT_CHECKPOINT, 0 )
			{
				SetState( OBJECTIVE_COMPLETING )
			}
			
			Map( LEVEL_Mission9b )
		}
		
//		PostCutSeq( "NULL" )
//		{
//			Map( NULL )
//		}		

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
				
	}
}

