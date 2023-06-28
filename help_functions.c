#include "main.h"

/**
 * _strlen - Calculat the lenght of a string.
 *
 * @str: String to calculate it length.
 *
 * Return: The lenght of the string
*/
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}

/**
 * _printnum - Print a number to stdout.
 *
 * @num: Number to print.
 *
 * Return: Number of characters printed.
 */
int _printnum(int num)
{
	int count = 0;

	if (num == INT_MIN)
	{
		count += _putchar('-');
		count += _putchar('2');
		num %= 1000000000;
		num = -num;
	}
	else if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (num > 9)
	{
		count += _printnum(num / 10);
	}

	count += _putchar(num % 10 + '0');

	return (count);
}

/**
 * _printuns - Print unsigned number to stdout.
 *
 * @num: Number to print.
 *
 * Return: Number of characters printed.
 */
int _printuns(unsigned int num)
{
	int count = 0;

	if (num > 9)
		count += _printnum(num / 10);

	count += _putchar(num % 10 + '0');

	return (count);
}
