/*
 * Question: Write a program to swap two numbers without using a third variable.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 10 20
 * OUTPUT 1:
 * After swap: 20 10
 *
 * INPUT 2:
 * 7 14
 * OUTPUT 2:
 * After swap: 14 7
 */

#include <stdio.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) == 2) {
        a = a + b;
        b = a - b;
        a = a - b;

        printf("After swap: %d %d\n", a, b);
    }

    return 0;
}