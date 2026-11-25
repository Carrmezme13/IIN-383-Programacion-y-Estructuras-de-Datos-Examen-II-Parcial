 /*CARLOS RENE MEZA MEJIA // 202500540*/

#include <stdio.h>

int main(void){

    int edad;

    do{
        printf("Ingrese la edad: ");
        scanf("%d", &edad);
    if (edad <= 0){
        printf("Edad no valida intente de nuevo....\n");
      } 
    } while (edad <= 0); 

    if (edad >=0 && edad <=4){
        printf("Entrada Gratis\n");
    } else if (edad >= 5 && edad <= 12){
        printf("Entrada de nino(L 100)\n");
    } else if (edad >= 13 && edad <= 59){
        printf("Entrada de adulto(L 200)\n");
    } else {
        printf("Entrada adulto mayor(L 120)\n");
    }

    return 0;
}