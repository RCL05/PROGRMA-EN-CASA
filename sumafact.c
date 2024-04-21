#include<stdio.h>
#include<stdlib.h>

int main(){

   int factorial=1, numero, suma=0;
   printf("Ingrese numero factorial:\n");
   scanf("%i", &numero);

   for (int i = 1; i<=numero ; i++)
   {
    factorial= factorial*i;
    suma=suma+factorial;
   }
     printf("\n El factorial de %i es:%i", numero, factorial);
     printf("\n La suma del factorial %i es:%i", numero, suma);
     getchar ();


    return 0;
}
