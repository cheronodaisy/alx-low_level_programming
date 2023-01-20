Variadic functions in C
They can accept an unlimited number of arguments, for example, printf.

This exercise addresses the following problems;
1. Write a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

2. Write a function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers and n is the number of integers passed to the function

3. Write a function that prints strings, followed by a new line.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings and n is the number of strings passed to the function

4. Write a function that prints anything.
Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
