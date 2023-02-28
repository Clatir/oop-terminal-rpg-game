#include "Przedmiot.h"

Przedmiot::Przedmiot(std::string aNazwa, int aWartosc)
{

    mNazwa=aNazwa;
    mWartosc =aWartosc;
}


Przedmiot operator+(Przedmiot& p1, Przedmiot & p2)
        {

       Przedmiot Uleprzony;
       Uleprzony.mNazwa = "Zloty token";
       Uleprzony.mWartosc = p1.mWartosc + p2.mWartosc;


        return Uleprzony;
        }
Przedmiot&Przedmiot:: operator=(const Przedmiot& p1)
{
mNazwa = p1.mNazwa;
mWartosc = p1.mWartosc;
return *this;

}



Przedmiot::~Przedmiot()
{
    //dtor
}
