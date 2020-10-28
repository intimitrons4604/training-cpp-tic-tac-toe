#pragma once

#include <array>

enum class Mark;
class Position;

class Board
{
public:
  Board();

  /**
   * Check if a mark has been placed on the board
   *
   * @param position The position to check
   * @return True if the mark at position is Mark::X or Mark::O, false otherwise.
   */
  bool hasMark(Position position) const;

  /**
   * Get the mark on the board
   *
   * @param position The position to get the mark from
   * @return The mark on the board
   */
  Mark getMark(Position position) const;

  /**
   * Place a mark on the board
   *
   * @param mark The mark to place
   * @param position The position to place the mark at
   */
  void placeMark(Mark mark, Position position);

  /**
   * Check if the board is full
   *
   * @return True if all cells on the board do not contain Mark::None, false otherwise
   */
  bool isFull() const;

  /**
   * Check for a winner
   *
   * @return Mark::X if X has won, Mark::O if O has won, or Mark::None if there is no winner
   */
  Mark getWinner() const;

private:
  std::array<std::array<Mark, 3>, 3> board;

  bool hasWon(Mark mark) const;

  bool hasWonRow(Mark mark) const;
  bool hasWonColumn(Mark mark) const;
  bool hasWonPositiveSlopeDiagonal(Mark mark) const;
  bool hasWonNegitaveSlopeDiagonal(Mark mark) const;
};
