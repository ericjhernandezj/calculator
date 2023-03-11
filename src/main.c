#include <stdio.h>

#include "general_functions.h"
#include "basic_functions.h"

int main(void)
{
    int choice;

    clearTerminal();
    puts("----- Calculator -----\n");

    puts("Menu\n");
    puts("1. Basic Operations");
    puts("2. Advanced  Operations (coming soon)");
    puts("3. Unit Conversion (coming soon)");
    puts("4. Calculus (coming soon)");
    puts("5. Probability and Statistics (coming soon)");
    puts("6. Geometry (coming soon)");
    puts("7. Matrices (coming soon)");
    puts("8. Algebra (coming soon)");
    puts("9. Base Conversion (decimal, binary, hexadecimal) (coming soon)");
    puts("10. Finance (coming soon)");

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