#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int solicitarnumerotermino();
double generarterminos(int Ntermino);
bool verificarnumeroprimo (int numero);
double calcularfactorial(int numero);

int main(int argc, char const *argv[]){
    system ("@clS || clear");
    int Ntermino= solicitarnumerotermino();
    double suma = generarterminos(Ntermino);  
    printf("S = %F\n", suma);
    return 0;

}

double generarterminos(int Ntermino){

  int contadordeterminos= 1, termino=2;
  double sumatoria =0;
  printf("S = ");
  while (contadordeterminos<= Ntermino)
  {
    short esprimo = verificarnumeroprimo(termino);

    if (esprimo)
    {
        printf("%d ! +", termino);
        double factorial= calcularfactorial(termino);
        sumatoria = sumatoria + factorial; 
        contadordeterminos++;
    }
    termino++;
  }
     return sumatoria; 
  }
  

 int solicitarnumerotermino(int numerodeltermino){
  printf("ingrees numero !; \t \n");
  scanf("%i", &numerodeltermino);
  getchar ();
  return numerodeltermino;

 }

bool verificarnumeroprimo (int numero){

  bool esprimo= numero >1;
  for (int  i = 2; i < numero && esprimo; i++)
  {
    if (numero % i == 0 )
    {
        esprimo = false;
    }
  }
   return esprimo;

}

double calcularfactorial(int numero){
  double factorial=1.0;

for (; numero >1  ; numero--)
   {
    factorial= factorial * numero;
    
   }
return factorial;

}







