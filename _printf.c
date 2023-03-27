#include "main.h"

/**
 * _printf - function that prints formatted output
 * @format: format string
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	int i, j;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] = '%')
		{
			return(-1);
		}
		switch (format[i + 1])
		{
			char temp;
			char *string;
			case 'c':
			temp = va_arg(args, int);
			put_char(temp);
			break;
			case 's':
			string = va_arg(args, char *);
			for (j = 0; string[j]; j++)
			{
				put_char(string[j]);
			}
			break;
		}
		i++;
	}
	else
	{
		put_char(format[i]);
	}
	return (0);
}
