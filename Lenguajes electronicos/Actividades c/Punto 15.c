//15.	Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el 
//      mismo debe emitir por pantalla su superficie y su perímetro. 

#include <stdio.h>

int main(){
    int Apagar = 1;
    float Base, Altura, Perimetro, Superficie;
    printf("bienvenido al programa para calcular la superficie y perimetro de un rectángulo\n");
    while(Apagar != 0){
        printf("ingre la medida de la base y la altura del rectangulo\n");
        do{
            scanf("%f", &Base);
            printf("ingrese el valor de la altura del rectangulo\n");
            scanf("%f", &Altura);
            if(!((Base < 0) || (Altura < 0))){
                Superficie = Base * Altura;
                Perimetro = Base * 2 + Altura * 2;
                printf("la superficie es: %f y la perimetro: %f", Superficie, Perimetro);
            }else{
                printf("no ingrsaste ningun valor valido \n");
                printf("ingrese un valor valido\n");
            }
        }while(((Base <= 0) || (Altura <= 0)));
        printf("(0) - Apagar");
        scanf("%f", &Apagar);
    }
}