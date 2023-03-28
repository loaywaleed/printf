#include "main.h"
/**
 * print_char - print a character
 * @args: args
 * Return: a character
 */

int print_char(va_list args)
{
	char temp;

	temp = va_arg(args, int);
	put_char(temp);
	return (1);
}

/**
 * print_string - prints a string
 * @args: args
 * Return: a string
 */

int print_string(va_list args)
{
	int j, count = 0;
	char *string, *str;

	string = va_arg(args, char *);

	if (string == (NULL))
	{
		str = "(null)";
		write(1, str, 6);
		count += 6;
	}
	else
	{
		for (j = 0; string[j]; j++)
		{
			put_char(string[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_default - prints deafault case
 * @index: index
 * @format: format
 * Return: a count
 *
 */
int print_default(const char *format, int index)
{
	int count = 0;

	if (format[index + 1] != '\0')
	{
		put_char('%');
		put_char(format[index + 1]);
		count += 2;
		return (count);
	}
	else
	{
		exit(-1);
	}
}
