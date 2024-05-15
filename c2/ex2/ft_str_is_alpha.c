#include <stdio.h>

int 	ft_str_is_alpha(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			i++;
		else
		{
			return 0;
			i++;
		}
	}

	return 1;
}


int 	main()
{
	char *s = "hola, sinyoritta";

	printf("%d", ft_str_is_alpha(s));
}

