#pragma once

#include <string>

class Board;
enum class Mark;
class Player;
class Position;

class Console
{
public:
  Console() = delete;
  Console(const Console&) = delete;
  Console& operator=(const Console&) = delete;
  Console(Console&&) = delete;
  Console& operator=(Console&&) = delete;

  /**
   * Ask a player for their name
   *
   * @param mark The mark the player will play as. Should be either Mark::X or Mark::O.
   * @return The name the player entered. Shall not be empty. May contain whitespace.
   */
  static std::string getPlayerName(Mark mark);

  /**
   * Ask a player where to place their mark
   *
   * @param player The player
   * @return The position the player entered. The returned position shall be valid for a 3 x 3 board.
   */
  static Position getMove(const Player& player);

  /**
   * Print an empty line
   */
  static void printLine();

  /**
   * Print a line with a specified message
   *
   * @param message The message to print
   */
  static void printLine(const std::string& message);

  /**
   * Print a Tic-Tac-Toe board
   *
   * @param board The board to print
   */
  static void printBoard(const Board& board);

private:
  static const char kBlank{' '};
  static const char kVerticalLine{'|'};

  static char charForMark(Mark mark);

  static void printBoardRow(const Board& board, int row);
  static void printBoardRowSeparator();
};
