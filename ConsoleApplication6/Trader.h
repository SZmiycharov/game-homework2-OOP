#pragma once
#include "Slave.h"
class Trader :
	public Slave
{
public:
	Trader();
	Trader(string name, int age);
	~Trader();
	virtual void Work() override;
};

