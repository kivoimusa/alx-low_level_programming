#include <stdio.h>
/**
*main-Entry point
*
*Return:Always 0 (success)
*/

int main(void)
{
char lower_case;
char upper_case;

for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
{
putchar(upper_case);
}
putchar('\n');
return (0);
}

