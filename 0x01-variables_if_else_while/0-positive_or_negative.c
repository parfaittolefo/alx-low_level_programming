#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)

{
    long n;
    /**
        *In main function, we gerarate a rendom number n

        *after that, we verify if it is negative, zero or positive

        *At end we return 0

    */

    srand(time(0));
    n = rand() - RAND_MAX /2;

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
