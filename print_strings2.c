#include "main.h"

/**
 * printCustomString - Print a string to the stdout
 *                     Non printable characters (0 < ASCII value < 32 or >= 127)
 *                     are printed this way: \x, followed by the ASCII code
 *                     value in hexadecimal (upper case - always 2 characters).
 *
 * @args: String to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int printCustomString(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 32)
			_putchar(str[i]);
		else if (str[i] > 14)
			_printf("\\x%X", str[i]);
		else
			_printf("\\x0%X", str[i]);
	}

	return (i);
}
