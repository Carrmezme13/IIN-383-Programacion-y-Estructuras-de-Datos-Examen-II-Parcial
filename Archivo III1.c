/*CARLOS RENE MEZA MEJIA // 202500540*/

#include <stdio.h>

int main (void){

    int numero, digito, suma = 0, cantidadDigitos = 0;

    do {
        printf("Ingrese un entero positivo: ");
        scanf("%d", &numero);
    } while (numero < 1);

    while (numero > 0){
        digito = numero % 10;
        suma = suma + digito;
        cantidadDigitos++;
        numero = numero / 10;
    }
    printf("Suma de los digitos: %d\n", suma);
    printf("Cantidad de digitos: %d\n", cantidadDigitos);

    return 0;
}