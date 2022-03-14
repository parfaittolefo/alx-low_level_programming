#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n, last;

    srand(time(0));

	n = rand() - RAND_MAX / 2;

	last = n % 10;

    if(last > 5)
    {

            printf("Last digit of %d is %d and is greater than 5",n,last);

    }

    if(last == 0)
    {

            printf("Last digit of %d is 0 and is 0", n);

    }

    else
    {

            printf("Last digit of %d is %d and is less than 6 and not 0",n, last);

    }

    return (0);

}
