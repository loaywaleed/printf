#include <limits.h>
#include <stdio.h>
#include "main.h"


int main(void)
{
	char str = 'n';
	int len = _printf("hello, %c\n", str);
	printf("%d\n", len);
	return (0);
}
