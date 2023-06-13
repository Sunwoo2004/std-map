#include "stdafx.h"
#include "MapManager.h"

using namespace std;

int main()
{
	g_Map.CreateTest(0, "Test1");
	g_Map.CreateTest(1, "Test2");
	g_Map.CreateTest(2, "Test3");

	for (int i = 0; i < 3; i++)
	{
		cout << g_Map.GetTestByValue(i) << endl;
	}
}