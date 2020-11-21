#include <stdio.h>
#include <stdlib.h>

int Presion(int a, int b)
{
int Presion;
Presion=a/b;
return Presion;
}

void main()
{
int Fuerza, Area;
printf("Ingrese la fuerza ");
scanf("%d",&Fuerza);
printf("Ingrese el area ");
scanf("%d",&Area);
printf("\nLa presion aplicada sobre la superficie es %d\n",Presion(Fuerza,Area));
}
