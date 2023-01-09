#include "main.h"
#define NULL

/**
 * _strpbrk - return pointer to byte in s
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)

{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
		s++;
	}
	return ('\0');
}
