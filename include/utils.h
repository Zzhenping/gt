//
// Created by MLoong on 2024/7/19.
//

#ifndef GIT_TOOLS_UTILS_H
#define GIT_TOOLS_UTILS_H

#include <string>

std::string executeCommand(const char* cmd);
std::string strRand(int length);
std::string generateRandomBranchName(int length = 8);

#endif //GIT_TOOLS_UTILS_H
