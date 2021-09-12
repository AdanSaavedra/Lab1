#include <stdio.h>

int main()
{
    //Bloque declarativo
    float velocidad,tiempo,distancia,metros;
    //Bloque de instrucciones
    printf("Bienvenido al programa para calcular la distancia recorrida en metros");
    printf("\n\nIntroduzca la velocidad en km/h: ");
    scanf("%f",&velocidad);
    printf("Introduzca el tiempo en horas: ");
    scanf("%f",&tiempo);
    distancia=(velocidad*tiempo);
    metros=(distancia*1000);
    printf("\nLa distancia recorrida en metros es de: %.f ", metros);
    printf("metros.\n");
    return 0;

}
