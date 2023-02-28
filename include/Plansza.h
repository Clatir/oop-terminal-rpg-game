#pragma once
#ifndef PLANSZA_H
#define PLANSZA_H
#include <bits/stdc++.h>
using namespace std;


class Plansza
{
    public:
        Plansza();
       // int rozmiar;
        virtual ~Plansza();
//        int rozmiar;
        //string znak;
        vector<vector<string>> mMapa;
        void Ustaw_plansze(int rozmiar=10);
        void UstawPlanszeWrogow(int rozmiar=10);
        void Pokaz_plansze();


    protected:

    private:

};

#endif // PLANSZA_H
