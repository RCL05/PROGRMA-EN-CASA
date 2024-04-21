#include <stdio.h>

int main(int arg,char const * argv[]) {
    
    int num, i = 1;

    printf("Ingrese un numero:  ");
    scanf("%d", &num);

    printf("Los numeros divisibles por %d son:\n", num);
    

    while(i <= num) {
        if(num % i == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;

}

