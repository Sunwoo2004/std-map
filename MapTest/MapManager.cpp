#include "stdafx.h"
#include "MapManager.h"

using namespace std;

CMapManager* CMapManager::sg_Instance = NULL;

CMapManager& CMapManager::GetInstance()
{
	if (sg_Instance == NULL)
	{
		sg_Instance = new CMapManager;
	}
	return *sg_Instance;
}

CMapManager::CMapManager()
{

}

CMapManager::~CMapManager()
{

}

void CMapManager::Init()
{

}

void CMapManager::CreateTest(const char* szName)
{
	CClass* pClass = new CClass(szName);
	if (pClass)
	{
		m_TestMap.insert(TestMap::value_type(szName, pClass));
	}
}

CClass* CMapManager::GetTestByValue(const char* szName)
{
	TestMap::iterator iter = m_TestMap.find(szName);
	if (iter != m_TestMap.end())
	{
		return iter->second;
	}
	return NULL;
}

void CMapManager::DeleteClass(const char* szName)
{
	TestMap::iterator iter = m_TestMap.find(szName);
	if (iter == m_TestMap.end())
	{
		return;
	}

	CClass* pClass = iter->second;
	if (pClass)
	{
		delete pClass;
		m_TestMap.erase(iter);
	}
}