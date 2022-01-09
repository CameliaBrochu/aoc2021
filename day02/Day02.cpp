//
// Created by camelia on 2021-12-19.
//

#include <iostream>
#include <vector>
#include "Day02.h"
#include "../utils/utils.h"


AOC_2021::Day02::Day02() = default;

void AOC_2021::Day02::run() {
    std::vector<std::string> input = utils::parseFile("day02/input.txt");

    int position = 0;
    int depth = 0;

    calculMovement(position,depth,input);

    std::cout << "Position : " << position << std::endl;
    std::cout << "Depth : " << depth << std::endl;

    position = 0;
    depth = 0;

    calculCorrectMovement(position,depth,input);

    std::cout << "Position : " << position << std::endl;
    std::cout << "Depth : " << depth << std::endl;
}

void AOC_2021::Day02::test() {

    std::vector<std::string> input = {
        "forward 5",
        "down 5",
        "forward 8",
        "up 3",
        "down 8",
        "forward 2"
    };

    int position = 0;
    int depth = 0;

    calculMovement(position,depth,input);

    std::cout << "Position : " << position << std::endl;
    std::cout << "Depth : " << depth << std::endl;

    position = 0;
    depth = 0;

    calculCorrectMovement(position,depth,input);

    std::cout << "Position : " << position << std::endl;
    std::cout << "Depth : " << depth << std::endl;
}

void AOC_2021::Day02::calculMovement(int &position, int &depth,const std::vector<std::string>& input) {
    for (const std::string& line:input) {
        std::vector<std::string> command = utils::splitString(' ',line);

        if(command.size() == 2){
            if(command[0] == "forward"){
                position += utils::str2int(command[1]);
            } else if (command[0] == "up"){
                depth -= utils::str2int(command[1]);
            } else if(command[0] == "down"){
                depth += utils::str2int(command[1]);
            }
        }
    }
}

void AOC_2021::Day02::calculCorrectMovement(int &position, int &depth,const std::vector<std::string>& input) {
    int aim = 0;

    for (const std::string& line:input) {
        std::vector<std::string> command = utils::splitString(' ',line);

        if(command.size() == 2){
            if(command[0] == "forward"){
                position += utils::str2int(command[1]);
                depth += aim * utils::str2int(command[1]);
            } else if (command[0] == "up"){
                aim -= utils::str2int(command[1]);
            } else if(command[0] == "down"){
                aim += utils::str2int(command[1]);
            }
        }
    }
}
