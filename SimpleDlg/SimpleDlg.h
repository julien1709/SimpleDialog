
// SimpleDlg.h : fichier d'en-tête principal de l'application SimpleDlg
//
#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"       // symboles principaux


// CSimpleDlgApp :
// Consultez SimpleDlg.cpp pour l'implémentation de cette classe
//

class CSimpleDlgApp : public CWinAppEx
{
public:
	CSimpleDlgApp() noexcept;


// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSimpleDlgApp theApp;
