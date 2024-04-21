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
struct Fraccion{
    int numerador, denominador;
};

struct CalculadoraFracciones{
    struct Fraccion fraccion1;
    struct Fraccion fraccion2;
    struct Fraccion fraccion3;
    struct Fraccion fraccion4;
};


struct Fraccion sumar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
struct Fraccion restar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
struct Fraccion multiplicar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
struct Fraccion dividir(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4);
float convertirPuntoFlotante(struct Fraccion fraccion);
struct Fraccion simplificar(struct Fraccion fraccion);
void simplificarPorReferencia(struct Fraccion *fraccion);

struct Fraccion ingresarFraccion(char *mensaje);
char elegirOperacion();
// FACADE
struct Fraccion calcular(char operacion, struct CalculadoraFracciones calculadora);
void presentarResultado(char operacion, struct CalculadoraFracciones calculadora, struct Fraccion rta);

void presentarFraccion(struct Fraccion fraccion);

int main(int argc, char const *argv[]){
    system("@cls||clear");
    
    struct Fraccion fraccion1 = ingresarFraccion("Ingrese la fraccion Nro. 1");
    struct Fraccion fraccion2 = ingresarFraccion("Ingrese la fraccion Nro. 2");
    struct Fraccion fraccion3 = ingresarFraccion("Ingrese la fraccion Nro. 3");
    struct Fraccion fraccion4 = ingresarFraccion("Ingrese la fraccion Nro. 4");

    struct CalculadoraFracciones calculadora = {fraccion1, fraccion2,fraccion3,fraccion4};
    char operacion = elegirOperacion();
    struct Fraccion resultado = calcular(operacion, calculadora);
    presentarResultado(operacion,calculadora, resultado);
    
    return 0;
}

void presentarResultado(char operacion, struct CalculadoraFracciones calculadora, struct Fraccion rta){
    presentarFraccion(calculadora.fraccion1);
    printf(" %c ", operacion);
    presentarFraccion(calculadora.fraccion2);
    printf(" %c ", operacion);
    presentarFraccion(calculadora.fraccion3);
    printf(" %c ", operacion);
    presentarFraccion(calculadora.fraccion4);
    printf(" = ");
    presentarFraccion(rta);
    printf(" => ");
    printf("%f\n", convertirPuntoFlotante(rta));  
}


struct Fraccion calcular(char operacion, struct CalculadoraFracciones calculadora){
    struct Fraccion rta;
    switch (operacion){
        case '+': 
            rta = sumar(calculadora.fraccion1,calculadora.fraccion2,calculadora.fraccion3,calculadora.fraccion4);
            break;
        case '-': 
            rta = restar(calculadora.fraccion1,calculadora.fraccion2,calculadora.fraccion3,calculadora.fraccion4);
            break;
        case '*': 
            rta = multiplicar(calculadora.fraccion1,calculadora.fraccion2,calculadora.fraccion3,calculadora.fraccion4);
            break;
        case '/': 
            rta = dividir(calculadora.fraccion1,calculadora.fraccion2,calculadora.fraccion3,calculadora.fraccion4);
            break;
        default:
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
struct Fraccion multiplicar(struct Fraccion fraccion1, struct Fraccion fraccion2, struct Fraccion fraccion3,struct Fraccion fraccion4){

     struct Fraccion resultado;
    resultado.numerador = (fraccion1.numerador * fraccion2.numerador* fraccion3.numerador* fraccion4.numerador);
    resultado.denominador = (fraccion1.denominador * fraccion2.denominador* fraccion3.denominador* fraccion4.denominador);
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


