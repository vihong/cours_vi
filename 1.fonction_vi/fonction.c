#include<stdio.h>


//Fonction qui renvoie une valeur de retour

/*int	triple(int nb);
{	
	int	resultat;
	
	resultat = 3 * nb;
	return (resultat);
}
*/

//      il existe une manière plus courte
int	triple(int nb)
{
	return(3 * nb);
}


//Fonction qui prend plusieurs paramètres
int	addition(int a)
{
	return(a + 1);
}

int	twice(int nb)
{
	return(2 * nb);
}

//Fonction qui ne renvoie aucune valeur
void	affichage(void)
{
	printf("%s\n", "Pokemon");	
}

int	main()
{
	int	a = 1;

	while(a <= 7)
	{
		
		if(a < 3)
		{	
			printf("%d\n", triple(a));
		}
		else if(a == 4 || a == 6)
		{
			printf("%d\n", twice(a));
		}
		else
		{	
			printf("%d\n", addition(a));
		}
		a++;
	}
	return(0);
}






