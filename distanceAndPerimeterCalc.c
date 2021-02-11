//
// Created by karabag on 12.11.2020.
//
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "distanceAndPerimeterCalc.h"

double calcDistance(Point p1, Point p2) {

    double distance = sqrt((pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));

    return distance;
}

double calcPerimeter(Point p1, Point p2, Point p3) {

    double distanceP1ToP2 = calcDistance(p1, p2);
    double distanceP2ToP3 = calcDistance(p2, p3);
    double distanceP1ToP3 = calcDistance(p1, p3);

    double perimeter = distanceP1ToP2 + distanceP1ToP3 + distanceP2ToP3;

    return perimeter;

}

Point string2Point(char str[]) {

    char *token;
    int p[2];
    int i = 0;
    token = strtok(str, ",");
    while (token != NULL) {
        int x = atoi(token);
        p[i] = x;
        token = strtok(NULL, ",");
        i++;
    }

    Point point = {p[0], p[1]};
    return point;

}