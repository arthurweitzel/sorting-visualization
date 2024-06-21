#include "game.hpp"
#include <random>
#include <raylib.h>

int main() {
  srand(time(NULL));
  Game game;
  game.run();
  return 0;
}
