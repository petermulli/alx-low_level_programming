#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Prints the uppercase and lowercase alphabets followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char u = 'A';
	char l = 'a';

	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}

