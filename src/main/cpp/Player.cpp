#include "Player.h"

Player::Player(std::string name, Mark mark) : name{name}, mark{mark}
{
  // Intentionally empty
}

const std::string& Player::getName() const
{
  return name;
}

Mark Player::getMark() const
{
  return mark;
}

bool operator==(const Player& lhs, const Player& rhs)
{
  return lhs.getMark() == rhs.getMark() && lhs.getName() == rhs.getName();
}
