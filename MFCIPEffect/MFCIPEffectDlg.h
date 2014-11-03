// MFCIPEffectDlg.h : ͷ�ļ�
//

#pragma once

#include "UIPages.h"
#include "bkimage.h"
#include "PngManager.h"
// CMFCIPEffectDlg �Ի���
class CMFCIPEffectDlg : public CDialog
{
// ����
public:
	CMFCIPEffectDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCIPEFFECT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	CBkImage m_imgCache;				/* ���汳��ͼƬ */
	BOOL m_bIsBtnDown;					/* ����Ƿ��� */
	int m_nCurPage;						/* ��ǰҳ */
	int m_nPageCount;					/* ��ҳ�� */
	LONG m_lLastX;						/* ��갴��ʱ�ĺ����� */
	BOOL m_bIsMoveLeft;					/* �Ƿ����� */
	UINT m_uBtnCount;					/* ��������,���ڼ��㰴����ID */
	std::vector<CDUIPage*> m_vPages;	/* ҳ�滺�� */
	HGUIPngDEngine* m_pDrawPng;			/* ����pngͼƬ,���ڻ��Ʒ�ҳ��ť */
	std::vector<CRect> m_vPageBtns;		/* �������з�ҳ������Rect */
	DWORD m_dwStartTime;
	
	//��ʼ��ҳ��
	void _InitPages();

	//����ҳ����ʾ����
	void _DrawPageFlags(CDC* pDC);

	//ˢ������
	LRESULT _Invalidate(WPARAM wParam, LPARAM lParam);
	//��ť�¼�
	LRESULT _OnLButtonUp(WPARAM wParam, LPARAM lParam);

	//��ʼ����ҳ��ť
	void _InitPageBtn();

	//������ָ��ҳ
	void _SlideToPage(int nPage, CDC* pDC, CDC* destDC, CPoint point);

	//��������
	void _Slide(LONG lOffset, CDC* pDC, CDC* destDC, CPoint point);

	//��ȡ�����ҳ��ת������
	int _GetClickPage(CPoint point);

	//buttonup ʱ�������ߵ�ҳ��
	BOOL _HandleBesidePage(BOOL bIsPageChange, CDC* destDC, CPoint point);

	//buttonup ʱ����ǰҳ��
	BOOL _HandleCurPage(CDC* destDC, CPoint point);

	//�ж��Ƿ�ҳ
	BOOL _HandlePageChange(LONG lOffset);

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
};
