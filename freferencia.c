/**
 * @file freferencia.c
 * @author roberth
 * @brief 
 * @version 0.1
 * @date 2024-01-10
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <stdio.h>

void cuadrado_ref(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int x = 5;
    cuadrado_ref(&x);
    printf("El cuadrado es %d\n", x);
    return 0;
}
// grupo 4