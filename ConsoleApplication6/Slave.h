#pragma once
#include <string>
using namespace std;

class Slave
{
public:
	Slave();
	Slave(string name, int age);
	~Slave();
	virtual void Work();
private:
	string m_name;
	int m_age;

};

