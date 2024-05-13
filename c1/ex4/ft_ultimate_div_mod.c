#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	if(b != 0)
	{
		int div = *a / *b;
		int mod = *a % *b;

		*a = div;
		*b = mod;
	}
}

int main()
{
	int a = 100;
	int b = 30;

	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\n mod = %d",a, b);
}

