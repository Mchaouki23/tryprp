#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}



int ft_strlen(char *str)
{
        int i = 0;

        while(str[i] != '\0')
        {
                i++;
        }

        return (i);
}

int main()
{
	char *s = "hello";
	char *d = malloc(ft_strlen(s) + 1);
	
	printf("%s", ft_strcpy(d, s));
}

