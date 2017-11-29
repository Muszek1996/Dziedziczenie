#include "Komputer.h"

const int Komputer::cena = 2000;
int Komputer::id = 0;

ostream & Komputer::operator<<(ostream & wyjscie)
{
	wyjscie << "BEGINKKKKKKKKKKKKKKKKKKKKKK" << endl;
	wyjscie << "Nazwa: \t" << nazwa << endl;
	wyjscie << "Cena: \t" << cena << endl;
	wyjscie << "KKKKKKKKKKKKKKKKKKKKKKKKKEND" << endl;
	return wyjscie;
}

Komputer::Komputer() :
	iid(id++)
{
	cout << "Konstruktor domyœlny klasy Komputer" << endl;
}

Komputer::Komputer(const Komputer&):
	iid(id++)
{

	cout << "Konstruktor kopiuj¹cy klasy Komputer" << endl;
}


Komputer::Komputer(const string name) :
	iid(id++),
	nazwa(name)
{
	
	cout << "Konstruktor sparametryzowany klasy Komputer" << endl;
}


Komputer::~Komputer()
{
	cout << "Destruktor klasy Komputer"<< endl;
}
