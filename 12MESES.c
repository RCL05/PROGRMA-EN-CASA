#include <stdio.h>

int main() {
    float ventas[12], total_ventas = 0, promedio_ventas, proyeccion, max_venta = 0, min_venta = 0;
    int año, mes_max, mes_min, i;

    // Leer las ventas de cada mes
    for (i = 0; i < 12; i++) {
        printf("Ingrese las ventas del mes %d: ", i + 1);
        scanf("%f", &ventas[i]);
        total_ventas += ventas[i];
        if (i == 0 || ventas[i] > max_venta) {
            max_venta = ventas[i];
            mes_max = i;
        }
        if (i == 0 || ventas[i] < min_venta) {
            min_venta = ventas[i];
            mes_min = i;
        }
    }

    // Leer el año
    printf("Ingrese la fecha del informe: ");
    scanf("%d", &año);

    // Calcular el promedio de ventas y la proyección para el próximo año
    promedio_ventas = total_ventas / 12;
    proyeccion = total_ventas * 1.1;

    // Imprimir el informe
    printf("Año del informe: %d\n", año);
    printf("Ventas totales de cada mes:\n");
    for (i = 0; i < 12; i++) {
        printf("Mes %d: %.2f\n", i + 1, ventas[i]);
    }
    printf("Total de ventas en el año: %.2f\n", total_ventas);
    printf("Promedio de ventas en el año: %.2f\n", promedio_ventas);
    printf("Mes con la venta más alta: %d (Venta: %.2f)\n", mes_max + 1, max_venta);
    printf("Mes con la venta más baja: %d (Venta: %.2f)\n", mes_min + 1, min_venta);
    printf("Proyección de ventas para el próximo año: %.2f\n", proyeccion);

    return 0;
}
