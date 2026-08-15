/*
 * Question: Write a program to input an integer and check whether it is even or odd using if-else.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 7
 * OUTPUT 1:
 * 7 is odd
 *
 * INPUT 2:
 * 12
 * OUTPUT 2:
 * 12 is even
 */

#include <stdio.h>

int main() {
    int num;

    if (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d is even\n", num);
        } else {
            printf("%d is odd\n", num);
        }
    }

    return 0;
}