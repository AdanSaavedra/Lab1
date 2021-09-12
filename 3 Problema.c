#include <stdio.h>

int main()
{
    //Bloque declarativo
    float primerProducto, segundoProducto, suma, total, itbms;
    //Bloque de instrucciones
    itbms = 0.07;
    printf("Bienvenido al programa para calcular el precio total de 2 productos incluyendole el impuesto");
    printf("\n\nIntroduzca el precio del primer producto: ");
    scanf("%f",&primerProducto);
    printf("Introduzca el precio del segundo producto: ");
    scanf("%f",&segundoProducto);
    suma = (primerProducto + segundoProducto);
    total = (suma * itbms) + suma;
    printf("\nEl total a pagar incluyendo el impuesto es de: %.2f ", total);
    printf("dolares. \n");

    return 0;


}
