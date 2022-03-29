#include "kbd.h"

void input (){
    int buffer;
    std::cout << "Input " << sizeRam << " numbers:";
    std::cin.rdbuf()->pubsync();
    std::cin.clear();
    for (int i = 0; i < sizeRam; ++i){
        std::cin >> buffer;
        if (std::cin.fail()) {
            --i;
            std::cin.rdbuf()->pubsync();
            std::cin.clear();
            continue;
        }
        write(buffer, i);
    }
}
