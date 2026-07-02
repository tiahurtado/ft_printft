/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:19:27 by sehurtad          #+#    #+#             */
/*   Updated: 2026/07/02 15:20:06 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

int	int_len(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb <= 0)
	{
		len++;
		nb = -nb;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	print_int(int n)
{
	ft_putnbr_fd(n, 1);
	return (int_len(n));
}
