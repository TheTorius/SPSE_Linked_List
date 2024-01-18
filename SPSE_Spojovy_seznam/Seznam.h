#pragma once
#include <iostream>
#include "Uzel.h"
#include <string>

using namespace std;

class Seznam {
private:
	Uzel* prvni;

public:
	Seznam();

	bool pridat(int id, string text);
	bool upravit(int id, string novy_text);
	void vypsat_cely();
	Uzel* najdi(int id);
	bool odebrat(int id);
};

