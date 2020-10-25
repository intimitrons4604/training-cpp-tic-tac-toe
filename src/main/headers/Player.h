#pragma once

#include <string>

enum class Mark;

/**
 * A player in a Tic-Tac-Toe game
 */
class Player
{
public:
  /**
   * Construct a Player
   *
   * @param name The player's name
   * @param mark The mark the player will play as. Should be either Mark::X or Mark::O.
   */
  Player(std::string name, Mark mark);

  const std::string& getName() const;
  Mark getMark() const;

private:
  std::string name;
  Mark mark;
};

bool operator==(const Player& lhs, const Player& rhs);
