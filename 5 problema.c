#include <stdio.h>
#define DESCUENTO_DEL_25 0.25

int main()
{
    //Bloque declarativo
    float precioProducto, descuento, total;
    //Bloque de instrucciones
    printf("Bienvenido al programa para calcular el descuento del 25 por ciento a un producto");
    printf("\n\nIntroduzca el precio del producto: ");
    scanf("%f",&precioProducto);
    descuento = (precioProducto * DESCUENTO_DEL_25);
    total=(precioProducto-descuento);
    printf("\nEl precio inicial es de: %.2f ", precioProducto);
    printf("\nEl descuento del 25% que se realizara es de: %.2f ", descuento);
    printf("\nEl precio final es de: %.2f \n", total);

    return 0;

}
