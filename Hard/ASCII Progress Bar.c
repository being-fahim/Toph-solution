#include <stdio.h>

int main() {
	int c = 0, a;
	double P, i;
	scanf("%lf", &P);
    a = (int)P;

	for(i = 10; i <= P; i += 10)
		c++;

    printf("[");

	for(i = 1; i <= c; i++)
		printf("+");
	for(i = 1; i <= 10-c; i++)
		printf(".");

    printf("] ");
    printf("%d%%", a);
}


