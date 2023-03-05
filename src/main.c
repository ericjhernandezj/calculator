#include <stdio.h>
#include <stdlib.h>

#include "basic_functions.h"

void clearTerminal(void);

int main(void)
{
    int choice;

    clearTerminal();
    puts("----- Calculator -----\n");

    puts("Menu\n");
    puts("1. Basic Operations");
    puts("2. Advanced  Operations");
    puts("3. Unit Conversion");
    puts("4. Calculus");
    puts("5. Probability and Statistics");
    puts("6. Geometry");
    puts("7. Matrices");
    puts("8. Algebra");
    puts("9. Base Conversion (decimal, binary, hexadecimal)");
    puts("10. Finance");

    printf("\n:");
    scanf("%i", &choice);

    switch (choice)
    {
    case 1: basic_functions();
        break;
    case 2: puts("Work in progress");
        break;
    case 3: puts("Work in progress");
        break;
    case 4: puts("Work in progress");
        break;
    case 5: puts("Work in progress");
        break;
    case 6: puts("Work in progress");
        break;
    case 7: puts("Work in progress");
        break;
    case 8: puts("Work in progress");
        break;
    case 9: puts("Work in progress");
        break;
    case 10: puts("Work in progress");
        break;
    default: puts("Invalid input");
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