/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:59:17 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 19:20:07 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int ft_isset(const char c, const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (c == s[i])
            return (1);
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     i;
    int     start;
    int     end;
    
    start = 0;
    i = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_isset(s1[start], set))
        start++;
    while (end > start && ft_isset(s1[end - 1], set))
        end--;
    if (end - start <= 0)
        return (NULL);
    
    str = malloc(sizeof(char) * (end - start) + 1);
    i = 0;
    while (start < end)
    {
        str[i] = s1[start];
        start++;
        i++;
    }
    str[i] = '\0';
    return (str);
}

