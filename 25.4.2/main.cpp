#include <iostream>
#include "ram.h"
#include "kbd.h"
#include "gpu.h"
#include "cpu.h"
#include "disk.h"

int main() {
    std::string command;

    while (true) {
        while (true) {
            std::cin.rdbuf()->pubsync();
            std::cin.clear();
            std::cout << "Input command: ";
            std::cin >> command;
            if (!std::cin.fail()) {
                break;
            }
        }

        if (command == "sum") {
            compute();
        }
        else if (command == "save"){
            save();
        }
        else if (command == "load"){
            load();
        }
        else if (command == "input"){
            input();
        }
        else if (command == "display"){
            display();
        }
        else if (command == "exit"){
            break;
        }
        else {
            std::cout << "Unknown command" << std::endl;
        }
    }

}
