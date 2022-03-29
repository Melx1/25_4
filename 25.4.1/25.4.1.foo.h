#ifndef INC_25_4_25_4_1_FOO_H
#define INC_25_4_25_4_1_FOO_H

#include "25.4.1.point.h"

void scalpel (const Point &pointA, const Point &pointB){
    //Принимает на вход две двумерные координаты начала и конца разреза или линии отсечения.
    //При выполнении этой команды в консоль выводится сообщение о том, что был сделан разрез между введёнными координатами.
    std::cout << "The incision between points A " << pointA << " and B " << pointB << std::endl;
}

void hemostat (const Point point){
    //Принимает на вход одну точку, в которой требуется сделать зажим, о чём также сообщает в консоль.
    std::cout << "Medical clip set to the point " << point << std::endl;
}

void tweezers (const Point point){
    //Пинцет, как и зажим, принимает одну точку для применения. Сообщение об этом выводится в консоль
    std::cout << "The tweezers set to the point " << point << std::endl;
}

void suture (const Point &pointA, const Point &pointB){
    //Команда хирургической иглы, которая делает шов между двумя указанными точками.
    std::cout << "The suture is placed between points A " << pointA << " and B " << pointB << std::endl;
}

#endif //INC_25_4_25_4_1_FOO_H
