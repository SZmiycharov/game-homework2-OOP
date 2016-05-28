#include "stdafx.h"
#include "Emperor.h"
#include <string>
#include <iostream>

Emperor::Emperor()
{
}
Emperor::Emperor(string name, int age)
{
	m_name = name;
	m_age = age;
}

inline void Emperor::Work()
{
	cout << "Ruling the empire";
}

Emperor::~Emperor()
{
}
