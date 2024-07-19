#include <iostream>
#include <string>
#include "help.h"
#include "utils.h"
#include "gt.h"

using std::string;
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
    cout << "argc:" << argc << endl;
    system("git --version");
    if (argc == 2 && string(argv[1]).find("--help") != string::npos) {
        displayHelp();
        return 0;
    }

    string tmp_branch_name = generateRandomBranchName();

    if (hasUncommittedChanges()) {
        std::cout << "There are uncommitted changes in the repository." << std::endl;
        char choice;
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            switchGitBranch(tmp_branch_name);
        } else {
            return 0;
        }
    } else {
        std::cout << "No uncommitted changes in the repository." << std::endl;
    }

    return 0;
}