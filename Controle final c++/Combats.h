#pragma once
#include <iostream>
#include "Boxeur.h"

using namespace std;


namespace Combats {
	class Combat
	{
	private:
		string niveau;
		Boxeur* coinBleu = null;

	public:
		Combat(string);
		string GetNiveau() { return niveau; }
		Combat* GetCoinBleu(Boxeur* coinBleu);
		Combat* SetCoinBleu(Boxeur* coinBleu);


		~Combat();
	};
}

