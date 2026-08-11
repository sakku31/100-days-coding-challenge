/*
 * Day 1 - Q2 (User Inputs, Operations & Output)
 * Question: Write a program to input two numbers and display their sum, difference, product, and quotient.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 10 2
 * OUTPUT 1:
 * Sum=12, Diff=8, Product=20, Quotient=5
 *
 * INPUT 2:
 * 7 3
 * OUTPUT 2:
 * Sum=10, Diff=4, Product=21, Quotient=2
 */

#include <stdio.h>

int main() {
    int num1, num2;
    
    // Read two integers
    if (scanf("%d %d", &num1, &num2) == 2) {
        // Print sum, difference, product, and quotient matching the required format
        if (num2 != 0) {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
                    num1 + num2, num1 - num2, num1 * num2, num1 / num2);
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=Undefined\n", 
                    num1 + num2, num1 - num2, num1 * num2);
        }
    }
    
    return 0;
}