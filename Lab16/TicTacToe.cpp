#include"TicTacToe.h"

#include<iostream> 
#include<string>



void TicTacToe::playGame(twoDGrid& ticTacToeGrid)
{


	std::cout << "Player X, enter your move: " << std::endl;
	std::cout << "Allowed moves are:" << std::endl;
	std::cout << "abc" << std::endl; 
	std::cout << "def" << std::endl;
	std::cout << "hgi" << std::endl;


	std::string playerXMove;

	std::getline(std::cin, playerXMove);

	updateGrid(ticTacToeGrid, playerXMove, "X");

	printTheGrid(ticTacToeGrid);




	std::cout << std::endl << std::endl; 
	std::cout << "Now player O" << std::endl;
	std::string playerOMove;

	std::getline(std::cin, playerOMove);

	updateGrid(ticTacToeGrid, playerOMove, "O");

	printTheGrid(ticTacToeGrid);


} 

void TicTacToe::updateGrid(twoDGrid& ticTacToeGrid, std::string theMove, std::string playerID)
{

	if (theMove == "a")
	{
		ticTacToeGrid[0][0] = playerID;
	}

	else if (theMove == "b")
	{
		ticTacToeGrid[0][1] = playerID;
	}

}

void TicTacToe::printTheGrid(twoDGrid& ticTacGrid)
{
	for (int row = 0; row < ticTacGrid.size(); ++row)
	{
		for (int col = 0; col < ticTacGrid[0].size(); ++col)
		{
			std::cout << ticTacGrid[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

