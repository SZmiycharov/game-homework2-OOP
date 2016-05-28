#include "stdafx.h"
#include "Scholar.h"


Scholar::Scholar()
{
}

Scholar::Scholar(string name, int age)
{
	m_name = name;
	m_age = age;
}

void Scholar::Work()
{
	cout << "Researching science";
}

Scholar::~Scholar()
{
}
