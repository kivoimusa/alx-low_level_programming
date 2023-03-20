#include <stdio.h>
#include <stdlib.h>
/**
*main-Entry point
*Return:Always 0 (success)
*/

int main(void)
{
int x;
int y;

for (x = 48; x <= 47; x++)
{
for (y = x + 1; y <= 57; y++)
{
putchar(x);
putchar(y);

if (x  != 46 && y != 57)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
}
return (0);
}
