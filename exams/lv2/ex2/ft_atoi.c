#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
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

int	main()
{
	char *str = " --123nb76n";
	printf("me %d\n", ft_atoi(str));
	printf("real %d", atoi(str));
}
