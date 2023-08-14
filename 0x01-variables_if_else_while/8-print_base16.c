#include <stdio.h>

/**
 * main - solve it
 *
 * Description: base16 in lower
 *
 *Return: 0
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
