#include<stdio.h>

/*
On utilise les boucles (avec les operateurs "while" ou "for") quand on a une répétition d'action ou bien quand on "parcourt" quelque chose.
Attention, un "if" n'est pas forcément suivi d'un else ou d'un else if. Mais un else et un else if ont besoin d'un premier "if".
On peut avoir plusieurs "if" sans que les autres if aient à être des "else if" sous prétext qu'il arrive après le premier if.
*/

//      il existe une manière plus courte
int	triple(int nb)
{
	return(3 * nb);
}


//Fonction qui prend plusieurs paramètres
int	addition(int a, int b)
{
	return(a + b);
}


//Fonction qui ne renvoie aucune valeur
void	affichage(void)
{
	printf("%s\n", "Bonjour");	
}

int	main()
{
	int	a = 0;

	while ()
	printf("%d\n", triple(a));
	printf("%d\n", addition(a, b));
	affichage();
	return(0);
}
