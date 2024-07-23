#include <string>
#include <iostream>

//
// Created by MLoong on 2024/7/19.
//

#include "utils.h"

// 验证分支名是否已经存在
bool isGitBranchExists(const std::string& branchName) {
    try {
        std::string command = "git branch --list " + branchName;
        std::string output = executeCommand(command.c_str());
        return !output.empty();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return false;
    }
}

bool switchGitBranch(const std::string& branchName) {
    try {
        std::string command = "git checkout -b " + branchName;
        std::string output = executeCommand(command.c_str());
        std::cout << output << std::endl;
        return output.find("error") == std::string::npos;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return false;
    }
}

bool hasUncommittedChanges() {
    try {
        std::string output = executeCommand("git status --porcelain");
        return !output.empty();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return false;
    }
}

bool beforeSwitchingCheck() {
    if (!hasUncommittedChanges()) {
        return true;
    }
    std::cout << "There are uncommitted changes in the repository." << std::endl;
    char choice;
    std::cout << "Do you want to continue? (y/n): ";
    std::cin >> choice;
    if (choice != 'y' && choice != 'Y') {
        return false;
    }
    return true;
}

void handleBranchSwitch(const std::string& prefix) {
    std::string tmp_branch_name = prefix + generateRandomBranchName();
    if (beforeSwitchingCheck()) {
        switchGitBranch(tmp_branch_name);
    }
}