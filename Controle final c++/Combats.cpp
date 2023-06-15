#include "Combats.h"
#include<iostream>
#define TRACE
using namespace std;

Combats::Combat::Combat(string niveau)
{
	this->niveau = niveau;
#ifdef TRACE
	cout << "=> (" << this->niveau << ") " << this << std::endl;
#endif
}

void Combats::Combat::SetCoinBleu(Boxeur* PcoinBleu)
{
#ifdef TRACE
	cout << "=>coinBleu (" << PcoinBleu->GetNom() << ") " << this << std::endl;
#endif
	if (PcoinBleu != coinRouge) {
		coinBleu = PcoinBleu;
	}
	else {
		cout << "Ce boxeur est déjà dans le coin rouge !" << endl;
	}
}

void Combats::Combat::SetCoinRouge(Boxeur* PcoinRouge)
{
	
#ifdef TRACE
	cout << "=>coinRouge (" << PcoinRouge->GetNom() << ") " << this << std::endl;
#endif

	if (PcoinRouge != coinBleu) {
		coinRouge = PcoinRouge;
	}
	else {
		cout << "Ce boxeur combat déjà dans l'autre camp" << endl;
	}
	}


Combats::Combat::~Combat()
{
}
