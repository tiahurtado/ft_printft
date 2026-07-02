/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:26:09 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/22 12:46:12 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *string, int convert, int n)
{
	char    *cast;
	int     i;

	i = 0;
	cast = (char *)string;
	while (i < n)
	{
		cast[i] = convert;
		i++;
	}
	return (cast);
}
