//  19.	Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos.
//   Desarrollar los correspondientes algoritmos. 

#include <math.h>
#include <stdio.h>
#include <stdio_ext.h>

int main(){
    int Apagar;
    float CatetoO, CatetoA, Hipotenusa, resultado;
    char Modo;
    printf("bienvenidos al programa para calcular los lados de un triangulo rectangulo\n");
    do
    {
        do
        {
            if ((Modo != 'H') && (Modo != 'A') && (Modo != 'B')){
                printf("no ingresaste un valor vlaido\n");
            }

            printf("(H) - Hipotenusa\n");
            printf("(A) - Cateto Opuesto\n");
            printf("(B) - Cateto Adyacente\n");
            scanf("%c", &Modo);
            __fpurge(stdin);

        } while ((Modo != 'H') && (Modo != 'A') && (Modo != 'B'));

        if (Modo == 'H'){
            printf("ingrese el Cateto 1 y el 2\n");
            scanf("%f", &CatetoO);
            scanf("%f", &CatetoA);
            resultado = sqrt(CatetoA*CatetoA+CatetoO*CatetoO);

        }else if (Modo == 'A'){
            printf("ingrese la hipotenusa y Adyacente\n");
            scanf("%f", &Hipotenusa);
            scanf("%f", &CatetoA);
            resultado = sqrt((Hipotenusa*Hipotenusa)-(CatetoA*CatetoA));
        }else{
            printf("ingresa la hipotenusa y opuesto\n");
            scanf("%f", &Hipotenusa);
            scanf("%f", &CatetoO);
            resultado = sqrt((Hipotenusa*Hipotenusa)-(CatetoO*CatetoO));
        }
        printf("El resultado es: %f", resultado);
        printf("\n(0) - Apagar\n");
        scanf("%i", Apagar);
    } while (Apagar != 0);
    
}