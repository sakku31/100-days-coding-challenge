/*
 * Question: Write a program to input a year and check whether it is a leap year or not using conditional statements.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 2020
 * OUTPUT 1:
 * Leap year
 *
 * INPUT 2:
 * 1900
 * OUTPUT 2:
 * Not a leap year
 *
 * INPUT 3:
 * 2000
 * OUTPUT 3:
 * Leap year
 */

#include <stdio.h>

int main() {
    int year;

    if (scanf("%d", &year) == 1) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }

    return 0;
}