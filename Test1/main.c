#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int NumberOne = 2;
    unsigned int NumberTwo = 2;

    printf("Result = %i \n", (NumberOne == NumberTwo));

    if(NumberOne == NumberTwo){
        printf("Yes \n");
    }

    if(NumberOne = NumberTwo){
        printf("Yes -- \n");
    }

    if(5 == NumberTwo){
        printf("Yes 1 \n");
    }

    if(NumberTwo == 5){
        printf("Yes 2 \n");
    }

    if(NumberTwo = 5){
        printf("Yes 3 \n");
    }

    if(5 == NumberTwo){
        printf("Yes 4 \n");
    }

    return 0;
}
