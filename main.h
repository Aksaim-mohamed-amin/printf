#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/* Structurs */
/**
 * struct functions - print function structur.
 * @specifier: character indecating the specifier to use.
 * @pf: Function that will handl the printing.
*/
typedef struct functions
{
	char specifier;
	int (*pf)(va_list args);
} PrintFunction;

/* Main Function */
int _printf(const char *format, ...);
int parser(const char *format, PrintFunction printFunctions[], va_list args);
int printChar(va_list args);
int printString(va_list args);
int printPercent(va_list args);
int printDigit(va_list args);
int printBinary(va_list args);
int printUnsigned(va_list args);
int printOctal(va_list args);
int printHexLower(va_list args);
int printHexUpper(va_list args);
int printReverse(va_list args);
int printRoot13(va_list args);

/* Help Functions */
int _putchar(char c);
int _strlen(char *str);
int _printnum(int num);
int _printuns(unsigned int num);

#endif /* MAIN_H */
