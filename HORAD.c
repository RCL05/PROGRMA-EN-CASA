#include <stdio.h>
#include <time.h>

int main() {

    time_t tiempoActual;
    //puntero = *informacionTiempo
    struct tm *informacionTiempo;

    time(&tiempoActual);
    informacionTiempo = localtime(&tiempoActual);

    printf("La hora actual es: %02d:%02d:%02d\n",
           informacionTiempo->tm_hour,
           informacionTiempo->tm_min,
           informacionTiempo->tm_sec);

    return 0;
}
