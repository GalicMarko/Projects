#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include "wheel.h"
using namespace std;

Wheel::Wheel()
{
	srand(time(NULL));

	for (int i = 0; i < 3; ++i)
	{
		firstRow[i] = rand() % 3 + 1;
		secondRow[i] = rand() % 3 + 1;
		thirdRow[i] = rand() % 3 + 1;
	}
}

void Wheel::PrintWheel()
{
	for (int i = 0; i < 3; ++i)
	{
		cout << " " << firstRow[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 3; ++i)
	{
		cout << " " << secondRow[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 3; ++i)
	{
		cout << " " << thirdRow[i] << " ";
	}

	cout << endl;
}

