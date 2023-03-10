#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt - returns the  natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - returns to find the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (1 * i == n)
return (1);
return (actual_sqrt_recursion(n, i + 1));
}
