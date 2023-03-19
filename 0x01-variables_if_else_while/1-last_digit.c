#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- Entry point
*
*Return:Always 0 (success)
*/

int main(void)
{
int n;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Find last digit */
lastnum = n % 10;

if (lastnum > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
}

if (lastnum == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastnum);
}
