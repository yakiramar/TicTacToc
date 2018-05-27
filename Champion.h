#pragma once
#include "Player.h"
#include "TicTacToe.h"
#include "Board.h"
#include <string>

class Champion: public Player{
    public:
    const string name()const override;
    const Coordinate play(const Board& board) override;
};
