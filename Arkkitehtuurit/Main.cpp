#include <iostream>
using namespace std;
#include "Tyontekija.h"
#include "Esimies.h"
void main(){

	Esimies heikki("Heikki Kuula","Esimies");
	
	Tyontekija jaakko("Jaakko Jokunen","Tyontekija");
	Tyontekija janne("Janne Poppo", "Tyontekija");
	
	
		heikki.Tulosta();
		jaakko.Tulosta();
		janne.Tulosta();
		Esimies("Jani Koivunen", "Esimies").Tulosta();
		Tyontekija("Heli Koivula", "Tyontekija").Tulosta();
	



	system("pause");


}