/*CARLOS RENE MEZA MEJIA // 202500540*/
/*
a) Un plan de pruebas con al menos tres casos, con sus entradas y su salida esperada, e incluya un caso
límite.
--------------------------------------------------------------------------------
Caso 1  - grupo de 5 estudiantes con decimales:
Entradas: n = 5 | Calificaciones: 65.0, 88.4, 42.6, 91.0, 73.0
Salida esperada:
    Promedio del grupo: 72.00
    Estudiantes aprobados: 4
    Calificacion maxima: 91.00
---------------------------------------------------------------------------------
Caso 2 rechazo de datos negativos y superiores al limite:
Entradas: n = -2 (invalido), n = 31 (invalido), n = 2
Calificaciones: -0.1 (invalida), 100.1 (invalida), 100.0, 85.5
Salida esperada:
Promedio del grupo: 92.75
Estudiantes aprobados: 2
Calificacion maxima: 100.00
---------------------------------------------------------------------------------
Caso 3 (Caso limite - frontera exacta de aprobacion en 60.0):
Entradas: n = 3 | Calificaciones: 59.9, 60.0, 60.1
Salida esperada:
Promedio del grupo: 60.00
Estudiantes aprobados: 2
Calificacion maxima: 60.10

b) Un comentario indicando la complejidad temporal del programa y por qué.
El ejercicio estuvo muy complejo ya que se tuvo que hacer uso de varias cosas aprendidas en clase como contadores, ciclos
declarar variables al usar el ciclo for que ejecute exactamente la misma cantidad que se le indique por ejemplo al declarar
la variable aprobados tuve que poner aprobados = 0 ya que se me hiba a infinito.
*/
#include <stdio.h>

int main(void){
    int cantidadEstudiantes, i, aprobados = 0;
    double calificacion, suma, promedio, maxima;

do {
    printf("Ingrese la cantidad de estudiantes (1 a 30): ");
    scanf("%d", &cantidadEstudiantes);

    if (cantidadEstudiantes < 1 || cantidadEstudiantes > 30) {
    printf("Cantidad invalida. Debe estar entre 1 y 30.\n");
        }

    } while (cantidadEstudiantes < 1 || cantidadEstudiantes > 30);

    for (i = 1; i <= cantidadEstudiantes; i++) {
        do {
        printf("Ingrese la calificacion del estudiante %d (0 a 100): ", i);
        scanf("%lf", &calificacion);

        if (calificacion < 0.0 || calificacion > 100.0) {
            printf("Calificacion invalida. Debe estar entre 0 y 100.\n");
        }
    } while (calificacion < 0.0 || calificacion > 100.0);

    suma = suma + calificacion;

    if (calificacion >= 60.0) {
        aprobados++;
    }

    if (calificacion > maxima) {
     maxima = calificacion;
        }
    }

    promedio = suma / cantidadEstudiantes;

    printf("\n--- RESULTADOS DEL GRUPO ---\n");
    printf("Promedio del grupo: %.2f\n", promedio);
    printf("Estudiantes aprobados: %d\n", aprobados);
    printf("Calificacion maxima: %.2f\n", maxima);

    return 0;
}