#include <iostream>
#include "Boxeur.h"
#define TRACE



using namespace std;

//Boxeurs::Boxeur::Boxeur()



Boxeurs::Boxeur::Boxeur(string nom, double poids)
{
	this->nom = nom;
	this->poids = poids;

#ifdef TRACE
	cout << "=> (" << this->nom << ") " << this << std::endl;
#endif

}


Boxeurs::Boxeur::~Boxeur()
{
}
