#pragma once
#include "Swordsman.h"
class Emperor :
	public Swordsman
{
public:
	Emperor();
	Emperor(string name, int age);
	~Emperor();
	virtual void Work() override;
};

