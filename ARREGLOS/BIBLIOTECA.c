#include <stdio.h>
#include <string.h>

// Definición de la estructura para representar un libro
struct Libro {
    int id;
    char autores[100];
    char titulo[100];
    char isbn[20];
    int numPaginas;
    int numDuplicados;
    int totalDuplicados;
};

// Función para inicializar un libro
void inicializarLibro(struct Libro *libro, int id, const char *autores, const char *titulo, const char *isbn, int numPaginas, int numDuplicados) {
    libro->id = id;
    strcpy(libro->autores, autores);
    strcpy(libro->titulo, titulo);
    strcpy(libro->isbn, isbn);
    libro->numPaginas = numPaginas;
    libro->numDuplicados = numDuplicados;
    libro->totalDuplicados = numDuplicados;
}

// Función para agregar un duplicado de un libro
void agregarDuplicado(struct Libro *libro) {
    libro->totalDuplicados++;
}

int main() {
    // Crear un arreglo de libros (puedes definir más libros según tus necesidades)
    struct Libro biblioteca[10];

    // Inicializar algunos libros
    inicializarLibro(&biblioteca[0], 1, "Autor1", "Título1", "ISBN123", 200, 3);
    inicializarLibro(&biblioteca[1], 2, "Autor2", "Título2", "ISBN456", 150, 2);

    // Ejemplo de acceso a la información de un libro
    printf("ID del libro: %d\n", biblioteca[0].id);
    printf("Autores: %s\n", biblioteca[0].autores);
    // ... otros atributos y operaciones

    return 0;
}
