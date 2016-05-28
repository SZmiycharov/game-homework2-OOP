#pragma once
#include <string>
#include "Soldier.h"

class Swordsman :
	public Soldier
{
public:
	Swordsman();
	Swordsman(string name, int age);
	~Swordsman();
	virtual void Work() override;
};

