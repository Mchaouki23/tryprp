#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i = 0;
	int len;
	while(strs[len] != NULL)
		len++;
	while(sep[i] != '\0')
		len++;
	int *arr = malloc(len * sizeof(int));
	if(t == 0)
		return 0;
	while(arr[i] != NULL)
	{
		while(arr[i] == '\0')

}

int	main()
{
	char *s[] = {"hello","hi","by"};
	char sp[] = ": ";
	int t = 3;
	int i = 0;
	while(i < t)
	{
		printf("%", ft_strjoin(t, &s, &sp));
		i++;
	}


}
