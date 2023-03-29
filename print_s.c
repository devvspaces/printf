
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
	char *s;
	int i, count;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
		count = _strlen(s);
		for (i = 0; i < count; i++)
			_putchar(s[i]);
		return (count);
	}
	else
	{
		count = _strlen(s);
		for (i = 0; i < count; i++)
			_putchar(s[i]);
		return (count);
	}
}
