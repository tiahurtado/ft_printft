/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:12:13 by sehurtad          #+#    #+#             */
/*   Updated: 2026/07/02 15:12:13 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		process_format(const char **format, va_list args);
int		print_char(char c);
int		print_string(char *string);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, int upper);
int		print_pointer(void *ptr);
int		int_len(int n);
int		ft_putnbr_base(unsigned long n, char *base);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *str);

#endif