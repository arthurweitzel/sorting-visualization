#pragma once
#include "sorter.hpp"

class Game {
private:
  Sorter sorter;

public:
  void run();
  void input();
  void render();

  Game();
  ~Game();
};
