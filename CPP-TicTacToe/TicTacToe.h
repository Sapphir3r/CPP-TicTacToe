#include "Game.h"
#include<iostream>
class TicTacToe : public Game
{
public:
	TicTacToe();
	 bool ISGameOver() const ;



	 virtual void TakeTurn();

	
	 virtual void Display()const;

private:
	char m_board[9];
	char currentPlayer;
	void showBoard();
	bool checkWin()const;
	bool fullboard()const;


};