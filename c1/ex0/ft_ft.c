#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int n;
	int *nbr = &n;

	ft_ft(nbr);
	printf("%d", n);
}
