#include <stdio.h>
#include <stdlib.h>

int PHombres(int a, int b)
{
int PHombres;
PHombres=a*100/b;
return PHombres;
}

int PMujeres(int a, int b)
{
int PMujeres;
PMujeres=a*100/b;
return PMujeres;
}

void main()
{
int H, M, Total;
printf("Ingrese la cantidad de hombres ");
scanf("%d",&H);
printf("Ingrese la cantidad de mujeres ");
scanf("%d",&M);
Total=H+M;
printf("el porcentaje de hombres es %d\n",PHombres(H,Total));
printf("el porcentaje de mujeres es %d\n",PMujeres(M,Total));
}
