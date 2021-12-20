//
// Created by camelia on 2021-12-19.
//

#ifndef AOC2021_UTILS_H
#define AOC2021_UTILS_H

#include <vector>
#include <string>

namespace utils{
    int str2int(const std::string& s);
    std::vector<std::string> parseFile(const std::string& filename);
    std::vector<std::string> splitString(char sep, const std::string& s);
}
#endif //AOC2021_UTILS_H
