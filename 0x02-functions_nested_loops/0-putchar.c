#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always SUCCESS (0)
 */
int main(void)
{
    write(STDOUT_FILENO, "_putchar\n", 9);
    return (SUCCESS);
}

