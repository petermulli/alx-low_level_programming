#include "main.h"

/**
 * _isalpha - Check if a character is alphabetic
 *
 * @c: The character to check
 *
 * Return: 1 if the character is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
