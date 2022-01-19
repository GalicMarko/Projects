#pragma once

#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include "wheel.h"
using namespace std;

class Wheel
{
	public:
		int firstRow[3], secondRow[3], thirdRow[3];
		
		Wheel();
		void PrintWheel();
};

#endif WHEEL_H