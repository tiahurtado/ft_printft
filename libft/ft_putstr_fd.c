#include <unistd.h>
#include ¨libft.h¨

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(1,&s[i],fd)
    }
    
}