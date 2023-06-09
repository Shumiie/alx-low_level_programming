C - Pointers, arrays and strings

#[0. 98 Battery st. (0-reset_to_98.c]
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);

#[1. Don't swap horses in crossing a stream (1-swap.c)]
Write a function that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);

#[2. This report, by its very length, defends itself against the risk of being read (2-strlen.c)]
Write a function that returns the length of a string.
Prototype: int _strlen(char *s);

#[3. I do not fear computers. I fear the lack of them (3-puts.c)]
Write a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);

#[4. I can only go one way. I've not got a reverse gear (4-print_rev.c)]
Write a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);

#[5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes (5-rev_string.c)
Write a function that reverses a string.
Prototype: void rev_string(char *s);

#[6. Half the lies they tell about me aren't true (6-puts2.c)]
Write a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);

#[7. Winning is only half of it. Having fun is the other half (7-puts_half.c)]
Write a function that prints half of a string, followed by a new line.
Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

#[8. Arrays are not pointers (8-print_array.c)]
Write a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf

#[9. strcpy (9-strcpy.c)]
Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Return value: the pointer to dest

[0-reset_to_98.c]

#include "main.h"
/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: input
 * Return: n
 */
void reset_to_98(int *n)
{
	*n = 98;
}

[1-swap.c]

#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

[2-strlen.c]

#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

[3-puts.c]

#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

[4-print_rev.c]

#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

[5-rev_string.c]

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

[6-puts2.c]

#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

[7-puts_half.c]

#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

[8-print_array.c]

#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

[9-strcpy.c]

#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
