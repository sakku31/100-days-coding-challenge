/*
 * Question: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
 * 90-100: Grade A
 * 80-89: Grade B
 * 70-79: Grade C
 * 60-69: Grade D
 * below 60: Grade F.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 95
 * OUTPUT 1:
 * Grade A
 *
 * INPUT 2:
 * 82
 * OUTPUT 2:
 * Grade B
 *
 * INPUT 3:
 * 68
 * OUTPUT 3:
 * Grade D
 *
 * INPUT 4:
 * 50
 * OUTPUT 4:
 * Grade F
 */

#include <stdio.h>

int main() {
    int percentage;

    if (scanf("%d", &percentage) == 1) {
        if (percentage >= 90 && percentage <= 100) {
            printf("Grade A\n");
        } else if (percentage >= 80) {
            printf("Grade B\n");
        } else if (percentage >= 70) {
            printf("Grade C\n");
        } else if (percentage >= 60) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }

    return 0;
}