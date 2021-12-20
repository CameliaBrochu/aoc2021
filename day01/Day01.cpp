//
// Created by camelia on 2021-12-19.
//

#include <iostream>
#include <vector>
#include <map>
#include "Day01.h"
#include "../utils/utils.h"


AOC_2021::Day01::Day01() = default;

void AOC_2021::Day01::run() {
    std::vector<std::string> input = utils::parseFile("day01/input.txt");
    int i = countIncrease(input);
    std::cout << "Result : " << i << std::endl;

    int j = countIncreaseSlide(input);

    std::cout << "Result : " << j << std::endl;
}

void AOC_2021::Day01::test() {

    std::vector<std::string> input = {
            "199",
            "200",
            "208",
            "210",
            "200",
            "207",
            "240",
            "269",
            "260",
            "263"
    };

    int i = countIncrease(input);

    std::cout << "Result : " << i << std::endl;

    std::cout << "------------------------" << std::endl;

    int j = countIncreaseSlide(input);

    std::cout << "Result : " << j << std::endl;
}

int AOC_2021::Day01::countIncreaseSlide(const std::vector<std::string> &input) const {
    int increase = 0;

    int count = 0;
    int current = 0;
    int previous = 0;
    for (int i = 0; i < input.size(); ++i) {
        current += utils::str2int(input[i]);

        ++count;
        if(count == 3){
            if(previous != 0){
                if(current > previous){
                    ++increase;
                }

            }
            previous = current;
            current = 0;
            count = 0;
            i -= 2;
        }
    }

    return increase;
}

int AOC_2021::Day01::countIncrease(const std::vector<std::string>& input) const {
    int increase = 0;
    int previous = 0;

    for (const auto& line:input) {
        int current = utils::str2int(line);
        if(previous != 0){
            if(current > previous){
                ++increase;
            }

        }
        previous = current;
    }

    return increase;
}
