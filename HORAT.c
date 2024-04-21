/**
 * @file HORAT.c
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
  
    float horas, horas_extra, dinerot;


    const float NORMAL = 16.0;
    const float EXTRA = 5.0;


    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &horas);


    dinerot = horas * NORMAL;


    if (horas <= 40) {
        printf("Por %.2f horas se deberá abonar %.2f.\n", horas, dinerot);
    } else {
        horas_extra = horas - 40;
        dinerot = (40 * NORMAL) + (horas_extra * EXTRA);
        printf("Por %.2f horas se deberá abonar %.2f.\n", horas, dinerot);
    }

    return 0;
}
