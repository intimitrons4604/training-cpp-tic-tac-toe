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

private:
  std::array<std::array<Mark, 3>, 3> board;
};
