#include "Esimies.h"
#include <iostream>
using namespace std;
#include <string>


Esimies::Esimies()
{
	nimi = "";
	tiedot = "";
}


Esimies::~Esimies()
{

}
Esimies::Esimies(string nimi, string tiedot)
{
	this->nimi = nimi;
	this->tiedot = tiedot;
}
void Esimies::Tulosta()
{
	cout  << nimi << ", " << tiedot << endl;
}