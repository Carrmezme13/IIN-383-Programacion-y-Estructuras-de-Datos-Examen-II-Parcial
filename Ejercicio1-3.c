/*CARLOS RENE MEZA MEJIA // 202500540*/

#include <stdio.h>

int main(void) {

 int numero, contador, factorial;

 do {
 printf("Ingrese un entero no negativo: ");
 scanf("%d", &numero);

 /*Aqui un error de sintaxis estaba con > 0 entonces esto generaba que el programa se convirtiera en infinito*/
 } while (numero < 0);
 /*otro bug en el codigo es que el factorial estaba con valor 0 es incorrecto ya que 
 al hacer la multiplicacion se hacia con 0 * numero ingresado y se cambio a 1 como numero neutral*/
    factorial = 1;   
 for (contador = 1; contador <= numero; contador++) {
     factorial = factorial * contador;
 }
/* al usar = solo estamos asignando y no comparando entonces == es recomendable usar*/
 if (numero == 0)
 printf("0! = 1\n");

 else
 printf("%d! = %d\n", numero, factorial);

 return 0;
}