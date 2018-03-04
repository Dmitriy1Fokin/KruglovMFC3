
// DRAWDlg.h : файл заголовка
//

#pragma once


// диалоговое окно CDRAWDlg
class CDRAWDlg : public CDialogEx
{
// Создание
public:
	CDRAWDlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DRAW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedExitButton();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	int m_PrevX;
	int m_PrevY;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
