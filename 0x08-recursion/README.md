C - Recursion

#[0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget (0-puts_recursion.c)]
Write a function that prints a string, followed by a new line.
Prototype: void _puts_recursion(char *s);

#[1. Why is it so important to dream? Because, in my dreams we are together (1-print_rev_recursion.c)]
Write a function that prints a string in reverse.
Prototype: void _print_rev_recursion(char *s);

#[2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange (2-strlen_recursion.c)
Write a function that returns the length of a string.
Prototype: int _strlen_recursion(char *s);

#[3. You mustn't be afraid to dream a little bigger, darling (3-factorial.c)]
Write a function that returns the factorial of a given number.
Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1

#[4. Once an idea has taken hold of the brain it's almost impossible to eradicate (4-pow_recursion.c)]
Write a function that returns the value of x raised to the power of y.
Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1

#[5. Your subconscious is looking for the dreamer (5-sqrt_recursion.c)]
Write a function that returns the natural square root of a number.
Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1

#[6. Inception. Is it possible? (6-is_prime_number.c)]
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
Prototype: int is_prime_number(int n);

[0-puts_recursion.c]

#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

[1-print_rev_recursion.c]

#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

[2-strlen_recursion.c]

#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

[3-factorial.c]

#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

[4-pow_recursion.c]

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

[5-sqrt_recursion.c]

#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
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
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

[6-is_prime_number.c]

#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

