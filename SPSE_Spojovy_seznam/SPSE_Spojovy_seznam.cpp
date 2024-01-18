#include <iostream>
#include "Seznam.h"

using namespace std;

int main()
{
    Seznam seznam;

    seznam.pridat(1, "Text");
    seznam.pridat(2, "Text2");
    seznam.pridat(3, "Text3");

    seznam.vypsat_cely();

    seznam.upravit(2, "Novy text 2");
    seznam.najdi(2);

    cout << endl << endl;
    cout << "Po odebrani uzlu 2" << endl;
    seznam.odebrat(2);
    seznam.vypsat_cely();
}
