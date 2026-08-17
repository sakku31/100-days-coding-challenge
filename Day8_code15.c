/*
 * Question: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 *
 * Sample Test Cases:
 * INPUT 1:
 * A
 * OUTPUT 1:
 * Uppercase alphabet
 *
 * INPUT 2:
 * a
 * OUTPUT 2:
 * Lowercase alphabet
 *
 * INPUT 3:
 * 3
 * OUTPUT 3:
 * Digit
 *
 * INPUT 4:
 * #
 * OUTPUT 4:
 * Special character
 */

#include <stdio.h>

int main() {
    char ch;

    if (scanf(" %c", &ch) == 1) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase alphabet\n");
        } else if (ch >= 'a' && ch <= 'z') {
            printf("Lowercase alphabet\n");
        } else if (ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("Special character\n");
        }
    }

    return 0;
}