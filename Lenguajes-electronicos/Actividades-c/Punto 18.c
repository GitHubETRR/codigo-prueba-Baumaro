// 18.	Desarrollar un algoritmo que le permita leer un valor
//      para el radio (R) y calcule el área (A) de un círculo y emitir su valor. 

#include <stdio.h>
#define PI 3.14

int main()
{
    int Apagar;
    float Radio;
    float Area;
    do
    {
        
        printf("Bienvenido al programa para calcular el area de un circulo a partir de un radio\n");
        printf("ingrese el radio del circulo\n");
        do
        {
            scanf("%f", &Radio);
            if (Radio <= 0)
            {
                printf("Ingrese un radio positivo\n");
            }
        } while (Radio <= 0);
        Area = (Radio*Radio) * PI;
        printf("el area cuando el radio es %f es %f \n", Radio, Area);
        printf("(0) - apagar\n");
        scanf("%i", &Apagar);
    } while (Apagar != 0);
}

