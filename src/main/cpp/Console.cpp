#include "Console.h"

#include <iostream>
#include <string>

#include "Board.h"
#include "Mark.h"
#include "Player.h"
#include "Position.h"

std::string Console::getPlayerName(Mark mark)
{
  std::cout << charForMark(mark) << " player, enter your name: ";

  std::string name;
  do
  {
    std::getline(std::cin, name);
  } while (name.empty());

  return name;
}

Position Console::getMove(const Player& player)
{
  auto markChar = charForMark(player.getMark());

  int row = -1;
  do
  {
    std::cout << player.getName() << ", enter the row to place your " << markChar << " (1 - 3): ";
    std::cin >> row;
  } while (row < 1 || row > 3);

  int column = -1;
  do
  {
    std::cout << player.getName() << ", enter the column to place your " << markChar << " (1 - 3): ";
    std::cin >> column;
  } while (column < 1 || column > 3);

  return Position{row - 1, column - 1};
}

void Console::printLine()
{
  std::cout << '\n';
}

void Console::printLine(const std::string& message)
{
  std::cout << message << '\n';
}

void Console::printBoard(const Board& board)
{
  int row = 0;
  while (row < 2)
  {
    printBoardRow(board, row);
    printBoardRowSeparator();

    row++;
  }

  printBoardRow(board, row);
}

void Console::printBoardRow(const Board& board, int row)
{
  int column = 0;
  while (column < 2)
  {
    std::cout << kBlank << charForMark(board.getMark({row, column})) << kBlank << kVerticalLine;
    column++;
  }
  std::cout << kBlank << charForMark(board.getMark({row, column})) << '\n';
}

void Console::printBoardRowSeparator()
{
  std::cout << "------------\n";
}

char Console::charForMark(Mark mark)
{
  switch (mark)
  {
    case Mark::None:
      return ' ';
    case Mark::X:
      return 'X';
    case Mark::O:
      return 'O';
    default:
      return '!';
  }
}
