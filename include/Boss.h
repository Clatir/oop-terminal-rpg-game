#ifndef BOSS_H
#define BOSS_H
#include<Gracz.h>
#include"../Konfiguracja.h"


class Boss
{
    public:
        Boss(int aZdrowie = NowyGracz->mLiczba_krokow , int aAtak = NowyGracz->mPokonanych_wrogow+1 ,int aPrendkosc =poziom_trudnosci , Gracz* = NowyGracz);
        void Pokaz();
        virtual ~Boss();
        Gracz *PostacGracza;
        friend class cArena;


    protected:

    private:
        string mNazwa;
        int mZdrowie;
        int mAtak;
        int mPredkosc;


};

#endif // BOSS_H
