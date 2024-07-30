#include "main.h"

/**
  * _printf - print to stout formatted text
  * @format: format specifier
  * Return: no of bytes printed
  */

int _printf(const char *format, ...)
{
	unsigned int i, s_cout, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
                 return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_count = _puts(va_arg(args, char));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('&');	
		}
		count++;
	}
	va_end(args);
	return (count);
}
