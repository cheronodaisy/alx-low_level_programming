#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: argument counter
 * @argv: pinter to array of arguments
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))

{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
