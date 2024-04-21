/**
 * @file JUBILACION.c
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
    
    int edad, antiguedad_empleo;

    
    printf("Ingrese la edad de la persona: ");
    scanf("%d", &edad);

    printf("Ingrese la antiguedad en su empleo (en an+os): ");
    scanf("%d", &antiguedad_empleo);

    
    if (edad >= 60) {
        if (antiguedad_empleo < 25) {
            printf("La persona quedará adscrita a la jubilacion por edad.\n");
        } else {
            printf("La persona quedará adscrita a la jubilacion por antiguedad adulta.\n");
        }
    } else {
        if (antiguedad_empleo >= 25) {
            printf("La persona quedará adscrita a la jubilacion por antiguedad joven.\n");
        } else {
            printf("La persona no cumple con los requisitos para jubilarse este an+o.\n");
        }
    }

    return 0;
}
