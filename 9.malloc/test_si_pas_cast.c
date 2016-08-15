#include<stdio.h>
#include<stdlib.h>

//compile le fichier tel quel, y'aura une erreur (= preuve que le cast est une condition indispensable).

int	main()
{
	int*	ptr;

	printf("%p\n", ptr);
	if (ptr == NULL)
		exit(0);
	printf("Taper votre valeur:\n");
	scanf("%d", ptr);
	printf("Votre valeur est %d\n", *ptr);
	return(0);
}

/*
int	main()
{
	int	a = 4;

	printf("%d\n", a);	
	return(0);
}
*/
