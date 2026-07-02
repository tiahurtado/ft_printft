/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:47:51 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/22 12:48:52 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *string, int n)
{
	char	*cast;
	int	i;

	i = 0;
	cast = (char *)string;
	while (i < n)
	{
	cast[i] = 0;
	i++;
	}
	return (cast);
}
