#include "main.h"

/**
 * printDigit - Print a signed and unsigned digit to stdout.
 *
 * @args: Number to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int printDigit(va_list args)
{
	int num = va_arg(args, int);

	return (_printnum(num));
}

/**
 * printBinary - Print the binary code for unsigned int number to stdout.
 *
 * @args: Number to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int printBinary(va_list args)
{
	int flag = 0, count = 0;
	unsigned int i, n, mask = 1;

	n = va_arg(args, unsigned int);

	mask <<= (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		if (mask & n)
		{
			count += _putchar(1 + '0');
			flag = 1;
		}
		else
		{
			if (flag == 1 || i == sizeof(unsigned int) * 8 - 1)
				count += _putchar(0 + '0');
		}

		mask >>= 1;
	}

	return (count);
}

/**
 * printUnsigned - Print unsigned integer to the stdout.
 *
 * @args: Number to print
 *
 * Return: Number of character printed or -1 if it fails.
 */
int printUnsigned(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (_printuns(num));
}

/**
 * printOctal - Print a number in octal.
 *
 * @args: Number to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int printOctal(va_list args)
{
	char buffer[32];
	unsigned int index = 0, number;
	int digits = 0, i;

	number = va_arg(args, int);

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		buffer[index] = '0' + (number % 8);
		number /= 8;
		index++;
		digits++;
	}

	for (i = index - 1; i >= 0; i--)
		_putchar(buffer[i]);

	return (digits);
}
