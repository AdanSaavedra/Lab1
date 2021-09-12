#include <stdio.h>
#define GALON 3.7854

int main()
{
    //Bloque declarativo
    float galones, conversion;
    //Bloque de instrucciones
    printf("Bienvenido al programa para convertir de galones a litros");
    printf("\n\nIntroduzca la cantidad de galones: ");
    scanf("%f",&galones);
    conversion = (galones * GALON);
    printf("\nEl resultado de la conversion es de: %.2f ", conversion);
    printf("litros. \n");


    return 0;
}
