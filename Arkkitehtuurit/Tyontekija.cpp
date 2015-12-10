#include "Tyontekija.h"
#include <iostream>
using namespace std;
#include <string>

Tyontekija::Tyontekija()
{
	nimi = "";
	tiedot = "";
}


Tyontekija::~Tyontekija()
{
}
Tyontekija::Tyontekija(string nimi, string tiedot)
{
	this->nimi = nimi;
	this->tiedot = tiedot;
}
void Tyontekija::Tulosta()
{
	cout << "\t"<< nimi <<", "<<tiedot<< endl;
}
