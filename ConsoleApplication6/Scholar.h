#pragma once
#include "Slave.h"
#include <iostream>

class Scholar :
	public Slave
{
public:
	Scholar();
	~Scholar();
	virtual void Work() override;
};

