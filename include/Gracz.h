#ifndef GRACZ_H
#define GRACZ_H
#include "Postac.h"
#include<vector>

class Gracz:public Postac
{
    public:
        Gracz(string aNazwa  ="Nienazwany gracz", int aPozycjaX  = 0, int aPozycjaY  =0, int aZdrowie  =100, int aAtak =10, int aPrendkosc = 1,int aPieniondze  =0);

        int mLiczba_krokow=0, mPokonanych_wrogow=0,mMaxZdrowie;

        void UstalAtak();
        void PrzywrocAtak();
        void Chodzenie();
        void DodajDoEkwipunku(string nazwa, int ilosc);
        void DodajWaluty(int ile);

        void UsunZEkewipunku(string nazwa, int ilosc);
        int Pokaz_Pieniandz();
        void UstawImie(string imie);
        virtual ~Gracz();
        friend class cArena;
        friend class Boss;
        friend void menu_h(int dzialanie);
        friend ostream&operator<<(ostream& str, Gracz&gracz);



    protected:

    private:

    vector<string> mEkwipunek;

};


#endif // GRACZ_H
