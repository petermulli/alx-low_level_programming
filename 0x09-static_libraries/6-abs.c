#include "main.h"
/**
 * _abs - gets absolute number
 *  Return: Absolute value of number
 */
int abs(int c)

{
	if (c < 0)
	{
	int abs_val;
	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
