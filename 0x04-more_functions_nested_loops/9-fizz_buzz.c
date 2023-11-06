#include <stdio.h>

/**
 * main- entry point.
 *
 * Description: prints the numbers from 1 to 100 and fizz buzz for 3 and 5
 *
 * return: always (0).
*/

int main(void)
{
int num;
for (num = 1 ; num <= 100 ; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("Fizz");
printf("Buzz");
printf(" ");
}
else if (num % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else if (num % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else
{
printf("%d", num);
printf(" ");
}
}
printf("\n");
return (0);
}
