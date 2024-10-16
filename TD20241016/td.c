#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	// Log

	int n = 1000;
	unsigned char count = 0;
	// nombre de digit dans n en base 10
	count = (n == 0) ? 1 : (int)log10(n) + 1;
	printf("Le nombre de chiffres de %u est : %u\n", n, count);

	// nombre de digit dans n en base 2
	count = (n == 0) ? 1 : (int)log2(n) + 1;
	printf("Le nombre de chiffres de %u est : %u\n", n, count);

	// nombre de digit dans n en base 16   log16(n) = log10(n)/log10(16)
	count = (n == 0) ? 1 : (int)log10(n) / log10(16) + 1;
	printf("Le nombre de chiffres de %u est : %u\n", n, count);

	// nombre de digit dans n en base 32   log32(n) = log10(n)/log10(32)
	count = (n == 0) ? 1 : (int)log10(n) / log10(32) + 1;
	printf("Le nombre de chiffres de %u est : %u\n", n, count);
	printf("\r\n");

	// Angle
	double angle_alfa = 60 * M_PI / 180; // conversion un angle de degré en radian
	double result = 0;

	result = cos(angle_alfa);
	printf("le cos de l'angle alfa est %f\n", result);

	result = sin(angle_alfa);
	printf("le sin de l'angle alfa est %f\n", result);

	result = sin(angle_alfa) / cos(angle_alfa);
	printf("le tan de l'angle alfa est %f\n", result);

	result = tan(angle_alfa);
	printf("le tan de l'angle alfa est %f\n", result);

	result = tan(angle_alfa) - (sin(angle_alfa) / cos(angle_alfa));
	printf("le tan de l'angle alfa est %E\n", result);

	return 0;
}