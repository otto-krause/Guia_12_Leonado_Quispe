#include <stdio.h>
#include <stdlib.h>

float Total(float a)
{
float T;
T=a/8;
return T;
}

void main()
{
float N;
printf("Ingrese un numero ");
scanf("%f",&N);
printf("la octava parte es %f\n",Total(N));
}
