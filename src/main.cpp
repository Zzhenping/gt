#include <iostream>
#include <string>
#include "utils.h"
#include "gt.h"
#include "arguments.h"

using std::string;
using std::cout;
using std::endl;


int main(int argc, char* argv[]) {
    system("git --version");
    parsingArguments(argc, argv);
    return 0;
}