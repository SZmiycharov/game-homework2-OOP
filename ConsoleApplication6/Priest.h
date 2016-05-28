#pragma once
#include "Slave.h"
#include <string>

class Priest :
	public Slave
{
public:
	Priest();
	Priest(string name, int age);
	~Priest();
	virtual void Work() override;
};

