#pragma once
#include "Slave.h"
class Trader :
	public Slave
{
public:
	Trader();
	~Trader();
	virtual void Work() override;
};

