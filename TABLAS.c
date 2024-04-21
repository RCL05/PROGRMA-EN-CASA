/**
 * @file TABLAS.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-01-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int  main(int argc, char const *argv[]){
  
    int v1, valo2 = 0, valor3;
    printf("numero: ");
    scanf("%i", &v1);
     
     for ( valo2 = 0; valo2 <=12; valo2++)
     {
        valor3 = v1* valo2;
        printf("%i* %i = %i\n", v1, valo2, valor3);
     }
     



    return 0;
}
