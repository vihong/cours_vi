#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define	LEN	5


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	afficheTab(int* tab , int tailleTab)
{
	int	i;
	for(i = 0; i < tailleTab; i++)
		printf("%d", tab[i]);
}

int	main()
{
	int	i = 0;
	int*	tab;
	int	tab[2] = {0, 1};
	int	tab[5] = {0}
	
	tab = (int*)malloc(sizeof(*tab) * LEN);

	i = 0;
	while(i < LEN)
	{
		tab[i] = i;
		i++;
	}
	afficheTab(tab, LEN);
	return(0);
}
