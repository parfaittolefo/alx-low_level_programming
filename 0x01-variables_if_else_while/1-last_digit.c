#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
* We generate a random number
* we converte it in string
* get last digit
*verify it wiyh diffferent condition
*/

int main(void)
{
    int n, last;
    char str[20];
    srand(time(0));
    n=rand()-RAND_MAX / 2;
    last=n%10;

    if(last>5)
    {
        printf("Last digit of %d is %d and is greater than 5",n,last);
    }

    if(last==0)
    {
        printf("Last digit of %d is 0 and is 0",n);
    }

    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0",n,last);
    }

    return (0);

}
