/*
 * Question: Write a program to find the roots of a quadratic equation and categorize them.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 1 -3 2
 * OUTPUT 1:
 * Roots are real and different: 2, 1
 *
 * INPUT 2:
 * 1 -2 1
 * OUTPUT 2:
 * Roots are real and same: 1
 *
 * INPUT 3:
 * 1 2 5
 * OUTPUT 3:
 * Roots are complex
 */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double d = b * b - 4 * a * c;

        if (d > 0) {
            double root1 = (-b + sqrt(d)) / (2 * a);
            double root2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different: %g, %g\n", root1, root2);
        } else if (d == 0) {
            double root = -b / (2 * a);
            printf("Roots are real and same: %g\n", root);
        } else {
            printf("Roots are complex\n");
        }
    }

    return 0;
}