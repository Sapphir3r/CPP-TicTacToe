#include "TicTacToe.h"

TicTacToe::TicTacToe() 
{
	showBoard();
	currentPlayer = 'X';
}
void TicTacToe::showBoard() 
{
	for (int i = 0; i < 9; i++) 
	{
		m_board[i] = '1' + i;
	}
}
void TicTacToe::Display() const 
{

}
void  TicTacToe::TakeTurn()
{

}
bool  TicTacToe::ISGameOver() const
{
	return checkWin() || fullboard();
}

bool  TicTacToe::checkWin() const
{

}
bool  TicTacToe::fullboard() const
{

}