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

bool Board::isFull() const
{
  // clang-format off
  return std::all_of(board.cbegin(), board.cend(), [](auto& row) {
    return std::all_of(row.cbegin(), row.cend(), [](auto mark) {
      return mark != Mark::None;
    });
  });
  // clang-format on
}

Mark Board::getWinner() const
{
  if (hasWon(Mark::X))
  {
    return Mark::X;
  }

  if (hasWon(Mark::O))
  {
    return Mark::O;
  }

  return Mark::None;
}

bool Board::hasWon(Mark mark) const
{
  return hasWonRow(mark) || hasWonColumn(mark) || hasWonPositiveSlopeDiagonal(mark)
    || hasWonNegitaveSlopeDiagonal(mark);
}

bool Board::hasWonRow(Mark mark) const
{
  // clang-format off
  return std::any_of(board.cbegin(), board.cend(), [=](auto& row) {
      return std::all_of(row.cbegin(), row.cend(), [=](auto boardMark) {
        return boardMark == mark;
      });
  });
  // clang-format on
}

bool Board::hasWonColumn(Mark mark) const
{
  for (int column = 0; column < 3; column++)
  {
    if (board[0][column] == mark && board[1][column] == mark && board[2][column] == mark)
    {
      return true;
    }
  }

  return false;
}

bool Board::hasWonPositiveSlopeDiagonal(Mark mark) const
{
  return board[2][0] == mark && board[1][1] == mark && board[0][2] == mark;
}

bool Board::hasWonNegitaveSlopeDiagonal(Mark mark) const
{
  return board[0][0] == mark && board[1][1] == mark && board[2][2] == mark;
}
