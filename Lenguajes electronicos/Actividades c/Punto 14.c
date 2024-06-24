//  14.	Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un triángulo,
// y se emita por pantalla el valor del restante. 

#include <stdio.h>

int main(){
    int apagar = 1;
    float angulo1, angulo2, angulo3;
    printf("bienvenido al programa para calcular angulos de triangulos a partir de otros dos\n");
    while (apagar != 0){
        printf("ingrese los dos angulos\n");
        scanf("%f %f", &angulo1, &angulo2);
        angulo3 = 180 - angulo1 - angulo2;
        if (((angulo3 + angulo1 + angulo2) > 180) || ((angulo3 + angulo1 + angulo2) < 0)){
            printf("con los angulos ingresados es imposible realizar un triangulo");
        }else{
            printf("el angulo restante mide %f", angulo3);
        } 
    printf("\nsi quieres apagar el programa ingrese un 0");
    scanf("%i", &apagar);
    }
}