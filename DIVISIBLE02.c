#include <stdio.h>

int main(int arg,char const * argv[]) {
    system("@cls||clear");
    int num, i,n;

    printf("Ingrese un numero:  ");
    scanf("%d", &num);
    i = num;
    n=0;
    printf("Los numeros divisibles por %d son:\n", num);
    //printf("%i.", n);
    //n++;
    do{
        if(num % i == 0) {
            
            printf("%d\n", i);
            n++;
            
        }
        i--;
        
    }
    
    while(i > 0);
    printf("se han encontrado %d", n);


    return 0;

}