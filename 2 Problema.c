#include <stdio.h>


int main()
{

    //Bloque declarativo
    float fahrenheit, aCelsius;
    //Bloque de instrucciones
    printf("Bienvenido al programa para convertir la temperatura de Fahrenheit a Celsius.");
    printf("\n\nIntroduzca la temperatura en Fahrenheit: ");
    scanf("%f",&fahrenheit);
    aCelsius = (((fahrenheit - 32) * 5) /9);
    printf("\nLa temperatura en Celsius es de: %.2f ", aCelsius);

    return 0;

}
