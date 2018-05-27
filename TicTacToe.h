
#pragma once
#include"Player.h"


class TicTacToe
{
	private:
	  	Board game_board;
	    Player *win;
        bool check_win(Board& t_board,Player& xPlayer,Player& oPlayer);
    public:	
    int board_length;
	TicTacToe(int length);
	const void play(Player& xPlayer,Player& oPlayer);
	Board board()const;
	const Player& winner()const;
	// bool FullBoard(Board& ptr);
	
};
