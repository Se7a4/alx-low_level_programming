#include "main.h"

/**
* factorial - Function that returns the factorial of a given number.
* @n: parameter to int to get the factorial for.
*
* Return: (1) if the int is 0
*(-1) if the int is less than 0 which is an error
*returns the factorial of the int.
*/

int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
