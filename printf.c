#include "main.h"

/**
 * _printf - Replicate of printf function.
 *
 * @format: String and variables to print.
 *
 * Return: The number of the character printed or -1 if it fails.
 */
int _printf(const char *format, ...)
{
	int charsPrinted = 0;
	va_list args;
	PrintFunction printFunctions[] = {
		{'c', printChar}, {'s', printString}, {'i', printDigit},
		{'d', printDigit}, {'b', printBinary}, {'u', printUnsigned},
		{'o', printOctal}, {'x', printHexLower}, {'X', printHexUpper},
		{'r', printReverse}, {'R', printRoot13},
		{'S', printCustomString}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	charsPrinted = parser(format, printFunctions, args);

	va_end(args);

	return (charsPrinted);
}
