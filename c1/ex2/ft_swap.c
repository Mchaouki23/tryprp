#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

int main()
{
	int a = 13;
	int b = 4;

	ft_swap(&a, &b);
	printf("a = %d  \n b = %d  \n",a, b);
}
