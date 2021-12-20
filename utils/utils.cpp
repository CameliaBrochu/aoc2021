//
// Created by camelia on 2021-12-19.
//

#include "utils.h"
#include <string>
#include <sstream>
#include <vector>
#include<iostream>
#include<fstream>

namespace utils{
    int str2int(const std::string& s){
        int i = 0;
        char c;
        std::stringstream ss(s);
        ss >> i;
        return i;
    }

    std::vector<std::string> parseFile(const std::string& filename){
        std::vector<std::string> input;

        std::ifstream f(filename, std::ios::in);
        std::string line;

        while(f){
            getline(f,line);
            input.push_back(line);
        }
        f.close();
        return input;
    }

    std::vector<std::string> splitString(char sep, const std::string& s){
        std::vector<std::string> sepString;

        std::string part;
        int count = 0;
        for (char i : s) {
            ++count;
            if(i == sep){
                sepString.push_back(part);
                part = "";
                continue;
            }
            part += i;

            if(count == s.size()){
                sepString.push_back(part);
            }
        }

        return sepString;
    }
}
