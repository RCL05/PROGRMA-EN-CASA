/**
 * @file BANDERA.c
 * @author roberth lliguin
 * @brief 
 * @version 0.1
 * @date 2024-01-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[]) {
    system("@cls||clear");
    int bandera=0,cont =1;
    float nota;
        while (cont<4)
    {
       printf("Ingrese nota de Unidad %d:\n",cont);
       scanf("%f",&nota);
       if (nota<7)
       {
        bandera=1;
       }
        cont++;     
    }
    if (bandera ==1)
    {
        printf("Tuviste una o varias notas inferiores a 7");
    }
    if (bandera ==0)
    {
        printf("FELICIDADES SHINGI");
    }
    return 0;
}
