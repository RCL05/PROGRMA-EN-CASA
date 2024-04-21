#include<stdio.h>
#include<stdlib.h>  
#include<time.h>
int main(int argc, char const *argv) {
system ("@cls||clear");
time_t timeseconds = time(NULL);
printf("los segundos desde 1970 son : %ld\n", timeseconds);
printf("HOLA ESTO ES ESCRITO EN 20 DE ABRIL DE 2024\n");
//transformar seg a fecha
struct tm *currentDate = localtime(&timeseconds);
currentDate -> tm_year = currentDate-> tm_year + 1900;
currentDate -> tm_mon = currentDate-> tm_mon + 1;
printf("year:  %d\n", currentDate ->tm_year + 1900);
printf("MES:  %d\n", currentDate ->tm_mon + 1);
printf("DIA:  %d\n", currentDate ->tm_mday);
printf("hora:  %d\n", currentDate ->tm_hour);
printf("minutos:  %d\n", currentDate ->tm_min);
printf("segundos:  %d\n", currentDate ->tm_sec);

char *currentDateTexto1 = asctime(currentDate);
printf("ACTUAL FECHA Y TIEMPO (STR)year:  %s\n", asctime(currentDate));


char currentDateTexto[50];
strftime(currentDateTexto, 50, "%Y- %m-%d-%X", currentDate);


printf("ACTUAL FECA Y HORA STR CON REGLAS DE FORMATO: %s\n", currentDateTexto);

    return 0;
}