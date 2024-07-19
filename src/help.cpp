//
// Created by MLoong on 2024/7/19.
//
#include "help.h"

std::map<std::string, std::string> cmdlib = {
        {" -n  --name"," Switch to the specified branch"},
        {" -h  --help"," Display this help and exit"}
};

void displayHelp() {
    std::cout << "Usage: command [options]\n"
              << "Options:\n";
    for (const auto& p : cmdlib) {
        printf("%-30s%-50s\n", p.first.c_str(), p.second.c_str());
    }
}
