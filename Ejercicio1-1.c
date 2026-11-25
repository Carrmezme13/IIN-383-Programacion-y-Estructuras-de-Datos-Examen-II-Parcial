

#include <stdio.h>
int main(void) {
    int n, i, pares = 0;
 do {
 printf("Ingrese un numero entre 1 y 10: ");
 scanf("%d", &n);

 } while (n < 1 || n > 10);/*Faltaba ; al final de la instruccion*/
 for (i = 1; i <= n; i++) {
    if (i % 2 == 0) /*hizo falta un = ya que si no esta == hace una asignacion no compara*/
 pares++;
 }

 if (pares < 2 || pares > 3) /*Error al utilizar && se debe usar || ya que al no usarlas estaria diciendo que 2 tiene que ser menor y mayor que 3 al mismo tiempo*/
 printf("Cantidad fuera de rango\n");
 else
 printf("Pares: %d\n", pares);
 return 0;
}