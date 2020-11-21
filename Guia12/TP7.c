#include <stdio.h>
#include <stdlib.h>

int NumMayor(int a, int b)
{
int NMayor;
if(a<b)
{NMayor=b;}
else
{NMayor=a;}
return (NMayor);
}

void main()
{
int N1=0, N2=0;
printf("Ingrese un numero ");
scanf("%d",&N1);
printf("Ingrese otro numero ");
scanf("%d",&N2);
if(N1==N2)
{printf("Los numeros son iguales ");}
else
{printf("El numero mayor es %d",NumMayor(N1, N2));}
}
