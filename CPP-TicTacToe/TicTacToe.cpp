#include "TicTacToe.h"

 TicTacToe::TicTacToe() 
 {
	 
	count = 0;
	for (int i = 0; i < 9; i++)
		m_board[i] = i+'1';
	currentPlayer = 'X';
}

void TicTacToe::Display() const
{
	std::cout << " " << m_board[0]<< " | " << m_board[1] <<" | "<< m_board[2]<< " \n" ;
	std::cout << "----------- \n"; 
	std::cout << " " << m_board[3] << " | " << m_board[4] << " | " << m_board[5] << " \n";
	std::cout << "----------- \n"; 
	std::cout << " " << m_board[6] << " | " << m_board[7] << " | " << m_board[8] << "\n";;

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
		
		
		
		
		count++;
		
		currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
	}
	else
	{
		std::cout << "Not a valid move.\n";
	}
}
bool  TicTacToe::IsGameOver() const
{
	return checkWin();
	
}

bool  TicTacToe::checkWin() const
{
	
	char i = currentPlayer =='X'? 'O' : 'X';

	if (m_board[0] == i && m_board[1] == i && m_board[2] == i||
		m_board[0] == i && m_board[3] == i && m_board[6] == i|| 
		m_board[0] == i && m_board[4] == i && m_board[8] == i||
		m_board[1] == i && m_board[4] == i && m_board[7] == i||
		m_board[2] == i && m_board[5] == i && m_board[8] == i||
		m_board[2] == i && m_board[4] == i && m_board[6] == i||
		m_board[3] == i && m_board[4] == i && m_board[5] == i||
		m_board[6] == i && m_board[7] == i && m_board[8] == i )
	{
		std::cout << i << " is the winner\n";
		

		return true;
		
	}
	if (count == 9)
	{
		std::cout << "There is no winner\n";
			return true;
	}
	
	

	return false;

}
