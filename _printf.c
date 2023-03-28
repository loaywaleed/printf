#include "main.h"

/**
 * _printf - function that prints formatted output
 * @format: format string
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	int i, length = 0;
	va_list args;

	va_start(args, format);
	if (format == (NULL))
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
				length += print_char(args);
				break;
				case 's':
				length += print_string(args);
				break;
				case '%':
				length++;
				put_char('%');
				break;
				case 'd':
				case 'i':
				lenght += print_int(args);
				break;
				default:
				length += print_default(format, i);
			}
			i++;
		}
		else
		{
			length++;
			put_char(format[i]);
		}
	}
	return (length);
}
