#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void);

int main(void)
{
    puts("----- Command Line Calculator -----");

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