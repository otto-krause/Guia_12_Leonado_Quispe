#include <stdio.h>
#include <stdlib.h>

int Num1()
{
int n1;
printf("Ingrese un numero ");
scanf("%d",&n1);
return (n1);
}

int Num2()
{
int n2;
printf("Ingrese el segundo numero ");
scanf("%d",&n2);
return(n2);
}

void main()
{
int n1, n2;
n1 = Num1();
n2 = Num2();
printf("\nlos numeros ingresados son %d y %d",n1,n2);
}
