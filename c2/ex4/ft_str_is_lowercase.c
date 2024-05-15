#include <stdio.h>

int 	ft_str_is_alpha(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
			return 0;
		i++;
	}

	return 1;
}


int 	main()
{
	char *s = "madam, 2004";

	printf("%d", ft_str_is_alpha(s));
}

