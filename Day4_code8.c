/*
 * Question: Write a program to find and display the sum of the first n natural numbers.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 5
 * OUTPUT 1:
 * Sum=15
 *
 * INPUT 2:
 * 10
 * OUTPUT 2:
 * Sum=55
 */

#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1); {
        int sum = n * (n + 1) / 2;

        printf("Sum=%d\n", sum);
    }

    return 0;
}