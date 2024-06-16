#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *base, int x)
{
	int	i;
	int	j;
	
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
	int len = ft_strlen(base);
	int error = checkerror(base, len);
	int i = 0;
	int sign = 1;
	int result = 0;
	int j;
	int found = 0;//check for invaled characters
	if(error == 1)
        {
                while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
                        i++;
                while(str[i] == '+' || str[i] == '-')
                {
                        if(str[i] == '-')
                                sign *= -1;
                        i++;
                }
                while(str[i] != '\0')
                {
                        j = 0;
                        while(base[j] != '\0')
                        {
                                if(str[i] == base[j])
                                {
                                        result = (result * len) + j;
					found = 0;
                                        break;
                                }
				else
					found++;
                                j++;
                        }
			if(found > 0)
			{
				result = 0;
				break;
			}
                        i++;
                }
        }

	return (result * sign);
}

int	main()
{
	char str[] = " -1A3s4";
	char base[] = "0123456789ABCDEF";
	printf("%d", ft_atoi_base(str, base));
}
