#include<stdlib.h>



int*	ft_range(int min, int max)
{
	int	tab* = NULL;
	int	i = 0;
	int	j = 0;
	int	LEN = max - min;
	tab = (int*)malloc(sizeof(int) * (LEN));
	for(i = 0, j = min; i < LEN ; i++, j++)
		tab[i] = min;
	return(tab);
}

int	main()
{
	return(0);
}
