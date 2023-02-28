#include "Postac.h"
#include "bits/stdc++.h"
using namespace std;

Postac::Postac(string aNazwa, int aPozycjaX, int aPozycjaY, int aZdrowie, int aAtak , int aPrendkosc, int aPieniondze)
    {
        mNazwa =aNazwa;
        mPozycja_x =aPozycjaX;
        mPozycja_y=aPozycjaY;
        mZdrowie =aZdrowie;
        mAtak = aAtak;
        mPredkosc =aPrendkosc;
        mPieniadze =aPieniondze;
        //ctor
    }

 void Postac::Pokaz()
{
            cout<<"Zdrowie: "<<mZdrowie<<endl
            <<"Atak: "<<mAtak<<endl
            <<"Predkosc: "<<mPredkosc<<endl;


}

/**
string Postac::Pokaz_Imie()
{
    return nazwa;
}
**/
Postac::~Postac()
{
    //dtor
}
