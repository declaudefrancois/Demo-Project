#include <stdio.h>

int main(void) {
    char operator;
    double num1, num2, result;

    // Introduction and Input Gathering
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    // Operator Input Validation Loop
    while (1) {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

    return (0);

