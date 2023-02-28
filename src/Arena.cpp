#include "Arena.h"
//#include "Przeciwnik.h"
#include "../Konfiguracja.h"
#include <conio.h>
#include"Przedmiot.h"
#include "Boss.h"



cArena::Arena()
{

}



void cArena::Walcz(bool boss)
{


if(boss)
{
    system("CLS");
    //getch();
    //cout<<"Bitka z bossem "<<endl;


    Boss PrzeciwnikKoncowy;


//PrzeciwnikKoncowy.PostacGracza = (NowyGracz);
PrzeciwnikKoncowy.Pokaz();


NowyGracz->UstalAtak();


while(NowyGracz->mZdrowie>0 and PrzeciwnikKoncowy.mZdrowie>0)
{

int otrzymany_dmg = rand()%PrzeciwnikKoncowy.mAtak+1;
int zadany_dmg =rand()%NowyGracz->mAtak+1;


if((NowyGracz->mPredkosc) >= (PrzeciwnikKoncowy.mPredkosc) )
{

cout<<NowyGracz->mNazwa<<" otrzymuje "<<otrzymany_dmg<<" obrazen "<<endl;
NowyGracz->mZdrowie-=otrzymany_dmg;
if(NowyGracz->mZdrowie<=0) break;
cout<<"Zdrowie gracza "<<NowyGracz->mZdrowie<<endl;
getch();


cout<<PrzeciwnikKoncowy.mNazwa<<" otrzymuje "<<zadany_dmg<<" obrazen "<<endl;
PrzeciwnikKoncowy.mZdrowie -=zadany_dmg;
if(PrzeciwnikKoncowy.mZdrowie<=0) break;
cout<<" Zdrowie przeciwnika "<<PrzeciwnikKoncowy.mZdrowie<<endl;

getch();


}
else
{



cout<<NowyGracz->mNazwa<<" otrzymuje "<<otrzymany_dmg<<" obrazen "<<endl;
NowyGracz->mZdrowie-=otrzymany_dmg;
if(NowyGracz->mZdrowie<=0) break;
cout<<"Zdrowie gracza "<<NowyGracz->mZdrowie<<endl;
getch();


cout<<PrzeciwnikKoncowy.mNazwa<<" otrzymuje "<<zadany_dmg<<" obrazen "<<endl;
PrzeciwnikKoncowy.mZdrowie -=zadany_dmg;
if(PrzeciwnikKoncowy.mZdrowie<=0) break;
cout<<" Zdrowie przeciwnika "<<PrzeciwnikKoncowy.mZdrowie<<endl;

getch();
}



}


if(NowyGracz->mZdrowie<=0)
{
    cout<<PrzeciwnikKoncowy.mNazwa<<" "<<"pokonuje Ciebie "<<endl;
    getch();
    system("CLS");

getch();
    NowyGracz->~Gracz();
    getch();


}

if(PrzeciwnikKoncowy.mZdrowie<=0)
{
    system("cls");
    //int ilosc_przedmiotow = rand()%4 + 1;
//    int ilosc_monet = poziom_trudnosci*(rand()%3 + 1);

    string przedmiot = item[rand()%2].mNazwa;

    cout<<NowyGracz->mNazwa<<" wygrywa pojedynek z ostatnim przeciwnikiem "<<endl<<"Gratulujemy ukonczenia gry "<<endl<<endl;





    NowyGracz->mPokonanych_wrogow++;

      //getch();
    //dsystem("CLS");

    NowyGracz->~Gracz();
    getch();


}




}

else
{



system("CLS");


vector<Przeciwnik*> WektorPrzeciwnikow;
//WektorPrzeciwnikow.resize(3);


for(int i =0;i<3;i++)
{
    WektorPrzeciwnikow.push_back(new Przeciwnik);

    //WektorPrzeciwnikow[i]->UstalAtak();
    //WektorPrzeciwnikow[i]->Pokaz();


}

ifstream plik;
plik.open("Przeciwnicy.txt");
if(!plik.is_open())
        cout<<" Nie udalo sie wczytac danych przeciwnikow "<<endl;

else
{
    int nr_wiersza=0;
    string wiersz;
    string tab_cech[12];
    for(int i =0; i<12;i++) tab_cech[i]="";

    while(getline(plik,wiersz))
    {
        tab_cech[nr_wiersza] = wiersz;
       // cout<<nr_wiersza<<" "<<wiersz<<endl;
        nr_wiersza++;


    }


    for(int nr_przeciwnika =0; nr_przeciwnika<3; nr_przeciwnika++)
    {
       WektorPrzeciwnikow[nr_przeciwnika]->mNazwa = tab_cech[nr_przeciwnika*4];
       WektorPrzeciwnikow[nr_przeciwnika]->mZdrowie = stoi(tab_cech[nr_przeciwnika*4 +1]);
       WektorPrzeciwnikow[nr_przeciwnika]->mAtak = stoi(tab_cech[nr_przeciwnika*4 +2]);
       WektorPrzeciwnikow[nr_przeciwnika]->UstalAtak();
       //cout<<endl<<"Wartosc ataku po ustaleniu: "<<WektorPrzeciwnikow[nr_przeciwnika]->mAtak<<endl;
    }

// 0 - 0 , 1 - 4, 2 - 8
// 0 - 1,  1 - 5, 2 - 9
}








int ind_wybrany_przeciwnik = rand()%2+1;




NowyGracz->UstalAtak();


cout<<NowyGracz->mNazwa<<" Bedzie walczyl z "<<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mNazwa<<endl
<<"Statystyki gracza "<<endl;
NowyGracz->Pokaz();
cout<<"Statystyki przeciwnika : "<<endl;
WektorPrzeciwnikow[ind_wybrany_przeciwnik]->Pokaz();



while(NowyGracz->mZdrowie>0 and WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie>0)
{

int otrzymany_dmg = rand()%WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mAtak+1;
int zadany_dmg =rand()%NowyGracz->mAtak+1;


if((NowyGracz->mPredkosc) >= (WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mPredkosc) )
{

cout<<NowyGracz->mNazwa<<" otrzymuje "<<otrzymany_dmg<<" obrazen "<<endl;
NowyGracz->mZdrowie-=otrzymany_dmg;
if(NowyGracz->mZdrowie<=0) break;
cout<<"Zdrowie gracza "<<NowyGracz->mZdrowie<<endl;
getch();


cout<<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mNazwa<<" otrzymuje "<<zadany_dmg<<" obrazen "<<endl;
WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie -=zadany_dmg;
if(WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie<=0) break;
cout<<" Zdrowie przeciwnika "<<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie<<endl;

getch();


}
else
{



cout<<NowyGracz->mNazwa<<" otrzymuje "<<otrzymany_dmg<<" obrazen "<<endl;
NowyGracz->mZdrowie-=otrzymany_dmg;
if(NowyGracz->mZdrowie<=0) break;
cout<<"Zdrowie gracza "<<NowyGracz->mZdrowie<<endl;
getch();


cout<<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mNazwa<<" otrzymuje "<<zadany_dmg<<" obrazen "<<endl;
WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie -=zadany_dmg;
if(WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie<=0) break;
cout<<" Zdrowie przeciwnika "<<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie<<endl;

getch();
}



}


if(NowyGracz->mZdrowie<=0)
{
    cout<<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mNazwa<<" "<<"pokonuje Ciebie "<<endl;
    getch();
    system("CLS");

    for(int i =0; i<3;i++)
        delete WektorPrzeciwnikow[i];
    NowyGracz->~Gracz();
    getch();
    obsluga_menu_gl();

}

if(WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mZdrowie<=0)
{
    int ilosc_przedmiotow = rand()%4 + 1;
    int ilosc_monet = poziom_trudnosci*(rand()%3 + 1);

    string przedmiot = item[rand()%2].mNazwa;

    cout<<NowyGracz->mNazwa<<" wygrywa pojedynek "<<endl
    <<WektorPrzeciwnikow[ind_wybrany_przeciwnik]->mNazwa<<" Pozostawia po sobie monety w ilosci "<<ilosc_monet; cout<<" oraz "<<
    przedmiot<<" w ilosci "<<ilosc_przedmiotow<<endl;

    NowyGracz->DodajDoEkwipunku(przedmiot,ilosc_przedmiotow);
    NowyGracz->DodajWaluty(ilosc_monet);

    cout<<*NowyGracz;
    PW1.mMapa[NowyGracz->mPozycja_y][NowyGracz->mPozycja_x] = "0";
    cout<<endl;
    //PW1.Pokaz_plansze();


    NowyGracz->mPokonanych_wrogow++;

      getch();
    system("CLS");
    p1.Pokaz_plansze();


}

}


}



cArena::~cArena()
{
    //dtor
}
