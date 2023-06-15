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

void Combats::Combat::SetCoinBleu(Boxeur* coinBleu)
{
	coinBleu = coinBleu;
	if (coinBleu != coinRouge) {
		coinBleu = coinBleu;
	}
	else {
		cout << "Ce boxeur est déjà dans le coin rouge !" << endl;
	}
}

void Combats::Combat::SetCoinRouge(Boxeur* coinRouge)
{
	coinRouge = coinRouge;
	if (coinRouge != coinBleu) {
		coinRouge = coinRouge;
	}
	else {
		cout << "Ce boxeur combat déjà dans l'autre camp" << endl;
	}
	}


Combats::Combat::~Combat()
{
}
