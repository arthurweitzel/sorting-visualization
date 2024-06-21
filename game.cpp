#include "game.hpp"
#include "global.hpp"
#include <raylib.h>

Game::Game() {
  SetConfigFlags(FLAG_MSAA_4X_HINT);
  InitWindow(WINDOW_W, WINDOW_H, TITLE);
  SetTargetFPS(FPS);
  SetExitKey(KEY_NULL);
}

Game::~Game() { CloseWindow(); }

void Game::run() {
  while (!WindowShouldClose()) {
    input();
    if (sorter.should_sort)
      sorter.sort_show();

    render();
  }
}

void Game::input() {
  if (IsKeyPressed(KEY_Q))
    CloseWindow();

  if (IsKeyPressed(KEY_S))
    sorter.should_sort = true;

  if (IsKeyPressed(KEY_R))
    sorter.change_algorithm(std::make_unique<AlgoShuffle>());

  if (IsKeyPressed(KEY_B))
    sorter.change_algorithm(std::make_unique<AlgoBubbleSort>());
}

void Game::render() { sorter.show(); }
