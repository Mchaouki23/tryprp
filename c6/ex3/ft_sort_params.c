#include <unistd.h>
//something is wrong i dont know what is it:)
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}

}
int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] != '\0' || s2[i] != '\0')
	{
		if(s1[i] > s2[i])
			return (1);
		else
			i++;
	}
	return (0);
}

void ft_swap(char **a, char **b)
{
	char *swap;
     	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(int argc, char *argv[])
{
	int i = 1;
        int j;

        while(i < (argc - 1))
        {
                j = 1;
                while(j < (argc - 1 - i))
                {

                        if(ft_strcmp(argv[j], argv[j+1]) == 1)
                        {
                                ft_swap(&argv[j], &argv[j +1]);
                        }
                        j++;
                }
                i++;
        }
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
