#include <stdio.h>
#include <stdlib.h>

int Altura()
{
int a;
printf("Ingrese la altura del rectangulo ");
scanf("%d",&a);
return (a);
}

int Base()
{
int b;
printf("Ingrese la base del rectangulo ");
scanf("%d",&b);
return (b);
}

void main()
{
int a, b, Area, Perimetro;
a = Altura();
b = Base();
Area=a*b;
Perimetro=2*a+2*b;
printf("el area del rectangulo es %d\n",Area);
printf("y el perimetro del rectangulo es %d\n",Perimetro);
}
