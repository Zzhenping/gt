//
// Created by MLoong on 2024/7/19.
//

#include <string>

#ifndef GIT_TOOLS_GT_H
#define GIT_TOOLS_GT_H

bool isGitBranchExists(const std::string& branchName);
bool switchGitBranch(const std::string& branchName);
bool hasUncommittedChanges();

#endif //GIT_TOOLS_GT_H