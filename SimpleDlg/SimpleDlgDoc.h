
// SimpleDlgDoc.h : interface de la classe CSimpleDlgDoc
//


#pragma once


class CSimpleDlgDoc : public CDocument
{
protected: // création à partir de la sérialisation uniquement
	CSimpleDlgDoc() noexcept;
	DECLARE_DYNCREATE(CSimpleDlgDoc)

// Attributs
public:

// Opérations
public:

// Substitutions
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implémentation
public:
	virtual ~CSimpleDlgDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions générées de la table des messages
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Fonction d'assistance qui définit le contenu de recherche pour un gestionnaire de recherche
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
