#include "TicTacToe.h"

 TicTacToe::TicTacToe() 
 {
	 
	count = 0;

	currentPlayer = 'X';
}

void TicTacToe::Display() const
{
	std::cout << " " << m_board[0]<< " |" << m_board[1] <<"|"<< m_board[2]<< " \n" ;
	std::cout << "- - - \n"; 
	std::cout << " " << m_board[3] << " |" << m_board[4] << "|" << m_board[5] << " \n";
	std::cout << "- - -\n";
	std::cout << " " << m_board[6] << " |" << m_board[7] << "|" << m_board[8] << "\n";;

}
void  TicTacToe::TakeTurn()
{
	int decision;
	std::cout << "Player " << currentPlayer << " , take your turn:";
	std::cin >> decision;
	decision = decision - 1;
	if (m_board[decision] !='X' && m_board[decision] !='O')
	{
		m_board[decision] = currentPlayer;
		
		
		
		
		checkWin();
	}
	else
	{
		std::cout << "Not a valid move.\n";
	}
}
bool  TicTacToe::IsGameOver() const
{
	return false;
	
}

bool  TicTacToe::checkWin() 
{
	
	char i = currentPlayer;
	if (m_board[0] == i && m_board[1] == i && m_board[2] == i||
		m_board[0] == i && m_board[3] == i && m_board[6] == i|| 
		m_board[0] == i && m_board[4] == i && m_board[8] == i||
		m_board[1] == i && m_board[4] == i && m_board[7] == i||
		m_board[2] == i && m_board[5] == i && m_board[8] == i||
		m_board[2] == i && m_board[4] == i && m_board[6] == i||
		m_board[3] == i && m_board[4] == i && m_board[5] == i||
		m_board[6] == i && m_board[7] == i && m_board[8] == i )
	{
		std::cout << currentPlayer << " is the winner";
		
		return true;
	}
	if (count == 9)
	{
		std::cout << " there is no winner";
			return true;
	}
	currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
	Display();
	TakeTurn();

	return false;

}
