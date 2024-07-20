#include <iostream>
#include <string>
#include "terminal.h"

int main() {
    std::string command;

    std::cout << "Welcome to SimpleTerminal!\n";
    while (true) {
        std::cout << "SimpleTerminal> ";
        std::getline(std::cin, command);

        if (command == "exit") {
            break;
        }

        executeCommand(command);
    }

    return 0;
}
