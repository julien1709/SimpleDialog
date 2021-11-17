// COptions.cpp : fichier d'implémentation
//

#include "pch.h"
#include "SimpleDlg.h"
#include "COptions.h"
#include "afxdialogex.h"


// boîte de dialogue de COptions

IMPLEMENT_DYNAMIC(COptions, CDialog)

COptions::COptions(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG_OPTIONS, pParent)
	, m_text(_T(""))
	, m_bgColor(0)
	, m_x(0)
	, m_y(0)
{

}

COptions::~COptions()
{
}

void COptions::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TEXT, m_text);
	DDX_Radio(pDX, IDC_RADIO_RED, m_bgColor);
	DDX_Text(pDX, IDC_EDIT_POS_X, m_x);
	DDX_Text(pDX, IDC_EDIT_POS_Y, m_y);
}


BEGIN_MESSAGE_MAP(COptions, CDialog)
END_MESSAGE_MAP()


// gestionnaires de messages de COptions
