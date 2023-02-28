using namespace std;
#include<bits/stdc++.h>
#include<conio.h>
//#include "Menu.h"
#include "Plansza.h"
#include "Gracz.h"
#include "Konfiguracja.h"
#include "Config.cpp"
 int liczba_opcji_gl=4;
//int liczba_opcji_gl=4;
//Plansza p1;

void wczytaj_slownik()

{
    ifstream plik;
    plik.open("Slownik.txt");
    if(!plik.is_open())
        cout<<" Nie udalo sie wczytac slowniczka ";
    else
    {
        string wiersz;
        while(getline(plik,wiersz))
        {


        cout<<wiersz<<endl;


        }

    }

}


void wczytaj_zasady()

{
    ifstream plik;
    plik.open("Zasady.txt");
    if(!plik.is_open())
        cout<<" Nie udalo sie wczytac zasad gry ";
    else
    {
        string wiersz;
        while(getline(plik,wiersz))
        {


        cout<<wiersz<<endl;

        }

    }

}




void opcje_gl(int pos)
{

    string opcje[liczba_opcji_gl] = {" 1. Rozpocznij gre ", " 2. Wczytaj slownik", " 3. Pokaz opis gry", " 4. Wyjdz z gry"};
    opcje[(pos)][0] = '>';

    system("CLS");
    cout<<"Wybierz opcje "<<endl;
    for(int i = 0; i<liczba_opcji_gl; i++)
    {
        cout<<opcje[i]<<endl;
    }
}

void menu_glowne(int dzialanie,Plansza &p1)
{
    system("cls");



    if((dzialanie) == 0)
        {
        cout<<"Jak sie nazywasz: "<<endl;
        //getch();
        string imie;
        cin>>imie;

        NowyGracz->UstawImie(imie);

        item[0].mNazwa = "Komplet staroci";
        item[0].mWartosc =3;
        item[1].mNazwa = "Obraz w ramie";
        item[1].mWartosc=5;
        item[2].mNazwa = "Nieznany herb";
        item[2].mWartosc =4;

        //cout<<"Uruchamianie gry"<<endl;
        obsluga_menu_pt();


        //p1.Ustaw_plansze();
        p1.mMapa[0][0]="0";
        p1.Pokaz_plansze();
        NowyGracz->Chodzenie();

        //getch();


        }
    else if((dzialanie) == 1)
        {


        wczytaj_slownik();
        getch();
        obsluga_menu_gl();

        }
    else if((dzialanie) == 2)
        {


        wczytaj_zasady();
        getch();
        obsluga_menu_gl();
        }
    else if((dzialanie) ==3)
    {
         system("taskkill /im cb_console_runner.exe /f");

    }
    else
    {cout<<"Wystapil problem przy dzialaniu funkcji menu_glowne "<<endl;
    //getch();
    }


}
void obsluga_menu_gl()
{

    int pos = 0;
    unsigned char input = 0;




    do
    {
        opcje_gl((pos));
        input = getch();
        if(input=='w' or input == 's')
        {

            if(input == 'w')
            {
                if((pos) == 0)
                    (pos)=liczba_opcji_gl-1;
                else
                    (pos)= (pos) -1;
            }
            else if(input == 's')
            {
                if((pos) == liczba_opcji_gl-1)
                    (pos) = 0;
                else
                    (pos) = (pos)+1;
            }
        }

    }
    while(input != 13);

    menu_glowne((pos),p1);
}


void opcje_pt(int pos)
{
    string opcje_pt[liczba_opcji_gl] = {" 1. Latwy ", " 2. Sredni", " 3. Trudny", " 4. Lepiej nie klikaj"};
    opcje_pt[(pos)][0] = '>';

    system("CLS");
    cout<<"Wybierz poziom trudnosci "<<endl;
    for(int i = 0; i<liczba_opcji_gl; i++)
    {
        cout<<opcje_pt[i]<<endl;
    }
}

void menu_pt(int dzialanie)
{



    if((dzialanie) == 0)
        {

        cout<<"Wybrano poziom latwy "<<endl;

        getch();
        system("CLS");


        }
    else if((dzialanie) == 1)
        {

        cout<<"Wybrano poziom sredni "<<endl;
        poziom_trudnosci =2;

        getch();
        system("CLS");

        }
    else if((dzialanie) == 2)
        {

        cout<<"Wybrano poziom trudny "<<endl;
        poziom_trudnosci =3;

        cout<<" PT: "<<poziom_trudnosci<<endl;

        getch();
        system("CLS");
        }
    else if((dzialanie) ==3)
    {
         cout<<"Bedzie wyzwanie "<<endl;
         poziom_trudnosci =4;
         getch();
         system("CLS");

    }
    else
    {cout<<"Wystapil problem przy dzialaniu menu poziomu trudnosci "<<endl;
    //getch();
    }


}
void obsluga_menu_pt()
{
    obsluga_menu_rm();
    int pos = 0;
    unsigned char input = 0;




    do
    {
        opcje_pt((pos));
        input = getch();
        if(input=='w' or input == 's')
        {

            if(input == 'w')
            {
                if((pos) == 0)
                    (pos)=liczba_opcji_gl-1;
                else
                    (pos)= (pos) -1;
            }
            else if(input == 's')
            {
                if((pos) == liczba_opcji_gl-1)
                    (pos) = 0;
                else
                    (pos) = (pos)+1;
            }
        }

    }
    while(input != 13);

    menu_pt((pos));
}


void opcje_rm(int pos)
{
    string opcje_pt[liczba_opcji_gl] = {" 1. Mala ", " 2. Srednia", " 3. Duza", " 4. Bardzo duzy"};
    opcje_pt[(pos)][0] = '>';

    system("CLS");
    cout<<"Wybierz opcje "<<endl;
    for(int i = 0; i<liczba_opcji_gl; i++)
    {
        cout<<opcje_pt[i]<<endl;
    }
}

void menu_rm(int dzialanie)
{



    if((dzialanie) == 0)
        {

        cout<<"Wybrano rozmiar maly ";
        p1.Ustaw_plansze(10);
        PW1.UstawPlanszeWrogow(10);
        //getch();
        system("CLS");
        }
    else if((dzialanie) == 1)
        {

        cout<<"Wybrano rozmiar sredni "<<endl;

        p1.Ustaw_plansze(12);
        PW1.UstawPlanszeWrogow(12);
        //getch();
        system("CLS");

        }
    else if((dzialanie) == 2)
        {

        cout<<"Wybrano rozmiar duzy "<<endl;
        p1.Ustaw_plansze(13);
        PW1.UstawPlanszeWrogow(13);
        //getch();
        system("CLS");
        }
    else if((dzialanie) ==3)
    {
         cout<<"Wybrano rozmiar bardzo duzy "<<endl;
        p1.Ustaw_plansze(14);
        PW1.UstawPlanszeWrogow(14);
         //getch();
         system("CLS");

    }
    else
    {cout<<"Wystapil problem przy dzialaniu menu rozmiaru mapy "<<endl;
    //getch();
    }


}
void obsluga_menu_rm()
{
    int pos = 0;
    unsigned char input = 0;




    do
    {
        opcje_rm((pos));
        input = getch();
        if(input=='w' or input == 's')
        {

            if(input == 'w')
            {
                if((pos) == 0)
                    (pos)=liczba_opcji_gl-1;
                else
                    (pos)= (pos) -1;
            }
            else if(input == 's')
            {
                if((pos) == liczba_opcji_gl-1)
                    (pos) = 0;
                else
                    (pos) = (pos)+1;
            }
        }

    }
    while(input != 13);

    menu_rm((pos));
}


void opcje_h(int pos)
{



    string opcje_pt[11] = {" 1. Sprzedaj Starocie ", " 2. Sprzedaj Obrazy", " 3. Sprzedaj herby"," 4. Sprzedaj Token" ," 5. Ujednolicic zdobywane przedmioty"," 6. Odejdz",
     " 7. Ulecz sie "," 8. Wzmocnij Zdrowie ", " 9. Wzmocnij Atak ", " 10. Wzmocnij Prendkosc ", " 11. Stworz token "};
    opcje_pt[(pos)][0] = '>';

    system("CLS");
cout<<"Cennik : "<<endl<<"1. Komplet staroci - 3 monety "<<endl<<"2. Obraz w ramie - 5 monet "<<endl<<"3. Nieznany herb  - 4 monety "<<endl
<<"4. Ujednolicenie zdobywanych przedmiotow - 10 monet "<<endl<<"5. Uleczenie - 5 monet "<<endl<<"6. Wzmocnienie zdrowia - 7 monet "<<endl
<<"7. Wzmocnienie ataku - 7 monet "<<endl<<"8. Wzmocnienie prendkosci - 7 monet "<<endl<<"9. Stworzenie tokenu - 12 monet, 1x Komplet staroci, "<<
"1x Obraz w ramie, 1x Nieznany herb"<<endl<<endl;

    cout<<"Wybierz opcje "<<endl;
    for(int i = 0; i<11; i++)
    {
        cout<<opcje_pt[i]<<endl;
    }


}

void menu_h(int dzialanie)
{





    if((dzialanie) == 0)
        {



        int ilosc=0;
        podaj:
        cout<<"Podaj ile sztuk chcesz sprzedac"<<endl;
        cin>>ilosc;
        if(ilosc<0) goto podaj;
        if(ilosc ==0)
        {
            obsluga_menu_h();
        }







            NowyGracz->UsunZEkewipunku("Komplet staroci",ilosc);
            if(flaga_handlu == 0)
            {
            NowyGracz->DodajWaluty(3*ilosc);

            cout<<"Zarobiles "<<(3*ilosc)<<" monet ";
            flaga_handlu=0;

            getch();
            obsluga_menu_h();
             }
            else
                goto podaj;



        getch();
        system("CLS");
        }
    else if((dzialanie) == 1)
        {

      int ilosc=0;
        podaj2:
        cout<<"Podaj ile sztuk chcesz sprzedac"<<endl;
        cin>>ilosc;
        if(ilosc<0) goto podaj2;
        if(ilosc ==0)
        {
            obsluga_menu_h();
        }





            NowyGracz->UsunZEkewipunku("Obraz w ramie",ilosc);
            if(flaga_handlu==0)
            {


            NowyGracz->DodajWaluty(5*ilosc);

            cout<<"Zarobiles "<<(5*ilosc)<<" monet ";
            flaga_handlu=0;
            getch();
            obsluga_menu_h();

            }
            else
                goto podaj2;





        getch();
        system("CLS");
        }
    else if((dzialanie) == 2)
        {

       int ilosc=0;
        podaj3:
        cout<<"Podaj ile sztuk chcesz sprzedac"<<endl;
        cin>>ilosc;
        if(ilosc<0) goto podaj3;
        if(ilosc ==0)
        {
            obsluga_menu_h();
        }





            NowyGracz->UsunZEkewipunku("Nieznany herb",ilosc);
            if(flaga_handlu == 0)
            {



            NowyGracz->DodajWaluty(4*ilosc);

            cout<<"Zarobiles "<<(4*ilosc)<<" monet ";
            flaga_handlu=0;

            getch();

            obsluga_menu_h();
            }
            else
                goto podaj3;

        getch();
        system("CLS");
        }
        else if((dzialanie) == 3)
        {

       int ilosc=0;
        podaj4:
        cout<<"Podaj ile sztuk chcesz sprzedac"<<endl;
        cin>>ilosc;
        if(ilosc<0) goto podaj4;
        if(ilosc ==0)
        {
            obsluga_menu_h();
        }





            NowyGracz->UsunZEkewipunku("Zloty token",ilosc);
            if(flaga_handlu == 0)
            {



            NowyGracz->DodajWaluty(12*ilosc);

            cout<<"Zarobiles "<<(12*ilosc)<<" monet ";

            getch();

            obsluga_menu_h();
            }
            else
                goto podaj4;

        getch();
        system("CLS");
        }
    else if((dzialanie) ==4)
    {
        if((NowyGracz->Pokaz_Pieniandz()) < 10)
            cout<<"Nie masz wystarczajaca monet "<<endl;
        else
        {





        NowyGracz->DodajWaluty(-10);
        NowyGracz->Pokaz_Pieniandz();
         int ind = rand()%2;
         cout<<"Od teraz bedziesz mogl zdobywac tylko ten przedmiot: "<<item[ind].mNazwa<<endl;

            item[0]=item[ind];
            item[1] =item[ind];
            item[2] = item[ind];
         getch();
         obsluga_menu_h();

        }

    }

    else if(dzialanie == 5)
    {   system("CLS");
        p1.Pokaz_plansze();
    }

    else if(dzialanie == 6)

    {
        if(NowyGracz->mZdrowie == NowyGracz->mMaxZdrowie)
        {
            cout<<"Nie potrzebujesz leczenia, masz maksymalna liczbe punktow zdrowia "<<endl;
            getch();
            obsluga_menu_h();
        }
        else
        {



        if  ((NowyGracz->Pokaz_Pieniandz())>=5)
        {

            if(((NowyGracz->mZdrowie) + 0.4*(NowyGracz->mMaxZdrowie))>= NowyGracz->mMaxZdrowie)
            {cout<<" Uleczono do pelna "<<endl;
            NowyGracz->mZdrowie = NowyGracz->mMaxZdrowie;
            getch();
            obsluga_menu_h();
            }

            if(((NowyGracz->mZdrowie) + 0.4*(NowyGracz->mMaxZdrowie))< NowyGracz->mMaxZdrowie)
            {
            NowyGracz->mZdrowie += 0.4*NowyGracz->mMaxZdrowie;
            cout<<" Uleczono do "<<NowyGracz->mZdrowie<<" punktow zdrowia "<<endl;
            cout<<"Maks zdrowie = "<<NowyGracz->mMaxZdrowie<<endl;
            getch();
            obsluga_menu_h();
            }



        }
        else
        {cout<<"Nie masz wystarczajaco monet "<<endl;
        getch();
        obsluga_menu_h();

        }
        }

    }

    else if (dzialanie == 7) // zdrowie
    {
        if(((NowyGracz->Pokaz_Pieniandz())>=7))
        {
            NowyGracz->mMaxZdrowie+=5;
            cout<<"Teraz maksymalna liczba punktow zdrowia wynosi "<<NowyGracz->mMaxZdrowie<<endl;
            getch();
            obsluga_menu_h();
        }
        else
        {
            cout<<"Nie masz wystrczajaco monet "<<endl;
        }

    }
    else if (dzialanie == 8) // atak
    {
        if(((NowyGracz->Pokaz_Pieniandz())>=7))
        {
            NowyGracz->mAtak+=5;
            cout<<"Teraz twoj atak wynosi "<<NowyGracz->mAtak<<endl;
            getch();
            obsluga_menu_h();

        }
        else
        {
            cout<<"Nie masz wystrczajaco monet "<<endl;
        }

    }

    else if (dzialanie == 9) // prendkosc
    {
        if(((NowyGracz->Pokaz_Pieniandz())>=7))
        {
            NowyGracz->mPredkosc+=5;
            cout<<"Teraz twoja prendkosc wynosi "<<NowyGracz->mPredkosc<<endl;
            getch();
            obsluga_menu_h();
        }
        else
        {
            cout<<"Nie masz wystrczajaco monet "<<endl;
        }

    }
    else if(dzialanie == 10) // token
    {
        if((NowyGracz->mEkwipunek[1]!="0") and (NowyGracz->mEkwipunek[3]!="0") and (NowyGracz->mEkwipunek[5]!="0") and (NowyGracz->mPieniadze)>=20)
        {
            cout<<(*NowyGracz);




            NowyGracz->UsunZEkewipunku(item[0].mNazwa,1);
            NowyGracz->UsunZEkewipunku(item[1].mNazwa,1);
            NowyGracz->UsunZEkewipunku(item[2].mNazwa,1);


            Przedmiot pom;
            Przedmiot Token;
            pom = item[0] + item[1];
            Token = pom + item[2];
            NowyGracz->DodajDoEkwipunku(Token.mNazwa,1);
            NowyGracz->DodajWaluty(Token.mWartosc);
            cout<<"Udalo sie stworzyc token "<<endl;

            cout<<(*NowyGracz);



        }

        else
        {
            cout<<"Nie posiadasz potrzebnych zasobow do stworzenia tokenu "<<endl;

        }
        getch();
        obsluga_menu_h();
    }
    else
    {cout<<"Wystapil problem przy dzialaniu menu handlarza "<<endl;
    //getch();
    }


}
void obsluga_menu_h()
{

system("CLS");
/**
cout<<"Spotykasz handlarza, mozesz sprzedac u niego swoje przemioty "<<endl
<<"uleczyc sie, uleprzyc swoja postac "<<
" oraz ujednolicic zdobywane przedmioty "<<endl;

getch();
**/
cout<<(*NowyGracz)<<endl;

cout<<"Cennik : "<<endl<<"1. Komplet staroci - 3 monety "<<endl<<"2. Obraz w ramie - 5 monet "<<endl<<"3. Nieznany herb  - 4 monety "<<endl
<<"4. Ujednolicenie zdobywanych przedmiotow - 10 monet "<<endl<<"5. Uleczenie - 5 monet "<<endl<<"6. Wzmocnienie zdrowia - 7 monet "<<endl
<<"7. Wzmocnienie ataku - 7 monet "<<endl<<"8. Wzmocnienie prendkosci - 7 monet "<<endl<<"9. Stworzenie tokenu -  monet, 1x Komplet staroci, "<<
"1x Obraz w ramie, 1x Nieznany herb"<<endl<<endl;


getch();





    int pos = 0;
    unsigned char input = 0;




    do
    {
        opcje_h((pos));
        input = getch();
        if(input=='w' or input == 's')
        {

            if(input == 'w')
            {
                if((pos) == 0)
                    (pos)==11-1;
                else
                    (pos)= (pos) -1;
            }
            else if(input == 's')
            {
                if((pos) == 11-1)
                    (pos) = 0;
                else
                    (pos) = (pos)+1;
            }
        }

    }
    while(input != 13);

    menu_h((pos));
}









