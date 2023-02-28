#include "Gracz.h"
#include "Plansza.h"

#include "conio.h"
#include <windows.h>
#include "../Konfiguracja.h"
#include <cctype>



Gracz::Gracz(string aNazwa, int aPozycjaX, int aPozycjaY, int aZdrowie, int aAtak , int aPrendkosc, int aPieniondze)
:Postac(aNazwa,aPozycjaX,aPozycjaY,aZdrowie,aAtak,aPrendkosc,aPieniondze)
{


    mMaxZdrowie = mZdrowie;
    mEkwipunek.resize(100);

    for(int i=0; i<mEkwipunek.size();i++)
        mEkwipunek[i]="0";
}




void Gracz::DodajDoEkwipunku(string mNazwa, int ilosc)
{
    int poz=0;
    bool flaga =0;
    string mNazwaPowtorki="";

    for(int i =0; i<99;i=i+2)
    {
        if(mEkwipunek[i] == mNazwa)
        {flaga=1;
        mNazwaPowtorki = mEkwipunek[i];
        i=100;


        }


    }


    if(flaga)
    {
        for(int i =0; i<99;i=i+2)
        {
            if(mEkwipunek[i]==mNazwaPowtorki)
            {
                mEkwipunek[i+1] = to_string(stoi(mEkwipunek[i+1])+ilosc);
            }
        }

    }

    if(flaga ==0)
    {
        for(int i =0; i<99;i=i+2)
        {
            if(mEkwipunek[i]=="0")
            {
                mEkwipunek[i] = mNazwa;
                mEkwipunek[i+1] = to_string(ilosc);


                i=100;
            }
        }
    }




}


void Gracz::Chodzenie()
{
    //p_wrogow.mMapa.resize(p1.mMapa.size());
//Plansza PW1;


PW1.UstawPlanszeWrogow(p1.mMapa.size());





    int przycisk;
    mPozycja_x=0;
    mPozycja_y=0;


    while (true)
    {

    przycisk = getch();
    system("CLS");
    switch(przycisk)
    {
    case 'w':

        if(mPozycja_y == 0)
            {p1.mMapa[mPozycja_y][mPozycja_x] = "0";
            p1.Pokaz_plansze();


           // cout<<"Pozycja: "<<mPozycja_x<<" "<<mPozycja_y<<endl;
            }

        else
        {

        mLiczba_krokow++;
        mPozycja_y--;
        p1.mMapa[mPozycja_y+1][mPozycja_x] = "*";
        p1.mMapa[mPozycja_y][mPozycja_x] = "0";

       // cout<<"Pozycja: "<<mPozycja_x<<" "<<mPozycja_y<<endl;
        p1.Pokaz_plansze();
        if(PW1.mMapa[mPozycja_y][mPozycja_x] == "W")
            {a1.Walcz();
            }
        if(PW1.mMapa[mPozycja_y][mPozycja_x]=="H")
    {
        cout<<"Handel "<<endl;
        obsluga_menu_h();

    }

        if(mPozycja_x == p1.mMapa.size()-1 and mPozycja_y == p1.mMapa.size()-1)
        {
           a1.Walcz(1);
        }

        }



        break;

    case 'a':
        if(mPozycja_x == 0)
        {p1.mMapa[mPozycja_y][mPozycja_x] = "0";
        p1.Pokaz_plansze();


        }
        else
        {


        mLiczba_krokow++;
        mPozycja_x--;
        p1.mMapa[mPozycja_y][mPozycja_x+1] = "*";
        p1.mMapa[mPozycja_y][mPozycja_x] = "0";
        //cout<<"Pozycja: "<<mPozycja_x<<" "<<mPozycja_y<<endl;
        p1.Pokaz_plansze();
        if(PW1.mMapa[mPozycja_y][mPozycja_x] == "W")

            a1.Walcz();
        if(PW1.mMapa[mPozycja_y][mPozycja_x]=="H")
    {
        cout<<"Handel "<<endl;
        obsluga_menu_h();
    }

    if(mPozycja_x == p1.mMapa.size()-1 and mPozycja_y == p1.mMapa.size()-1)
        {
            a1.Walcz(1);
        }
        }



        break;

    case 's':

        if(mPozycja_y == p1.mMapa.size()-1)
        {p1.mMapa[mPozycja_y][mPozycja_x] = "0";
        p1.Pokaz_plansze();

        }
        else
        {


    mLiczba_krokow++;
    mPozycja_y++;
    p1.mMapa[mPozycja_y-1][mPozycja_x] = "*";
    p1.mMapa[mPozycja_y][mPozycja_x] = "0";
    //cout<<"Pozycja: "<<mPozycja_x<<" "<<mPozycja_y<<endl;
    p1.Pokaz_plansze();
    if(PW1.mMapa[mPozycja_y][mPozycja_x] == "W")
            if(PW1.mMapa[mPozycja_y][mPozycja_x] == "W")


    if(PW1.mMapa[mPozycja_y][mPozycja_x]=="H")
    {
        cout<<"Handel "<<endl;
        obsluga_menu_h();
    }

    if(mPozycja_x == p1.mMapa.size()-1 and mPozycja_y == p1.mMapa.size()-1)
        {
           a1.Walcz(1);
        }

        }



        break;

    case 'd':

    if(mPozycja_x == p1.mMapa.size()-1)
        {p1.mMapa[mPozycja_y][mPozycja_x] = "0";
        p1.Pokaz_plansze();

        }
    else
    {



mLiczba_krokow++;
    mPozycja_x++;
    p1.mMapa[mPozycja_y][mPozycja_x-1]="*";
    p1.mMapa[mPozycja_y][mPozycja_x]="0";
    //cout<<"Pozycja: "<<mPozycja_x<<" "<<mPozycja_y<<endl;
    p1.Pokaz_plansze();
    if(PW1.mMapa[mPozycja_y][mPozycja_x] == "W")
            if(PW1.mMapa[mPozycja_y][mPozycja_x] == "W")
            a1.Walcz();
    }
    if(PW1.mMapa[mPozycja_y][mPozycja_x]=="H")
    {
        cout<<"Handel "<<endl;
        obsluga_menu_h();
    }

    if(mPozycja_x == p1.mMapa.size()-1 and mPozycja_y == p1.mMapa.size()-1)
        {
            a1.Walcz(1);

        }




        break;



    }





    }


}

void Gracz::UstalAtak()
{
    //cout<<"Stary mAtak "<<mAtak;


    if(flaga_ataku =1) flaga_ataku =0;

    if(::poziom_trudnosci==1)
    {
        int a = rand() % 3 + 1;
            if(a == 2)
                {mAtak=1.5*mAtak;
                flaga_ataku=1;
                }


    }



    if(::poziom_trudnosci==2)
    {
        int a = rand() % 3 + 1;
            if(a == 2)
                {mAtak=0.8*mAtak;
                flaga_ataku=1;
                }


    }

     if(::poziom_trudnosci==3)
    {
        int a = rand() % 3 + 1;
            if(a == 2)
                {mAtak=0.7*mAtak;
                flaga_ataku =1;

                }

    }


    if(::poziom_trudnosci==4)
    {
        int a = rand() % 3 + 1;
            if(a == 2)
                {mAtak=0.65*mAtak;
                flaga_ataku=1;

                }

    }



//cout<<"Stan flagi mAtaku "<<flaga_ataku<<endl;
//cout<<"Nowy mAtak = "<<mAtak<<endl;
}
void Gracz::UstawImie(string imie)
{
    mNazwa =imie;
}

void Gracz::PrzywrocAtak()
{
 if(poziom_trudnosci =1)
    {
        flaga_ataku =0;
        mAtak =(2/3)*mAtak;
    }

if(poziom_trudnosci =2)
    {
        flaga_ataku =0;
        mAtak =(2/3)*mAtak;
    }
if(poziom_trudnosci =3)
    {
        flaga_ataku =0;
        mAtak =1.42857*mAtak;
    }
if(poziom_trudnosci =4)
    {
        flaga_ataku =0;
        mAtak =1.53846*mAtak;
    }


cout<<"Stan flagi mAtaku "<<flaga_ataku<<endl;
cout<<"Nowy mAtak = "<<mAtak<<endl;


}

void Gracz::DodajWaluty(int ile)
{
    mPieniadze+=ile;
}
int Gracz::Pokaz_Pieniandz()
{
    return mPieniadze;
}

void Gracz::UsunZEkewipunku(string mNazwa, int ilosc)
{
flaga_handlu=0;
bool dostempny=0;


    for(int i =0; i<100;i++)
    {
        if(mEkwipunek[i] == mNazwa) dostempny=1;
    }
    for(int i =0; i<98;i=i+2)
    {


        if((mEkwipunek[i] == mNazwa)    and  (((stoi(mEkwipunek[i+1]))-ilosc)>=0))
        {
        //cout<<(stoi(mEkwipunek[i+1]))-ilosc;

        mEkwipunek[i+1] = to_string((stoi(mEkwipunek[i+1]))-ilosc);
        i=100;

        //flaga_handlu =1;
        //cout<<"Usuwanie przedmiotu powiodlo sie "<<endl;


        }





       if((mEkwipunek[i] == mNazwa)    and  (((stoi(mEkwipunek[i+1]))-ilosc)<0))
       {
           cout<<"Nie posiadasz tylu sztuk tego przedmiotu "<<endl;
           flaga_handlu =1;
           i=100;
       }

        if((dostempny==0))// or (mEkwipunek[i+1] == "0"))
        {cout<<"Nie posiadasz takiego przedmiotu "<<endl;
        flaga_handlu =1;
        i=100;

        }








    }
}




ostream&operator<<(ostream& str, Gracz&gracz)
        {


        str<<endl<<gracz.mNazwa<<" posiada w swoim ekwipunku "<<endl;
        for(int i =0;i<97;i=i+2)
        {

            if(  (gracz.mEkwipunek[i]!="0"))//   and  ( gracz.mEkwipunek[i+1]!="0"  ))
            {

            str<<gracz.mEkwipunek[i]<<" w ilosci "<<gracz.mEkwipunek[i+1]<<endl;


            }




        }
        str<<" oraz "<<gracz.mPieniadze<<" monet "<<endl;



        return str;
        }





Gracz::~Gracz()
{
    //
    cout<<mNazwa<<" przeszedl "<<mLiczba_krokow<<" krokow "<<endl<<" pokonal "<<mPokonanych_wrogow<<" przeciwnikow "<<endl;

    NowyGracz->mNazwa = "NieNazwanyGracz";
    NowyGracz->mZdrowie =100;
    NowyGracz->mAtak = 10;
    NowyGracz->mPredkosc = 1;
    NowyGracz->mPieniadze =100;
    NowyGracz->mLiczba_krokow =0;
    NowyGracz->mPokonanych_wrogow =0;
    for(int i =0; i<100; i++)
        NowyGracz->mEkwipunek[i]="0";
     PW1.UstawPlanszeWrogow();
     p1.mMapa[p1.mMapa.size()-1][p1.mMapa.size()-1] = "*";
     getch();
    obsluga_menu_gl();



}

