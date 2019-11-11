#pragma once

#include <array>
#include <string>

#include "Board.h"

/**
 * Ask the player for their name
 *
 * @param mark The mark the player will play as. Should be either \link Mark::X \endlink or \link Mark::O \endlink.
 * @return The name the player entered. Shall not be empty. May contain whitespace.
 */
std::string getPlayerName(Mark mark);

/**
 * Ask the player where to place their mark
 *
 * @param playerName The name of the player
 * @param mark The mark the player will place. Should be either \link Mark::X \endlink or \link Mark::O \endlink.
 * @return The position the player entered. The returned position shall satisfy 1 <= \link Position#row \endlink <= 3
 * and 1 <= \link Position#column \endlink <= 3.
 */
Position getMove(std::string playerName, Mark mark);

/**
 * Print an empty line
 */
void printLine();

/**
 * Print a line with the specified message
 *
 * @param message The message to print
 */
void printLine(std::string message);

/**
 * Print the Tic-Tac-Toe board
 *
 * @param board The board to print
 */
void printBoard(std::array<std::array<Mark, 3>, 3> board);
