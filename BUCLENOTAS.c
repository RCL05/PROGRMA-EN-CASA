#include<stdio.h>
#include<stdlib.h>
#define ASIGNATURA "ELECTRICIDAD"
#define NUM_ALUMNOS 5
struct Estudiante{
    char nombre[100];
    float calificacion;
    
};

struct Unidad{
    char nombre[100];
    int numero;
    };

int main(int arg,char const * argv[]){;

struct Estudiante estudiante;
struct Unidad unidad;
const Num_Alumnos = 5;
 float promedio, sumatoria_notas = 0;
 int contador = 0;

 printf("Calificaciones de cada estudiante de la Asignatura %s\n", ASIGNATURA);
 printf("Ingrese el numero de la  unidad que va a promediar: ");
 scanf("%d", &unidad.numero);
 getchar();
 printf("Ingrese el nombre de la unidad que va a promediar: ");
 //scanf("%s",unidad.nombre); <<< solo ingreso de una sola palabra
 fgets(unidad.nombre, 100, stdin); //no es necesario utlizar getchar
 
 


 while (contador <= Num_Alumnos){
    printf("Ingresando informacion para el estudiante numero [%d]: \n",contador);
    printf("Ingrese el  nombre del estudiante: 3e");
    //scanf("%s", &estudiante.nombre);
    scanf("%[^\n]", estudiante.nombre);
    getchar();
    printf("Ingrese la calificacion obtenida en la unidad del estudiante");
    scanf("%f",&estudiante.calificacion);
    getchar();
    sumatoria_notas = sumatoria_notas + estudiante.calificacion;
    contador++;
 }

 promedio = sumatoria_notas / Num_Alumnos;

printf("%s\n",ASIGNATURA);
 printf("Numero de unidad: %d\n",unidad.numero);
 printf("Nombre de la unidad: %s\n",unidad.nombre);
 printf("Promedio final: %.2f\n",promedio);

 return 0;
 }