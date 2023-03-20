#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check
 * Return: If c is found - a pointer to the first occurence
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
