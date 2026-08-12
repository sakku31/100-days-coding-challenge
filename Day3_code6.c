/*
 * Question: Write a program to swap two numbers using a third variable.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 3 5
 * OUTPUT 1:
 * After swap: 5 3
 *
 * INPUT 2:
 * -1 1
 * OUTPUT 2:
 * After swap: 1 -1
 */

#include <stdio.h>

int main() {
    int a, b, temp;

    if (scanf("%d %d", &a, &b) == 2) {
        temp = a;
        a = b;
        b = temp;

        printf("After swap: %d %d\n", a, b);
    }

    return 0;
}