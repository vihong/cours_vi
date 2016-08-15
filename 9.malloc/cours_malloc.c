//COURS SUR ALLOCATION DYNAMIQUE DE MEMOIRE (MALLOC)
//OBJECTIF: créer "manuellement "un tableau dont la taille n'est connue qu'à l'exécution du programme. 

#include<stdio.h>
#include<stdlib.h>

/*
int	main()
{
	char	a = 'b';
	int	i = 5;
	int	j = 52;
	char*	mot1 = "popo";
	char*	mot2 = "cosmopolitain";

	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(i));
	printf("%lu\n", sizeof(j));
	printf("%lu\n", sizeof(char*));
	printf("%lu\n", sizeof(mot2));
	return(0);
}
*/



int	main()
{
//	int*	memoireAllouee = NULL;
	
	printf("la taille d'un char est %lu octet\n", sizeof(char));
	printf("la taille d'un int est %lu octet\n", sizeof(int));
	printf("la taille d'un unsigned int est %lu octet\n", sizeof(unsigned int));
	printf("la taille d'un float est %lu octet\n", sizeof(float));
	printf("la taille d'un double est %lu octet\n", sizeof(double));
//	memoireAllouee = malloc(sizeof(int));
//	if(memoireAllouee = NULL)
//		exit(0);
//	printf("%d", *memoireAllouee);
//	free(memoireAllouee);
	return(0);
}
