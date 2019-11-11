#include "TextUI.h"

#include <iostream>
#include <string>

constexpr char kBlank = ' ';
constexpr char kVerticalLine = '|';

static char charForMark(Mark mark);

static void printRow(std::array<Mark, 3> row);
static void printRowSeparator();

std::string getPlayerName(Mark mark)
{
    std::cout << charForMark(mark) << " player, enter your name: ";

    std::string name;
    do
    {
        std::getline(std::cin, name);
    } while (name.empty());

    return name;
}

void printLine()
{
    std::cout << '\n';
}

void printLine(std::string message)
{
    std::cout << message << '\n';
}

void printBoard(std::array<std::array<Mark, 3>, 3> board)
{
    for (int row = 0; row < board.size() - 1; row++)
    {
        printRow(board[row]);
        printRowSeparator();
    }
    printRow(board[board.size() - 1]);
}

Position getMove(std::string playerName, Mark mark)
{
    char markChar = charForMark(mark);

    int row = -1;
    do
    {
        std::cout << playerName << ", enter the row to place your " << markChar << " (1 - 3): ";
        std::cin >> row;
    } while (row < 1 || row > 3);

    int column = -1;
    do
    {
        std::cout << playerName << ", enter the column to place your " << markChar << " (1 - 3): ";
        std::cin >> column;
    } while (column < 1 || column > 3);

    return Position{ row, column };
}

static void printRow(std::array<Mark, 3> row)
{
    for (int column = 0; column < row.size() - 1; column++)
    {
        std::cout << kBlank << charForMark(row[column]) << kBlank << kVerticalLine;
    }
    std::cout << kBlank << charForMark(row[row.size() - 1]) << '\n';
}

static void printRowSeparator()
{
    std::cout << "------------\n";
}

static char charForMark(Mark mark)
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
