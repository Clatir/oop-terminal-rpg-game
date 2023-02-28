#ifndef PRZEDMIOT_H
#define PRZEDMIOT_H
#include<string>

class Przedmiot
{
    public:




        virtual ~Przedmiot();
        Przedmiot(std::string n = "Nienazwany Przedmiot", int c=0);
        std::string mNazwa;
        int mWartosc;
        friend Przedmiot operator+(Przedmiot& p1, Przedmiot & p2);
        Przedmiot& operator=(const Przedmiot& p1);




    protected:

    private:

};

#endif // PRZEDMIOT_H
