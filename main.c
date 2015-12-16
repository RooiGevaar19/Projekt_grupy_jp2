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


	float a, b, c;
	printf("Wpish strone a");
	scanf("%d", &a);
	printf("Wpisz strone b");
	scanf("%d", &b);
	a*b=c;
	printf("%d", &c);
	break;        
        }
		
                
                case 4: {
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
break;
		}
	}	
	return 0;
}
float trapez(float a, float b, float h){
return (a+b)*h/2
}

float trojkat(float a, float h)
{
return (a*h)/2;
}
float szesciokat_foremny(float a)
{
	return 1.5*a*a*sqrt(3);
}

