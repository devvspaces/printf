
#include "main.h"

/**
 * print_s - print string
 *
 * @args: va_list
 *
 * Return: int, bytes printed
 */
int print_s(va_list args)
{
	int count = 0;
	char *s = va_arg(args, char *);

	while (s[count] != '\0')
	{
		write(1, &s[count], 1);
		count++;
	}

	return (count);
}
