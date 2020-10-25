#pragma once

/**
 * Position on a Tic-Tac-Toe board.
 *
 * Row and column numbers are zero-based. Rows are numbered from top to bottom and
 * columns are nubered from left to right.
 */
class Position
{
public:
  Position(int row, int column);

  int getRow() const;
  int getColumn() const;

private:
  int row;
  int column;
};
