#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_write_comb(int a, int b, int end)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);

	if(end == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
     	int a;
	int b;
	int end;

	a = 0;
	end = 0;
	while(a <= 99)
	{
		b = a + 1;
		while(b <= 99)
		{
			if(a == 98 && b == 99)
				end++;
			ft_write_comb(a, b, end);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}
