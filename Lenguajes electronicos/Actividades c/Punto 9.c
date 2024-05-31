//  9.	Desarrolla un algoritmo que permita leer 2 valores y emitir por pantalla la suma de los dos,
//   la resta, producto, división, promedio y el doble producto del primero menos la mitad del segundo. 

#include <stdio.h>

int main(){
    float numero1;
    float numero2;
    float resultado;
    char operacion;
    int apagar=1;
    printf("bienvenido al programa para realizar operaciones con dos numero\n");
    while (apagar != 0)
    {
        printf("ingresa los dos numeros\n");
        scanf("%f", &numero1);
        scanf("\n%f", &numero2);
        __fpurge(stdin);
        printf("ingresa la operacion");
        printf("(+) - suma\n");
        printf("(-) - resta\n");
        printf("(*) - multiplicacion\n");
        printf("(/) - divisiónion\n");
        printf("(p) - promedio\n");
        printf("(P) - doble producto * la mitad del segundo\n");
        do{
            scanf("%c", &operacion);
            __fpurge(stdin);
            if (!((operacion == '+') || (operacion == '-') || (operacion == '*') || (operacion == '/') || (operacion == 'p') || (operacion == 'P'))){
                printf("ingrese un valor valido\n");
            }
        } while (!((operacion == '+') || (operacion == '-') || (operacion == '*') || (operacion == '/') || (operacion == 'p') || (operacion == 'P')));
        if (operacion == '+'){
            resultado = numero1 + numero2;
        }else if(operacion == '-'){
            resultado = numero1 - numero2;
        }else if(operacion == '*'){
            resultado = numero1 * numero2;
        }else if(operacion == '/'){
            if(numero2 == 0){
                printf("Indeterminado\n");
            }else{
                resultado = numero1 / numero2;
            }
        }else if(operacion == 'p'){
            resultado = (numero1 + numero2) / 2;
        }else if (operacion == 'P'){
            resultado = numero1 * numero1 - numero2 / 2;
        }
        if(!(operacion == '/') && (numero2 == '0')){
            printf("el resultado es: %f\n", resultado);
        }
        printf("(0) - apagar\n");
        scanf("%i", &apagar);
    }
}
