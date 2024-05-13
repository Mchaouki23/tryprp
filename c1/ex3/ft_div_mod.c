#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

int main()
{
	int a = 20;
	int b = 10;

	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("div = %d\n mod = %d",a, b);
}
