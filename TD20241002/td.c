#include <stdio.h>

int main(int argc, const char *argv[])
{
	double u = 0;
	double r = 0;
	double i = 0;

	// aquisition de la résistance et test si la valeur est correct
	printf("résistance [Ω] r = ");
	scanf("%lf", &r);
	if (r <= 0)
	{
		printf("erreur dans la valeur de la résistance \r\n");
		return 1;
	}

	// aquisition de la tension et test si la valeur est correct
	printf("tension [V] u = ");
	scanf("%lf", &u);
	if (u <= 0)
	{
		printf("erreur dans la valeur de u \r\n");
		return 2;
	}

	// calcule du courant et affichage du courant
	i = u / r;
	printf("intensité du courant i [A] = %.10E", i);

	printf("\r\n");

	return 0;
}