//
// Created by camelia on 2021-12-19.
//

#ifndef AOC2021_DAY01_H
#define AOC2021_DAY01_H

#include "../aocDay.cpp"

namespace AOC_2021{
    class Day01 : public AocDay{
    public:
        Day01();
        void run() override;
        void test() override;

    private:
        int countIncrease(std::vector<std::string>& input);
    };
}




#endif //AOC2021_DAY01_H
