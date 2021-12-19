//
// Created by camelia on 2021-12-19.
//

#include <iostream>
#include <vector>
#include "Day01.h"


AOC_2021::Day01::Day01() = default;

void AOC_2021::Day01::run() {
    std::cout << "Running day 1";
}

void AOC_2021::Day01::test() {

    std::vector<std::string> input = {
            "199"
            "200"
            "208"
            "210"
            "200"
            "207"
            "240"
            "269"
            "260"
            "263"
    };

    int i = countIncrease(input);

    std::cout << "Testing day 1";
}

int AOC_2021::Day01::countIncrease(std::vector<std::string>& input) {
    int increase = 0;
    int previous = 0;



    return increase;
}
