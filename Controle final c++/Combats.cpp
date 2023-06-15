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


Combats::Combat::~Combat()
{
}
