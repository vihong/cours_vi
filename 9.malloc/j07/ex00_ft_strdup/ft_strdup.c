//image scanner imprimante avec feuille

#include<stdlib.h>
#include<stdio.h>

char*	ft_strcpy(char* dest, char* src)
{
	int	i = 0;

	for(i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return(dest);
}

char*	ft_strdup(char* src)
{
	char*	dest;
	int	i = 0;

	while(src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	for(i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return(dest);
}

int	main()
{
	char*	mot1 = "pika";
	char	mot2[1];
	char*	mot3 = "raichu";

//	printf("%s\n", mot1);
	printf("je strcpy mot1: %s\n", ft_strcpy(mot2, mot1));
	printf("je strdup mot3%s\n", ft_strdup(mot3));
	return(0);
}
