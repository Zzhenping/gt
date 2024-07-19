//
// Created by MLoong on 2024/7/19.
//
#include "help.h"

std::map<std::string, std::string> cmdlib = {
        {" -n  --name"," Switch to the specified branch"},
        {" -f  --feat"," Create a feature prefix in minutes"},
        {" -fx  --fix"," Create a fix prefix in minutes"},
        {" -p  --perf"," Create a perf prefix in minutes"},
        {" -d  --docs"," Create a docs prefix in minutes"},
        {" -s  --style"," Create a style prefix in minutes"},
        {" -r  --refactor"," Create a refactor prefix in minutes"},
        {" -t  --test"," Create a test prefix in minutes"},
        {" -v  --version"," Create a version prefix in minutes"},
        {" -c  --chore"," Create a chore prefix in minutes"},
        {" -h  --help"," Display this help and exit"}
};

void displayHelp() {
    std::cout << "Usage: command [options]\n"
              << "Options:\n";
    for (const auto& p : cmdlib) {
        printf("%-30s%-50s\n", p.first.c_str(), p.second.c_str());
    }
}
