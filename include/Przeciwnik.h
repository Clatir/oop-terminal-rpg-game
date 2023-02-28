#ifndef PRZECIWNIK_H
#define PRZECIWNIK_H
#include "Postac.h"

class Przeciwnik:public Postac
{
    public:

        Przeciwnik(string aNazwa  ="Nienazwany przeciwnik", int aPozycjaX  = 0, int aPozycjaY  =0, int aZdrowie  =5, int aAtak =3, int aPrendkosc = 1);//,int pn  =0);//,double dsw =1);
        void UstalAtak();
        virtual ~Przeciwnik();
        friend class cArena;


    protected:

    private:
        //double doswiadczenie;
       // int poziom_trudnosci;
};

#endif // PRZECIWNIK_H
