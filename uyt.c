#include<stdio.h>

int main(int argc, char const *argv[]) {
    system("@cls || clear");

    int valor1, valor2, valor3;

    printf("ESTUDIA TABLAS DE MULTIPLICAR :)\n");
    printf("Ingrese la tabla que desea estudiar: ");
    scanf("%d", &valor1);

    if (valor1 < 0) {
        printf("¡Oops!, creo que hubo un error.\n");
        printf("El valor del número es negativo. Ingrese un valor positivo.\n");
    } else {
        for (valor2 = 0; valor2 <= 12; valor2++) {
            valor3 = valor1 * valor2;
            printf("%d * %d = %d\n", valor1, valor2, valor3);
        }
    }

    return 0;
}
