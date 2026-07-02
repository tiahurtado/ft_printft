/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:03:34 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 19:58:17 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_itoa(int n)
{
    char *c;
    int len;
    long nbr;

    nbr = n;
    len = 0;

    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    if (nbr < 0)
    {
        c = malloc(sizeof(char) * len + 1);
        c[0] = '0';
        nbr = nbr * -1;
    }
    else
    {
        c = malloc(sizeof(char) * len);
    }
    while (len > 0)
    {
        c[len] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }

    return (c);
}