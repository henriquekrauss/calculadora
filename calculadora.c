#include <stdio.h>

extern double add (double num1, double num2) {
    return num1 + num2;
}

extern double subtract (double num1, double num2) {
    return num1 - num2;
}

extern double multiply (double num1, double num2) {
    return num1 * num2;
}

extern double divide (double num1, double num2) {
    return num1 / num2;
}