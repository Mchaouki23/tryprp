#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while(str[i] == '+' || str[i] == '-')
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *base)
{
	int	i;
	int	j;
	int	x;
	
	x = ft_strlen(base);
	i = 0;
	if (base[0] == '\0' || x == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int i = 0;
	int j = 0;
	int nb = ft_atoi(str);
	int error = checkerror(base);
	int sign = 1;
	
	if(nb[0] == '-')
		sign *= -1;
	if(error == 1)
	{
		while(nb[i] != '\0' || base[j] != '\0')
		{
			if(nb[i] == base[j])
			{
				nb[i] = j;
				j++;
			}













}

int	main()
{
	char str = " -1A34";
	char base = "0123456789ABCEF";

	printf("%d", ft_atoi_base(str, base));
}

