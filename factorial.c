#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
    system("@cls||clear");

int numerof , i = 1;
unsigned long  factorial = 1;

    printf("Ingrese el numero:  ");
    scanf ("%i", &numerof);


if (numerof > 1)
{
    while (i <= numerof)
    {
        
        factorial *= i;
        i++;
    }
    
}


printf( "EL FACTORIAL DEL NUMERO %d es : %Lf \n", numerof, factorial);
return 0;
}
















/*
for ( i = 1; i<=nimerof; i++){

    1 factorial = factorial *i; 
    2 factorial *= i;
}
*/

/*
#include <stdio.h>

int main() {
    int num, i = 1;
    Real = 1;

    printf("Introduce un número: ");
    scanf("%d", &num);

    while(i <= num) {
        factorial *= i;
        i++;
    }

    printf("El factorial de %d es: %lld\n", num, factorial);

    return 0;
}
*/
