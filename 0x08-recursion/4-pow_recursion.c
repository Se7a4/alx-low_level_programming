#include "main.h"

/**
* _pow_recursion - function that returns the value of x raised
*to the power of y.
* @x: intger to the value passed.
* @y: intger to the power of the value.
*
* Return: (-1) if the value of the power is less than 0
*(1) if the value of y is equal to 0
*(value of x raised to the power of y).
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * (_pow_recursion(x, y - 1)));
}
