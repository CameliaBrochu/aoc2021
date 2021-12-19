//
// Created by camelia on 2021-12-19.
//

#include <string>
#include <sstream>

namespace utils{
    int str2int(std::string& s){
        int i = 0;
        char c;
        std::stringstream ss(s);
        ss >> i;
        return i;
    }
}
