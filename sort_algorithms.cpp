#include "sort_algorithms.hpp"
#include "global.hpp"
#include <random>
#include <raylib.h>

void AlgoShuffle::sort(std::vector<int> &array, Sorter &sorter) {
  // Randomizar o array
  for (size_t i = array.size() - 1; i > 0; i--) {
    size_t j = rand() % (i + 1);
    std::swap(array.at(i), array.at(j));
    sorter.show();
  }
}

void AlgoBubbleSort::sort(std::vector<int> &array, Sorter &sorter) {
  SetTargetFPS(FPS * 4);
  bool swapped = true;

  while (swapped) {
    swapped = false;
    for (size_t i = 1; i < array.size(); i++)
      if (array.at(i - 1) > array.at(i)) {
        std::swap(array.at(i - 1), array.at(i));
        swapped = true;
        sorter.show();
      }
  }

  SetTargetFPS(FPS);
}
