#include <stdio.h>
#define HORAS_SEMANALES 45

int main()
{
    //Bloque declarativo
    float porHora,total;
    //Bloque de instrucciones
    printf("Bienvenido al programa para calcular el salario mensual a partir de un pago por hora.");
    printf("\n\nIntroduzca cuanto dinero gana por hora: ");
    scanf("%f",&porHora);
    total=(porHora*HORAS_SEMANALES)*4;
    printf("\nSu salario mensual es de: %.2f ",total);
    printf("dolares. \n");
    return 0;
}
