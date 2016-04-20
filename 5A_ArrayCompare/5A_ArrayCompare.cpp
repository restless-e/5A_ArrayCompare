// 5A_ArrayCompare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


bool arrayCompare(int ar1[], int size1, int ar2[], int size2)
{
	if (size1 == size2)
	{
		for (int i = 0; i < size1; i++)
		{
			if (ar1[i] != ar2[i])
			{
				return false;
			}
		}
		return true;
	}
	else
	return false;
}
int main()
{
	int group1[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int group2[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

	int arCount1, arCount2 = 0;

	arCount1 = sizeof(group1) / 4;
	arCount2 = sizeof(group2) / 4;

	bool areSame;

	cout << arCount1 << " elements countd in first array" << endl;
	cout << arCount2 << " elements countd in second array" << endl;

	areSame = arrayCompare(group1, arCount1, group2, arCount2);

	cout << "Are both arrays the same? : " << areSame << endl;

	system("pause");
	return 0;
}

