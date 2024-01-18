#include "Uzel.h"

Uzel::Uzel()
{
	this->id = -1;
	this->text = "";
}

Uzel::Uzel(int id)
{
	this->id = id;
	this->text = "";
}

Uzel::Uzel(int id, string text) : Uzel(id)
{
	this->text = text;
}

Uzel* Uzel::ziskat_nasl()
{
	return this->nasl;
}

Uzel* Uzel::ziskat_pred()
{
	return this->pred;
}

int Uzel::ziskat_id()
{
	return this->id;
}

string Uzel::ziskat_text()
{
	return this->text;
}

bool Uzel::nastav_nasl(Uzel* uzel)
{
	return this->nasl = uzel;
}

bool Uzel::nastav_pred(Uzel* uzel)
{
	return this->pred = uzel;
}

bool Uzel::nastav_text(string text)
{
	this->text = text;
	return true;
}

void Uzel::vypsat()
{
	cout << "ID uzlu: " << this->id << "| Text: " << this->text << endl;
}
