#include "Plansza.h"
#include <bits/stdc++.h>
#include <conio.h>
#include"../Konfiguracja.h"
using namespace std;

Plansza::Plansza()
{


/**
        rozmiar =10;
       mMapa.resize(rozmiar);
  for (int i = 0;i<mMapa.size();i++)
    mMapa[i].resize(rozmiar);


  for (int i = 0; i < mMapa.size();i++)
{
  for (int j = 0; j<mMapa[i].size();j++)
  {
    mMapa[i][j] = "*";
  }
}
**/
Ustaw_plansze(15);


}

void Plansza::Ustaw_plansze(int rozmiar)
{
  mMapa.resize(rozmiar);
  for (int i = 0;i<mMapa.size();i++)
    mMapa[i].resize(rozmiar);


  for (int i = 0; i < mMapa.size();i++)
{
  for (int j = 0; j<mMapa[i].size();j++)
  {
    mMapa[i][j] = "*";
  }
}
}


void Plansza::UstawPlanszeWrogow(int rozmiar)
{
    mMapa.resize(rozmiar);
  for (int i = 0;i<mMapa.size();i++)
    mMapa[i].resize(rozmiar);


    int limit_w_lini = poziom_trudnosci*4;
    for(int i=0; i<mMapa.size();i++)
    {
            for(int k =0;k<limit_w_lini;k++)
                {int v = rand() % rozmiar;
                mMapa[i][v]= "W";


                }

    }


    for(int i =0; i<(mMapa.size()-2);i++)
        {
            if(i%3 == 0)
                mMapa[i][i]="H";

        }




}


void Plansza::Pokaz_plansze()
{
for(int i =0; i<mMapa.size();i++)
    {
        for(int j=0; j<mMapa.size(); j++)
        {
            cout<<mMapa[i][j]<<" ";
        }
        cout<<endl;
    }





    //getch();

}




Plansza::~Plansza()
{
    //dtor
}
