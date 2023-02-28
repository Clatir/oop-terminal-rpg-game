#include <iostream>
#include "Postac.h"
#include "Przeciwnik.h"
#include"Arena.h"
#include "Gracz.h"
#include "Plansza.h"
#include "Menu.h"
#include "Config.cpp"
#include "Konfiguracja.h"
#include"Przedmiot.h"
#include "Boss.h"
using namespace std;

int main()
{

NowyGracz=new Gracz;
srand(time( NULL ));

item[0].mNazwa = "Komplet staroci";
item[0].mWartosc =3;
item[1].mNazwa = "Obraz w ramie";
item[1].mWartosc=5;
item[2].mNazwa = "Nieznany herb";
item[2].mWartosc =4;


NowyGracz->DodajDoEkwipunku("Komplet staroci",3);
NowyGracz->DodajDoEkwipunku("Obraz w ramie",3);
NowyGracz->DodajDoEkwipunku("Nieznany herb",3);

NowyGracz->DodajWaluty(100);





obsluga_menu_gl();








    return 0;
}
