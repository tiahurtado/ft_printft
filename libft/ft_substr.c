/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:29:40 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 16:35:44 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	if (len == 0)
	{
		str = malloc(1);
		str [0] = '\0';
		return (str);
	}
	
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main (void)
{
	int i = 0;
	char *s = ft_substr("trip", 1, 1);
	while (s[i])
		write(1,&s[i++],1);
	
}