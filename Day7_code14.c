/*
 * Question: Write a program to input a character and check whether it is a vowel or consonant using if-else.
 *
 * Sample Test Cases:
 * INPUT 1:
 * a
 * OUTPUT 1:
 * Vowel
 *
 * INPUT 2:
 * b
 * OUTPUT 2:
 * Consonant
 */

#include <stdio.h>

int main() {
    char ch;

    if (scanf(" %c", &ch) == 1) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }

    return 0;
}