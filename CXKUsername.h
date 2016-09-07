//////////////////////////////////////////////////////////////////////////
// �ǿ��û�������ͷ�ļ�
// ����:Huanfeng
// �汾:1.1
//////////////////////////////////////////////////////////////////////////
#ifndef _CXKUsername_H_ 
#define _CXKUsername_H_ 
#include <string>
#include <iostream>
#include "CString.h"

using namespace std;

typedef int INT;
typedef long long   LONG64;

class CXKUsername
{
public:
	CXKUsername (CString username, INT ver = 18, long lasttimec = 0); 
	CString GetConnUsername();
	long GetLastTimeC();
private:
	INT m_ver;				//�ǿյİ汾��V12��V18����
	long m_lasttimec;		//�ϴγɹ���ʱ�䴦��
	CString m_username;		//ԭʼ�û���
	CString m_realusername;	//�������û���
	const char* RADIUS;
	const char* LR;
};

#endif // _CXKUsername_H_ 
