#include <stdio.h>
#include <math.h>

int szesciokat_foremny(float a);
int trojkat(float a, float h);
int prostokat(float a, float b, float c);
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
{
	float a, b, c;
	printf("Wpish strone a");
	scanf("%d", &a);
	printf("Wpisz strone b");
	scanf("%d", &b);
	a*b=c;
	printf("%d", &c);
	return 0;        
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

