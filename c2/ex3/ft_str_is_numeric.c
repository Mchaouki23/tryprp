#include <stdio.h>

int 	ft_str_is_alpha(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		i++;
	}

	return 1;
}


int 	main()
{
	char *s = "587d4";

	printf("%d", ft_str_is_alpha(s));
}

