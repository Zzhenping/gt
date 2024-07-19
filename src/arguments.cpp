//
// Created by MLoong on 2024/7/19.
//

#include <iostream>
#include <string>
#include "gt.h"
#include "arguments.h"
#include "help.h"
#include "utils.h"

using std::string;
using std::cout;
using std::endl;

int parsingArguments(int argc, char* argv[]){
    if (argc < 2 ) {
        // 默认情况直接切换随机分支
        string tmp_branch_name = generateRandomBranchName();
        if (beforeSwitchingCheck()) {
            switchGitBranch(tmp_branch_name);
        }
        return 1;
    }

    if (string(argv[1]).find("--help") != string::npos || string(argv[1]).find("-h") != string::npos) {
        displayHelp();
        return 1;
    }

    if (string(argv[1]).find("--name") != string::npos || string(argv[1]).find("-n") != string::npos) {
        // 切换到指定分支
        if (argc < 3) {
            cout << "Please specify the branch name." << endl;
            return 0;
        }
        string branch_name = argv[2];
        if (beforeSwitchingCheck()) {
            switchGitBranch(branch_name);
        }
        return 1;
    }



    return 0;
}