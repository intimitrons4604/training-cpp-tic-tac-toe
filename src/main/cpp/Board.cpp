#include "Board.h"

#include <algorithm>

#include "Mark.h"
#include "Position.h"

Board::Board()
{
  for (auto& row : board)
  {
    row.fill(Mark::None);
  }
}

bool Board::hasMark(Position position) const
{
  return getMark(position) != Mark::None;
}

Mark Board::getMark(Position position) const
{
  return board[position.getRow()][position.getColumn()];
}

void Board::placeMark(Mark mark, Position position)
{
  board[position.getRow()][position.getColumn()] = mark;
}
