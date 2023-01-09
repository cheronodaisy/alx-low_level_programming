#include "main.h"

/**
 * _memset - Fills the first n bytes ofmemory area
 * @s: A pointer whose memory is filled
 * @b: The character to fill memory area with
 * @n: no. of bytes to be filled
 * Return: memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
