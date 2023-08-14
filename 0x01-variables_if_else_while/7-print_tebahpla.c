#include <stdio.h>

/**
 * main - solve it
 *
 * Description: print z-a
 *
 *Return: 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
