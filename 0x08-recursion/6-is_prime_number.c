#include "main.h"
#include <complex.h>

int check_prime(int i, int x);

/**
* is_prime_number - function that returns 1 if the input integer
*is a prime number
* @n: the number to be checked if prime or not.
*
* Return: (0) if not prime
*(1)if prime
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (check_prime(n, 2));
}
}

/**
* check_prime- helper function that checks every number till out passed number.
* @i: the passed number to be checked.
* @x: the number we start looping from.
*
* Return: (0)if not prime number.
*(1)if prime number.
*/

int check_prime(int i, int x)
{
if (x < i)
{
if (i % x == 0)
{
return (0);
}
else if (i % x != 0)
{
return(check_prime(i, x + 1));
}
}
return(1);
}
