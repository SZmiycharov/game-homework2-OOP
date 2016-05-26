#pragma once
#include "Slave.h"
class Priest :
	public Slave
{
public:
	Priest();
	~Priest();
	virtual void Work() override;
};

