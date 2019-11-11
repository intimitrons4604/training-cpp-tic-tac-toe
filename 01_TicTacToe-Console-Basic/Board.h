#pragma once

/**
 * A mark on a Tic-Tac-Toe board
 */
enum class Mark {
	/**
	 * An empty cell (i.e. no mark)
	 */
	None,
	X,
	O
};

/**
 * Position on a Tic-Tac-Toe board
 */
struct Position {
	int row;
	int column;
};

/*
 * TODO: Declare a funtion named "isFull" which returns true/false and requires the tic-tac-toe board as an argument.
 *
 * This function shall return true if the board is full and false otherwise.
 */

/*
 * TODO: Declare a funtion named "hasWon" which returns true/false and requires the tic-tac-toe board and a Mark as arguments.
 *
 * This function shall return true if the mark has won the game and false otherwise.
*/
