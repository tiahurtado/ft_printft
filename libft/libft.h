/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehurtad <sehurtad@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:57:16 by sehurtad          #+#    #+#             */
/*   Updated: 2026/04/29 16:57:16 by sehurtad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT
#define LIBFT

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

int ft_atoi(const char *str);
void *ft_bzero(void *string, int n);
void *ft_calloc(int nmemb, int size);
int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
void *ft_memchr(const void *s, int c, int n);
int ft_memcmp(const void *ptr1, const void *ptr2, int num);
void *ft_memcpy(void *dest, void *src, int n);
void *ft_memset(void *string, int convert, int n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strlcat(char *dst, const char *src, int size);
int ft_strlcpy(char *dest, const char *src, int size);
int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(char *haystack, char *needle, int len);
char *ft_strrchr(char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, int len);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
