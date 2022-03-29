#ifndef INC_25_4_25_4_1_POINT_H
#define INC_25_4_25_4_1_POINT_H

#include <iostream>

using Point = std::pair<double, double>;

std::ostream& operator << (std::ostream &out, const Point &point) {
    out << "(" << point.first << ", " << point.second << ")";
    return out;
}

std::istream& operator >> (std::istream &in, Point &point) {
    in >> point.first >> point.second;
    return in;
}

bool operator == (const Point &pointA, const Point &pointB) {
    if (pointA.first == pointB.first and pointA.second == pointB.second)
        return true;
    return false;
}

#endif //INC_25_4_25_4_1_POINT_H
