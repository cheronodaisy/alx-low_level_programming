#include "main.h"

/**
 * _strspn - return length of string that returns value consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes matched consecutively
*/

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
