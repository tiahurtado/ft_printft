/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:03:38 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 19:02:59 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_words(char const *s, char c)
{
    int i = 0;
    int count = 0;

    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}

int word_len(char const *s, char c, int i)
{
    int len = 0;

    while (s[i] && s[i] == c)
        i++;
    while (s[i] && s[i] != c)
    {
        len++;
        i++;
    }
    return (len);
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **res;

    if (!s)
        return (NULL);
    res = malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!res)
        return (NULL);

    i = 0;
    j = 0;

    while (s[i])
    {
        k = 0;
        while (s[i] == c)
            i++;

        res[j] = malloc(sizeof(char) * word_len(s, c, i) + 1);

        while (s[i] && s[i] != c)
        {
            res[j][k] = s[i];
            k++;
            i++;
        }
        res[j][k] = '\0';
        free(res[j]);
        j++;
    }
    
    return (res);
}
