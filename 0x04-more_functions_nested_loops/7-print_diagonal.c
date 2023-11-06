#include "main.h"
/**
 * print_diagonal- function that draws a diagonal line on the terminal.
 *
 * Description: printing digonal line.
 * @n: the numper of the diagonal slashes
 * returns: always 0.
*/

void print_diagonal(int n)
{
int slash = 0;
int space = 0;
if (n < 1)
{
_putchar('\n');
}
else
while (slash < n)
{
space = 0;
while (space < slash)
{
_putchar(' ');
space++;
}
_putchar(92);
_putchar('\n');
slash++;
}
}

