// File		: DlgEquipDestroy.cpp
// Creator	: Xiao Zhou
// Date		: 2006/7/19

#include "AFI.h"
#include "DlgEquipDestroy.h"
#include "EC_ShortcutMgr.h"
#include "EC_GameUIMan.h"
#include "EC_GameSession.h"
#include "EC_HostPlayer.h"
#include "EC_IvtrItem.h"
#include "EC_Inventory.h"
#include "EC_IvtrEquip.h"

#define new A_DEBUG_NEW

AUI_BEGIN_COMMAND_MAP(CDlgEquipDestroy, CDlgBase)

AUI_ON_COMMAND("confirm",		OnCommandConfirm)
AUI_ON_COMMAND("IDCANCEL",		OnCommandCancel)

AUI_END_COMMAND_MAP()

AUI_BEGIN_EVENT_MAP(CDlgEquipDestroy, CDlgBase)

AUI_ON_EVENT("Img_Item",	WM_LBUTTONDOWN,	OnEventLButtonDown)

AUI_END_EVENT_MAP()

//------------------------------------------------------------------------
// Right-Click Shortcut for CDlgEquipDestroy
//------------------------------------------------------------------------
typedef CECShortcutMgr::SimpleClickShortcut<CDlgEquipDestroy> EquipDestroyClickShortcut;
//------------------------------------------------------------------------

CDlgEquipDestroy::CDlgEquipDestroy()
{
	m_pTxt_Name = NULL;
	m_pImg_Item = NULL;
	m_pBtn_Confirm = NULL;
}

CDlgEquipDestroy::~CDlgEquipDestroy()
{
}

bool CDlgEquipDestroy::OnInitDialog()
{
	DDX_Control("Txt_Name", m_pTxt_Name);
	DDX_Control("Img_Item", m_pImg_Item);
	DDX_Control("Btn_Confirm", m_pBtn_Confirm);

	GetGameUIMan()->GetShortcutMgr()->RegisterShortCut(new EquipDestroyClickShortcut(this));
	return true;
}

void CDlgEquipDestroy::OnCommandConfirm(const char *szCommand)
{
	CECIvtrItem* pItem = (CECIvtrItem*)GetDataPtr();
	if( pItem ) 
	{
		GetGameSession()->c2s_SendCmdNPCSevDestroyBind(m_nSolt, pItem->GetTemplateID());
		OnEventLButtonDown(0, 0, NULL);
	}
}

void CDlgEquipDestroy::OnCommandCancel(const char *szCommand)
{
	OnEventLButtonDown(0, 0, NULL);
	GetGameUIMan()->EndNPCService();
	Show(false);
	GetGameUIMan()->GetDialog("Win_Inventory")->Show(false);
	GetHostPlayer()->GetPack(IVTRTYPE_PACK)->UnfreezeAllItems();
}

void CDlgEquipDestroy::OnShowDialog()
{
	OnEventLButtonDown(0, 0, NULL);
}

void CDlgEquipDestroy::OnEventLButtonDown(WPARAM wParam, LPARAM lParam, AUIObject * pObj)
{
	CECIvtrItem *pItem = (CECIvtrItem *)GetDataPtr();
	if( pItem )
		pItem->Freeze(false);
	m_pImg_Item->ClearCover();
	m_pImg_Item->SetHint(_AL(""));
	m_pTxt_Name->SetText(_AL(""));
	SetDataPtr(NULL);
}

void CDlgEquipDestroy::SetItem(CECIvtrItem *pItem, int nSlot)
{
	OnEventLButtonDown(0, 0, NULL);
	SetDataPtr(pItem);
	m_nSolt = nSlot;
	pItem->Freeze(true);
	AString strFile;
	af_GetFileTitle(pItem->GetIconFile(), strFile);
	strFile.MakeLower();
	m_pImg_Item->SetCover(GetGameUIMan()->m_pA2DSpriteIcons[CECGameUIMan::ICONS_INVENTORY],
		GetGameUIMan()->m_IconMap[CECGameUIMan::ICONS_INVENTORY][strFile]);

	m_pImg_Item->SetColor(
		(pItem->IsEquipment() && ((CECIvtrEquip *)pItem)->IsDestroying())
		? A3DCOLORRGB(128, 128, 128)
		: A3DCOLORRGB(255, 255, 255));

	m_pTxt_Name->SetText(pItem->GetName());
}

void CDlgEquipDestroy::OnItemDragDrop(CECIvtrItem* pIvtrSrc, int iSrc, PAUIOBJECT pObjSrc, PAUIOBJECT pObjOver)
{
	// no need to check name "Img_Item", only one available drag-drop target
	if( pIvtrSrc->GetProcType() & CECIvtrItem::PROC_BINDING )
	{
		this->SetItem(pIvtrSrc, iSrc);
	}
}