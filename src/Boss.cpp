#include "Boss.h"
#include<../Konfiguracja.h>
#include "Gracz.h"

Boss::Boss(int aZdrowie,int aAtak,int aPrendkosc,Gracz *POSTACGRACZA)
{
mNazwa = "Boss";
mZdrowie =aZdrowie;
mAtak =aAtak;
mPredkosc =aPrendkosc;

}

void Boss::Pokaz()
{
    cout<<"Atak Bossa: "<<mAtak<<endl<<
    //"Krokow :"<<(NowyGracz ->liczba_krokow)<<endl<<
    "Zdrowie: "<<mZdrowie<<endl<<
    "Prendkosc: "<<mPredkosc<<endl;
}

Boss::~Boss()
{
    //dtor
}
