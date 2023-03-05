#include <stdio.h>
#include <stdlib.h>

void clearTerminal(void);

int main(void)
{
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