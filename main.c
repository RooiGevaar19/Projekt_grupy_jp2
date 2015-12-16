#include <stdio.h>
#include <math.h>

<<<<<<< HEAD
int szesciokat_foremny(float a);
int trojkat(float a, float h);
int prostokat(float a, float b);
int trapez (float a, float b, float h);
=======
float szesciokat_foremny(float a);
float trojkat(float a, float h);
float prostokat(float a, float b);
float trapez (float a, float b, float h);
>>>>>>> f8d5efa2d9328905fb945f3ab86efa1cc67d72a1

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
<<<<<<< HEAD
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

=======
			float a;
			printf("\nPodaj dlugosc boku szesciokata: ");
			scanf("%f", &a);
			printf("Pole wynosi %f.\n", szesciokat_foremny(a));
			break;
		}
		case 2 : {
                // trojkat
>>>>>>> f8d5efa2d9328905fb945f3ab86efa1cc67d72a1
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

<<<<<<< HEAD
int trojkat(float a, float h)
{
return (a*h)/2;
=======
float szesciokat_foremny(float a)
{
	return 1.5*a*a*sqrt(3);
>>>>>>> f8d5efa2d9328905fb945f3ab86efa1cc67d72a1
}
