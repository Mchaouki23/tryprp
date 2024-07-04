#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

int     check(char c, char *str, int l)
{
        int i = 0;
        while(i < l)
        {
                if(c == str[i])
                        return 1;
                else
                        i++;
        }
        return 0;
}

int     checkt(char *str, char c)
{
        int i = 0;
        while(str[i] != '\0')
        {
                if(str[i] == c)
                        return 1;
                else
                        i++;
        }
        return 0;
}
int	main(int argc, char **argv)
{
	if(argc == 3)
	{
		int i = 0;
		while(argv[1][i] != '\0')
		{
			if(check(argv[1][i], argv[1], i) == 1)
				i++;
			else
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
		i = 0;
		while(argv[2][i] != '\0')
		{
			if((check(argv[2][i], argv[2], i) == 1) || (checkt(argv[1], argv[2][i]) == 1))
				i++;
			else
			{
				ft_putchar(argv[2][i]);
				i++;
			}
		}
	  }
	write(1, "\n", 1);
	return 0;
}

