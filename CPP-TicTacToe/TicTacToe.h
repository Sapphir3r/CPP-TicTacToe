#include "Game.h"
#include<iostream>
class TicTacToe :  Game
{
public:
	TicTacToe();
	 bool ISGameOver() ;



	 virtual void TakeTurn();

	
	  void Display() const ;

private:
	char m_board[9];
	char currentPlayer;
	void StartBoard();
	bool checkWin();
	int count;
	


};