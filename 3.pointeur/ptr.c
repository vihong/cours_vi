#include<stdio.h>

void	affichage()
{
	
}


int	main()
{
	char	t = 3;
	char*	p;

	printf("%p\n", p);	
	printf("%d\n", *p);
	printf("%d\n", t);
	p = &t;
	*p = 4;
	printf("%p\n", &p);
	printf("%d\n", *p);	
	return(0);
}
