#pragma once
#include <iostream>
using namespace std;
class Esimies
{
public:
	Esimies();
	~Esimies();
	Esimies(string nimi, string tiedot);
	void SetNimi(string nimi){ this->nimi = nimi; }
	string GetNimi(string nimi){ return nimi; }
	void SetTiedot(string tiedot){ this->tiedot = tiedot; }
	string GetTiedot(string tiedot){ return tiedot; }
	void Tulosta();
private:
	string nimi;
	string tiedot;
};

