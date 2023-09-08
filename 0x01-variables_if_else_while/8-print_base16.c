#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints hexadecimal numbers from 0 to 15.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		printf("%x", i);
	}
	putchar('\n');
	return (0);
}

