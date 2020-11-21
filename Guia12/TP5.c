#include <stdio.h>
#include <stdlib.h>

int RT(int a, int b, int c, int d, int e)
{
int RTotal;
RTotal=a+b+c+d+e;
return RTotal;
}

void main()
{
int R1, R2, R3, R4, R5;
printf("Ingrese el valor de cinco resistencias en serie ");
scanf("%d",&R1);
scanf("%d",&R2);
scanf("%d",&R3);
scanf("%d",&R4);
scanf("%d",&R5);
printf("Las resistencias ingresadas son: %d, %d, %d, %d, %d \n", R1, R2, R3, R4, R5);
printf("La resistencia total es %d\n",RT(R1,R2,R3,R4,R5));
}
