#include "Player.h"
#pragma once



class Champion: public Player{
    public:
    const string name()const override{return "yakir,naor,dolev";}
    const Coordinate play(const Board& board) override;
};
