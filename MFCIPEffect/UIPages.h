/*************************************************
2014. Co., Ltd.
Edited by Wang.c
Class name:    CDUIPage    

Description:    
ҳ���࣬���水ť��ͳһ��������¼�
*************************************************/
#pragma once
#include <vector>
#include "UIBase.h"
#include "UIButton.h"
using namespace std;

typedef vector<vector<CDUIButton *> > TypeBtnVec;
class CDUIPage:public CDUIBase
{
public:
	CDUIPage(void): m_bIsCurPage(FALSE){};
	~CDUIPage(void);

public:
    //������水ť�Ķ�ά����
    vector<vector<CDUIButton *> > m_pVUICtrlContent;
	
	//�����С
	UINT m_uWidth;
	UINT m_uHeight;
	LONG m_lLastX;

	//�Ƿ��ǵ�ǰҳ
	BOOL m_bIsCurPage;

    //�ڴ�DC�����滬��ʱ�򱳾�
    CDC m_BackDC;
	
	//��ʵ���ھ��
	HWND m_hwnd;

    void InitPage(CDC * pDC, HWND MainWnd);

    //��ͼ
    void Draw(CDC * pDC);

    //��Ӧ����OnLButtonDown
    BOOL OnLButtonDown(POINT point);

	//�����Ƿ�ǰҳ��
	void SetCurPage(BOOL bIsCur);

    //��Ӧ����OnLButtonUp
    BOOL OnLButtonUp(POINT point);

	BOOL OnLButtonUp(CDC* pDC, POINT point);

    //��Ӧ����OnMouseMove
    int OnMouseMove(POINT point, CDC * pDC, CDC * pBackDC);

    //����µİ�ť
    void AddItem(CDUIButton * btn, int lineNum);

    //���¼��㰴ťλ��
    void ReloadBtnPos(BOOL bIsLeft = FALSE);

	//���¼��㰴ť����Ŀ��
	void ReloadBtnDestPos(UINT uPos); /* 0 curpage,1 left, 2 right */

};