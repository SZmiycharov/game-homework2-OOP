#pragma once
#include "Slave.h"
class Soldier :
	public Slave
{
public:
	Soldier();
	~Soldier();
	virtual void Work() override;
};

