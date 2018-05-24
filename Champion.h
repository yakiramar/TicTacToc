#include "Player.h"
#include "TicTacToe.h"
#include "Board.h"
#include <string>

class Champion: public Player{
    public:
    const string name()const override{return "Yakir,Naor,Dolev";}
    const Coordinate play(const Board& board) override;
};