#include "main.h"

/**
 * _printf - function that prints formatted output
 * @format: format string
 * Return: number of printed characters
 */

int _printf(const char *format, ...)
{
	int i, j, len = 0;
	va_list args;
	
	va_start(args, format);
	if (format == (NULL))
	{
		return (-1);
	}
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				char temp;
				char *string, str;

				case 'c':
				temp = va_arg(args, int);
				put_char(temp);
				len++;
				break;

				case 's':
				string = va_arg(args, char *);
				if (string == (NULL))
				{
					_printf("(null)");
					return (6);
				}
				else
				{
					for (j = 0; string[j]; j++)
					{
						str = "(null)"
						write(1, str, 6);
						len += 6;
					}
				}
				break;

				case '%':
				put_char('%');
				len++;
				break;

				default:
				if (format[i + 1] != '\0')
				{
					put_char('%');
					put_char(format[i + 1]);
					len += 2;
				}
			}
			i++;
		}
		else
		{
			put_char(format[i]);
			len++;
		}
	}
	return (len);
	va_end(args);
}
