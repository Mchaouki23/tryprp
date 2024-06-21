#include <stdbool.h>
#include <stdio.h>

typedef struct t_bool{

bool	even(int nbr)
{
	if(nbr % 2 == 0)
		return true;
	else
		return false;
}

int	main()
{
	if(even(16) == true)
		printf("okay");
	else
		printf("hmmm");
}
