#include <stdio.h>
#include <stdbool.h>

// Función para solicitar el número de términos
int solicitarnumerotermino(){
    int numerodeltermino;
    printf("Ingrese el número de términos: ");
    scanf("%d", &numerodeltermino);
    return numerodeltermino;
}

// Función para verificar si un número es primo
bool verificarnumeroprimo(int numero){
    bool esprimo = numero > 1;
    for(int i = 2; i < numero && esprimo; i++){
        if(numero % i == 0){
            esprimo = false;
        }
    }
    return esprimo;
}

// Función para calcular el factorial de un número
double calcularfactorial(int numero){
    double factorial = 1.0;
    for(; numero > 1; numero--){
        factorial *= numero;
    }
    return factorial;
}

// Función para generar la sumatoria de los factoriales de los primeros N números primos
double generarterminos(int Ntermino){
    int contador = 1, termino = 2;
    double sumatoria = 0;
    while(contador <= Ntermino){
        if(verificarnumeroprimo(termino)){
            sumatoria += calcularfactorial(termino);
            contador++;
        }
        termino++;
    }
    return sumatoria;
}

int main(){
    int Ntermino = solicitarnumerotermino();
    double suma = generarterminos(Ntermino);
    printf("La sumatoria de los factoriales de los primeros %d numeros primos es: %f\n", Ntermino, suma);
    return 0;
}
