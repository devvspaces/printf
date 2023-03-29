#include "main.h"

/**
 * _printf - print_f implementation
 *
 * @format: format string
 *
 * Description: work on it
 *
 * Return: int, number of bytes printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int len = 0;
	int finder;
	PRINTER converters[] = {
		{"c", print_c},
		{"s", print_s},
	};

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			finder = 0;
			while (finder < 2)
			{
				if (*(converters[finder].type) == format[i])
				{
					len += converters[finder].print(args);
					break;
				}
				finder++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
	}

	va_end(args);
	return (len);
}
