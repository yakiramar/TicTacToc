// #pragma once
#pragma once
#include<iostream>
#include"Board.h"
#include"Player.h"
#include "DummyPlayers.h"
class TicTacToe
{
	private:
	  	Board game_board;
	    Player* win;
        bool check_win(Board& t_board,Player& xPlayer,Player& oPlayer);
    public:	
	TicTacToe(uint length);
	const void play(Player& xPlayer,Player& oPlayer);
	Board board()const;
	const Player& winner()const;
	// bool FullBoard(Board& ptr);
	
};
