/*
 * FILE: RollUpWnd.h
 *
 * DESCRIPTION: Edit box used to input decimal number
 *
 * CREATED BY: Duyuxin, 2004/6/21
 *
 * HISTORY:
 *
 * Copyright (c) 2004 Archosaur Studio, All Rights Reserved.
 */

#include "stdafx.h"
#include "NumEdit.h"
#include "AMemory.h"

//#define new A_DEBUG_NEW

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
//	Implement CNumEdit
//	
///////////////////////////////////////////////////////////////////////////

CNumEdit::CNumEdit()
{
}

CNumEdit::~CNumEdit()
{
}

BEGIN_MESSAGE_MAP(CNumEdit, CEdit)
	//{{AFX_MSG_MAP(CNumEdit)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BOOL CNumEdit::PreTranslateMessage(MSG* pMsg) 
{
	
	if (pMsg->message == WM_CHAR)
	{
		//	Only accept '0' - '9' and '.'
		if ((pMsg->wParam < '0' || pMsg->wParam > '9') && pMsg->wParam != '.' && pMsg->wParam !=8)
			return TRUE;
	}
		
	return CEdit::PreTranslateMessage(pMsg);
}