/*
 * Question: Write a program to convert temperature from Celsius to Fahrenheit.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 0
 * OUTPUT 1:
 * Fahrenheit=32
 *
 * INPUT 2:
 * 100
 * OUTPUT 2:
 * Fahrenheit=212
 */

#include <stdio.h>

int main() {
    float celsius;
    
    if (scanf("%f", &celsius) == 1) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        
        if ((int)fahrenheit == fahrenheit) {
            printf("Fahrenheit=%d\n", (int)fahrenheit);
        } else {
            printf("Fahrenheit=%.2f\n", fahrenheit);
        }
    }
    
    return 0;
}