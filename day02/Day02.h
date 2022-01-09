//
// Created by camelia on 2021-12-19.
//

#ifndef AOC2021_DAY02_H
#define AOC2021_DAY02_H

#include <vector>
#include <string>
#include "../aocDay.cpp"

namespace AOC_2021{
    class Day02 : public AocDay{
    public:
        Day02();
        void run() override;
        void test() override;

    private:
        void calculMovement(int& position, int&depth, const std::vector<std::string>& input);
        void calculCorrectMovement(int& position, int&depth, const std::vector<std::string>& input);
    };
}




#endif //AOC2021_DAY02_H
