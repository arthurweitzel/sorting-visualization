#include "sorter.hpp"
#include "global.hpp"
#include <raylib.h>

Sorter::Sorter() : array(ARRAY_SIZE), algo(std::make_unique<AlgoShuffle>()) {
    for (size_t i = 0; i < ARRAY_SIZE - 1; i++)
        array.at(i) = i + 1;
}

void Sorter::show(){
    algo->sort(array); // Chamar o algoritmo atual
    this->draw();
}

void Sorter::draw(){
    float w = (float)WINDOW_W / (float)ARRAY_SIZE; // Largura das colunas
    float h = (float)WINDOW_H / (float)ARRAY_SIZE; // Altura das colunas

    BeginDrawing();
    ClearBackground(BLACK);

    for (auto& i : array)
        DrawRectangleV({i * w, WINDOW_H}, {w, h}, WHITE); //(i * w, WINDOW_H, w, h, WHITE);

    EndDrawing();

}
