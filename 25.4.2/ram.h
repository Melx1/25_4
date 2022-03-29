#ifndef INC_25_4_RAM_H
#define INC_25_4_RAM_H

#include <utility>
#include <iostream>

extern const int sizeRam;

std::pair<int, bool> read(const int & address);
bool write(const int & value, const int & address);

#endif //INC_25_4_RAM_H
