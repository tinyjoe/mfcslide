
/*************************************************
2014. Co., Ltd.
Edited by Wang.c
Class name:    CDUIBase    

Description:    
��ͼ�ؼ����࣬�����˻滭�����Ķ���
*************************************************/

#pragma once

class CDUIBase
{
public:
	CDUIBase(void){};
	~CDUIBase(void){};

public:
    //��ͼ
    virtual void Draw(CDC * pDC) = 0;

    //��Ӧ����OnLButtonDown
    virtual BOOL OnLButtonDown(POINT point) = 0;

    //��Ӧ����OnLButtonUp
    virtual BOOL OnLButtonUp(POINT point) = 0;

    //��Ӧ����OnMouseMove
    virtual int OnMouseMove(POINT point, CDC * pDC, CDC * pBackDC) = 0;
};