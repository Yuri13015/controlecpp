#include <iostream>
#include "Boxeur.h"
#include "Combats.h"

using namespace Combats;
using namespace Boxeurs;
using namespace std;
int main()
{
	cout << "---> DEBUT" << endl << endl;

	Combat combat_1("1/8");
	cout << "Combat " << &combat_1 <<" Nous somme en "<< combat_1.GetNiveau()<< endl;
	cout << endl;

	Boxeur nom_1("Box_1",75);
	cout << "Premier Boxeur " << &nom_1 << " de nom " << nom_1.GetNom()<<" Pese " << nom_1.GetPoids() << endl;
	combat_1.SetCoinBleu(&nom_1);
	cout << endl << endl;


	Boxeur nom_2("Box_2", 78);
	cout << "Deuxieme Boxeur " << &nom_2 << " de nom " << nom_2.GetNom()<<" Pese "<<nom_2.GetPoids() << endl;
	combat_1.SetCoinRouge(&nom_2);
	




}
