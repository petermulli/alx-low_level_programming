#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char st = 'z';

    while (st >= 'a')
    {
        putchar(st);
        st--;
    }

    putchar('\n');

    return (0);
}

