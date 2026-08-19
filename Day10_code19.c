/*
 * Question: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 3 3 3
 * OUTPUT 1:
 * Equilateral
 *
 * INPUT 2:
 * 3 3 4
 * OUTPUT 2:
 * Isosceles
 *
 * INPUT 3:
 * 2 3 4
 * OUTPUT 3:
 * Scalene
 */

#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }

    return 0;
}