#include "stdafx.h"
#include <cctype>		
#include <iostream>	
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include "Archer.h"
#include "Emperor.h"
#include "Empire.h"
#include "Priest.h"
#include "Scholar.h"
#include "Slave.h"
#include "Soldier.h"
#include "Swordsman.h"
#include "Trader.h"

using namespace std;

void gen_random();
void ShowMenu();
void AddCitizen();
void Menu();
char GetAChar();
char Legal();
char GetCommand();


void gen_random(char *s, const int len) {
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < len; ++i) {
		s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	s[len] = 0;
}

void ShowMenu()
{
	cout << "\n\t\t*** CONTROL THE EMPIRE ***";
	cout << "\n\tA \tAdd a citizen to the empire";
	cout << "\n\tL \tList citizens";
	cout << "\n\tQ \tQuit";
}

void AddCitizen(Empire empire)
{
	string command;
	cout << "Write a command like <add <slave|trader|soldier> <amount>>: ";
	cin >> command;
	istringstream iss(command);
	vector<string> partOfCommand;
	copy(istream_iterator<string>(iss),
		istream_iterator<string>(),
		back_inserter(partOfCommand));

	string type = partOfCommand[1];
	int amount = atoi(partOfCommand[2].c_str());
	if (type == "slave")
	{
		for (int i = 0; i < amount; i++)
		{
			char* currentCitizen = new char[10];
			gen_random(currentCitizen, 10);
			int age = 18 + (rand() % (int)(40 - 18 + 1)); // generate random age between 18 and 40
			Slave currentCitizen(currentCitizen, age);
			empire.AddCitizens(currentCitizen);
		}
	}
	else if (type == "trader")
	{
		for (int i = 0; i < amount; i++)
		{
			char* currentCitizen = new char[10];
			gen_random(currentCitizen, 10);
			Trader currentCitizen;
			empire.AddCitizens(currentCitizen);
		}
	}
	else if (type == "soldier")
	{
		for (int i = 0; i < amount; i++)
		{
			char* currentCitizen = new char[10];
			gen_random(currentCitizen, 10);
			Soldier currentCitizen;
			empire.AddCitizens(currentCitizen);
		}
	}
	cout << amount << " citizens addet to the empire!";
}

void Menu(Empire empire)
{
	char command;
	do
	{
		command = GetCommand();
		switch (command)
		{
		case 'A': AddCitizen(empire);			 break;		//Add citizen to the Empire
		case 'L': empire.GetCitizensCount();	 break;		//show current count of citizens
		case '?': ShowMenu();					 break;		//Display menu again
		case 'Q':								 break;		//Quit
		}
	} while (command != 'Q');
}

char GetAChar(char* promptString)
{
	char response;

	cout << promptString;
	cin >> response;
	response = toupper(response);
	cin.get();
	return response;
}

char Legal(char c)
{
	return	((c == 'A') || (c == 'L') || (c == 'Q'));
}

char GetCommand()
{
	char cmd = GetAChar("\n\n>");

	while (!Legal(cmd))
	{
		cout << "\nIllegal command, please try again . . .";
		ShowMenu();
		cmd = GetAChar("\n\n>");
	}
	return cmd;
}

int main()
{
	ShowMenu();

	system("pause");
	return 0;
}


