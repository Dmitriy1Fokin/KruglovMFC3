
// DRAW.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CDRAWApp:
// � ���������� ������� ������ ��. DRAW.cpp
//

class CDRAWApp : public CWinApp
{
public:
	CDRAWApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CDRAWApp theApp;
