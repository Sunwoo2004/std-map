#pragma once
class CClass
{
private:
	char m_szBuf[256];
	int m_iValue;
public:
	void SetBuffer(const char * szBuf);
	void SetValue(int iValue);
	const char* GetBuffer();
	int GetValue();
public:
	void Init();
	CClass();
	CClass(const char * szName);
	~CClass();
};