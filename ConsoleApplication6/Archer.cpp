#include "stdafx.h"
#include "Archer.h"
#include <iostream>

Archer::Archer()
{

}

Archer::Archer(string name, int age)
{
	m_age = age;
	m_name = name;
}

void Archer::Work()
{
	cout << "Archer fighting";
}

Archer::~Archer()
{
}
