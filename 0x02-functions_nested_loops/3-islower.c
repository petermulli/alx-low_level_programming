#include "main.h"

/**
 * _islower - gets lowercase character
 * @c: Chaaracter being checked
 * Return: 1 when charachter is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

