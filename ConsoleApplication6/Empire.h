#pragma once
#include <string>
#include <vector>
#include "Slave.h"


using namespace std;

class Empire
{
	
public:
	enum CitizenType 
	{
		slave,
		soldier,
		scholar,
		priest,
		archer,
		swordsman,
		emperor
	};

	Empire();
	Empire(string name, Slave* slave);
	~Empire();
	int GetCitizensCount();

	template <typename T>
	void AddCitizens(T* citizen)
	{
		citizens.push_back(citizen);
	}
private:
	string m_name;
	vector<Slave *> citizens;
};

