/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:24:46 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 19:23:15 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int     size;
	int     i;
	char    *str;

	size = ft_strlen(s);
	str = malloc(size * sizeof(char));
	i = 0;
	while (i < size)
	{
		str [i] = s[i];
		i++;
	}
	return (str);
}
