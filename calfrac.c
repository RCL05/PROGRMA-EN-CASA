/**
 * @file calfrac.c
 * @author rcl (you@domain.com)
 * @brief  874 
 * @version 0.1
 * @date 2024-01-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<stdio.h>
#include<stdlib.h>                               

struct Fraccion {
    int numerador;
    int denominador;
};
int ingresanumerofraccion();
int tipodeopraciion(struct Fraccion fraccion);

int ingresanumerofraccion(){
    struct Fraccion fraccion1, fraccion2, resultado;

    
    printf("Ingrese la primera fraccion (numerador/denominador): ");
    scanf("%d/%d", &fraccion1.numerador, &fraccion1.denominador);


    printf("Ingrese la segunda fraccion (numerador/denominador): ");
    scanf("%d/%d", &fraccion2.numerador, &fraccion2.denominador);


    resultado = sumarFracciones(fraccion1, fraccion2);


    printf("La suma de las fracciones es: %d/%d\n", resultado.numerador, resultado.denominador);

    return Fraccion;

}


int obtenerMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplificarFraccion(struct Fraccion *fraccion) {
    int mcd = obtenerMCD(fraccion->numerador, fraccion->denominador);
    fraccion->numerador /= mcd;
    fraccion->denominador /= mcd;
}


struct Fraccion sumarFracciones(struct Fraccion fraccion1, struct Fraccion fraccion2) {
    struct Fraccion resultado;
    resultado.numerador = (fraccion1.numerador * fraccion2.denominador) + (fraccion2.numerador * fraccion1.denominador);
    resultado.denominador = fraccion1.denominador * fraccion2.denominador;
    simplificarFraccion(&resultado);
    return resultado;
}


int tipodeopraciion(struct Fraccion fraccion){

    switch (SELECCIONE)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}


