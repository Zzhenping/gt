#include <iostream>
#include <map>


std::map<std::string, std::string> cmdlib = {
        {"--framework"," Specify the framework version"},
        {"--model"," Specify the model file path"},
        {"--input_format"," Specify the input format"},
        {"--input_shape"," Specify the input shape"},
        {"--output_type"," Specify the output type"},
        {"--output"," Specify the output file path"},
        {"--log"," Specify the log level"},
        {"--precision_mode"," Specify the precision mode"},
        {"--soc_version"," Specify the SoC version"},
        {"--help","Display this help and exit"}
};

void displayHelp()
{
    std::cout << "Usage: command [options]\n"
              << "Options:\n";
    for (const auto& p : cmdlib)
    {
        printf("%-30s%-50s\n", p.first.c_str(), p.second.c_str());
    }
}

int main(int argc, char* argv[]) {

    if (argc == 2 && std::string(argv[1]).find("--help") != std::string::npos) {
        displayHelp();
        return 0;
    }

    // 使用system()函数执行Git命令
    system("git --version");
    return 0;
}