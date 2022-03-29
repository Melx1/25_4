#include "disk.h"

bool save(){
    std::ofstream ramFile;
    ramFile.open ("ram.txt", std::ofstream::trunc);

    if (!ramFile.is_open()){
        std::cout << "Error opening file" << std::endl;
        ramFile.close();
        return false;
    }

    for (int i = 0; i < sizeRam; ++i){
        auto buffer = read(i);
        if (buffer.second) {
            ramFile << buffer.first << " ";
        }
        else {
            ramFile.close();
            return false;
        }
    }
    ramFile.close();
    return true;
}

bool load(){
    std::ifstream ramFile;
    ramFile.open ("ram.txt");

    if (!ramFile.is_open()){
        std::cout << "Error opening file" << std::endl;
        ramFile.close();
        return false;
    }

    int buffer;
    for (int i = 0; i < sizeRam; ++i){
        ramFile >> buffer;
        if (ramFile.fail() or !write(buffer, i)) {
            std::cout << "Data retrieval error" << std::endl;
            ramFile.close();
            return false;
        }
    }
    ramFile.close();
    return true;
}