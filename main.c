#include <stdio.h>
#include <stdlib.h>
#include "calculadora.c"

double * getNumbers() {
    double num1, num2;
    static double bothNumbers[2];
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    bothNumbers[0] = num1;
    bothNumbers[1] = num2;

    return bothNumbers;
}

int main() {
    while (1) {
        int input;
        double *bothNumbers, num1, num2;
        printf("\n\n1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n5 - Quit \nChoose an input: ");
        scanf("%d", &input);

        if (input < 5 && input > 0) {
            bothNumbers = getNumbers();
            num1 = bothNumbers[0];
            num2 = bothNumbers[1];
        }

        if (input == 1) {
            printf("The addition of %.2f and %.2f is: %.2f", num1, num2, add(num1, num2));      
        } else if (input == 2) {
            printf("The subtraction of %.2f and %.2f is: %.2f", num1, num2, subtract(num1, num2));
        } else if (input == 3) {
            printf("The multiplication of %.2f and %.2f is: %.2f", num1, num2, multiply(num1, num2));
        } else if (input == 4) {
            printf("The division of %.2f and %.2f is: %.2f", num1, num2, divide(num1, num2));
        } else if (input == 5) {
            break;
        }
    }

    return 0;
}
