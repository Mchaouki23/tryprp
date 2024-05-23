#include <unistd.h>

void 	ft_putchar(char c)
{
		write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return (i);
}

int     invalidarg(char *str, int len)
{
        int i = 0;
        int j;

        if(len == 0 || len == 1)
            return 1;
            
        while(str[i] != '\0')
        {
          if(str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
                  return 1;
          j = 1;
          while(str[j + i] != '\0')
          {
            if(str[i] == str[j + i])
                return 1;
            j++;
          }
          i++;
        }
        return 0;
}

void    ft_putnbr_base(int nbr, char *base)
{
        int i = 0;
        int len = ft_strlen(base);
        int x = invalidarg(base, len);
       
        if(x == 0)
        {
            if(nbr < 0)
            {
                ft_putchar('-');
                nbr *= -1;
            }
            
            if(nbr < len)
                ft_putchar(base[nbr]);
            
            if(nbr >= len)
            {
                ft_putnbr_base(nbr / len, base);
                ft_putnbr_base(nbr % len, base);
            }
        }
}

int	main()
{
	int nbr = 12;
	char s[] = "0123456789A(_DEF";

	ft_putnbr_base(nbr, s);
}
