#include "main.h"

/**
* set_string - function that sets the value of a pointer to a char.
* @s: double pointer that has the changed value.
* @to: pointer to sring the holds the wanted value
* return: always void.
*/

void set_string(char **s, char *to)
{
*s = &*to;
}
