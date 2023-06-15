#pragma once
#include <iostream>
#include "Boxeur.h"

using namespace std;
using namespace Boxeurs;

namespace Combats {
	class Combat
	{
	private:
		string niveau;
		Boxeurs::Boxeur* coinBleu;
		Boxeurs::Boxeur* coinRouge;


	public:
		Combat(string);
		string GetNiveau() { return niveau; }
		Combat* GetCoinBleu(Boxeur* coinBleu);
		void SetCoinBleu(Boxeur* coinBleu);
		Combat* GetCoinRouge(Boxeur* coinRouge);
		void SetCoinRouge(Boxeur* coinRouge);


		~Combat();
	};
}

