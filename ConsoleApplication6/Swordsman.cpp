#include "stdafx.h"
#include "Swordsman.h"
#include <iostream>

Swordsman::Swordsman()
{
}

Swordsman::Swordsman(string name, int age)
{
	m_name = name;
	m_age = age;
}


void Swordsman::Work()
{
	cout << "Swordsman fighting";
}

Swordsman::~Swordsman()
{
}
