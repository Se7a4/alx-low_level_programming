#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string,
 * followed by a new line.
 *
 * @s: it is the parameter that refers to a string.
 *
 * Return: Always 0.
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
	return (0);
}
_putchar(*s);
_puts_recursion(s + 1);
}

