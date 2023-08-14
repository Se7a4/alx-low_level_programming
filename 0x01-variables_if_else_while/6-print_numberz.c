#include <stdio.h>

/**
 * main - solve it
 *
 * Description: digits 0-9
 *
 *Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
