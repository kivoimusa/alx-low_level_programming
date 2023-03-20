#include <stdio.h>

/**
*main-Entry point
*Description:Prints numbers 0 to 9 followed by a new line
*Return:Always 0 (success)
*/

int main(void)
{
int x = 0;
while (x < 10)
{
printf("%d", x);
x++;
}
putchar('\n');
return (0);
}
