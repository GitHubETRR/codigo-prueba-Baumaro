// 17.	Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y segundos,
//   el mismo debe emitir por pantalla la suma de ambos (también en horas, minutos y segundos). 

#include <stdio.h>

int main(){
    unsigned int Tiempo1,Tiempo2,Hs1,Hs2,Hs3,M1,M2,M3,S1,S2,S3;
    printf("bienvenido al programa para sumar 2 tiempos expresadas el HHMMSS\n");
    printf("ingrese las 2 hs\n");
    scanf("%i", &Tiempo1);
    scanf("\n %i", &Tiempo2);
    Hs1 = Tiempo1 / 10000;
    Hs2 = Tiempo2 / 10000;
    M1 = (Tiempo1 / 10000)% 10000;
    M2 = (Tiempo2 / 10000)% 10000;
    S1 = Tiempo1 % 10000;
    S2 = Tiempo2 % 10000;
    Hs3 = Hs1 + Hs2;
    M3 =  M1 + M2;
    S3 = S1 + S2;
    while (S3 > 60)
    {
        S3 -= 60;
        M3 += 1;
    }
    
    while (M3 > 60)
    {
        M3 -= 60;
        Hs3 += 1;
    }
    while (Hs3 > 24)
    {
        Hs3 -= 24;
    }
    printf("\n Las horas son %i los minutos son %i y los segundos son %i", Hs3, M3, S3);
}