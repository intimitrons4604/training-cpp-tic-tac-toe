#pragma once

#include <array>
#include <string>

#include "Board.h"

std::string getPlayerName(Mark mark);
Position getMove(std::string playerName, Mark mark);

void printLine();
void printLine(std::string message);

void printBoard(std::array<std::array<Mark, 3>, 3> board);
