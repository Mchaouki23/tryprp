#include <stdio.h>

int	check(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '-' || str[i] == '+')
			j++;
		else if(str[i] >= '0' && str[i] <= '9' && j <= 1)
			k++;
		else
			return 0;
		i++;
	}
	return 1;
}

int	chopr(char *str)
{
	int i = 0;
	while(str[i] != '0')
	{
		if(str[i] != '*' && str[i] != '+' && str[i] != '-' && str[i] != '/' && str[i] != '%')
			return 0;
		i++;
	}
	return 1;
}

int	tonbr(char *str)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] = '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	fit_int(long nbr)
{
	if(nbr <= 2147483647 && nbr >= -2147483648)
		return 1;
	else
		return 0;
}

int	operation(int nb, int nb2, char *s)
{
	if(*s == '+')
		return (nb + nb2);
	if(*s == '-')
		return (nb - nb2);
	if(*s == '*')
		return (nb * nb2);
	if(*s == '/' && nb2 != 0)
		return (nb / nb2);
	if(*s == '%' && nb2 != 0)
		return (nb % nb2);
}
int	main(int argc, char **argv)
{
	if(argc == 4)
	{
		if(check(argv[1]) == 1 && check(argv[3]) == 1 && chopr(argv[2]) == 1)
		{
			int nb = tonbr(argv[1]);
			int nb2 = tonbr(argv[3]);
			if(fit_int((long)nb) == 1 && fit_int((long)nb2) == 1)
			{
				printf("%d", operation(nb, nb2, argv[2]));
				
			}
			else
				return 0;
		}
		else
			return 0;
	}
	printf("\n");
	return 0;
}
