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

void CMapManager::CreateTest(const int& iValue, const char* szName)
{
	m_TestMap.insert(TestMap::value_type(iValue, szName));
}

const char* CMapManager::GetTestByValue(const int& iValue)
{
	TestMap::iterator iter = m_TestMap.find(iValue);
	if (iter != m_TestMap.end())
	{
		return iter->second;
	}
	return NULL;
}