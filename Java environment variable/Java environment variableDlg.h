
// Java environment variableDlg.h : 头文件
//

#pragma once


// CJavaenvironmentvariableDlg 对话框
class CJavaenvironmentvariableDlg : public CDialogEx
{
// 构造
public:
	CJavaenvironmentvariableDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_JAVAENVIRONMENTVARIABLE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString GetJavaEnvironment(CString rPath,CString rString);
	CString GetSystemEnvironment(CString EnvironmentName);
	LSTATUS SetSystemEnvironment(CString EnvironmentName, CString EnvironmentValue);
	LSTATUS CreateSystemEnvironment(CString EnvironmentName, CString EnvironmentValue);
	struct retFunMSG
	{
		LSTATUS MSG;
		CString FunName;
	};
};
