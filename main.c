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
	scanf("%d", &command);
	switch (command)
	{
		case 1 : {
float a;
			printf("\nPodaj dlugosc boku szesciokata: ");
			scanf("%f", &a);
			printf("Pole wynosi %f.\n", szesciokat_foremny(a));
			break;
		// szesciokat
		

}
		case 2 : {
                // trojkat 
float a;
float h;
printf("podaj bok trojkata");
scanf("%f",&a);
printf("podaj wysokosc trojkata")
scanf("%f",&h);
m=trojkat(a,h);
printf("%f",m);
break;
                }
		case 3 : {
                // prostokat
                }
		case 4 : {
                // trapez
                }
		default : {
			printf("\nFATAL ERROR ! XD\n");
		}
	}	
	return 0;
}

float trojkat(float a, float h)
{
return (a*h)/2;
}
float szesciokat_foremny(float a)
{
	return 1.5*a*a*sqrt(3);

}
