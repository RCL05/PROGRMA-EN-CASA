#include <stdio.h>
#include<stdlib.h>
//decraracion de fumcion
//definir api

int solicitarnumero();
double calcularfactorial (int numero);

void main(int argc, char const *argv[]){
    system("@cls||clear");
    
    int numero= solicitarnumero();
    double factorial = calcularfactorial( numero);

    printf("%i! = %F\n", numero, factorial);

    getchar();
}

/**
 * @brief 
 * 
 * @param numero 
 * @return double 
 */

double calcularfactorial (int numero){

        double factorial =1.0;
        while (numero>=1)
        {
            factorial = factorial* numero;
            numero--;
        }
        return factorial;

}



int solicitarnumero(){
    int n;
do
{
    printf("ingreses numero:");
    scanf("%i", &n);
    getchar();
    if (n<0)
    {
        printf("ibgrese numero positivo");
    }
    
} while (n<0);

 
 return n;

}
