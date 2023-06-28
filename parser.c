#include "main.h"

/**
 * parser - Takes the argument from the _printf function and checks
 *          for the right function to call depending on the specifier.
 *
 * @format: String including the specifier to print.
 * @printFunctions: Array of the functions that will handle printing
 *                  different types of data.
 * @args: Argument passed to _printf to be printed.
 *
 * Return: The number of characters printed or -1 if it fails.
 */
int parser(const char *format, PrintFunction printFunctions[], va_list args)
{
	int i = 0, j, charsPrinted = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
		{
			int specifier_found = 0;

			for (j = 0; j < 11; j++)
			{
				if (format[i + 1] == printFunctions[j].specifier)
				{
					specifier_found = 1;
					charsPrinted += printFunctions[j].pf(args);
					i++;
					break;
				}
			}
			if (!specifier_found)
				charsPrinted += _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			charsPrinted += _putchar('%');
			i++;
		}
		else if (format[0] == '%' && format[1] == '\0')
		{
			return (-1);
		}
		else
			charsPrinted += _putchar(format[i]);
		i++;
	}
	return (charsPrinted);
}
