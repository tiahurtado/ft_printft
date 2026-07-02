/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:02:00 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 16:16:43 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int nmemb, int size)
{
	char	*result;

	if (nmemb == 0 || size == 0)
		return(NULL);
	result = malloc(nmemb * size);
	while (nmemb > 0)
	{
		result[nmemb] = 0;
		nmemb--;
	}
	return(result);
}   
