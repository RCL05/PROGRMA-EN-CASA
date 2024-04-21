#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Color
{
    verde,
    amarilla,
    azul,
    roja
};
 // para que sea aletorio
int main()
{
    float ncompra;
    float total = 0.0;  // Inicializar total a 0.0
    enum Color color;
    printf("---------------------------------------------------------\n");
    printf("Hola, gracias por haber comprado en nuestra tienda.\n ");
    printf("prueba algo de suerte. Ingresa el valor Ingresa el valor total de su compra:\n ");
    scanf("%f", &ncompra);
    
    srand(time(NULL)); 
    color = rand () %5; 
    switch (color)
    {
    case verde:
        printf("Color verde, usted a conseguido  un descuento del 10%%:.\n");
        total = ncompra * 0.90;  
        break;
    case amarilla:
        printf("Descuento del 25%% para el color amarillo.\n");
        total = ncompra * 0.75; 
        break;
    case azul:
        printf("Descuento del 50%% para el color azul.\n");
        total = ncompra * 0.50;  
        break;
    case roja:
        printf("FELICIDADES !!!! HA CONSEGUIDO UN DESCUENTO DEL 100%%\n");
        total = ncompra *0 ;  
        break;
    default:
        printf("Color no válido.\n");
        break;
    }

    printf("USTED DEBERA PAGAR: %.2f\n", total);

    return 0;
}