#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}


int main()
{
	char *s = "hello";
	char *d = malloc(4);
	
	printf("%s", ft_strncpy(d, s, 3));
}

