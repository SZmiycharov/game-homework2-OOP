#pragma once
#include <string>
#include "Slave.h"

class Soldier :
	public Slave
{
public:
	Soldier();
	Soldier(string name, int age);
	~Soldier();
	virtual void Work() override;
};

