#include <stdio.h>
#include <stdlib.h>

unsigned int NumberOne = 55;
unsigned int NumberTwo = 66;
signed int NumberThree = -2;

int main()
{
    printf("Result = %i \n", (NumberOne && NumberTwo));
    printf("Result = %i \n", (NumberOne & NumberTwo));
    printf("Result = %i \n", (NumberOne && NumberThree));
    return 0;
}
