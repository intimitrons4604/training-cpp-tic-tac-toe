#include "Board.h"
#include "TextUI.h"

int main()
{
	std::array<std::array<Mark, 3>, 3> board;
	for (int row = 0; row < board.size(); row++)
	{
		for (int column = 0; column < board[row].size(); column++)
		{
			board[row][column] = Mark::None;
		}
	}

	// TODO Ask each player for their name

	// TODO As long as the board isn't full (i.e. a tie) and neither player has won
	// - Display the board
	// - Ask the player for their move
	// - Add the player's mark to the board
	// - Switch turns to the next player (Note: X always goes first)

	// TODO Print out a message with which player won and their name, or print out a message that the game is a tie if the board is full
}
