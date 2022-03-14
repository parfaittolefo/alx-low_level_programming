#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)

{
    int n;
    /*
        In main function, we gerarate a rendom number n

        after that, we verify if it is negative, zero or positive


    */

    srand(time(0));
    n = rand();

    if (n < 0)
    {
        printf("%ld is negative",n);
    }

    else if(n>0)
    {
        printf("%ld is positive",n);
    }

    else
        printf("%ld is zero",n);

    return(0);
}
