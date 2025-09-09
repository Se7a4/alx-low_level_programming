#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p;
for (; *s; s++)
{
for (p = accept; *p; p++)
{
if (*s == *p)
{
break;
}
}
if (*p == '\0')
{
break;
}
count += 1;
}
return (count);
}
