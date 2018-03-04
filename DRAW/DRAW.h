
// DRAW.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CDRAWApp:
// О реализации данного класса см. DRAW.cpp
//

class CDRAWApp : public CWinApp
{
public:
	CDRAWApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CDRAWApp theApp;
