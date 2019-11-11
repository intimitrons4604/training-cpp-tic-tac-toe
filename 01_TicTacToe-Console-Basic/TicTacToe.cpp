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

	// TODO Start of student code

	// TODO End of student code
}
