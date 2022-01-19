#include <iostream>
#include <vector>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include "wheel.h"
using namespace std;

int wheelAnalysis(Wheel w);
void sleep(int miliseconds);

int main()
{
	int money, bet, total_multiplier, money_won;

	cout << "Money: ";
	cin >> money;
	cout << "Bet: ";
	cin >> bet;
	cout << endl;

	while (money >= 0)
	{
		money -= bet;
		
		cout << endl;
		
		Wheel w;
		w.PrintWheel();

		cout << endl;

		total_multiplier = wheelAnalysis(w);
		money_won = bet * total_multiplier;
		money += money_won;

		if (money_won > 0)
			cout << "Congratulations! You won " << money_won << "$!" << endl;

		cout << endl << "Money: " << money << endl;

		sleep(2500);
		system("CLS");
	}

	cout << "You lost :(" << endl;
}