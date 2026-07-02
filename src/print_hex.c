/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:18:58 by sehurtad          #+#    #+#             */
/*   Updated: 2026/07/02 15:19:18 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_hex(unsigned int n, int upper)
{
	if (upper == 0)
		return (ft_putnbr_base(n, "0123456789abcdef"));
	if (upper == 1)
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
	return (0);
}
