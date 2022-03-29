#include "ram.h"

const int sizeRam {8};
int ram[sizeRam]{};

std::pair<int, bool> read (const int & address){
    // int - returned value; bool - isGood flag;
    if (address < sizeRam and address >= 0) {
        return std::pair<int, bool> {ram[address], true};
    }
    std::cout << "\nRam read error!" << std::endl;
    return std::pair<int, bool> {0, false};
}

bool write (const int & value, const int & address){
    if (address < sizeRam and address >= 0) {
        ram[address] = value;
        return true;
    }
    return false;
}

