#include <stdio.h>

#include "general_functions.h"

int basic_functions(void)
{
    int choice;

    clearTerminal();

    puts("----- Basic Operations -----\n");

    puts("What operation do you want to perform?\n");
    puts("1. Addition");
    puts("2. Subtraction");
    puts("3. Multiplication");
    puts("4. Division");

    printf("\n:");
    scanf("%i", &choice);

    return 0;
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}