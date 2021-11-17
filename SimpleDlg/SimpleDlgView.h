
// SimpleDlgView.h : interface de la classe CSimpleDlgView
//

#pragma once


class CSimpleDlgView : public CView
{
protected: // création à partir de la sérialisation uniquement
	CSimpleDlgView() noexcept;
	DECLARE_DYNCREATE(CSimpleDlgView)

	// Attributs
public:
	CSimpleDlgDoc* GetDocument() const;

	// Opérations
public:

	// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

	// Implémentation
public:
	virtual ~CSimpleDlgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// Fonctions générées de la table des messages
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnToolsOptions();

private:
	CString m_text{_T("Place text here")};
	int m_bgColor{0};
	int m_x{100};
	int m_y{200};

};


#ifndef _DEBUG  // version Debug dans SimpleDlgView.cpp
inline CSimpleDlgDoc* CSimpleDlgView::GetDocument() const
   { return reinterpret_cast<CSimpleDlgDoc*>(m_pDocument); }
#endif

