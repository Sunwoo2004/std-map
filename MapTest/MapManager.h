#pragma once
#include "MyClass.h"

class CMapManager
{
protected:
	typedef std::map<const char *, CClass*> TestMap;

	TestMap m_TestMap;
public:
	void CreateTest(const char* szName);
	CClass* GetTestByValue(const char * szName);
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