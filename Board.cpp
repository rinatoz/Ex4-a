#include "Board.hpp"
#include <iostream>
using namespace std;

namespace WarGame {

    Soldier*& Board::operator[](pair<int,int> location) {
    	return board[location.first][location.second];
    }
    
    Soldier* Board::operator[](pair<int,int> location) const {
    	return board[location.first][location.second];
    }
    
    void Board::move(uint player_number, pair<int,int> source, MoveDIR direction) 
	{
		Soldier* s = (*this)[source];
		
		if(s==nullptr || s->get_player_number() != player_number)
			throw invalid_argument("invalid_argument");
		pair<int, int> target;
		switch (direction)
		{
		case Left:
			target= make_pair(source.first, source.second-1);
			break;
		case Right:
			target= make_pair(source.first,1+source.second);
			break;
		case Up:
			target= make_pair(1+source.first, source.second);
			break;
		case Down:
			target= make_pair(source.first-1, source.second);
			break;
		}
		if(target.first >= board.size() || target.first < 0 || target.second >= board.size() || target.second < 0) 
			throw invalid_argument("got out from the board");	(*this)[source] = nullptr;
		(*this)[target] = s;
		std::cout<< "my act is (" << target.first << "," << target.second << ")" << endl;
		s->attack(board, target);
    }

    bool Board::has_soldiers(uint player_number) const 
	{
		int size=board.size();
		for(int i= 0; i<size; ++i){
			for(int j=0; j< board[i].size(); ++j) {
				Soldier* s = (*this)[{i, j}];
				if (s != nullptr && s->get_player_number() == player_number)
					return true;
			}
		}
		return false;
    }


}