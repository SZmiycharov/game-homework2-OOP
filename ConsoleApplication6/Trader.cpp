#include "stdafx.h"
#include "Trader.h"
#include <string>
#include <iostream>

Trader::Trader()
{
}

Trader::Trader(string name, int age)
{
	m_name = name;
	m_age = age;
}

void Trader::Work()
{
	cout << "Trading";
}

Trader::~Trader()
{
}
