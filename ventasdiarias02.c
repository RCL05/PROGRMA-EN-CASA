#include <stdio.h>
#include <stdlib.h>

struct ItemReporteVenta{
    char *descripcion;
    int cantidad;
    float monto;
};

// API's
int ingresaNumeroVentas();
struct ItemReporteVenta inicializarItemReporteVenta(char descripcion[]);
void ingresarVentasDiarias(int numeroVentas, struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C);
void clasificarVenta(float montoVenta, struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C);
struct ItemReporteVenta totalizarVenta(struct ItemReporteVenta A, struct ItemReporteVenta B, struct ItemReporteVenta C);
void presentarReporte(struct ItemReporteVenta A, struct ItemReporteVenta B, struct ItemReporteVenta C, struct ItemReporteVenta total);

int ingresaNumeroVentas() {
    int numeroVentas;
    printf("Ingrese el número de ventas: ");
    scanf("%d", &numeroVentas);
    return numeroVentas;
}

void ingresarVentasDiarias(int numeroVentas, struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C) {
    float valorVenta;
    for (int i = 0; i < numeroVentas; i++) {
        printf("Ingrese el monto de la venta: ");
        scanf("%f", &valorVenta);
        clasificarVenta(valorVenta, A, B, C);
    }
}

void clasificarVenta(float montoVenta, struct ItemReporteVenta *A, struct ItemReporteVenta *B, struct ItemReporteVenta *C){
    if (montoVenta > 1000){
        A->monto = A->monto + montoVenta;
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
    printf("Fecha: (yyyy-mm-dd)\n");
    printf("Categoría\t\tcantidad\tmonto\n");
    printf("(A)  Ventas > 1000\t\t%d\t\t%.2f\n", A.cantidad, A.monto);
    printf("(B)  Ventas Entre 500..1000\t%d\t\t%.2f\n", B.cantidad, B.monto);
    printf("(C)  Ventas < 500\t\t%d\t\t%.2f\n", C.cantidad, C.monto);
    printf("-----------------------------------------------------------------\n");
    printf("TOTAL Venta\t\t%d\t\t%.2f\n", total.cantidad, total.monto);
}

int main(int argc, char const *argv[]){
    system("@cls||clear");
    
    int numeroVentasAlDia;
    struct ItemReporteVenta A, B, C, total;
   
    A = inicializarItemReporteVenta("Ventas > 1000");
    B = inicializarItemReporteVenta("Ventas 500 ... 1000");
    C = inicializarItemReporteVenta("Ventas < 500");
    
    numeroVentasAlDia = ingresaNumeroVentas();
    ingresarVentasDiarias(numeroVentasAlDia, &A, &B, &C);
    total = totalizarVenta(A, B, C);
    presentarReporte(A, B, C, total);
    
    return 0;
}

//REALIZAR UN PROGRAMA QUE PERMITA CALCULAR FRACCIONE.S,R,M Y D
// LAS RESPUESTA DEBE SER SIMPLIFICADA Y EN NOTACION DE DECIMAL.

