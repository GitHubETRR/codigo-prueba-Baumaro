#include <stdio.h>


typedef struct{
    char nombre[20];
    char historia[700];
    int vida;
    const atq;
    const def;
    const vel;
    const daniocrit;
    const probcrit;
    const evacion;
    const precicion; 
    int x_evacion;
    int x_precicion; 
    int x_atq;
    int x_def;
    int x_vel;
    mov_t mov_1;
    mov_t mov_2;
    mov_t mov_3;
    mov_t mov_4;
    mov_t mov_5;
    mov_t mov_6;
}personaje_t;

typedef struct{
    char nombre[10];
    char tipo[10];
    char descripcion[50];
    const potencia;
    const curacion;
}mov_t;

int main(){
    personaje_t azukita = {"AZUKITA","Azukita es un hombre de unos 40 años, el cual tiene mucho dinero y mucho odio con la sociedad. Con su carisma y su astucia, logro construir un imperio azucarero. En su pasado hizo negocios con el padre de Misil, el cual luego de una pelea, termino muerto.",1,1,1,1,1,1,1,1,1,1,1,1,1,{"Cañon T.U 551","ataque","golpea con un cañon de azucar en polvo",100},{"Pico de glucosa","pincha a sus enemigos con un pico de azucar aumentando su nivel de azucar en sangre","ataque"},{},{},{},{}};
    personaje_t azukita = {"MISIL","Misil es un hombre joven, de unos 28 años, con cabello rubio platinado dándole un aspecto retro y agresivo. Está completamente musculoso, con una masa corporal enorme debido a su adicción al gimnasio y al uso excesivo de sustancias, lo que lo hace ver más grande de lo normal. Vive bajo la idea de que el físico perfecto lo es todo, y desprecia a cualquiera que no se alinee con sus ideales de vida \"saludable\". Odia con pasión cualquier estilo de vida que implique el sedentarismo, la comida chatarra o la falta de ejercicio. Este vive con el fin de cumplir su venganza en contra de Azukita.",1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
}

void bienvenida(void) {
    printf("Bienvenido a heroes vs villanos\n");
    printf("El sistema de combate va a ser por turnos, ambos jugadores eligen 1 Heroe o Villano, cada heroe o villano tiene 3 ataques y 3 defensas, el jugador que ataca primero se define mediante las velosidades de sus respectivos personajes");

}


