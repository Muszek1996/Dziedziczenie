#include "Laptop.h"
#include "Serwer.h"
#include "Header.h"



int main()
{
	setlocale(LC_ALL, "");
	Komputer kom1;
	Laptop lap1, lap2("Laptop Mariusza", false);
	Serwer srv1("SERW", false), srv2(srv1);

	kom1 << cout;
	lap1 << cout;
	lap2 << cout;
	srv1 << cout;
	srv2 << cout;

	Komputer *zamówienie[3];
	Laptop * lap = new Laptop();

	zamówienie[0] = new Komputer();
	zamówienie[1] = new Laptop();
	zamówienie[2] = new Serwer();

	*zamówienie[0] << cout;
	*zamówienie[1] << cout;
	*zamówienie[2] << cout;

	delete zamówienie[0];
	delete zamówienie[1];
	delete zamówienie[2];


	getchar();
	return 0;
}