/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:43:06 by marvin            #+#    #+#             */
/*   Updated: 2026/04/28 12:43:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *ptr1, const void *ptr2, int num)
{
	unsigned char    *s1;
	unsigned char    *s2;
	int                i;

	s1 = (unsigned char *) ptr1;
	s2 = (unsigned char *) ptr2;
	i = 0;
	while (s1[i] == s2[i] && i < num)
		i++;
	return (s1[i] - s2[i]);
}
