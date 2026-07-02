/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:29:39 by marvin            #+#    #+#             */
/*   Updated: 2026/04/28 16:29:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *haystack, char *needle, int len)
{
	int i;
  	  int j;

	if (!needle)
		return (haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle [j])
		{
			j++;
			if (needle[j] == '\0')
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
