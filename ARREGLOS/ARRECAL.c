/**
 * @file CalculadoraFracciones-B.c
 * @author wduck
 * @brief Realizar una calculadora de fracciones para los operaciones +,-,*,/
 * @version 0.1
 * @date 2024-01-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LIMITE 50
struct Fraccion{
    int numerador, denominador;
};

struct CalculadoraFracciones{
    struct Fraccion fracciones[MAX_LIMITE];
    int limiteFracciones;
};




struct Fraccion sumar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
struct Fraccion restar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
struct Fraccion multiplicar(struct Fraccion fraccion1, struct Fraccion fraccion2);
struct Fraccion dividir(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
float convertirPuntoFlotante(struct Fraccion fraccion);
struct Fraccion simplificar(struct Fraccion fraccion);
void simplificarPorReferencia(struct Fraccion *fraccion);

struct Fraccion ingresarFraccion(char *mensaje);
char elegirOperacion();
// FACADE
struct Fraccion calcular(char operacion, struct CalculadoraFracciones calculadora);
void presentarResultado(char operacion, struct CalculadoraFracciones calculadora, struct Fraccion rta);

struct CalculadoraFracciones ingresarFracciones ();
int ingresarLimiteFracciones();
void presentarFraccion(struct Fraccion fraccion);
struct Fraccion multiplicarFraccciones(struct CalculadoraFracciones calculadora);

struct Fraccion multiplicarFraccciones2(int limite, struct Fraccion fracciones[limite]);

//ingresar como min 10 datos de float , presentar ,sumar y promedio

int main(int argc, char const *argv[]){
    system("@cls||clear");
   int limite= ingresarLimiteFracciones();
    struct CalculadoraFracciones calculadora = ingresarFracciones(limite);
    
    char operacion = elegirOperacion();
    struct Fraccion resultado = calcular(operacion, calculadora);
    presentarResultado(operacion,calculadora, resultado);
    
    return 0;
}

struct CalculadoraFracciones ingresarFracciones (int limiteFracciones){
    struct CalculadoraFracciones cf;
    cf.limiteFracciones= limiteFracciones;
    for (int  i = 0; i < cf.limiteFracciones; i++)
    {
        char mensaje[50];
        sprintf(mensaje,"INGRESAR FRACCION N 1 %d",i);
        struct Fraccion f = ingresarFraccion(mensaje);
        cf.fracciones[i]= f;
        
    }
    return cf;

}

void presentarResultado(char operacion, struct CalculadoraFracciones calculadora, struct Fraccion rta){
    for (int i = 0; i < calculadora.limiteFracciones; i++)
    {
        presentarFraccion (calculadora.fracciones[i]);
        printf ("%c", operacion);
    }
    printf ("\b\b\b\b");
    
    printf ("\b\b\b\b");
     
}
int ingresarLimiteFracciones(){

    int limite;
    printf("cuantas fracciones quiere calcualr");
    scanf ("%d", &limite);
    getchar();
    return limite;
}

struct Fraccion calcular(char operacion, struct CalculadoraFracciones calculadora){

    struct Fraccion rta;
    switch (operacion){
        case '*': 
            rta = multiplicarFracciones(calculadora);
            break;
      
            rta.numerador = 0;
            rta.denominador = 0;
    }
    return rta;
}



struct Fraccion ingresarFraccion(char *mensaje){
    struct Fraccion fraccionIng;
    //printf("%s (Formato #/#)", mensaje);
    //scanf("%d/%d", &fraccionIng.numerador, %fraccionIng.denominador);
    //getchar();
    //return fraccionIng;
    printf("%s: \n", mensaje);
    printf("Numerador: ");
    scanf("%d", &fraccionIng.numerador);
    getchar();
    printf("Denominador: ");
    scanf("%d", &fraccionIng.denominador);
    getchar();
    return fraccionIng;
}

void simplificarPorReferencia(struct Fraccion *fraccion){
    struct Fraccion s = simplificar(*fraccion);
    fraccion->numerador = s.numerador;
    fraccion->denominador = s.denominador;
}

struct Fraccion simplificar(struct Fraccion fraccion){
    if (fraccion.denominador == 0){
        fraccion.numerador = 0;
        return fraccion;
    }
    int menor = fraccion.numerador;
    if (menor > fraccion.denominador){
        menor = fraccion.denominador;
    }

    int i = menor;
    while (i >  1){
        if (fraccion.numerador % i == 0 && fraccion.denominador % i ==0){
            fraccion.numerador = fraccion.numerador / i;
            fraccion.denominador = fraccion.denominador / i;
        } else {
            i--;
        }
    }

    return fraccion;
}

void presentarFraccion(struct Fraccion fraccion){
    printf("[ %d / %d ] ", fraccion.numerador, fraccion.denominador);
}

float convertirPuntoFlotante(struct Fraccion fraccion){
    return (float)fraccion.numerador / (float)fraccion.denominador;    
}


char elegirOperacion() {
    char operacion;
    printf("Elija una operación (+, -, *, /): ");
    scanf(" %c", &operacion);
    return operacion;
}



struct  Fraccion multiplicarFraccciones2 (int limite, struct Fraccion Fracciones[limite]){

    struct Fraccion rta = Fracciones[0];
    for (int i = 0; i < limite; i++)
    {
        rta = multiplicar (rta ,Fracciones[i]);

    }
    return rta;

}
struct Fraccion multiplicar(struct Fraccion fraccion1, struct Fraccion fraccion2){

     struct Fraccion fraccionRta;
    fraccionRta.numerador = (fraccion1.numerador * fraccion2.numerador);
    fraccionRta.denominador = (fraccion1.denominador * fraccion2.denominador);
    simplificarPorReferencia(&fraccionRta);

    return fraccionRta;
}
struct Fraccion multiplicarFraccciones(struct CalculadoraFracciones calculadora){
    
    struct Fraccion rta = calculadora.fracciones[0];
    for (int i = 1; i < calculadora.limiteFracciones; i++){
        rta = multiplicar(rta, calculadora.fracciones[i]);
    }
    return rta;
    
    return multiplicarFraccciones2(calculadora.limiteFracciones, calculadora.fracciones);
}


struct Fraccion sumar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4){

    struct Fraccion resultado;
    int numerador02, denominador02, numerador03, denominador03;
    numerador02 = ((fraccion1.numerador * fraccion2.denominador) + (fraccion2.numerador * fraccion1.denominador));
    denominador02= fraccion1.denominador * fraccion2.denominador;
    numerador03 = ((fraccion3.numerador * fraccion4.denominador) + (fraccion4.numerador * fraccion3.denominador));
    denominador03= fraccion3.denominador * fraccion4.denominador;
    resultado.numerador = ((numerador02 * denominador03) + (numerador03 * denominador02));
    resultado.denominador = denominador02*denominador03;
    struct Fraccion t = simplificar(resultado);

    return t;

}
struct Fraccion restar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4){
      struct Fraccion resultado;
    int numerador02, denominador02, numerador03, denominador03;
    numerador02 = ((fraccion1.numerador * fraccion2.denominador) - (fraccion2.numerador * fraccion1.denominador));
    denominador02= fraccion1.denominador * fraccion2.denominador;
    numerador03 = ((fraccion3.numerador * fraccion4.denominador) - (fraccion4.numerador * fraccion3.denominador));
    denominador03= fraccion3.denominador * fraccion4.denominador;
    resultado.numerador = ((numerador02 * denominador03) - (numerador03 * denominador02));
    resultado.denominador = denominador02*denominador03;
    struct Fraccion t = simplificar(resultado);

    return t;


}

struct Fraccion dividir(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4){

     struct Fraccion resultado;
    resultado.numerador = (fraccion1.numerador * fraccion2.denominador* fraccion3.numerador* fraccion4.denominador) ;
    resultado.denominador = (fraccion1.denominador * fraccion2.numerador* fraccion3.denominador* fraccion4.numerador);
    struct Fraccion t = simplificar(resultado);

    return t;
}


