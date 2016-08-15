#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int** range, int min, int max)
{
	int*	tab;
	int	len;
	int	i = 0;

	len = max - min;
	if (len <= 0)
	{
		range = NULL;
		return(0);
	}
	tab = (int*)malloc(sizeof(int) * len);
	if(tab == NULL) 		//du pur excès de zèle non demandé par la consigne
		exit(0);		//attention, non demandé par la consigne. A la place, return(0);
	*range = tab;
	for(i = 0 ; i < len; i++, min++)
		tab[i] = min;
	for(i = 0; i < len ; i++)
		printf("%d", range[0][i]);
	printf("\n");
	free(tab);
	return(i);
}


int	main()
{
	int**	range;

	printf("%d\n", ft_ultimate_range(range, 10, 12));
	return(0);
}
