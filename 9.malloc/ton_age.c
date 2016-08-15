#include<stdio.h>
#include<stdlib.h>

//programme qui demande l'age et la lui affiche (en utilisant malloc pour créer la variable)

int	main(int argc, char** argv)
{
	int*	ageUser = NULL;

	printf("Cher utilisateur, quel âge avez-vous?\n");
	ageUser = malloc(sizeof(int));
	if(ageUser == NULL)
		exit(0);
	scanf("%d", ageUser);
	printf("Vous avez %d ans! Joyeux anniversaire Nicky Larson!!\n", *ageUser);
	return(0);
}



int	main(int argc, char** argv)
{
	int	nombreAmis;
	int*	amis = NULL;

	printf("Combien d'amis avez-vous?");
	scanf("%d", &nombreAmis);
	amis = malloc(nombreAmis * sizeof(int));
	if ( malloc == NULL)
		exit(0);	
	for(i = 0; i < nombreAmis ; i++)
	{
		printf("Quel âge a votre amis n°%d?", i + 1);
		scanf("%d", &amis[i]);
		printf("Votre amis n°%d a %d ans", i, amis[i])
	}
	free(amis);
	return(0);
}
