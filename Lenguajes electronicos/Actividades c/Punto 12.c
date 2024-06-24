//  12.	Construye un programa que pregunte los años que tienes y 
//      emita como respuesta el número de días vividos.
#include <stdio.h>
int main()
{
    int apagar = 1;
    int anio_de_nacimiento;
    float anios_vividos;
    int anios_bisiestos;
    int dias;
    printf("bienvenido al programa que convierte años a dias vividos\n");
    while (apagar != 0){
        printf("ingrese años vividos\n");
        scanf("%f", &anios_vividos);
        printf("ingrese año de nacimiento\n");
        scanf("%i", &anio_de_nacimiento);
        anios_bisiestos = anios_vividos / 4; // calculo los años biestos 
        if (!(anio_de_nacimiento%4==0)){
            anios_bisiestos--;
        }
        dias = anios_vividos * 365 + anios_bisiestos; // calculo los dias multiplicando los años por los dias que hay en un año y le sumo los años bisiestos que son iguales a los dias de mas
        printf("la cantidad de dias vividos cuando tienes %f es: %i", anios_vividos, dias);
        printf("\nsi deseas apagar el programa ingresa un 0");
        scanf("%i", &apagar);
    }
}