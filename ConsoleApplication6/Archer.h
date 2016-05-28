#pragma once
#include "Soldier.h"
class Archer :
	public Soldier
{
public:
	Archer();
	Archer(string name, int age);
	~Archer();
	virtual void Work() override;
};

