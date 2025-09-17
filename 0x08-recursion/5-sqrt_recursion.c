#include "main.h"
int helper_recursion(int n, int guess);

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: parametr to the integer we search for it's square.
*
* Return: (-1) if the int is less than 0
*(value of the square root)
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (helper_recursion(n, 1));
}

/**
* helper_recursion - function that helps to loop on the square root guessing.
* @n:parametr to the integer we search for it's square.
* @guess: Parameter to the int we start guessing from.
*
* Return: (-1) if the guess*2 is more than the given int
*(guess) if we found the real square root
*/

int helper_recursion(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
if (guess * guess > n)
{
return (-1);
}
return (helper_recursion(n, guess + 1));
}
