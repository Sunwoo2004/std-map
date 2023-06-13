#include "stdafx.h"
#include "MyClass.h"

using namespace std;

CClass::CClass()
{
	Init();
}

CClass::CClass(const char* szName)
{
	Init();
	strcpy(m_szBuf, szName);
}

CClass::~CClass()
{
	delete[] m_szBuf;
}

void CClass::Init()
{
	strcpy(m_szBuf, "");
	m_iValue = 0;
}

void CClass::SetBuffer(const char* szBuf)
{
	strcpy(m_szBuf, szBuf);
}

void CClass::SetValue(int iValue)
{
	m_iValue = iValue;
}

const char* CClass::GetBuffer()
{
	return m_szBuf;
}

int CClass::GetValue()
{
	return m_iValue;
}