/*
 * Day 2 - Q3 (User Inputs, Operations & Output)
 * Question: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 5 10
 * OUTPUT 1:
 * Area=50, Perimeter=30
 *
 * INPUT 2:
 * 3 7
 * OUTPUT 2:
 * Area=21, Perimeter=20
 */

#include <stdio.h>

int main() {
    int length, breadth;
    
    // Input length and breadth
    if (scanf("%d %d", &length, &breadth) == 2) {
        int area = length * breadth;
        int perimeter = 2 * (length + breadth);
        
        // Output in exact format: Area=X, Perimeter=Y
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }
    
    return 0;
}