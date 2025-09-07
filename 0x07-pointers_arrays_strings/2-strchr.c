#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != c; i++)
{
if (s[i] == '\0')
return (&s[i]);
}
return (&s[i]);
}
