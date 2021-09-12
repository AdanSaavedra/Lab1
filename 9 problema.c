#include <stdio.h>
#define SEGURO_EDUCATIVO 0.0125

int main()
{
    //Bloque declarativo
    float salario,descuento;
    //Bloque de instrucciones
    printf("Bienvenido al programa para calcular cuanto es el descuento de seguro educativo que se le realizara a su salario mensual");
    printf("\n\nIntroduzca cual es su salario mensual: ");
    scanf("%f",&salario);
    descuento =(salario*SEGURO_EDUCATIVO);
    printf("\nSu descuento mensual de seguro educativo es de : %.2f ", descuento);
    printf("dolares.\n");
}
