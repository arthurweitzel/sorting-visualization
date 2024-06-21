#pragma once
#include "sort_algorithms.hpp"
#include <memory>
#include <vector>

class Algorithm;
class Sorter {
private:
  std::vector<int> array;
  std::unique_ptr<Algorithm> algo;

public:
  bool should_sort;
  void show();
  void sort_show();
  void change_algorithm(std::unique_ptr<Algorithm> algo);

  Sorter();
  ~Sorter() = default;
};
