/*
 * Question: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 3661
 * OUTPUT 1:
 * 1:1:1
 *
 * INPUT 2:
 * 7322
 * OUTPUT 2:
 * 2:2:2
 */

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    if (scanf("%d", &total_seconds) == 1) {
        hours = total_seconds / 3600;
        minutes = (total_seconds % 3600) / 60;
        seconds = total_seconds % 60;

        printf("%d:%d:%d\n", hours, minutes, seconds);
    }

    return 0;
}