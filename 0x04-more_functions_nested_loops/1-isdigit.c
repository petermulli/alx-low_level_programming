#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @y: The integer to check
 * Return: Returns 1 for a digit, 0 otherwise
 */
int _isdigit(int y)
{
	if (y >= 0 && y <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

