#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if(nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr(nbr);
	}
	else if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar('0' + nbr);

}

int main()
{
	ft_putnbr(-27483648);
}

