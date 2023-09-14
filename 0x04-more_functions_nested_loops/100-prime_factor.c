#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long long largest_prime_factor(long long n)
{
	long long largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (long long i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	if (n > 2)
		largest = n;

	return largest;
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	long long number = 612852475143;
	long long result = largest_prime_factor(number);

	printf("%lld\n", result);

	return (0);
}

