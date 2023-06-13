#include "stdafx.h"
#include "MapManager.h"
#include "MyClass.h"

using namespace std;

int main()
{
	g_Map.CreateTest("Test1");

	CClass* pClass = g_Map.GetTestByValue("Test1");
	if (pClass)
	{
		cout << pClass->GetBuffer() << endl;
	}
}