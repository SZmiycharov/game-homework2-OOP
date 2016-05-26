#pragma once
#include "Soldier.h"
class Archer :
	public Soldier
{
public:
	Archer();
	~Archer();
	virtual void Work() override;
};

