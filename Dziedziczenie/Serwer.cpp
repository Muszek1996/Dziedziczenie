#include "Serwer.h"



ostream & Serwer::operator<<(ostream & wyjscie)
{
	wyjscie << "BEGINSSSSSSSSSSSSSSSSSSSSSSS" << endl;
	wyjscie << "Nazwa: \t" << nazwa << endl;
	wyjscie << "NAT: \t" << NAT << endl;
	wyjscie << "Cena: \t" << cena*3.5 << endl;
	wyjscie << "SSSSSSSSSSSSSSSSSSSSSSSEND" << endl;
	return wyjscie;
}

Serwer::Serwer()
{
	nazwa = "Serwer";
	cout << typeid(*this).name() << endl;
}

Serwer::Serwer(string name,bool nat)
{
	NAT = nat;
	nazwa = name;
	cout << typeid(*this).name() << endl;
}

Serwer::Serwer(const Serwer & zrodlo)
{
	nazwa = "Serwer";
	cout << typeid(*this).name() << endl;
}


Serwer::~Serwer()
{
	cout << typeid(*this).name() << endl;
}
