#pragma once
#include <vector>

class Algorithm {
    public:
    virtual void sort(std::vector<int>&) = 0;
    virtual ~Algorithm() = default;
};

class AlgoShuffle : public Algorithm {
    public:
    void sort(std::vector<int>&);
    AlgoShuffle() = default;
};
