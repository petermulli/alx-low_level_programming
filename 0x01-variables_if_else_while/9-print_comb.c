#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by a comma and space. Numbers are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

