//  13.	Construye un programa que dados el valor de 1 kg de determinada
//       mercadería y la cantidad mercadería comprada, emite el valor del total a pagar.
#include <stdio.h>
int main(){
    int precio;
    float precioPorKilo;
    float cantidadAdquirida;
    int apagar = 1;
    while (apagar != 0)
    {
        printf("bienvenido al programa de calculo de precio\n");
        printf("ingrese el valor de 1kg\n");
        scanf("%f", &precioPorKilo);
        printf("ingresa la cantidad comprada en kilogramos\n");
        scanf("%f" &cantidadAdquirida);
        precio = precioPorKilo * cantidadAdquirida;
        printf("el precio es: %i", precio);
        printf("si desea apagar el programa ingrese un 0");
        scanf("%i", &apagar)
    }
}