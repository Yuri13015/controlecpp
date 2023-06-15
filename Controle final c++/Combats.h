#pragma once
#include <iostream>
using namespace std;


namespace Combats {
	class Combat
	{
	private:
		string niveau;

	public:
		Combat(string);
		string GetNiveau() { return niveau; }
		~Combat();
	};
}

