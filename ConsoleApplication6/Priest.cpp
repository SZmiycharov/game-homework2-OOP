#include "stdafx.h"
#include "Priest.h"
#include <iostream>

Priest::Priest()
{
}

Priest::Priest(string name, int age)
{
	m_name = name;
	m_age = age;
}

void Priest::Work()
{
	cout << "Performing ritual";
}

Priest::~Priest()
{
}
