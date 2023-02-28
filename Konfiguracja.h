#ifndef Konfiguracja_H
#define Konfiguracja_H
#include "Gracz.h"
#include "Arena.h"
#include "Plansza.h"
#include "Przedmiot.h"
//inline Gracz gracz;
inline Gracz *NowyGracz;
inline Plansza PW1;
inline cArena a1;
inline Plansza p1;
inline Plansza p_wrogow;
inline Przedmiot item[3];


inline int poziom_trudnosci=1;
inline bool flaga_ataku=0;
inline bool flaga_handlu =0;

void opcje_gl(int pos);
void menu_glowne(int dzialanie,Plansza &p1);
void obsluga_menu_gl();
void opcje_pt(int pos);
void menu_pt(int dzialanie);
void obsluga_menu_pt();
void obsluga_menu_rm();
void obsluga_menu_h();

void opcje_gl(int pos);
void menu_glowne(int dzialanie, Plansza &p1);
void obsluga_menu_gl();




#endif // Konfiguracja_H
