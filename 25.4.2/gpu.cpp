#include "gpu.h"

void display (){
    for (int i = 0; i < sizeRam; ++i){
        auto buffer = read(i);
        if (buffer.second) {
            std::cout << buffer.first << ' ';
        }
        else {
            break;
        }
    }
    std::cout << std::endl;
}