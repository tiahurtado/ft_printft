/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:37:32 by marvin            #+#    #+#             */
/*   Updated: 2026/04/28 12:37:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, int n)
{
	int i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (ptr[i])
	{
		if (ptr[i] == c)
			return (&ptr[i]);
	i++;
	}
	return (NULL);
}
