#include <stdio.h>
#define ITBMS 0.07

int main()
{
    //Bloque declarativo
    float producto, impuesto, total;
    //Bloque de instrucciones
    printf("Bienvenido al programa para calcular el ITBMS de un producto y el total a pagar");
    printf("\n\nIntroduzca el valor del producto: ");
    scanf("%f",&producto);
    impuesto = (producto * ITBMS);
    total=(producto + impuesto);
    printf("\nEl ITBMS es de: %.2f ", impuesto);
    printf("\nEl total a pagar incluyendo el impuesto es de: %.2f \n", total );
    return 0;
}
