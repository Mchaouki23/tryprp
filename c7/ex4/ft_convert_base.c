#include <stdlib.h>
#include <stdio.h>

//convert string to dicimal
int     ft_atoi_base(char *str, char *base);
int     ft_strlen(char *s);
//check for invalide base
int     checkerror(char *base);

char    *ft_putnbr_base(int nbr, char *base, char *n,int len, int size)
{
        int i = size - 1;
	if(nbr < 0)
	{
		n[0] = '-';
		nbr *= -1;
	}
	n[i--] = '\0';
        while(nbr > 0)
        {
          n[i] = base[nbr % len];
	  nbr = nbr / len;
	  i--;
        }
        return n;
}

//size of string newbase
int	ft_size(int nbr, int len)
{
	int i = 0;
        if(nbr < 0)
        {
                i++;
                nbr *= -1;
        }
	while(nbr > 0)
        {
            nbr = nbr / len;
            i++;
        }
	return (i);
}

//covert number to nwebase
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if(!checkerror(base_from) || !checkerror(base_to))
		return NULL;
	int nb = ft_atoi_base(nbr, base_from);
       	int len = ft_strlen(base_to);
	int size = ft_size(nb,len) + 1;
	char *new = malloc(size * sizeof(char) + 1);
	if(!new)
		return 0;
	return (ft_putnbr_base(nb, base_to, new, len, size));
}

int	main()
{
	char str[] =  "  -1A3";
	char bfrome[] = "0123456789ABCDEF";
	char bto[] = "0123456789";
	char *t = ft_convert_base(str, bfrome, bto);
	printf("%s\n", t);
} 
