#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, excluding 'e' and 'q', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
			lowercase++;
		}
		else
		{
			lowercase++;
		}
	}

	putchar('\n');

	return (0);
}

