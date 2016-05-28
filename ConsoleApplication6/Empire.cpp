#include "stdafx.h"
#include "Empire.h"
#include "Slave.h"

Empire::Empire()
{
}

Empire::Empire(string name, Slave* slave)
{
	m_name = name;
	citizens.push_back(slave);
}

int Empire::GetCitizensCount()
{
	return citizens.size();
}

Empire::~Empire()
{
}
