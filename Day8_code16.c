/*
 * Question: Write a program to input three numbers and find the largest among them using if-else.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 3 7 5
 * OUTPUT 1:
 * Largest is 7
 *
 * INPUT 2:
 * -1 -5 0
 * OUTPUT 2:
 * Largest is 0
 */

#include <stdio.h>

int main() {
    int num1, num2, num3;

    if (scanf("%d %d %d", &num1, &num2, &num3) == 3) {
        if (num1 >= num2 && num1 >= num3) {
            printf("Largest is %d\n", num1);
        } else if (num2 >= num1 && num2 >= num3) {
            printf("Largest is %d\n", num2);
        } else {
            printf("Largest is %d\n", num3);
        }
    }

    return 0;
}