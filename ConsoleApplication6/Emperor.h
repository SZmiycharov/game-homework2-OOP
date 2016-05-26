#pragma once
#include "Swordsman.h"
class Emperor :
	public Swordsman
{
public:
	Emperor();
	~Emperor();
	virtual void Work() override;
};

