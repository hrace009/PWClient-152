/*
 * FILE: EC_InputFilter.h
 *
 * DESCRIPTION: 
 *
 * CREATED BY: Duyuxin, 2004/8/30
 *
 * HISTORY: 
 *
 * Copyright (c) 2004 Archosaur Studio, All Rights Reserved.
 */

#pragma once

///////////////////////////////////////////////////////////////////////////
//	
//	Define and Macro
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Types and Global variables
//	
///////////////////////////////////////////////////////////////////////////

class CECInputCtrl;

///////////////////////////////////////////////////////////////////////////
//	
//	Declare of Global functions
//	
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//	
//	Class CECInputFilter
//	
///////////////////////////////////////////////////////////////////////////

class CECInputFilter
{
public:		//	Types

	//	Input type
	enum
	{
		IT_KEYBOARD = 0,
		IT_MOUSE,
	};

public:		//	Constructor and Destructor

	CECInputFilter(CECInputCtrl* pInputCtrl);
	virtual ~CECInputFilter() {}

public:		//	Attributes

public:		//	Operations

	//	Translate input
	virtual bool TranslateInput(int iInput) { return true; }

protected:	//	Attributes

	CECInputCtrl*	m_pInputCtrl;	//	Input controller

protected:	//	Operations

};

///////////////////////////////////////////////////////////////////////////
//	
//	Inline functions
//	
///////////////////////////////////////////////////////////////////////////

