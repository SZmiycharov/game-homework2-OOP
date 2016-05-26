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




string Empire::GetCitizensCount()
{
	string returnStatement = "The empire has " + to_string(citizens.size()) + " citizens!";
	return returnStatement;
}

Empire::~Empire()
{
}
