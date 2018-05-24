#pragma once
#include<iostream>
using namespace std;
#include "Board.h"



class Player{
    public:
    char myChar;
    void setChar(char t){myChar=t;}
    virtual const string name()const=0;
    virtual const Coordinate play(const Board& board)=0;
    // bool operator==(const Player& p)const;
    char getChar() const{return myChar;}
    
    
};
