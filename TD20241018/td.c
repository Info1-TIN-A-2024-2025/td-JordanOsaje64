#include <stdio.h>

int main(int argc, const char *argv[])
{
	//display the value of argc
	printf("argc =%d\n",argc);
	// ./app 					: 1
	// ./app 10 20				: 3
	// ./app toto titi			: 3
	// ./app Albert Einstein	: 3
	// ./app "Alber Einstein"	: 2
	// ./app 3.14 2.7189 9		: 4

	//première étape : verifier le nombre d'argument
	//exemple labo3 doit avoir 3 arguments ex: ./app 10 20
	
	/*if(argc !=3)
	{
		printf("Erreur, mauvais nombre d'arguments\n");
		return 1;
	}*/
	printf("argv[0] = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);
	printf("argv[2] = %s\n", argv[2]);

	return 0;
}