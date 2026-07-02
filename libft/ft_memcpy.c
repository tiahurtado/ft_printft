/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:29:12 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/22 13:56:09 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char    *castdest;
	char    *castsrc;

	castdest = (char *)dest;
	castsrc = (char *)src;

	while(n > 0)
        {
            castdest [n] = castsrc [n];
            n--;
        }
        return (castdest);
    }
