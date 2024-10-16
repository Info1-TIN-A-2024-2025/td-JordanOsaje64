#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int n = 1000;
	unsigned char count = 0;

	count = (n == 0) ? 1 : (int)log10(n) + 1;

	printf("Le nombre de chiffres de %u est : %u\n", n, count);

	return 0;
}