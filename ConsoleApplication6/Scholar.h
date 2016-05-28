#pragma once
#include "Slave.h"
#include <iostream>
#include <string>

class Scholar :
	public Slave
{
public:
	Scholar();
	Scholar(string name, int age);
	~Scholar();
	virtual void Work() override;
};

