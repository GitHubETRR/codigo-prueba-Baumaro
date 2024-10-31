#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void bienvenida(void); 
void info(personaje_t azukita, personaje_t misil);

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
    const presicion;
}mov_t;

int main(){
    char personaje_1[10];
    char personaje_2[10];
    char movimiento_actual[10];
    int nombre_valido = 1;
    int batalla = 1;
    int caracteristicas = 0; 
    int numero_aleatorio_evadir;
    int numero_aleatorio_golpecrit;
    srand(time(NULL));
    
    personaje_t azukita = {"AZUKITA","Azukita es un hombre de unos 40 años, el cual tiene mucho dinero y mucho odio con la sociedad. Con su carisma y su astucia, logro construir un imperio azucarero. En su pasado hizo negocios con el padre de Misil, el cual luego de una pelea, termino muerto.",1,1,1,1,1,1,1,1,1,1,1,1,{"Cañon T.U 551","ataque","golpea con un cañon de azucar en polvo",100},{"Pico de glucosa","pincha a sus enemigos con un pico de azucar aumentando su nivel de azucar en sangre","ataque"},{},{},{},{}};
    personaje_t misil = {"MISIL","Misil es un hombre joven, de unos 28 años, con cabello rubio platinado dándole un aspecto retro y agresivo. Está completamente musculoso, con una masa corporal enorme debido a su adicción al gimnasio y al uso excesivo de sustancias, lo que lo hace ver más grande de lo normal. Vive bajo la idea de que el físico perfecto lo es todo, y desprecia a cualquiera que no se alinee con sus ideales de vida \"saludable\". Odia con pasión cualquier estilo de vida que implique el sedentarismo, la comida chatarra o la falta de ejercicio. Este vive con el fin de cumplir su venganza en contra de Azukita.",1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    
    bienvenida();
    lista_personajes();
    printf("si desea ver las caracteristicas de los heroes / villanos ingrese un 1 \n");
    scanf("%i", &caracteristicas);
    if (caracteristicas =! 0)
    {
        info(azukita, misil);
        caracteristicas = 0;
    }
    do
    {
        
        printf("ingrese el nombre del heroe / villano para el jugador 1 \n");
        scanf("%s", personaje_1);
        if (!((strcmp(personaje_1, azukita.nombre) == 0)||(strcmp(personaje_1, misil.nombre) != 0)))
        {
            printf("no ingresaste un nombre valido\n");
            nombre_valido = 0;
        }

    } while (nombre_valido == 0);
    nombre_valido = 1;

    do
    {
        
    printf("ingrese el nombre del heroe / villano para el jugador 2 \n");
    scanf("%s", personaje_2);
        if (!((strcmp(personaje_2, azukita.nombre) == 0)||(strcmp(personaje_2, misil.nombre) != 0)))
        {
            printf("no ingresaste un nombre valido\n");
            nombre_valido = 0;
        }else if (strcmp(personaje_1, personaje_2) == 0)
        {
            printf("no se permite mirror match ingrese otro nombre \n");
            nombre_valido = 0;
        }
        
    } while (nombre_valido == 0);
    nombre_valido = 1;

    printf("¡ QUE INICIE LA BATALLA !");
    while(batalla == 1);{
        printf("Turno del jugador 1\n");
        printf("si desea ver las caracteristicas de los heroes / villanos ingrese un 1 \n");
        scanf("%i", &caracteristicas);
        if (caracteristicas =! 0)
        {
            info(azukita, misil);
            caracteristicas = 0;
        }
        if (strcmp(personaje_1, azukita.nombre) == 0)
        {
            if(strcmp(personaje_2, misil.nombre) == 0){
                printf("Jugador 1 ingrese el nombre del movimiento que desea usar");
                scanf("%s", movimiento_actual);
                if (strcmp(movimiento_actual, azukita.mov_1.nombre) == 0)
                {
                    numero_aleatorio_evadir = rand() % 100 + 1;
                    numero_aleatorio_golpecrit = rand() % 100 + 1;
                    if ()
                    {
                        /* code */
                    }
                    
                    misil.vida = misil.vida - ((azukita.mov_1.potencia + azukita.atq * azukita.x_atq)/(misil.def * misil.x_def))
                }else if (strcmp(movimiento_actual, azukita.mov_2.nombre) == 0){
            
                }else if (strcmp(movimiento_actual, azukita.mov_3.nombre) == 0){

                }else if (strcmp(movimiento_actual, azukita.mov_4.nombre) == 0){

                }else if (strcmp(movimiento_actual, azukita.mov_5.nombre) == 0){

                }else if (strcmp(movimiento_actual, azukita.mov_6.nombre) == 0){

                }else{
                    printf("no introduciste un movimiento valido, pierdes el turno");
                }
            }
        }
        
        
    }

}

void bienvenida(void) {
    printf("Bienvenido a heroes vs villanos\n");
    printf("El sistema de combate va a ser por turnos, ambos jugadores eligen 1 Heroe o Villano, cada heroe o villano tiene 3 ataques y 3 defensas, el jugador que ataca primero se define mediante las velosidades de sus respectivos personajes");
    
    return 0;
}

void lista_personajes(void){
    printf("PERSONAJES \n");
    printf("AZUKITA \n");
    printf("MISIL \n");

    return 0;
}

void info(personaje_t azukita, personaje_t misil){
    char personaje_ele_caracteristicas[10]; // esta variable se usa para elegir de que personaje se desea ver las caracteristicas
    printf("de que personaje desea ver las estadisticas o si desea de ambos ingrese \"ambos\"\n");
    scanf("%s", personaje_ele_caracteristicas);
    if(strcmp(personaje_ele_caracteristicas, azukita.nombre) == 0){

        printf("\nnombre: %s\n", azukita.nombre);
        printf("historia: %s\n", azukita.historia);
        printf("vida: %i\n", azukita.vida);
        printf("atq: %c\n", azukita.atq);
        printf("def: %c\n", azukita.def);
        printf("vel: %c\n", azukita.vel);
        printf("daniocrit: %c\n", azukita.daniocrit);
        printf("probcrit: %c\n", azukita.probcrit);
        printf("evacion: %c\n", azukita.evacion);
        printf("x_evacion: %i\n", azukita.x_evacion);
        printf("x_precicion: %i\n", azukita.x_precicion);

        printf("x_atq: %i\n", azukita.x_atq);
        printf("x_def: %i\n", azukita.x_def);
        printf("x_def: %i\n", azukita.x_vel);

        printf("x_def: %s\n", azukita.mov_1.nombre);
        printf("x_def: %s\n", azukita.mov_1.tipo);
        printf("x_def: %s\n", azukita.mov_1.descripcion);
        printf("x_def: %i\n", azukita.mov_1.potencia);
        printf("x_def: %i\n", azukita.mov_1.curacion);
        printf("x_def: %c\n", azukita.mov_1.presicion);

        printf("x_def: %s\n", azukita.mov_2.nombre);
        printf("x_def: %s\n", azukita.mov_2.tipo);
        printf("x_def: %s\n", azukita.mov_2.descripcion);
        printf("x_def: %i\n", azukita.mov_2.potencia);
        printf("x_def: %i\n", azukita.mov_2.curacion);
        printf("x_def: %c\n", azukita.mov_2.presicion);

        printf("x_def: %i\n", azukita.mov_3.nombre);
        printf("x_def: %i\n", azukita.mov_3.tipo);
        printf("x_def: %i\n", azukita.mov_3.descripcion);
        printf("x_def: %i\n", azukita.mov_3.potencia);
        printf("x_def: %i\n", azukita.mov_3.curacion);
        printf("x_def: %c\n", azukita.mov_3.presicion);

        printf("x_def: %s\n", azukita.mov_4.nombre);
        printf("x_def: %s\n", azukita.mov_4.tipo);
        printf("x_def: %s\n", azukita.mov_4.descripcion);
        printf("x_def: %i\n", azukita.mov_4.potencia);
        printf("x_def: %i\n", azukita.mov_4.curacion);
        printf("x_def: %c\n", azukita.mov_4.presicion);

        printf("x_def: %s\n", azukita.mov_5.nombre);
        printf("x_def: %s\n", azukita.mov_5.tipo);
        printf("x_def: %s\n", azukita.mov_5.descripcion);
        printf("x_def: %i\n", azukita.mov_5.potencia);
        printf("x_def: %i\n", azukita.mov_5.curacion);
        printf("x_def: %c\n", azukita.mov_5.presicion);

        printf("x_def: %s\n", azukita.mov_6.nombre);
        printf("x_def: %s\n", azukita.mov_6.tipo);
        printf("x_def: %s\n", azukita.mov_6.descripcion);
        printf("x_def: %i\n", azukita.mov_6.potencia);
        printf("x_def: %i\n", azukita.mov_6.curacion);
        printf("x_def: %c\n", azukita.mov_6.presicion);


    }else if (strcmp(personaje_ele_caracteristicas, misil.nombre) == 0){

        printf("\n nombre: %s\n", misil.nombre);
        printf("historia: %s\n", misil.historia);
        printf("vida: %i\n", misil.vida);
        printf("atq: %c\n", misil.atq);
        printf("def: %c\n", misil.def);
        printf("vel: %c\n", misil.vel);
        printf("daniocrit: %c\n", misil.daniocrit);
        printf("probcrit: %c\n", misil.probcrit);
        printf("evacion: %c\n", misil.evacion);
        printf("x_evacion: %i\n", misil.x_evacion);
        printf("x_precicion: %i\n", misil.x_precicion);

        printf("x_atq: %i\n", misil.x_atq);
        printf("x_def: %i\n", misil.x_def);
        printf("x_def: %i\n", misil.x_vel);

        printf("x_def: %s\n", misil.mov_1.nombre);
        printf("x_def: %s\n", misil.mov_1.tipo);
        printf("x_def: %s\n", misil.mov_1.descripcion);
        printf("x_def: %i\n", misil.mov_1.potencia);
        printf("x_def: %i\n", misil.mov_1.curacion);
        printf("x_def: %c\n", misil.mov_1.presicion);

        printf("x_def: %s\n", misil.mov_2.nombre);
        printf("x_def: %s\n", misil.mov_2.tipo);
        printf("x_def: %s\n", misil.mov_2.descripcion);
        printf("x_def: %i\n", misil.mov_2.potencia);
        printf("x_def: %i\n", misil.mov_2.curacion);
        printf("x_def: %c\n", misil.mov_2.presicion);

        printf("x_def: %i\n", misil.mov_3.nombre);
        printf("x_def: %i\n", misil.mov_3.tipo);
        printf("x_def: %i\n", misil.mov_3.descripcion);
        printf("x_def: %i\n", misil.mov_3.potencia);
        printf("x_def: %i\n", misil.mov_3.curacion);
        printf("x_def: %c\n", misil.mov_3.presicion);

        printf("x_def: %s\n", misil.mov_4.nombre);
        printf("x_def: %s\n", misil.mov_4.tipo);
        printf("x_def: %s\n", misil.mov_4.descripcion);
        printf("x_def: %i\n", misil.mov_4.potencia);
        printf("x_def: %i\n", misil.mov_4.curacion);
        printf("x_def: %c\n", misil.mov_4.presicion);

        printf("x_def: %s\n", misil.mov_5.nombre);
        printf("x_def: %s\n", misil.mov_5.tipo);
        printf("x_def: %s\n", misil.mov_5.descripcion);
        printf("x_def: %i\n", misil.mov_5.potencia);
        printf("x_def: %i\n", misil.mov_5.curacion);
        printf("x_def: %c\n", misil.mov_5.presicion);

        printf("x_def: %s\n", misil.mov_6.nombre);
        printf("x_def: %s\n", misil.mov_6.tipo);
        printf("x_def: %s\n", misil.mov_6.descripcion);
        printf("x_def: %i\n", misil.mov_6.potencia);
        printf("x_def: %i\n", misil.mov_6.curacion);
        printf("x_def: %c\n", misil.mov_6.presicion);
    }else if (strcmp(personaje_ele_caracteristicas, "ambos") == 0){


        printf("\n nombre: %s\n", misil.nombre);
        printf("historia: %s\n", misil.historia);
        printf("vida: %i\n", misil.vida);
        printf("atq: %c\n", misil.atq);
        printf("def: %c\n", misil.def);
        printf("vel: %c\n", misil.vel);
        printf("daniocrit: %c\n", misil.daniocrit);
        printf("probcrit: %c\n", misil.probcrit);
        printf("evacion: %c\n", misil.evacion);
        printf("x_evacion: %i\n", misil.x_evacion);
        printf("x_precicion: %i\n", misil.x_precicion);

        printf("x_atq: %i\n", misil.x_atq);
        printf("x_def: %i\n", misil.x_def);
        printf("x_def: %i\n", misil.x_vel);

        printf("x_def: %s\n", misil.mov_1.nombre);
        printf("x_def: %s\n", misil.mov_1.tipo);
        printf("x_def: %s\n", misil.mov_1.descripcion);
        printf("x_def: %i\n", misil.mov_1.potencia);
        printf("x_def: %i\n", misil.mov_1.curacion);
        printf("x_def: %c\n", misil.mov_1.presicion);

        printf("x_def: %s\n", misil.mov_2.nombre);
        printf("x_def: %s\n", misil.mov_2.tipo);
        printf("x_def: %s\n", misil.mov_2.descripcion);
        printf("x_def: %i\n", misil.mov_2.potencia);
        printf("x_def: %i\n", misil.mov_2.curacion);
        printf("x_def: %c\n", misil.mov_2.presicion);

        printf("x_def: %i\n", misil.mov_3.nombre);
        printf("x_def: %i\n", misil.mov_3.tipo);
        printf("x_def: %i\n", misil.mov_3.descripcion);
        printf("x_def: %i\n", misil.mov_3.potencia);
        printf("x_def: %i\n", misil.mov_3.curacion);
        printf("x_def: %c\n", misil.mov_3.presicion);

        printf("x_def: %s\n", misil.mov_4.nombre);
        printf("x_def: %s\n", misil.mov_4.tipo);
        printf("x_def: %s\n", misil.mov_4.descripcion);
        printf("x_def: %i\n", misil.mov_4.potencia);
        printf("x_def: %i\n", misil.mov_4.curacion);
        printf("x_def: %c\n", misil.mov_4.presicion);

        printf("x_def: %s\n", misil.mov_5.nombre);
        printf("x_def: %s\n", misil.mov_5.tipo);
        printf("x_def: %s\n", misil.mov_5.descripcion);
        printf("x_def: %i\n", misil.mov_5.potencia);
        printf("x_def: %i\n", misil.mov_5.curacion);
        printf("x_def: %c\n", misil.mov_5.presicion);

        printf("x_def: %s\n", misil.mov_6.nombre);
        printf("x_def: %s\n", misil.mov_6.tipo);
        printf("x_def: %s\n", misil.mov_6.descripcion);
        printf("x_def: %i\n", misil.mov_6.potencia);
        printf("x_def: %i\n", misil.mov_6.curacion);
        printf("x_def: %c\n\n\n", misil.mov_6.presicion);

        printf("\nnombre: %s\n", azukita.nombre);
        printf("historia: %s\n", azukita.historia);
        printf("vida: %i\n", azukita.vida);
        printf("atq: %c\n", azukita.atq);
        printf("def: %c\n", azukita.def);
        printf("vel: %c\n", azukita.vel);
        printf("daniocrit: %c\n", azukita.daniocrit);
        printf("probcrit: %c\n", azukita.probcrit);
        printf("evacion: %c\n", azukita.evacion);
        printf("x_evacion: %i\n", azukita.x_evacion);
        printf("x_precicion: %i\n", azukita.x_precicion);

        printf("x_atq: %i\n", azukita.x_atq);
        printf("x_def: %i\n", azukita.x_def);
        printf("x_def: %i\n", azukita.x_vel);

        printf("x_def: %s\n", azukita.mov_1.nombre);
        printf("x_def: %s\n", azukita.mov_1.tipo);
        printf("x_def: %s\n", azukita.mov_1.descripcion);
        printf("x_def: %i\n", azukita.mov_1.potencia);
        printf("x_def: %i\n", azukita.mov_1.curacion);
        printf("x_def: %c\n", azukita.mov_1.presicion);

        printf("x_def: %s\n", azukita.mov_2.nombre);
        printf("x_def: %s\n", azukita.mov_2.tipo);
        printf("x_def: %s\n", azukita.mov_2.descripcion);
        printf("x_def: %i\n", azukita.mov_2.potencia);
        printf("x_def: %i\n", azukita.mov_2.curacion);
        printf("x_def: %c\n", azukita.mov_2.presicion);

        printf("x_def: %i\n", azukita.mov_3.nombre);
        printf("x_def: %i\n", azukita.mov_3.tipo);
        printf("x_def: %i\n", azukita.mov_3.descripcion);
        printf("x_def: %i\n", azukita.mov_3.potencia);
        printf("x_def: %i\n", azukita.mov_3.curacion);
        printf("x_def: %c\n", azukita.mov_3.presicion);

        printf("x_def: %s\n", azukita.mov_4.nombre);
        printf("x_def: %s\n", azukita.mov_4.tipo);
        printf("x_def: %s\n", azukita.mov_4.descripcion);
        printf("x_def: %i\n", azukita.mov_4.potencia);
        printf("x_def: %i\n", azukita.mov_4.curacion);
        printf("x_def: %c\n", azukita.mov_4.presicion);

        printf("x_def: %s\n", azukita.mov_5.nombre);
        printf("x_def: %s\n", azukita.mov_5.tipo);
        printf("x_def: %s\n", azukita.mov_5.descripcion);
        printf("x_def: %i\n", azukita.mov_5.potencia);
        printf("x_def: %i\n", azukita.mov_5.curacion);
        printf("x_def: %c\n", azukita.mov_5.presicion);

        printf("x_def: %s\n", azukita.mov_6.nombre);
        printf("x_def: %s\n", azukita.mov_6.tipo);
        printf("x_def: %s\n", azukita.mov_6.descripcion);
        printf("x_def: %i\n", azukita.mov_6.potencia);
        printf("x_def: %i\n", azukita.mov_6.curacion);
        printf("x_def: %c\n\n", azukita.mov_6.presicion);

    }
    return 0;
}


