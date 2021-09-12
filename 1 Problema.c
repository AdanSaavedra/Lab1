#include <stdio.h>
#define CANTIDAD_NOTAS 5;

int main()
{
    //Bloque de declarativa de variables
    float calificacion1, calificacion2, calificacion3, calificacion4, calificacion5, resultado;
    //bloque de instrucciones
    printf("Bienvenido al programa para calcular el promedio final de 5 notas");
    printf("\n\nIntroduzca la primera calificacion: ");
    scanf("%f",&calificacion1);
    printf("Introduzca la segunda calificacion: ");
    scanf("%f",&calificacion2);
    printf("Introduzca la tercera calificacion: ");
    scanf("%f",&calificacion3);
    printf("Introduzca la cuarta calificacion: ");
    scanf("%f",&calificacion4);
    printf("Introduzca la quinta calificacion: ");
    scanf("%f",&calificacion5);
    resultado = (calificacion1 + calificacion2 + calificacion3 + calificacion4 + calificacion5)/ CANTIDAD_NOTAS;
    printf("\nEl promedio final es de: %.2f \n", resultado);


    return 0;
}
