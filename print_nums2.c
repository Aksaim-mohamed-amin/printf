#include "main.h"

/**
 * printHexLower - Print the hex of a number in lower case.
 *
 * @args: Number to print.
 *
 * Return: The number of character printed or -1 if it fails.
*/
int printHexLower(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char buffer[32];
	int index = 0, digits = 0, i, remainder;

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		remainder = number % 16;

		if (remainder < 10)
			buffer[index] = '0' + remainder;
		else
			buffer[index] = 'a' + (remainder - 10);

		number /= 16;
		index++;
		digits++;
	}

	for (i = index - 1; i >= 0; i--)
		_putchar(buffer[i]);

	return (digits);
}

/**
 * printHexUpper - Print the hex of a number in upper case.
 *
 * @args: Number to print.
 *
 * Return: The number of character printed or -1 if it fails.
*/
int printHexUpper(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char buffer[32];
	int index = 0, digits = 0, i, remainder;

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		remainder = number % 16;

		if (remainder < 10)
			buffer[index] = '0' + remainder;
		else
			buffer[index] = 'A' + (remainder - 10);

		number /= 16;
		index++;
		digits++;
	}

	for (i = index - 1; i >= 0; i--)
		_putchar(buffer[i]);

	return (digits);
}
