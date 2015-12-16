#include <stdio.h>
#include <math.h>

float szesciokat_foremny(float a);
float trojkat(float a, float h);
float prostokat(float a, float b);
float trapez (float a, float b, float h);

int main()
{
	int command;
	printf("Obliczanie pola !");
	printf("\nCo za pole chcesz obliczyc ?");
	printf("\n1 - szesciokata foremnego ?");
	printf("\n2 - trojkata ?");
	printf("\n3 - prostokata ?");
	printf("\n4 - trapezu ?\n");
	scanf("%d", command);
	switch (command)
	{
		1 : {
		// szesciokat
		}
		2 : {
                // trojkat
                }
		3 : {
                // prostokat
                }
		4 : {
		float a,b,h;
                printf("Podaj 1 bok trapeza\n")
		scanf("%f",a)
		printf("Podaj 2 bok trapeza\n")
		scanf("%f",b)
		printf("Podaj wysokosc trapeza\n")
		scanf("%f",c)
		printf("Pole trapezu wynosi %f\n", trapez(a,b,h))
		break;
 }
		default : {
			printf("\nFATAL ERROR ! XD\n");
		}
	}	
	return 0;
}
float trapez(float a, float b, float h){
return (a+b)*2/h
}
