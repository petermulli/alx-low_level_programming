#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
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

	return (0);
}

