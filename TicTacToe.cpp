
#include "TicTacToe.h"

TicTacToe::TicTacToe(uint length):game_board{length}{ }

//_____________________________________________


const Player& TicTacToe::winner()const
{ return *win;
	
}

//_____________________________________________



const void TicTacToe::play(Player& xPlayer, Player& oPlayer)
{  game_board='.';
   bool flag=true;
   xPlayer.setChar('X');
   oPlayer.setChar('O');
	  while (!check_win(game_board,xPlayer,oPlayer))
	  {   
	  	if(flag)
	  	{
	    try 
	  		{  Coordinate c=xPlayer.play(game_board); 
	  	 if(game_board[c].c=='.')	{game_board[{c}]=xPlayer.getChar();}
	  	 
	  	          else
	  	          {
	  	        	win=&oPlayer;
	  	 	        break; 
	  	 	
	  	           }
	  		 }
	  	 
	  	 
	  	       catch(const string& ex)
	  	       {
	  	     	win=&oPlayer;
	  	    	break;
	  	       }
	  	  flag=false;
	  	 }
	  	else{
	  		  try
	  		  {
	  		   	Coordinate c=oPlayer.play(game_board);
	  		  	  if(game_board[c].c=='.') {game_board[{c}]=oPlayer.getChar();}
	  		  	else
	  		  	   {
	  		  		win=&xPlayer;
	  		  		break;
	  		     	}
	  		  	
	  		   }
	  		    	catch(const string& ex)
	  		    	{
                    win = &xPlayer;
                    break;
                    }
               flag = true;
	  		  }
	  		
	  	
	  	
	  	
	  	
      }
	

}
//____________________________________________________


Board TicTacToe::board() const
{
	return game_board;
	
}


// // Fullgame_board

//________________check wining__________________
bool TicTacToe::check_win(Board& t_board, Player& xPlayer,Player& oPlayer){
	uint n=t_board.length;
	uint count_o=0,count_x=0;
	while(1){
		for(int i=0;i<n;i++)
		{count_o=0;
		 count_x=0;
			for(int j=0;j<n;j++)
			{if(t_board[{i,j}].c=='X')
			        {
				     count_x++;
				     if(count_x==n){win=&xPlayer; return true; }
			        }
			  if(t_board[{i,j}].c=='O')
			        {
			     	count_o++;
			    	if(count_o==n){win=&oPlayer;return true; }
			        }
				
				
			}
		}
		for(int i=0;i<n;i++)
		{count_o=0;
		 count_x=0;
			for(int j=0;j<n;j++)
			{if(t_board[{j,i}].c=='X')
			        {
				     count_x++;
				     if(count_x==n){win=&xPlayer; return true;}
			        }
			  if(t_board[{j,i}].c=='O')
			        {
			     	count_o++;
			    	if(count_o==n){win=&oPlayer; return true;}
			        }
				
				
			}
		}
		 count_o=0;
		 count_x=0;
		for(int i=0;i<n;i++)
		{  if(t_board[{(int)(n-1-i),i}].c=='X')
		    {
		    	count_x++;
		    	if(count_x==n){win=&xPlayer; return true;}
		    }
		    if(t_board[{(int)(n-1-i),i}].c=='O')
		    {
		    	count_o++;
		    	if(count_o==n){win=&oPlayer; return true;}
		    }
			
		}
		 count_o=0;
		 count_x=0;
		for(int i=n-1;i>=0;i--)
		{  if(t_board[{i,i}].c=='X')
		    {
		    	count_x++;
		    	if(count_x==n){win=&xPlayer; return true;}
		    }
		    if(t_board[{i,i}].c=='O')
		    {
		    	count_o++;
		    	if(count_o==n){win=&oPlayer; return true;}
		    }
			
		}
		return false;
	 }
	return false;
	
}



// try {if(game_board[{xPlayer.play(game_board)}].c=='O')
// 	          {  
// 	         win=&oPlayer; 
// 	         flag=false;
// 	          }
// 	        }
// 	       catch(const string& ex)
// 	            { game_board='.';
// 	              win=&oPlayer;
// 	              flag=false;
// 	             }
	       
	       
	       
	       
		
// 		if(flag)
// 		{
// 		   if(check_win(game_board)){return;}
// 		  try {game_board[{xPlayer.play(game_board)}]='X';}
		      
// 		      catch(const string& ex)
// 	            { game_board='.';
// 	              game_board[{xPlayer.play(game_board)}]='X';
// 	              win=&oPlayer;
// 	              flag=false;
// 	             }
		      
		      
// 	       if(check_win(game_board)){win=&xPlayer; return;}
	    
// 		}
// 	    try {if(game_board[{oPlayer.play(game_board)}].c=='X')
// 	     { 
// 	       win=&xPlayer; 
// 	       flag=false;
// 	     }
// 	        }
// 	     catch(const string& ex)
// 	            { game_board='.';
// 	              game_board[{xPlayer.play(game_board)}]='X';
// 	              win=&xPlayer;
// 	              flag=false;
// 	             }
	     
	     
	     
	    
// 	    if(flag)
// 	     {
// 	    try {game_board[{oPlayer.play(game_board)}]='O';}
	    
// 	        catch(const string& ex)
// 	            { game_board='.';
// 	              game_board[{xPlayer.play(game_board)}]='X';
// 	              win=&xPlayer;
// 	              flag=false;
// 	             }
	    
	    
// 	     if(check_win(game_board)){win=&oPlayer;}
// 	     }
	    