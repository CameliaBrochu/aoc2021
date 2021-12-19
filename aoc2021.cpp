//
// Created by camelia on 2021-12-19.
//


#include <iostream>
#include <Day01.h>

int main(){
    std::cout << "Day number : ";
    int dayNumber;
    std::cin >> dayNumber;

    switch (dayNumber) {
        case 1:
            AOC_2021::Day01 day01;
            day01.run();
            break;
    }

    return 1;
}
