#include "stdafx.h"
#include "Soldier.h"
#include <string>
#include <iostream>

Soldier::Soldier()
{
}

Soldier::Soldier(string name, int age)
{
	m_name = name;
	m_age = age;
}

void Soldier::Work()
{
	cout << "Fighting against enemy";
}

Soldier::~Soldier()
{
}
