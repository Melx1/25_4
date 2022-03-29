#include "cpu.h"

long long compute(){
    long long result {0};
    for (int i = 0; i < sizeRam; ++i){
        auto buffer = read(i);
        if (buffer.second) {
            if (result >= 0 and buffer.first >= 0 and LONG_LONG_MAX - result >= buffer.first) {
                result += buffer.first;
            }
            else if (result < 0 and buffer.first < 0 and  result - LONG_LONG_MIN >= -buffer.first) {
                result += buffer.first;
            }
            else {
                std::cout << "Overflow error" << std::endl;
                break;
            }
        }
        else {
            break;
        }
    }
    std::cout << result << std::endl;
    return result;
}