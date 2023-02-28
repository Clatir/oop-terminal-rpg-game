#ifndef POSTAC_H
#define POSTAC_H
#include<bits/stdc++.h>
using namespace std;


class Postac
{
    public:
        virtual ~Postac();
        Postac(string aNazwa ="Nienazwana postac", int aPozycjaX  = 0, int aPozycjaY  =0, int  aZdrowie =1, int aAtak =1, int aPrendkosc = 1,int aPieniondze =0);
        void Pokaz();
       // string Pokaz_Imie();


        virtual void UstalAtak() =0;
        //friend class Arena;
        //friend class Gracz;



    protected:
    string mNazwa;
    int mPozycja_x;
    int mPozycja_y;
    int mZdrowie;
    int mAtak;
    int mPredkosc;
    int mPieniadze;
};

#endif // POSTAC_H
