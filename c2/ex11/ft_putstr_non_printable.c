#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr_non_printable(char *str)
{
        int     i = 0;
        char hex[] = "0123456789abcdef";

        while(str[i] != '\0')
        {
                if(!(str[i] >= 32 && str[i] <= 126))
                {
                        ft_putchar('\\');
                        ft_putchar((str[i] / 16) + 48);

			int y = str[i] % 16;
                        if(y < 10)
                                ft_putchar(y);
                        else
                                ft_putchar(hex[y]);
                }
                else
                        ft_putchar(str[i]);
                i++;
        }
}


int main()
{
        char s[] = "Coucou\ntu vas bien ?";
        ft_putstr_non_printable(s);
}
