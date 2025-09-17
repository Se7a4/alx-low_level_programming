#include "main.h"

/**
* _strlen_recursion - recursive Function that returns the length of a string.
* @s: parameter pointer to the string given.
*
* Return: integer to the length of the string.
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
