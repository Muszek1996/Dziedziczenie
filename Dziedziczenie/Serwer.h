#pragma once
#include "Komputer.h"

class Serwer: public Komputer
{
	bool NAT = true;
public:
	ostream& operator<<(ostream& wyjscie);

	Serwer();
	Serwer(string name,bool nat);
	Serwer(const Serwer& zrodlo);
	~Serwer();
};

