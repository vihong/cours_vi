/*
Quelle est la différence entre une vals de retour et une instruction?

Réponse en comparant deux cas/fonctions:
- une fonction 			    avec vals de retour.
- une fonction avec instructions et avec vals de retour. 
*/

#include<stdio.h>

int	twice(int a)
{
	return(a * 2);
}


int	twice_bis(int a)
{
	printf("instruction de twice_bis\n");
	return(a * 2);
}


int	main()
{
	
	printf("Valeur de retour de twice: %d\n", twice(2));
	printf("Valeur de retour de twice_bis : %d\n", twice_bis(2));
	

	return(0);
}


//P.S. et une ft sans vals de retour?
