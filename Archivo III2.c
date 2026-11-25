/*CARLOS RENE MEZA MEJIA // 202500540*/

#include <stdio.h>

int main (void){

    int numero, multiplicador;

    printf("Ingrese un numero entero entre 1 y 12: ");
    scanf("%d", &numero);

    while (numero < 1 || numero > 12){
        printf("Ingrese un valor valido entre 1 y 12: ");
        scanf("%d", &numero);
    }
   
    for (multiplicador = 1; multiplicador <= 10; multiplicador++){
        printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
    }
    return 0;
}