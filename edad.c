/**
 * @file edad.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<time.h>


int main(int argc, char *argv[]){

system ("@cls||clear");
      struct tm fechadencimiento;
      struct tm fechaactual;
      struct tm edadexacta;

      int prestamomes, prestamoanio;
      printf("INGRESE LA FECHA DE NACIMIENTO(YYY/MMM/DDD):");
      scanf("%d,%d,%d,", &fechadencimiento.tm_year,&fechadencimiento.tm_mon,&fechadencimiento.tm_mday );
      getchar();
      //ontener factual
      time_t segundosactuales = time(NULL);
      localtime (&segundosactuales);
      fechaactual = *localtime(&segundosactuales);
      fechaactual.tm_year = fechaactual.tm_year+1900;
       fechaactual.tm_mon = fechaactual.tm_mon+1;
        //fechaactual.tm_year = fechaactual.tm_year=1900;

        prestamoanio= 0;
        prestamomes = 0;

      
        edadexacta.tm_mday = fechaactual.tm_mday - fechadencimiento.tm_mday;  
        if (edadexacta.tm_mday < 0)
        {
            prestamomes = 1;
            edadexacta.tm_mday = edadexacta.tm_mon = 30;

            
        }
            edadexacta.tm_mon = (fechaactual.tm_mon - prestamomes) - fechadencimiento.tm_mon;
            if (edadexacta.tm_mon < 0);
            {
             prestamoanio = 1;
            
             edadexacta.tm_mon = edadexacta.tm_mon = 12;
            }

            edadexacta.tm_year = (fechaactual.tm_year - prestamoanio) - fechadencimiento.tm_yday;
            if (edadexacta.tm_year >= 0)
            //aplicar numeraciones , estrcturas, numeraciones,
            {
                printf("SU EDDAD ES: %danio(s), %d mes(es), %D dias \n", edadexacta.tm_year, edadexacta.tm_mon, edadexacta.tm_mday);

            } else
            {
                printf("NO DEBERIA EXISTIR\n");

            }
            
            printf ("PARA LA FECHA ACTUAL : %d - %d - %d\n", fechaactual.tm_year,fechaactual.tm_mon, fechaactual.tm_mday);
            

     

    return 0;
}