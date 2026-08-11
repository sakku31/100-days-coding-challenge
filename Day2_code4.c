/*
 * Day 2 - Q4 (User Inputs, Operations & Output)
 * Question: Write a program to calculate the area and circumference of a circle given its radius.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 7
 * OUTPUT 1:
 * Area=153.94, Circumference=43.96
 *
 * INPUT 2:
 * 3
 * OUTPUT 2:
 * Area=28.27, Circumference=18.85
 */

#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double radius;
    
    // Input radius
    if (scanf("%lf", &radius) == 1) {
        double area = M_PI * radius * radius;
        double circumference = 2 * M_PI * radius;
        
        // Output formatted to 2 decimal places: Area=X.XX, Circumference=Y.YY
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }
    
    return 0;
}