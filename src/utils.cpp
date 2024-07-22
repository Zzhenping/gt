//
// Created by MLoong on 2024/7/19.
//
#include "utils.h"
#include <iostream>
#include <array>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <random>
#include "gt.h"

#ifdef _WIN32
    #define POPEN _popen
    #define PCLOSE _pclose
#else
    #define POPEN popen
    #define PCLOSE pclose
#endif

std::string executeCommand(const char* cmd) {
    std::array<char, 128> buffer{};
    std::string result;
    std::unique_ptr<FILE, decltype(&PCLOSE)> pipe(POPEN(cmd, "r"), PCLOSE);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

std::string strRand(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, characters.size() - 1);

    std::string randomString;
    for (size_t i = 0; i < length; ++i) {
        randomString += characters[distribution(generator)];
    }

    return randomString;
}


// 生成随机分支名
std::string generateRandomBranchName(int length) {
    std::string tmp_branch_name = strRand(length);
    if (isGitBranchExists(tmp_branch_name)) {
        return generateRandomBranchName(length);
    }
    return tmp_branch_name;
}
