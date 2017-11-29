#pragma once
#include "Header.h"

class Komputer
{
protected:
	const int iid;
	static int id;
	string nazwa = "Komputer";
	static const int cena;
public:
	ostream & operator<<(ostream & wyjscie);
	Komputer();
	Komputer(const Komputer& zrodlo);
	Komputer(const string name);
	~Komputer();
};

