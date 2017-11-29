#include "Laptop.h"



ostream & Laptop::operator<<(ostream & wyjscie)
{
	wyjscie << "BEGINLLLLLLLLLLLLLLLLLLLLLLLLLLL" << endl;
	wyjscie << "Nazwa: \t" << nazwa << endl;
	wyjscie << "BT:\t" << bluetooth << endl;
	wyjscie << "Cena: \t" << cena*2.5 << endl;
	return wyjscie;
	wyjscie << "LLLLLLLLLLLLLLLLLLLLLLLLLLLEND" << endl;
}


Laptop::Laptop()
{
	nazwa = "Laptop";
	cout << typeid(*this).name() << endl;
}

Laptop::Laptop(string name,bool bt)
{
	bluetooth = bt;
	nazwa = name;
	cout << typeid(*this).name() << endl;
}

Laptop::Laptop(const Laptop & zrodlo)
{
	nazwa = "Laptop";
	bluetooth = zrodlo.bluetooth;
	cout << typeid(*this).name() << endl;
}


Laptop::~Laptop()
{
	cout << typeid(*this).name() << endl;
}
