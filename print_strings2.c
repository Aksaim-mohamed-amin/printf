#include "main.h"

/**
 * printCustomString - Print a string to the stdout
 *                     Non printable characters(0 < ASCII value < 32 or >= 127)
 *                     are printed this way: \x, followed by the ASCII code
 *                     value in hexadecimal (upper case - always 2 characters).
 *
 * @args: String to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int printCustomString(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
			count += _putchar(str[i]);
		else if (str[i] > 14)
			count += _printf("\\x%X", str[i]);
		else
			count += _printf("\\x0%X", str[i]);
	}

	return (count);
}
