#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,2);
}

/*int main(){
	char c = 'h';
	ft_putchar(c);


	or we can write like this dirict :
	write(1, "h\n", 2);
}*/
