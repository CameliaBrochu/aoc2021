//
// Created by camelia on 2021-12-19.
//

#ifndef AOC2021_DAY01_H
#define AOC2021_DAY01_H

#include "../aocDay.cpp"
#include <vector>
#include <string>

namespace AOC_2021{
    class Day01 : public AocDay{
    public:
        Day01();
        void run() override;
        void test() override;

    private:
        int countIncrease(const std::vector<std::string>& input) const;
        int countIncreaseSlide(const std::vector<std::string>& input) const;
    };
}




#endif //AOC2021_DAY01_H
