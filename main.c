#include <stdio.h>
#include <math.h>

int szesciokat_foremny(float a);
int trojkat(float a, float h);
int prostokat(float a, float b);
int trapez (float a, float b, float h);

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

printf

                }
		case 3 : {
                // prostokat
                }
		4 : {
                // trapez
                }
		default : {
			printf("\nFATAL ERROR ! XD\n");
		}
	}	
	return 0;
}

int trojkat(float a, float h)
{
return (a*h)/2;
}
