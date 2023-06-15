#pragma once
#include <iostream>
using namespace std;

namespace Boxeur{
class Boxeur
{
	private:
		string nom;
		double poids;
	
	public:
		string GetNom() { return nom; }
		//void SetPoids(float&) { this->poids = poids; }
		double SetPoids() { return poids; }
		Boxeur(string);
};
}

