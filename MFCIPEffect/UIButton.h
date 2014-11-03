/*************************************************
2014. Co., Ltd.
Edited by Wang.c
Class name:    CDUIButton    

Description:    
��ť��
*************************************************/
#pragma once
#include "PngManager.h"
#include "UIBase.h"
enum 
{
	BTN_STATE_NORMAL	= 0x00000000UL,
	BTN_STATE_DOWN		= 0x00000001UL,
	BTN_STATE_HOVER		= 0x00000000UL
};
class CDUIButton: public CDUIBase
{
public:
    CDUIButton(void);
    ~CDUIButton(void);
private:
    //��ť����
    CRect m_btnRc;
    //���������
    CRect m_FontRc;

	CRect m_btnDestRc;

	//��ťͼƬ
	UINT m_uResID;
	
	//�ƶ�����
	BOOL m_bMoveLeft;

    //��ť����״̬��TRUEΪ����
    BOOL m_ClickState;
   
    //�����С
    int m_fontSize;

    //��ť״̬ 
	DWORD m_dwState;

	LONG  m_lLastX;
	//��ť��������	
	HGUIPngDEngine* m_pDrawEngine;

	//��ʵ���ھ��
	HWND m_Hwnd;

	//ID
	UINT m_uID;

	BOOL m_bIsSuc;

	UINT m_uSpeed;
public:
    //��ʼ����ť
    void CreateBtn(/*CWnd * OwerWnd,*/ HWND mainWnd, UINT uResID, CRect rc, UINT uBtnID);
	//���ð���λ��rect
	void SetBtnRc(CRect rc);
	//���û���Ŀ��rect
	void SetBtnDestRc(CRect rc);
	//������ͼ(����)���
	void SetBtnSubWidth(UINT uWid);
	//������Ŀ��rc ��������pdc��
	BOOL SlideToDestDC(CDC* pDC);
	//��ȡ����λ��rect
	CRect GetBtnRc();
	//���ú�����
	void SetLastX(LONG lLastX);
    //��ͼ
    void Draw(CDC * pDC);
    //��Ӧ����OnLButtonDown
    BOOL OnLButtonDown(POINT point);
    //��Ӧ����OnLButtonUp
	BOOL OnLButtonUp(POINT point);
    //��Ӧ����OnMouseMove
    int OnMouseMove(POINT point, CDC * pDC, CDC * backDC);
    //����ť������
    //void DrawBtnText(CDC * pDC);
    //.......... 
};