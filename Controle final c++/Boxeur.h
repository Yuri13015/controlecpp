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
		Boxeur(string nom, double poids);
		string GetNom() { return nom; }
		void SetPoids(double&) { this->poids = poids; }
		double GetPoids() { return poids; }
		~Boxeur();

};
}

