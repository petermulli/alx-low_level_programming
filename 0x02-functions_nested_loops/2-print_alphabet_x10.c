#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet x10
 * Return: void
 */
void print_alphabet_x10(void)
{

char c;
int i;
i = 0;
while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
