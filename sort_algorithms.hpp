#pragma once
#include "sorter.hpp"
#include <vector>

class Sorter;

class Algorithm {
public:
  virtual void sort(std::vector<int> &, Sorter &) = 0;
  virtual ~Algorithm() = default;
};

class AlgoShuffle : public Algorithm {
public:
  void sort(std::vector<int> &, Sorter &) override;
  AlgoShuffle() = default;
};

class AlgoBubbleSort : public Algorithm {
public:
  void sort(std::vector<int> &, Sorter &) override;
  AlgoBubbleSort() = default;
};