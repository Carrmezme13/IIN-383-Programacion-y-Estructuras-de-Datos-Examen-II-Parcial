/*------------------------------------------------------------------------------------*/
/*CARLOS RENE MEZA MEJIA // 202500540*/
/*Calcular e imprimir la factura detallada de una compra en supermercado.

Parte I
*Leer y validar la cantidad de productos a facturar.
*Leer los datos de cada producto y acumular el subtotal.
*Calcular el descuento, el ISV y el total a pagar.
*Imprimir los resultados de la factura con dos decimales.

Parte II
*Inicializar el acumulador subtotal en 0.
*Solicitar la cantidad de productos n y repetir mientras n < 1 o n > 20.
*Para cada producto desde 1 hasta n:
    Leer el precio unitario y repetir mientras el precio <= 0.
    Leer la cantidad entera y repetir mientras la cantidad <= 0.
    Sumar al subtotal de el producto de precio * cantidad.

*Si subtotal >= 1000, calcular descuento = subtotal * 0.10;
    si no, asignar descuento = 0.
*Calcular isv = (subtotal - descuento) * 0.15.
*Calcular total = (subtotal - descuento) + isv.
*Imprimir subtotal, descuento, isv y total con formato de dos decimales.
--------------------------------------------------------------------------------------
*/

#include <stdio.h>

int main(void){

    int cantidadProductos, i, cantidadUnidades;
    double precioUnitario, subtotal, descuento, isv, total;

    /*inicio de el acumulador subtotal en 0*/
    subtotal = 0.0;

    /*Solicita y valida la cantidad de productos (entre 1 y 20)*/
    do{
        printf("Ingrese la cantidad de productos (1 a 20): ");
        scanf("%d", &cantidadProductos);

        if (cantidadProductos < 1 || cantidadProductos > 20){
            printf("Cantidad invalida. Intente de nuevo\n");
        }
        
    }while (cantidadProductos < 1 || cantidadProductos > 20);

    /*Procesar cada producto desde 1 hasta n */
    for (i = 1; i <= cantidadProductos; i++){
        printf("------- Producto %d -------\n", i);

    /*Lee y valida el precio unitario (> 0)*/
    do{
        printf("Ingrese el precio unitario: ");
        scanf("%lf", &precioUnitario);
        
        if(precioUnitario <= 0){
            printf("Precio no es valido. Intente de nuevo\n");
        }
    } while (precioUnitario <= 0);

    /*Lee y valida cantidad de unidades(> 0)*/
    do {
            printf("Ingrese la cantidad de unidades: ");
            scanf("%d", &cantidadUnidades);

            if (cantidadUnidades <= 0) {
                printf("Cantidad invalida. Intente de nuevo.\n");
            }
        } while (cantidadUnidades <= 0);
        
        /*Acumula el subtotal de la compra*/
        subtotal = subtotal + (precioUnitario * cantidadUnidades);
    }
    
    /*Calcular el descuento (10% si el subtotal es >= 1000)*/
    if (subtotal >= 1000.0){
        descuento = subtotal * 0.10;
    } else {
        descuento = 0.0;
    }

    /*Calcula el ISV 15% sobre el subtotal menos el descuento*/
    isv = (subtotal - descuento) * 0.15;

    /*Calcula el total a pagar*/
    total = (subtotal - descuento) + isv;

    /*Imprime los resultados con dos decimales*/
    printf("------- FACTURA ------\n");
    printf("Subtotal: %.2f\n", subtotal);
    printf("Descuento: %.2f\n", descuento);
    printf("ISV (15%%): %.2f\n", isv);
    printf("Total: %.2f\n", total);

    return 0;
}