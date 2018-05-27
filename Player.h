#pragma once
#include "Board.h"
#include <string>


class Player{
    public:
    virtual const string name() const=0;
    virtual const Coordinate play(const Board& board)=0;
    char myChar;
    void setChar(char t){myChar=t;}
    // bool operator==(const Player& p)const;
    char getChar() const{return myChar;}
    
    
};
