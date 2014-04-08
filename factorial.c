//hacer un programa que guarde en un arreglo de 10 pocisiones en la iecima el factorial de 0 a i

#include<stdio.h>

int main () { 
  int a[10],i;
  a[0]=1;
  for (i=1; i<=10; i++)
    a[i]=a[i-1]*i;
  printf("\n");
  for (i=0; i<=9; i++)
    printf("%d\n",a[i]);

  printf("\n\nEl factorial de 0 a 9 = %d\n\n",a[9]);
return 0;	
}
