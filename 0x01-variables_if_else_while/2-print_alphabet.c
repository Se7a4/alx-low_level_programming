#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: print the alphabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)

	char ch = 'a';

	while (ch <= 'z')
	{
		puttcher(ch);
		ch++;
	}
	putcher('\n');

	return (0);
