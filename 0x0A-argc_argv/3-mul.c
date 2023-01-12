#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: array of numbers to be multiplied
 * Return: 0 if success, 1 if error
*/

int main(int argc, char *argv[])

{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
