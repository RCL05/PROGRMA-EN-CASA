
/**
 * @file ReporteVentasDiario.c
 * @author PRIMERO CC (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

struct ItemReporteVenta{
    char *descripcion;
    int cantidad;
    float monto;
};

// API's
struct ItemReporteVenta inicializarItemReporteVenta(char descripcion[]);
// Por referencia
void ingresarVentasDiarias(struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C);
// Por referencia
void clasificarVenta(float montoVenta, struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C);
struct ItemReporteVenta totalizarVenta(struct ItemReporteVenta A, struct ItemReporteVenta B, struct ItemReporteVenta C);
void presentReporte(struct ItemReporteVenta A, struct ItemReporteVenta B, struct ItemReporteVenta C, struct ItemReporteVenta total);

int ingresaNumeroVentas() {
    int numeroVentas;
    printf("Ingrese el número de ventas: ");
    scanf("%d", &numeroVentas);
    return numeroVentas;
}

int main(int argc, char const *argv[]){
    system("@cls||clear");
    
    struct ItemReporteVenta A, B, C, total;
   
    A = inicializarItemReporteVenta("Ventas > 1000");
    B = inicializarItemReporteVenta("Ventas 500 ... 1000");
    C = inicializarItemReporteVenta("Ventas < 500");
    
    ingresarVentasDiarias(&A, &B, &C);

    total = totalizarVenta(A, B, C);
    presentarReporte(A, B, C, total);
    

    return 0;
}

void clasificarVenta(float montoVenta, struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C){
    if (montoVenta > 1000){
        A->monto = A->monto + montoVenta;
        //(*A).monto = (*A).monto + montoVenta;
        A->cantidad++;
    } else {
        if (montoVenta > 500 && montoVenta <= 1000){
            B->monto = B->monto + montoVenta;
            B->cantidad++;
        } else {
            C->monto = C->monto + montoVenta;
            C->cantidad++;
        }
        
    }
}


struct ItemReporteVenta inicializarItemReporteVenta(char *descripcion){
    struct ItemReporteVenta itemReporteVenta;
    itemReporteVenta.descripcion = descripcion;
    itemReporteVenta.cantidad = 0;
    itemReporteVenta.monto = 0;
    return itemReporteVenta;
}


void ingresarVentasDiarias( struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C) {
    float valorVenta;
    printf("Ingrese el monto de la venta (ingrese un número negativo para detener): ");
    scanf("%f", &valorVenta);
    while (valorVenta >= 0) {
        clasificarVenta(valorVenta, A, B, C);
        printf("Ingrese el monto de la venta (ingrese un número negativo para detener): ");
        scanf("%f", &valorVenta);
    }
}



struct ItemReporteVenta totalizarVenta(struct ItemReporteVenta A, struct ItemReporteVenta B, struct ItemReporteVenta C) {
    struct ItemReporteVenta total;
    total.descripcion = "Total Ventas";
    total.cantidad = A.cantidad + B.cantidad + C.cantidad;
    total.monto = A.monto + B.monto + C.monto;
    return total;
}

void presentarReporte(struct ItemReporteVenta A, struct ItemReporteVenta B, struct ItemReporteVenta C, struct ItemReporteVenta total) {
    printf("Reporte Ventas\n");
    printf("----------------\n");
    printf("Fecha: (2024-000-000)\n");
    printf("Categoría\t\tcantidad\t\tmonto\n");
    printf("(A)  Ventas > 1000\t\t%d\t\t%.2f\n", A.cantidad, A.monto);
    printf("(B)  Ventas Entre 500..1000\t%d\t\t%.2f\n", B.cantidad, B.monto);
    printf("(C)  Ventas < 500\t\t%d\t\t%.2f\n", C.cantidad, C.monto);
    printf("\n-----------------------------------------------------------------\n");
    printf("TOTAL Venta\t\t%d\t\t%.2f\n", total.cantidad, total.monto);
}
    
    /*
    clasificarVenta(1500.8, &A, &B, &C);
    clasificarVenta(503.68, &A, &B, &C);
    clasificarVenta(500.75, &A, &B, &C);
    clasificarVenta(100, &A, &B, &C);
    
    printf("Venta Incializada A: \n");
    printf("A.descripcion : %s\n", A.descripcion);
    printf("A.cantidad : %i\n", A.cantidad);
    printf("A.monto : %f\n", A.monto);
    printf("Venta Incializada B: \n");
    printf("B.descripcion : %s\n", B.descripcion);
    printf("B.cantidad : %i\n", B.cantidad);
    printf("B.monto : %f\n", B.monto);
    printf("Venta Incializada C: \n");
    printf("C.descripcion : %s\n", C.descripcion);
    printf("C.cantidad : %i\n", C.cantidad);
    printf("C.monto : %f\n", C.monto);
    */
    