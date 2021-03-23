#include <stdio.h>
#include <stdlib.h>
#include "calculadora.c"

int * getNumbers() {
    char num1[6], num2[6];
    static int bothNumbers[2];
    printf("Enter the first number: ");
    scanf("%s", num1);
    printf("Enter the second number: ");
    scanf("%s", num2);

    bothNumbers[0] = atoi(num1);
    bothNumbers[1] = atoi(num2);

    return bothNumbers;
}

int main() {
    while (1) {
        char input[1], result[20];
        int operation, *bothNumbers, num1, num2;
        printf("\n\n1 - Addition \n2 - Subtraction \n3 - Multiplication \n4 - Division \n5 - Quit \nChoose an operation: ");
        scanf("%s", input);
        operation = atoi(input);

        if (operation < 5 && operation > 0) {
            bothNumbers = getNumbers();
            num1 = bothNumbers[0];
            num2 = bothNumbers[1];
        }

        if (operation == 1) {
            itoa(add(num1, num2), result, 10);
            printf("The addition of %d and %d is: %s", num1, num2, result);      
        } else if (operation == 2) {
            itoa(subtract(num1, num2), result, 10);
            printf("The subtraction of %d and %d is: %s", num1, num2, result);
        } else if (operation == 3) {
            itoa(multiply(num1, num2), result, 10);
            printf("The multiplication of %d and %d is: %s", num1, num2, result);
        } else if (operation == 4) {
            itoa(divide(num1, num2), result, 10);
            printf("The division of %d and %d is: %s", num1, num2, result);
        } else if (operation == 5) {
            break;
        }
    }

    return 0;
}
