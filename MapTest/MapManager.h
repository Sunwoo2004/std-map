#pragma once
#include <map>

class CMapManager
{
protected:
	typedef std::map<int, const char*> TestMap;

	TestMap m_TestMap;
public:
	void CreateTest(const int &iValue, const char * szName);
	const char * GetTestByValue(const int &iValue);
public:
	static CMapManager& GetInstance();
private:
	static CMapManager* sg_Instance;
public:
	void Init();
	CMapManager();
	~CMapManager();
};

#define g_Map CMapManager::GetInstance()