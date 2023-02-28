#pragma once
#ifndef ARENA_H
#define ARENA_H
#include "Postac.h"
#include "Przeciwnik.h"
#include "Gracz.h"


class cArena
{
    public:
        Arena();
        virtual ~cArena();
        void Walcz(bool boss =0);




    protected:

    private:
};

#endif // ARENA_H
