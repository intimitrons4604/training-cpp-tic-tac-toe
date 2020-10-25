#include "Position.h"

Position::Position(int row, int column) : row{row}, column{column}
{
  // Intentionally empty
}

int Position::getRow() const
{
  return row;
}

int Position::getColumn() const
{
  return column;
}
