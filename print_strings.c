#include "main.h"

/**
 * printChar - Print a character to the standard output.
 *
 * @args: Argument to print.
 *
 * Return: 1 if the character is printed and -1 if it fails.
 */
int printChar(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * printString - Print a string to stdout.
 *
 * @args: Argument to print.
 *
 * Return: the number of character printed or -1 if it fails.
 */
int printString(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * printReverse - Print a string in reverse.
 *
 * @args: String to print.
 *
 * Return: The number of character printed or -1 if it fails.
 */
int printReverse(va_list args)
{
	int len, i;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);

		return (i);
	}

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}

/**
 * printRoot13 - Print a root13 coded string.
 *
 * @args: String to encode.
 *
 * Return: The number of character printed or -1 if it fails.
 */
int printRoot13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, j;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);

		return (i);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			for (j = 0; letter[j] != '\0'; j++)
			{
				if (str[i] == letter[j])
				{
					_putchar(code[j]);
					break;
				}
			}
		}
		else
			_putchar(str[i]);
	}
	return (i);
}

/**
 * _putchar -  Print a character to stdout.
 *
 * @c: Character to print.
 *
 * Return: 1 if successfully printed -1 if it fails.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
