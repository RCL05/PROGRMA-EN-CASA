#include<stdio.h>
int main(int argc, char const *argv[]){
    system ("@clS || clear");

    int valor1, valor02 , valor3;

     printf ("ESTUDIA TABLAS DE MULTIPICAR :)");
     printf("Ingrese la tabla que desaea estudir: ");
     scanf("%d" ,&valor1);

        if (valor1 < 0)
        {
            printf("upp!!, creo que hubo un error. \n");
            printf("Valor del numero es negativo, INGRESE UN VALOR POSITIVO");
        } else{
           for (valor02= 0; valor02 <= 12; valor02++)
                {
             valor3 = valor1 * valor02;
             printf("%d * %d = %d \n", valor1, valor02, valor3);
           
                }
        }
    return 0;
}