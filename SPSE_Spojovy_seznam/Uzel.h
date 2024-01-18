#pragma once
#include <iostream>
#include <string>

using namespace std;

class Uzel {
private:
	int id;
	string text;
	Uzel* nasl;
	Uzel* pred; // v pripade jednosmerneho seznamu vynechat

public:
	Uzel();
	Uzel(int id);
	Uzel(int id, string text);

	Uzel* ziskat_nasl();
	Uzel* ziskat_pred();
	int ziskat_id();
	string ziskat_text();

	bool nastav_nasl(Uzel* uzel);
	bool nastav_pred(Uzel* uzel);
	bool nastav_text(string text);

	void vypsat();
};

