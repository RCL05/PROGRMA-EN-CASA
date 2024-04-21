#include <stdio.h>
#include <stdlib.h>


struct Fraccion {
    int numerador;
    int denominador;
};

#define MAX_LIMITE 10

struct Fraccion sumarFracciones(struct Fraccion fracciones[], int n) {
    struct Fraccion suma = {0, 1}; 
    for (int i = 0; i < n; ++i) {
        suma.numerador = suma.numerador * fracciones[i].denominador + fracciones[i].numerador * suma.denominador;
        suma.denominador *= fracciones[i].denominador;
    }
    return suma;
}
struct Fraccion sumarPuntoFlotantes(struct Fraccion fracciones[], int n) {
    struct Fraccion suma = {0, 1}; 
    for (int i = 0; i < n; ++i) {
        suma.numerador = suma.numerador * fracciones[i].denominador + fracciones[i].numerador * suma.denominador;
        suma.denominador *= fracciones[i].denominador;
    }
    return suma;
}

struct Fraccion promedioFracciones(struct Fraccion fracciones[], int n) {
    struct Fraccion suma = sumarFracciones(fracciones, n);
    suma.numerador /= n;
    return suma;
}

void ingreasarNumerosDePuntoFlotante (){

        for (int i = 0; i < 10; ++i) {
        printf("Ingrese los numeros de punto flotante %d: ", i+1);
        scanf("%d", &numerosfloat[i]);
        
    }
    return 
}

int main() {
    struct Fraccion fracciones[10];


    printf("Las fracciones ingresadas son:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d/%d\n", fracciones[i].numerador, fracciones[i].denominador);
    }

    struct Fraccion suma = sumarFracciones(fracciones, 10);
    printf("La suma de las fracciones es: %d/%d\n", suma.numerador, suma.denominador);

    struct Fraccion promedio = promedioFracciones(fracciones, 10);
    printf("El promedio de las fracciones es: %d/%d\n", promedio.numerador, promedio.denominador);

    return 0;
}
