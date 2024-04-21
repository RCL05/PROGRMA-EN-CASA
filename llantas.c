/**
 * @file llantas.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    float llantas, nllantas1, nllantas2, nllantas3;


    const float N1 = 800.0;
    const float N2 = 700.0;
    const float N3 = 0.7;


    printf("Ingrese la cantidad de llantas compradas: ");
    scanf("%f", &llantas);

    nllantas1 = llantas * N1;
    nllantas2 = llantas * N2;
    nllantas3 = llantas * N3;


    if (llantas <= 4) {
        printf("Por la compra de %.0f llanta(s), se deberá cancelar %.2f.\n", llantas, nllantas1);
    } else if (llantas >= 5 && llantas <= 8) {
        printf("Por la compra de %.0f llanta(s), se deberá cancelar %.2f.\n", llantas, nllantas2);
    } else if (llantas > 8) {
        printf("Por la compra de %.0f llanta(s), se deberá cancelar %.2f.\n", llantas, nllantas3);
    }

    return 0;
}
