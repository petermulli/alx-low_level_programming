#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9
 * Return: Returns 0 to 9
 */
int print_numbers(void)
{
int y;
for (y = 0; y <= 9; y++)
{
_putchar(y + '0');
}
_putchar('\n');
}
