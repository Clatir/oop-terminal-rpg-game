#include "Przeciwnik.h"
#include"../Konfiguracja.h"
#include "Arena.h"

Przeciwnik::Przeciwnik(string aNazwa, int aPozycjaX, int aPozycjaY, int aZdrowie, int aAtak , int aPrendkosc)//, int g)//,double e)
           :Postac(aNazwa,aPozycjaX,aPozycjaY,aZdrowie,aAtak,aPrendkosc)//,g)
{
    //double doswiadczenie = e;


    //ctor
}
void Przeciwnik::UstalAtak()
{


mAtak=(rand()%(((mPozycja_x+1)+(mPozycja_y+1))*(::poziom_trudnosci))+1)+mAtak/2;
//cout<<"Ustalono atak "<<endl;

//cout<<pozycja_x<<" "<<pozycja_y<<" "<<::poziom_trudnosci<<endl;
//cout<<endl<<"PT: "<<::poziom_trudnosci<<endl;

//atak = poziom_trudnosci;




}




Przeciwnik::~Przeciwnik()
{

}
