// 11.	Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo flotante,
//      emitir por pantalla su equivalencia en pies (enteros) y en pulgadas.
#include <stdio.h>

int main(){
    int apagar = 1;
    int Modo;
    float Medida;
    printf("Hola bienvenido al programa de convercion de unidades \n");
    while(apagar != 0){
        printf("ingrese la medida\n");
        scanf("%f", &Medida);
        printf("(0) - centimetros a pies \n");
        printf("(1) - centimetros a pulgadas \n");
        printf("(2) - pies a centimetros\n");
        printf("(3) - pies a pulgadas\n");
        printf("(4) - pulgadas a centimetros\n");
        printf("(5) - pulgadas a pies\n");
        do{
            scanf("%i", &Modo);

            if(Modo == 0){
                Medida /= 30.48;
            }else if(Modo == 1){
                Medida /= 2.54;
            }else if(Modo == 2){
                Medida *= 30.48;
            }else if(Modo == 3){
                Medida *= 12;  
            }else if(Modo == 4){
                Medida *= 2.54;
            }else if(Modo == 5){
                Medida /= 12;
            }else{
                printf("no ingresaste ningun valor valido\n");
                printf("por favor ingrese un nuevo valor\n");
            }
        }while(!((Modo == 0) || (Modo == 1) || (Modo == 2) || (Modo == 3) || (Modo == 4) || (Modo == 5)));
        printf("el valor es igual a: %f", Medida);
        printf("\nsi desea apagar el sistema ingrese un 0\n");
        scanf("%i", &apagar);
        }
} 