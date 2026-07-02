#include <unistd.h>
#include ¨libft.h¨

void ft_putnbr_fd(int n, int fd)
{
    char *str;

    str = ft_itoa(n);
    ft_putstr(str);
}