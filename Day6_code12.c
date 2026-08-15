/*
 * Question: Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
 *
 * Sample Test Cases:
 * INPUT 1:
 * -5
 * OUTPUT 1:
 * Negative
 *
 * INPUT 2:
 * 0
 * OUTPUT 2:
 * Zero
 *
 * INPUT 3:
 * 10
 * OUTPUT 3:
 * Positive
 */

#include <stdio.h>

int main() {
    int num;

    if (scanf("%d", &num) == 1) {
        if (num >= 0) {
            if (num > 0) {
                printf("Positive\n");
            } else {
                printf("Zero\n");
            }
        } else {
            printf("Negative\n");
        }
    }

    return 0;
}