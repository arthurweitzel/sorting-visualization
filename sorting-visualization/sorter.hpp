#pragma once
#include "sort_algorithms.hpp"
#include <memory>

class Sorter {
    private:
    std::vector<int> array;
    std::unique_ptr<Algorithm> algo;

    void draw();

    public:
    void show();

    Sorter();
    ~Sorter() = default;
};
