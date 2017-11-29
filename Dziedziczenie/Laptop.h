#pragma once
#include "Komputer.h"

class Laptop :public Komputer
{
	bool bluetooth = true;
public:
	ostream & operator<<(ostream & wyjscie);
	Laptop();
	Laptop(const string nazwa,bool bt);
	Laptop(const Laptop& zrodlo);
	~Laptop();
};

