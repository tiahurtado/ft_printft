#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += process_format(&format, args);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}