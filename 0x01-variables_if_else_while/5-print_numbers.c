#include <stdio.h>

/**
*main-Entry point
*
*Return:Always 0 (Success/correct)
*/

int main(void)
{
char x;
char i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (x = 'a'; x < 'g'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
