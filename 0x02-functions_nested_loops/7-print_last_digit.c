#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit will be printed.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = -last;
	}

	_putchar(last + '0');
	return (last);
}

