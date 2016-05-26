#pragma once
#include "Soldier.h"
class Swordsman :
	public Soldier
{
public:
	Swordsman();
	~Swordsman();
	virtual void Work() override;
};

