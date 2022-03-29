#include <iostream>
#include "25.4.1.foo.h"

template <typename T>
void input (T &buffer) {
    while (true) {
        std::cin.rdbuf()->pubsync();
        std::cin.clear();
        std::cin >> buffer;
        if (std::cin.fail()) {
            std::cout << "Entered error. Try again:";
            continue;
        }
        return;
    }
}

int main() {
    Point startPointA, startPointB, endPointA, endPointB, bufferPoint;
    std::string bufferString;
    bool isScalpel = false;

    while(true) {
        std::cout << "Enter the command (scalpel, hemostat, tweezers, suture):";
        input(bufferString);
        if (bufferString == "scalpel"){
            if (isScalpel){
                std::cout << "Previous incision is not sutured." << std::endl;
            }
            else {
                std::cout << "Enter start point (X,Y):";
                input(startPointA);
                std::cout << "Enter end point (X,Y):";
                input(startPointB);
                scalpel(startPointA, startPointB);
                isScalpel = true;
            }
            continue;
        }
        else if (bufferString == "hemostat"){
            if (!isScalpel){
                std::cout << "Not made incision." << std::endl;
            }
            else {
                std::cout << "Enter point (X,Y):";
                input(bufferPoint);
                hemostat(bufferPoint);
            }
            continue;
        }
        else if (bufferString == "tweezers"){
            if (!isScalpel){
                std::cout << "Not made incision." << std::endl;
            }
            else {
                std::cout << "Enter point (X,Y):";
                input(bufferPoint);
                tweezers(bufferPoint);
            }
            continue;
        }
        else if (bufferString == "suture"){
            if (!isScalpel){
                std::cout << "Not made incision." << std::endl;
            }
            else {
                std::cout << "Enter start point (X,Y):";
                input(endPointA);
                std::cout << "Enter end point (X,Y):";
                input(endPointB);
                if ((startPointA == endPointA and startPointB == endPointB)
                    or (startPointA == endPointB and startPointB == endPointA)) {
                    suture(endPointA, endPointB);
                    isScalpel = false;
                    break;
                }
                else {
                    std::cout << "The incision is not sutured." << std::endl;
                    std::cout << "The incision points are A " << startPointA << " and B " << startPointB << std::endl;
                    std::cout << "The suture points are A " << endPointA << " and B " << endPointB << std::endl;
                }
            }
            continue;
        }
        else {
            std::cout << "Unknown command." << std::endl;
            continue;
        }
    }
    return 0;
}

