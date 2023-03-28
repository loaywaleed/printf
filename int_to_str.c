#include "main.h"

/**
 * int_to_str - turns intger to string
 * @num: input number
 * Return: str
 */
char *int_to_str(int num)
{
	char *str;
	int len = 0;
	int temp = num;
	int sign = 1;

	if (num == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == (NULL))
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (num < 0)
	{
		sign = -1;
		num = -num;
		len++;
	}
	while (temp != 0)
	{
		temp /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == (NULL))
		return (NULL);
	str[len] = '\0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
