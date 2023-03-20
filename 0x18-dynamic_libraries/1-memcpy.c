#include "main.h"

/**
 * _memcpy - copy memory bytes to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}
return (dest);
}
