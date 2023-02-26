#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void);

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(void)
{
    int operation;
    float numberA, numberB;

    puts("----- Command Line Calculator -----");

    puts("Press ENTER to start");
    printf(": ");
    getchar();

    clearTerminal();

    puts("What function do you want to execute?");

    puts("1. Addition");
    puts("2. Subtraction");
    puts("3. Multiplication");
    puts("4. Division");

    printf(": ");
    scanf("%i", &operation);

    printf("\nFirst number: ");
    scanf("%f", &numberA);
    printf("Second number: ");
    scanf("%f", &numberB);

    switch (operation)
    {
    case 1:
        printf("Result: %.3f\n", add(numberA, numberB));
        break;
    case 2:
        printf("Result: %.3f\n", subtract(numberA, numberB));
        break;
    case 3:
        printf("Result: %.3f\n", multiply(numberA, numberB));
        break;
    case 4:
        if (numberB == 0) puts("Undefined");
        else printf("Result: %.3f\n", divide(numberA, numberB));
        break;
    default:
        puts("ERROR");
        break;
    }

    return 0;
}

void clearTerminal(void)
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
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