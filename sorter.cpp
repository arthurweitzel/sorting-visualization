#include "sorter.hpp"
#include "global.hpp"
#include <raylib.h>

Sorter::Sorter()
    : array(ARRAY_SIZE), algo(std::make_unique<AlgoShuffle>()),
      should_sort(false) {
  for (size_t i = 0; i < ARRAY_SIZE; i++)
    array.at(i) = i + 1;
}

void Sorter::sort_show() {
  algo->sort(array, *this);
  should_sort = false;
}

void Sorter::change_algorithm(std::unique_ptr<Algorithm> algo) {
  this->algo = std::move(algo);
}

void Sorter::show() {
  float w = static_cast<float>(WINDOW_W) / ARRAY_SIZE; // Largura das colunas
  float h = static_cast<float>(WINDOW_H) / ARRAY_SIZE; // Altura das colunas

  BeginDrawing();
  ClearBackground(BLACK);

  for (size_t i = 0; i < array.size(); i++) {
    float size = array.at(i);
    float height = size * h;
    DrawRectangleV({i * w, WINDOW_H - height}, {w, height}, WHITE);
  }

  EndDrawing();
}
