 /**
 * @file DISCOS.c
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
    float gygas, mb, cds;

   
    const float CD = 700;

    printf("Ingrese la cantidad de GB: ");
    scanf("%f", &gygas);
   
    mb = gygas * 1024;

    if ( fmod (mb, CD) > 0) {
        cds = mb / CD;
    } else {
        cds = (mb + CD - fmod(mb, CD)) / CD;
    }

    printf("La cantidad de CDs necesarios es: %.2f\n", cds);

    return 0;
}
