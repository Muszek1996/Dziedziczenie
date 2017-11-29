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

	Komputer *zam�wienie[3];
	Laptop * lap = new Laptop();

	zam�wienie[0] = new Komputer();
	zam�wienie[1] = new Laptop();
	zam�wienie[2] = new Serwer();

	*zam�wienie[0] << cout;
	*zam�wienie[1] << cout;
	*zam�wienie[2] << cout;

	delete zam�wienie[0];
	delete zam�wienie[1];
	delete zam�wienie[2];


	getchar();
	return 0;
}