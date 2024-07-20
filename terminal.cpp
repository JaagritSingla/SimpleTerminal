#include "terminal.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <sstream>

void executeCommand(const std::string& command) {
    std::vector<std::string> args;
    std::istringstream iss(command);
    std::string token;

    while (iss >> token) {
        args.push_back(token);
    }

    if (args.empty()) {
        return;
    }

    if (args[0] == "echo") {
        for (size_t i = 1; i < args.size(); ++i) {
            std::cout << args[i] << " ";
        }
        std::cout << std::endl;
    } else if (args[0] == "ls") {
        system("ls");
    } else if (args[0] == "pwd") {
        system("pwd");
    } else {
        std::cerr << "Unknown command: " << args[0] << std::endl;
    }
}
