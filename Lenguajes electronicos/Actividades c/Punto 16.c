// 16.	Construye un programa que permita ingresar la superficie de un cuadrado (en m2),
//      el mismo debe emitir por pantalla su perímetro. 
#include <math.h>
#include <stdio.h>
int main(){
    int Apagar = 1; 
    float Superficie,Lado,Perimetro;
    printf("Bienvenido al programa para calcular el perímetro de un cuadrado a partir de su superficie\n");
    while (Apagar != 0){
        printf("Ingresar la superficie del cuadrado\n");
        scanf("%f", &Superficie);
        if (Superficie <= 0)
        {
            printf("ingrese un valor de superficie real\n");
        }else{
            Perimetro = sqrt(Superficie)*4,
            printf("el perimetro es igual a: %f", Perimetro);
        }
        printf("\n(0) - apagar\n");
        scanf("%i", &Apagar);
    }
    
}