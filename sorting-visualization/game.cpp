#include <raylib.h>
#include "game.hpp"
#include "global.hpp"

Game::Game() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_MSAA_4X_HINT);
    InitWindow(WINDOW_W, WINDOW_H, TITLE);
    SetTargetFPS(FPS);
}

Game::~Game() {
    CloseWindow();
}

void Game::run() {
    while (!WindowShouldClose()) {
        input();
        render();
    }
}

void Game::input() {
    if (IsKeyPressed(KEY_Q))
        WindowShouldClose();
}

void Game::render() {
    sorter.show();
}
