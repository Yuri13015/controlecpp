#include <iostream>
#include "Boxeur.h"
using namespace Boxeurs;
using namespace std;
int main()
{
	cout << "---> DEBUT" << endl << endl;

	Boxeur nom_1("Box_1",75);
	cout << "Premier Boxeur " << &nom_1 << " de nom " << nom_1.GetNom()<<" Pese " << nom_1.GetPoids() << endl;
	cout << endl << endl;
	Boxeur nom_2("Box_2", 78);
	cout << "Deuxieme Boxeur " << &nom_2 << " de nom " << nom_2.GetNom()<<" Pese "<<nom_2.GetPoids() << endl;




}
