#include<stdlib.h>
#include<stdio.h>

int*	ft_range(int min, int max)
{
	int*	tab;
	int	len;
	int	i = 0;
	int	j = 0;

	len = max - min;
	if (len <= 0)
		return(NULL);
	tab = (int*)malloc(sizeof(int) * len);
	if (tab == NULL)
		exit(0);
	for(i = 0, j = min ; i < len; i++, j++)
		tab[i] = j;
	for(i = 0; i < len ; i++)
		printf("%d", tab[i]);
	printf("\n");
	free(tab);
	return(tab);
}


int	main()
{
	ft_range(2, 5);
	return(0);
}
