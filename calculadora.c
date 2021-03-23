#include <stdio.h>

extern int add (int num1, int num2) {
    return num1 + num2;
}

extern int subtract (int num1, int num2) {
    return num1 - num2;
}

extern int multiply (int num1, int num2) {
    return num1 * num2;
}

extern int divide (int num1, int num2) {
    return num1 / num2;
}