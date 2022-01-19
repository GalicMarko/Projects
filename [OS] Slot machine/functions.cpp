#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include "wheel.h"
using namespace std;

int wheelAnalysis(Wheel w)
{
	int multiplier = 0;

	if (w.firstRow[0] == w.firstRow[1] && w.firstRow[0] == w.firstRow[2] && w.firstRow[1] == w.firstRow[2])
		multiplier += 2;
	if (w.secondRow[0] == w.secondRow[1] && w.secondRow[0] == w.secondRow[2] && w.secondRow[1] == w.secondRow[2])
		multiplier += 2;
	if (w.thirdRow[0] == w.thirdRow[1] && w.thirdRow[0] == w.thirdRow[2] && w.thirdRow[1] == w.thirdRow[2])
		multiplier += 2;
	if (w.firstRow[0] == w.secondRow[0] && w.firstRow[0] == w.thirdRow[0] && w.secondRow[0] == w.thirdRow[0])
		multiplier += 2;
	if (w.firstRow[1] == w.secondRow[1] && w.firstRow[1] == w.thirdRow[1] && w.secondRow[1] == w.thirdRow[1])
		multiplier += 2;
	if (w.firstRow[2] == w.secondRow[2] && w.firstRow[2] == w.thirdRow[2] && w.secondRow[2] == w.thirdRow[2])
		multiplier += 2;

	return multiplier;
}

void sleep(int miliseconds)
{
	Sleep(miliseconds);
}