#include "Game.h"
#include<iostream>
class TicTacToe : public Game
{
public:
	TicTacToe();
	 bool IsGameOver() const override  ;



	  void TakeTurn();

	
	  void Display() const ;

private:
	char m_board[9];
	char currentPlayer;
	bool checkWin();
	int count;
	


};