#include "holberton.h"

/**
* rot13 - rotates the letters by 13 index.
* @s: The parameter Pointer to string
* return: @s
*/

char *rot13(char *s)
{
int  i = 0;
int j;
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] > 109 && s[i] <= 122) || (s[i] > 77 && s[i] <= 90))
{
j = *(s + i);
j -= 13;
*(s + i) = j;
}
else if ((s[i] <= 109 && s[i] >= 97) || (s[i] <= 77 && s[i] >= 65))
{
j = *(s + i);
j += 13;
*(s + i) = j;
}
}
return (s);
}
