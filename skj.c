#include <stdio.h>

#define MESES 12

void informeVentas(int anio, float ventas[MESES]) {
    float totalVentas = 0, promedioVentas;
    float ventaMax = ventas[0], ventaMin = ventas[0];
    int mesMax = 0, mesMin = 0;
    float proyeccion;

    printf("Informe de ventas para el año %d\n", anio);
    printf("Ventas mensuales:\n");
    for (int i = 0; i < MESES; i++) {
        printf("Mes %d: %.2f\n", i+1, ventas[i]);
        totalVentas += ventas[i];
        if (ventas[i] > ventaMax) {
            ventaMax = ventas[i];
            mesMax = i;
        }
        if (ventas[i] < ventaMin) {
            ventaMin = ventas[i];
            mesMin = i;
        }
    }

    promedioVentas = totalVentas / MESES;
    proyeccion = totalVentas * 1.1;

    printf("Total de ventas del año: %.2f\n", totalVentas);
    printf("Promedio de ventas del año: %.2f\n", promedioVentas);
    printf("Mes con la venta más alta: %d con una venta de %.2f\n", mesMax+1, ventaMax);
    printf("Mes con la venta más baja: %d con una venta de %.2f\n", mesMin+1, ventaMin);
    printf("Proyección de ventas para el próximo año: %.2f\n", proyeccion);
}

int main() {
    int anio = 2024;
    float ventas[MESES] = {1000, 2000, 1500, 1800, 2200, 2100, 2500, 2400, 2300, 2100, 2000, 2200};

    informeVentas(anio, ventas);

    return 0;
}
