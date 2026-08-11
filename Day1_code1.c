/*
 * Day 1 - Q1 (User Inputs, Operations & Output)
 * Question: Write a program to input two numbers and display their sum.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 3 4
 * OUTPUT 1:
 * Sum = 7
 *
 * INPUT 2:
 * -1 20
 * OUTPUT 2:
 * Sum = 19
 */

#include <stdio.h>

int main() {
    int num1, num2; // Declare integer variables to store the inputs
    
    // Read two integer values from user input
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Calculate the sum and print in the exact format: Sum = <value>
        printf("Sum = %d\n", num1 + num2);
    }
    
    return 0; // Signal successful program execution
}