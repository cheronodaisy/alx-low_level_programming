#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to be checked
 * Return: pointer to spot in s with c or null
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
