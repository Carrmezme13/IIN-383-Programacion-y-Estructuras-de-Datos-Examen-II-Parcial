/*CARLOS RENE MEZA MEJIA \\ 202500540*/

#include <stdio.h>

int main (void){
     double ladoA, ladoB, ladoC;

    printf("Ingrese el lado A: ");
    scanf("%lf", &ladoA);

    printf("Ingrese el lado B: ");
    scanf("%lf", &ladoB);

    printf("Ingrese el lado C: ");
    scanf("%lf", &ladoC);

    if((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoC + ladoB > ladoA)){
        if(ladoA == ladoB && ladoB == ladoC ){
             printf("Triangulo equilatero\n");   
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("No es ningun triangulo\n");
    }
return 0;
}