#include "stdafx.h"
#include "Slave.h"
#include <iostream>

Slave::Slave()
{
	m_name = "";
	m_age = 0;
}

Slave::Slave(string name, int age)
{
	m_name = name;
	m_age = age;
}

void Slave::Work()
{
	cout << "Slave working";
}

Slave::~Slave()
{
}
