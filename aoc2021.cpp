//
// Created by camelia on 2021-12-19.
//


#include <iostream>
#include <Day02.h>
#include "day01/Day01.h"
#include "day02/Day02.h"

int main(){
    std::cout << "Day number : ";
    int dayNumber;
    std::cin >> dayNumber;

    AOC_2021::Day01 day01;
    AOC_2021::Day02 day02;
    switch (dayNumber) {
        case 1:

            day01.run();
            break;
        case 2:
            day02.run();
            break;
    }

    return 1;
}
