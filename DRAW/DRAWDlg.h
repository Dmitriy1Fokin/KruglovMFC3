
// DRAWDlg.h : ���� ���������
//

#pragma once


// ���������� ���� CDRAWDlg
class CDRAWDlg : public CDialogEx
{
// ��������
public:
	CDRAWDlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DRAW_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
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
