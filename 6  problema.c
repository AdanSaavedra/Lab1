#include <stdio.h>
#define RENMINBI 6.4442

int main()
{
    //Bloque declarativo
    float dolares, conversion;
    //Bloque de instrucciones
    printf("Bienvenido al programa para convertir de dolares a renminbi");
    printf("\n\nIntroduzca la cantidad de dolares que desea convertir: ");
    scanf("%f",&dolares);
    conversion = (dolares * RENMINBI);
    printf("\nEl total de la conversion es de: %.2f ", conversion);
    printf("renmibis.\n");
    return 0;

}
