/*
 * FILE: EC_Manager.cpp
 *
 * DESCRIPTION: 
 *
 * CREATED BY: Duyuxin, 2004/8/30
 *
 * HISTORY: 
 *
 * Copyright (c) 2004 Archosaur Studio, All Rights Reserved.
 */

#include "EC_Global.h"
#include "EC_Manager.h"

#include "AC.h"

#define new A_DEBUG_NEW

///////////////////////////////////////////////////////////////////////////
//	
//	Define and Macro
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Reference to External variables and functions
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Local Types and Variables and Global variables
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Local functions
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Implement CECManager
//	
///////////////////////////////////////////////////////////////////////////

CECManager::CECManager(CECGameRun* pGameRun)
{
	m_pGameRun		= pGameRun;
	m_dwCurTickTime	= 0;
	m_iManagerID	= 0;
}

//	Begin recroding tick time
void CECManager::BeginTickTime()
{ 
	m_dwCurTickTime = a_GetTime(); 
}

//	End recroding tick time
void CECManager::EndTickTime()
{ 
	m_dwCurTickTime = a_GetTime() - m_dwCurTickTime; 
}
