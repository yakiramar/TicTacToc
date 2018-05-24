#include "Champion.h"
using namespace std;
#include<string>

const Coordinate Champion::play(const Board& board){
uint n=board.size();
for (uint x=0; x<n;x++) {
			Coordinate c{n-1-x,x};
			if (board[c]=='.') {
				return c;
			}
			else{Coordinate c{x,n-1-x};
			    if (board[c]=='.'){return c;}
			}
		
	}
	return {0,0};  // did not find an empty square - play on the top-left
               
} 
    
