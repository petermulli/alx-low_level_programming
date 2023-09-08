#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 0 to 9, each on a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
	    printf(i+'0');
	    i++;
    }
	printf('\n');
    return (0);
}

