/**
 * @file ESTUDIANTE.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    float trabajos_de_clase_y_extractase, lecciones_participacion_en_clase, aprendizaje_autonomo, promedio_de_evaluaciones, acreditacion;

    printf("RECUERDE QUE LA NOTA VARIA ENTRE 0 Y 2 PUNTOS EXCEPTO LA EVALUACIÓN QUE EQUIVALE A 4 PUNTOS\n");
    printf("Ingrese la nota de los trabajos de clase y extractase: ");
    scanf("%f", &trabajos_de_clase_y_extractase);
    
    printf("Ingrese la nota de las lecciones y participación en clase: ");
    scanf("%f", &lecciones_participacion_en_clase);
    
    printf("Ingrese la nota del aprendizaje autónomo: ");
    scanf("%f", &aprendizaje_autonomo);
    
    printf("Ingrese la nota del promedio de evaluaciones: ");
    scanf("%f", &promedio_de_evaluaciones);

    acreditacion = trabajos_de_clase_y_extractase + lecciones_participacion_en_clase + aprendizaje_autonomo + promedio_de_evaluaciones;

    printf("La nota final del estudiante es: %.2f\n", acreditacion);

    if (acreditacion >= 0.00 && acreditacion < 2.40) {
        printf("El estudiante está REPROBADO.\n");
    } else if (acreditacion >= 2.40 && acreditacion <= 6.99) {
        printf("El estudiante está SUSPENSO.\n");
    } else if (acreditacion >= 7.00 && acreditacion <= 10.00) {
        printf("El estudiante está APROBADO.\n");
    }

    return 0;
}
