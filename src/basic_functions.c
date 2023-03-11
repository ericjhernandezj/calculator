#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void);

int basic_functions(void)
{
    clearTerminal();

    puts("----- Basic Operations -----");

    puts("What operation do you want to perform?");
    puts("1. Addition");
    puts("2. Subtraction");
    puts("3. Multiplication");
    puts("4. Division");

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

void clearTerminal(void)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}