/*
 * Question: Write a program to find profit or loss percentage given cost price and selling price.
 *
 * Sample Test Cases:
 * INPUT 1:
 * 1000 1200
 * OUTPUT 1:
 * Profit 20%
 *
 * INPUT 2:
 * 1000 800
 * OUTPUT 2:
 * Loss 20%
 *
 * INPUT 3:
 * 1000 1000
 * OUTPUT 3:
 * No Profit No Loss
 */

#include <stdio.h>

int main() {
    double cp, sp;

    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (sp > cp) {
            double profit = sp - cp;
            double profitPercent = (profit / cp) * 100;
            printf("Profit %g%%\n", profitPercent);
        } else if (cp > sp) {
            double loss = cp - sp;
            double lossPercent = (loss / cp) * 100;
            printf("Loss %g%%\n", lossPercent);
        } else {
            printf("No Profit No Loss\n");
        }
    }

    return 0;
}