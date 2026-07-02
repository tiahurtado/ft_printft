/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:36:10 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 19:12:38 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char    *str;
	int     size1;
	int     size2;
	int     i;

	i = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	str = malloc((size1 * sizeof(char)) + (size2 * sizeof(char)));

	while (i < size1)
	{
		str[i] = s1[0];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		str[i] = s2[0];
		i++;
	}
	return (str);
}
