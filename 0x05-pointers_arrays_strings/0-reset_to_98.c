#include <stdio.h>

/**
 * updateValue - Update the value of an integer through a pointer.
 * @ptr: Pointer to an integer whose value needs to be updated.
 *
 * This function updates the value of the integer pointed to by 'ptr' to 98.
 */
void updateValue(int *ptr)
{
	*ptr = 98; /* Update the value pointed to by 'ptr' to 98 */
}

int main(void)
{
	int num = 42;

	printf("Before: %d\n", num);

	/* Call the function to update the value */
	updateValue(&num);

	printf("After: %d\n", num);

	return (0);
}

