#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - test if it is a number
 * @argvv: argv
 * Return: 0 if num, 1 if not
*/

bool is_num(char *argvv)

{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{

		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum ofnumber arguments
 * @argc: argument counter
 * @argv: argument
 * Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
