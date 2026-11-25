/*CARLOS RENE MEZA MEJIA // 202500540*/

#include <stdio.h>

int main(void) {

 int n, i, suma = 0, opcion;

 printf("Ingrese n: ");
 scanf("%d", &n);

 opcion = 1;

 while (opcion == 1) {

 for (i = 1; i <= n; i++) {

 if (i % 2 == 1)
 suma = suma + i * i;
 }
 opcion = 0;
 }
 printf("Suma de cuadrados impares: %d\n", suma);
 return 0;
}
