#include "main.h"

/**
 * find_root -  finds square root of n
 * @n: n
 * @root: test this root
 * Return: natural square root
*/
int find_root(int n, int root)

{
if (root * root > n)
return (-1);
if (root * root == n)
{
return (root);
}
return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: integer
 * Return: matural square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_root(n, 0));
}
