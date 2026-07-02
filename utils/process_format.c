/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:14:07 by sehurtad          #+#    #+#             */
/*   Updated: 2026/07/02 15:14:07 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>

int	process_format(const char **format, va_list args)
{
	(*format)++;
	if (**format == 'c')
		return (print_char(va_arg(args, int)));
	if (**format == 's')
		return (print_string(va_arg(args, char *)));
	if (**format == 'd' || **format == 'i')
		return (print_int(va_arg(args, int)));
	if (**format == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	if (**format == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	if (**format == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	if (**format == 'p')
		return (print_pointer(va_arg(args, void *)));
	if (**format == '%')
		return (write(1, "%", 1));
	return (0);
}
