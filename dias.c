#include <stdio.h>
#include <stdlib.h>
int main (int argc, char const *argv[])
{
  system ("@cls||clear");
  int numDIA ;
  printfn( "numero de dia;");
  scanf ("%i", &numDIA) ;
  getchar();
  switch (numDIA)
  {
   case 1:
    printf ("%d --> lunes\n", numDIA);
    break;
  
  default:
    break;
  }

    return 0;
}