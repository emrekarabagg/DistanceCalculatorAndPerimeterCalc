//210201053 Emre KARABAG
#include <stdio.h>
#include "distanceAndPerimeterCalc.h"

int main() {

    int flag = 1;
    int i;
    char point1[i];
    char point2[i];
    char point3[i];
    Point p1, p2, p3;

    while (flag) {
        int input;
        printf("Please enter the number of points:\n");

        if (scanf("%d", &input) != 1) {
            printf("entered invalid input\n");
            flag = 0;
        }
        switch (input) {
            case 2:
                printf("Enter x and y values of the first point:\n");
                scanf("%s", &point1);
                p1 = string2Point(point1);
                printf("Enter x and y values of the second point:\n");
                scanf("%s", &point2);
                p2 = string2Point(point2);
                printf("Calculating length of the line . . .\n");
                printf("Result is %.2f\n", calcDistance(p1, p2));
                flag = 0;
                break;
            case 3:
                printf("Enter x and y values of the first point:\n");
                scanf("%s", &point1);
                p1 = string2Point(point1);
                printf("Enter x and y values of the second point:\n");
                scanf("%s", &point2);
                p2 = string2Point(point2);
                printf("Enter x and y values of the third point:\n");
                scanf("%s", &point3);
                p3 = string2Point(point3);
                printf("Calculating perimeter of the triangle . . . . . .\n");
                printf("Result is %.2f\n", calcPerimeter(p1, p2, p3));
                flag = 0;
                break;
            default:
                printf("It can be 2 or 3, try again!\n");
                break;
        }
    }


    return 0;
}
