// MFCIPEffect.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFCIPEffectApp:
// �йش����ʵ�֣������ MFCIPEffect.cpp
//

class CMFCIPEffectApp : public CWinApp
{
public:
	CMFCIPEffectApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFCIPEffectApp theApp;