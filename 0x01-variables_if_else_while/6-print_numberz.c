#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9, each on a new line using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		putchar('\n');
	}
	return (0);
}

