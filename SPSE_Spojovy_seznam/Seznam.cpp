#include "Seznam.h"

Seznam::Seznam()
{
	this->prvni = nullptr;
}

bool Seznam::pridat(int id, string text)
{
	if (this->prvni != nullptr) {
		Uzel* novy = new Uzel(id, text);

		for (Uzel* akt = this->prvni; akt != nullptr; akt = akt->ziskat_nasl()) {
			if (akt->ziskat_nasl() == nullptr) {
				akt->nastav_nasl(novy);

				akt->ziskat_nasl()->nastav_pred(akt);
				return true;
			}
		}
	}
	else {
		this->prvni = new Uzel(id, text);
		return true;
	}
	
	return false;
}

bool Seznam::upravit(int id, string novy_text)
{
	for (Uzel* akt = this->prvni; akt != nullptr; akt = akt->ziskat_nasl()) {
		if (akt->ziskat_id() == id) {
			akt->nastav_text(novy_text);
			return true;
		}
	}
	return false;
}

void Seznam::vypsat_cely()
{
	for (Uzel* akt = this->prvni; akt != nullptr; akt = akt->ziskat_nasl()) {
		akt->vypsat();
	}
}

Uzel* Seznam::najdi(int id)
{
	for (Uzel* akt = this->prvni; akt != nullptr; akt = akt->ziskat_nasl()) {
		if (akt->ziskat_id() == id) {
			akt->vypsat();
			return akt;
		}
	}
	return nullptr;
}

bool Seznam::odebrat(int id)
{
	for (Uzel* akt = this->prvni; akt != nullptr; akt = akt->ziskat_nasl()) {
		if (akt->ziskat_id() == id) {
			if (akt->ziskat_pred() != nullptr) {
				akt->ziskat_pred()->nastav_nasl(akt->ziskat_nasl());
			}
			else {
				this->prvni = akt->ziskat_nasl();
			}
			if (akt->ziskat_nasl() != nullptr) {
				akt->ziskat_nasl()->nastav_pred(akt->ziskat_pred());
			}
			delete akt;
			return true;
		}
	}
	return false;
}
