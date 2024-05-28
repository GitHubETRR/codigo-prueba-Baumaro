/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    printf("este es el programa para calcular la circunferencia de un circulo\n");
    printf("introduce el radio del circulo\n");
    float Radio = 0;
    scanf("%f",&Radio);
    const float PI = 3.141592;
    float Circunferencia = PI * Radio * 2;
    printf("la Circunferencia es: %f", Circunferencia);
}
    

