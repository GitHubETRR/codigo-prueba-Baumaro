#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


typedef struct{
    char nombre[10];
    char tipo[10];
    char descripcion[50];
    int potencia;
    int curacion;
    int presicion;
}mov_t;


typedef struct{
    char nombre[20];
    char historia[500];
    int vida;
    int atq;
    int def;
    int vel;
    int daniocrit;
    int probcrit;
    int evacion;
    int x_evacion;
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

void lista_personajes(void);
void bienvenida(void); 
void info(personaje_t Jugador_1, personaje_t Jugador_2);

int main(){
    char personaje_1[10];
    char personaje_2[10];
    char movimiento_actual[10];
    int nombre_valido = 1;
    int batalla = 1;
    int caracteristicas = 0; 
    int numero_aleatorio_evadir;
    int numero_aleatorio_golpecrit;
    int numero_de_respaldo_gp;
    int evadir = 1;
    
    srand(time(NULL));
    
    personaje_t azukita = {"AZUKITA","Azukita es un hombre de unos 40 años, el cual tiene mucho dinero y mucho odio con la sociedad. Con su carisma y su astucia, logro construir un imperio azucarero. En su pasado hizo negocios con el padre de Misil, el cual luego de una pelea, termino muerto.",1,1,1,1,1,1,1,1,1,1,1,{"Cañon T.U 551","ATAQUE","golpea con un cañon de azucar en polvo",100 , 0, 80},{"Pico de glucosa","ATAQUE","pincha a sus enemigos con un pico de azucar aumentando su nivel de azucar en sangre",60,0,90},{"Aumento de dealers","DEFENSA","se duplica y aumenta la cantidad de dealers que tiene, aumenta la evacion y cura",0,40,85},{},{},{}};
    personaje_t misil = {"MISIL","Misil es un hombre joven, de unos 28 años, con cabello rubio platinado dándole un aspecto retro y agresivo. Está completamente musculoso, con una masa corporal enorme debido a su adicción al gimnasio y al uso excesivo de sustancias, lo que lo hace ver más grande de lo normal. Vive bajo la idea de que el físico perfecto lo es todo, y desprecia a cualquiera que no se alinee con sus ideales de vida \"saludable\". Odia con pasión cualquier estilo de vida que implique el sedentarismo, la comida chatarra o la falta de ejercicio. Este vive con el fin de cumplir su venganza en contra de Azukita.",1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    personaje_t sanbaumaro = {"SAN BAUMARO","Baumaro era un marino muy valiente que se perdió en las aguas del destino. Las olas y el viento lo arrastraron y murió ahogado. Luego de esto, fue canonizado como un santo, a quien los marinos le rezan para no morir ahogados.",1,1,1,1,1,1,1,1,1,1,1,{"Masaje destructor de vértebras"," ATAQUE","le da un masaje super fuerte que causa terribles dolores a sus enemigos", 80, 0, 90},{"Babeada divina"," ATAQUE","ahoga a sus enemigos en introduciendo una inmensa cantidad de baba en sus gargantas",70, 0 , 100},{"Sumersión sagrada"," ATAQUE","sumerge a sus enemigos en lo profundo del mar desligandolos de todos los males",100,0,70},{"Ola de rescate divino"," DEFENSA","lanza una ola que preteje a sus aliados y a el aumentando el atq y vel del personaje",0,30,70},{},{}};
    personaje_t thanas = {"THANAS","Benjamín Tana era un chico común y corriente, hasta el día que vio Avengers: Infinity War en 2018. En ese momento, se identificó fuertemente con el personaje de Thanos, y decidió que iba a realizar su proyecto en el mundo real. Dedicó 5 años de su vida a entrenarse para asesinar gente. Luego de su arduo entrenamiento, comenzó su proyecto de matar a la mitad de la población (los de DNI impar).",1,1,1,1,1,1,1,1,1,1,1,{"Pelotazo del infinito"," ATAQUE","lanza un pelotazo a tres dedos a la velocidad de un meteorito que golpea y aturde a sus rivales",60,0,100},{" "},{},{}};
    personaje_t Jugador_1 = {" "," ",1,1,1,1,1,1,1,1,1,1,1,{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0}};
    personaje_t Jugador_2 = {" "," ",1,1,1,1,1,1,1,1,1,1,1,{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0},{" "," "," ",0,0,0}};

    bienvenida();
    lista_personajes();
    printf("si desea ver las caracteristicas de los heroes / villanos ingrese un 1 \n");
    scanf("%i", &caracteristicas);
    if (caracteristicas == 1)
    {
        info(Jugador_1, Jugador_2);
        caracteristicas = 0;
    }
    do
    {
        
        printf("ingrese el nombre del heroe / villano para el jugador 1 \n");
        scanf("%s", personaje_1);
        if (!((strcmp(personaje_1, azukita.nombre) == 0)||(strcmp(personaje_1, misil.nombre) == 0)||(strcmp(personaje_1, sanbaumaro.nombre) == 0)||(strcmp(personaje_1, thanas.nombre) == 0)))
        {
            printf("no ingresaste un nombre valido\n");
            nombre_valido = 0;

        }else if(strcmp(personaje_1, azukita.nombre) == 0){

            strcpy(Jugador_1.nombre, azukita.nombre);
            strcpy(Jugador_1.historia, azukita.historia);
            Jugador_1.vida = azukita.vida;
            Jugador_1.atq = azukita.atq;
            Jugador_1.def = azukita.def;
            Jugador_1.vel = azukita.vel;
            Jugador_1.daniocrit = azukita.daniocrit;
            Jugador_1.probcrit = azukita.probcrit;
            Jugador_1.evacion = azukita.evacion;
            Jugador_1.x_atq = azukita.x_atq;
            Jugador_1.x_def = azukita.x_def;
            Jugador_1.x_vel = azukita.x_vel;

            strcpy(Jugador_1.mov_1.nombre, azukita.mov_1.nombre);
            strcpy(Jugador_1.mov_1.tipo, azukita.mov_1.tipo);
            strcpy(Jugador_1.mov_1.descripcion, azukita.mov_1.descripcion);
            Jugador_1.mov_1.potencia = azukita.mov_1.potencia;
            Jugador_1.mov_1.curacion = azukita.mov_1.curacion;
            Jugador_1.mov_1.presicion = azukita.mov_1.presicion;

            strcpy(Jugador_1.mov_2.nombre, azukita.mov_2.nombre);
            strcpy(Jugador_1.mov_2.tipo, azukita.mov_2.tipo);
            strcpy(Jugador_1.mov_2.descripcion, azukita.mov_2.descripcion);
            Jugador_1.mov_2.potencia = azukita.mov_2.potencia;
            Jugador_1.mov_2.curacion = azukita.mov_2.curacion;
            Jugador_1.mov_2.presicion = azukita.mov_2.presicion;

            strcpy(Jugador_1.mov_1.nombre, azukita.mov_3.nombre);
            strcpy(Jugador_1.mov_1.tipo, azukita.mov_3.tipo);
            strcpy(Jugador_1.mov_1.descripcion, azukita.mov_3.descripcion);
            Jugador_1.mov_1.potencia = azukita.mov_3.potencia;
            Jugador_1.mov_1.curacion = azukita.mov_3.curacion;
            Jugador_1.mov_1.presicion = azukita.mov_3.presicion;

            strcpy(Jugador_1.mov_4.nombre, azukita.mov_4.nombre);
            strcpy(Jugador_1.mov_4.tipo, azukita.mov_4.tipo);
            strcpy(Jugador_1.mov_4.descripcion, azukita.mov_4.descripcion);
            Jugador_1.mov_4.potencia = azukita.mov_4.potencia;
            Jugador_1.mov_4.curacion = azukita.mov_4.curacion;
            Jugador_1.mov_4.presicion = azukita.mov_4.presicion;

            strcpy(Jugador_1.mov_5.nombre, azukita.mov_5.nombre);
            strcpy(Jugador_1.mov_5.tipo, azukita.mov_5.tipo);
            strcpy(Jugador_1.mov_5.descripcion, azukita.mov_5.descripcion);
            Jugador_1.mov_5.potencia = azukita.mov_5.potencia;
            Jugador_1.mov_5.curacion = azukita.mov_5.curacion;
            Jugador_1.mov_5.presicion = azukita.mov_5.presicion;

            strcpy(Jugador_1.mov_6.nombre, azukita.mov_6.nombre);
            strcpy(Jugador_1.mov_6.tipo, azukita.mov_6.tipo);
            strcpy(Jugador_1.mov_6.descripcion, azukita.mov_6.descripcion);
            Jugador_1.mov_6.potencia = azukita.mov_6.potencia;
            Jugador_1.mov_6.curacion = azukita.mov_6.curacion;
            Jugador_1.mov_6.presicion = azukita.mov_6.presicion;

            nombre_valido = 1;


        }else if(strcmp(personaje_1, misil.nombre) == 0){

            strcpy(Jugador_1.nombre, misil.nombre);
            strcpy(Jugador_1.historia, misil.historia);
            Jugador_1.vida = misil.vida;
            Jugador_1.atq = misil.atq;
            Jugador_1.def = misil.def;
            Jugador_1.vel = misil.vel;
            Jugador_1.daniocrit = misil.daniocrit;
            Jugador_1.probcrit = misil.probcrit;
            Jugador_1.evacion = misil.evacion;
            Jugador_1.x_atq = misil.x_atq;
            Jugador_1.x_def = misil.x_def;
            Jugador_1.x_vel = misil.x_vel;

            strcpy(Jugador_1.mov_1.nombre, misil.mov_1.nombre);
            strcpy(Jugador_1.mov_1.tipo, misil.mov_1.tipo);
            strcpy(Jugador_1.mov_1.descripcion, misil.mov_1.descripcion);
            Jugador_1.mov_1.potencia = misil.mov_1.potencia;
            Jugador_1.mov_1.curacion = misil.mov_1.curacion;
            Jugador_1.mov_1.presicion = misil.mov_1.presicion;

            strcpy(Jugador_1.mov_2.nombre, misil.mov_2.nombre);
            strcpy(Jugador_1.mov_2.tipo, misil.mov_2.tipo);
            strcpy(Jugador_1.mov_2.descripcion, misil.mov_2.descripcion);
            Jugador_1.mov_2.potencia = misil.mov_2.potencia;
            Jugador_1.mov_2.curacion = misil.mov_2.curacion;
            Jugador_1.mov_2.presicion = misil.mov_2.presicion;

            strcpy(Jugador_1.mov_1.nombre, misil.mov_3.nombre);
            strcpy(Jugador_1.mov_1.tipo, misil.mov_3.tipo);
            strcpy(Jugador_1.mov_1.descripcion, misil.mov_3.descripcion);
            Jugador_1.mov_1.potencia = misil.mov_3.potencia;
            Jugador_1.mov_1.curacion = misil.mov_3.curacion;
            Jugador_1.mov_1.presicion = misil.mov_3.presicion;

            strcpy(Jugador_1.mov_4.nombre, misil.mov_4.nombre);
            strcpy(Jugador_1.mov_4.tipo, misil.mov_4.tipo);
            strcpy(Jugador_1.mov_4.descripcion, misil.mov_4.descripcion);
            Jugador_1.mov_4.potencia = misil.mov_4.potencia;
            Jugador_1.mov_4.curacion = misil.mov_4.curacion;
            Jugador_1.mov_4.presicion = misil.mov_4.presicion;

            strcpy(Jugador_1.mov_5.nombre, misil.mov_5.nombre);
            strcpy(Jugador_1.mov_5.tipo, misil.mov_5.tipo);
            strcpy(Jugador_1.mov_5.descripcion, misil.mov_5.descripcion);
            Jugador_1.mov_5.potencia = misil.mov_5.potencia;
            Jugador_1.mov_5.curacion = misil.mov_5.curacion;
            Jugador_1.mov_5.presicion = misil.mov_5.presicion;

            strcpy(Jugador_1.mov_6.nombre, misil.mov_6.nombre);
            strcpy(Jugador_1.mov_6.tipo, misil.mov_6.tipo);
            strcpy(Jugador_1.mov_6.descripcion, misil.mov_6.descripcion);
            Jugador_1.mov_6.potencia = misil.mov_6.potencia;
            Jugador_1.mov_6.curacion = misil.mov_6.curacion;
            Jugador_1.mov_6.presicion = misil.mov_6.presicion;

            nombre_valido = 1;

        }else if(strcmp(personaje_1, sanbaumaro.nombre) == 0){

            strcpy(Jugador_1.nombre, sanbaumaro.nombre);
            strcpy(Jugador_1.historia, sanbaumaro.historia);
            Jugador_1.vida = sanbaumaro.vida;
            Jugador_1.atq = sanbaumaro.atq;
            Jugador_1.def = sanbaumaro.def;
            Jugador_1.vel = sanbaumaro.vel;
            Jugador_1.daniocrit = sanbaumaro.daniocrit;
            Jugador_1.probcrit = sanbaumaro.probcrit;
            Jugador_1.evacion = sanbaumaro.evacion;
            Jugador_1.x_atq = sanbaumaro.x_atq;
            Jugador_1.x_def = sanbaumaro.x_def;
            Jugador_1.x_vel = sanbaumaro.x_vel;

            strcpy(Jugador_1.mov_1.nombre, sanbaumaro.mov_1.nombre);
            strcpy(Jugador_1.mov_1.tipo, sanbaumaro.mov_1.tipo);
            strcpy(Jugador_1.mov_1.descripcion, sanbaumaro.mov_1.descripcion);
            Jugador_1.mov_1.potencia = sanbaumaro.mov_1.potencia;
            Jugador_1.mov_1.curacion = sanbaumaro.mov_1.curacion;
            Jugador_1.mov_1.presicion = sanbaumaro.mov_1.presicion;

            strcpy(Jugador_1.mov_2.nombre, sanbaumaro.mov_2.nombre);
            strcpy(Jugador_1.mov_2.tipo, sanbaumaro.mov_2.tipo);
            strcpy(Jugador_1.mov_2.descripcion, sanbaumaro.mov_2.descripcion);
            Jugador_1.mov_2.potencia = sanbaumaro.mov_2.potencia;
            Jugador_1.mov_2.curacion = sanbaumaro.mov_2.curacion;
            Jugador_1.mov_2.presicion = sanbaumaro.mov_2.presicion;

            strcpy(Jugador_1.mov_1.nombre, sanbaumaro.mov_3.nombre);
            strcpy(Jugador_1.mov_1.tipo, sanbaumaro.mov_3.tipo);
            strcpy(Jugador_1.mov_1.descripcion, sanbaumaro.mov_3.descripcion);
            Jugador_1.mov_3.potencia = sanbaumaro.mov_3.potencia;
            Jugador_1.mov_3.curacion = sanbaumaro.mov_3.curacion;
            Jugador_1.mov_3.presicion = sanbaumaro.mov_3.presicion;

            strcpy(Jugador_1.mov_4.nombre, sanbaumaro.mov_4.nombre);
            strcpy(Jugador_1.mov_4.tipo, sanbaumaro.mov_4.tipo);
            strcpy(Jugador_1.mov_4.descripcion, sanbaumaro.mov_4.descripcion);
            Jugador_1.mov_4.potencia = sanbaumaro.mov_4.potencia;
            Jugador_1.mov_4.curacion = sanbaumaro.mov_4.curacion;
            Jugador_1.mov_4.presicion = sanbaumaro.mov_4.presicion;

            strcpy(Jugador_1.mov_5.nombre, sanbaumaro.mov_5.nombre);
            strcpy(Jugador_1.mov_5.tipo, sanbaumaro.mov_5.tipo);
            strcpy(Jugador_1.mov_5.descripcion, sanbaumaro.mov_5.descripcion);
            Jugador_1.mov_5.potencia = sanbaumaro.mov_5.potencia;
            Jugador_1.mov_5.curacion = sanbaumaro.mov_5.curacion;
            Jugador_1.mov_5.presicion = sanbaumaro.mov_5.presicion;

            strcpy(Jugador_1.mov_6.nombre, sanbaumaro.mov_6.nombre);
            strcpy(Jugador_1.mov_6.tipo, sanbaumaro.mov_6.tipo);
            strcpy(Jugador_1.mov_6.descripcion, sanbaumaro.mov_6.descripcion);
            Jugador_1.mov_6.potencia = sanbaumaro.mov_6.potencia;
            Jugador_1.mov_6.curacion = sanbaumaro.mov_6.curacion;
            Jugador_1.mov_6.presicion = sanbaumaro.mov_6.presicion;

            nombre_valido = 1;

        }else if(strcmp(personaje_1, thanas.nombre) == 0){

            strcpy(Jugador_1.nombre, thanas.nombre);
            strcpy(Jugador_1.historia, thanas.historia);
            Jugador_1.vida = thanas.vida;
            Jugador_1.atq = thanas.atq;
            Jugador_1.def = thanas.def;
            Jugador_1.vel = thanas.vel;
            Jugador_1.daniocrit = thanas.daniocrit;
            Jugador_1.probcrit = thanas.probcrit;
            Jugador_1.evacion = thanas.evacion;
            Jugador_1.x_atq = thanas.x_atq;
            Jugador_1.x_def = thanas.x_def;
            Jugador_1.x_vel = thanas.x_vel;

            strcpy(Jugador_1.mov_1.nombre, thanas.mov_1.nombre);
            strcpy(Jugador_1.mov_1.tipo, thanas.mov_1.tipo);
            strcpy(Jugador_1.mov_1.descripcion, thanas.mov_1.descripcion);
            Jugador_1.mov_1.potencia = thanas.mov_1.potencia;
            Jugador_1.mov_1.curacion = thanas.mov_1.curacion;
            Jugador_1.mov_1.presicion = thanas.mov_1.presicion;

            strcpy(Jugador_1.mov_2.nombre, thanas.mov_2.nombre);
            strcpy(Jugador_1.mov_2.tipo, thanas.mov_2.tipo);
            strcpy(Jugador_1.mov_2.descripcion, thanas.mov_2.descripcion);
            Jugador_1.mov_2.potencia = thanas.mov_2.potencia;
            Jugador_1.mov_2.curacion = thanas.mov_2.curacion;
            Jugador_1.mov_2.presicion = thanas.mov_2.presicion;

            strcpy(Jugador_1.mov_1.nombre, thanas.mov_3.nombre);
            strcpy(Jugador_1.mov_1.tipo, thanas.mov_3.tipo);
            strcpy(Jugador_1.mov_1.descripcion, thanas.mov_3.descripcion);
            Jugador_1.mov_1.potencia = thanas.mov_3.potencia;
            Jugador_1.mov_1.curacion = thanas.mov_3.curacion;
            Jugador_1.mov_1.presicion = thanas.mov_3.presicion;

            strcpy(Jugador_1.mov_4.nombre, thanas.mov_4.nombre);
            strcpy(Jugador_1.mov_4.tipo, thanas.mov_4.tipo);
            strcpy(Jugador_1.mov_4.descripcion, thanas.mov_4.descripcion);
            Jugador_1.mov_4.potencia = thanas.mov_4.potencia;
            Jugador_1.mov_4.curacion = thanas.mov_4.curacion;
            Jugador_1.mov_4.presicion = thanas.mov_4.presicion;

            strcpy(Jugador_1.mov_5.nombre, thanas.mov_5.nombre);
            strcpy(Jugador_1.mov_5.tipo, thanas.mov_5.tipo);
            strcpy(Jugador_1.mov_5.descripcion, thanas.mov_5.descripcion);
            Jugador_1.mov_5.potencia = thanas.mov_5.potencia;
            Jugador_1.mov_5.curacion = thanas.mov_5.curacion;
            Jugador_1.mov_5.presicion = thanas.mov_5.presicion;

            strcpy(Jugador_1.mov_6.nombre, thanas.mov_6.nombre);
            strcpy(Jugador_1.mov_6.tipo, thanas.mov_6.tipo);
            strcpy(Jugador_1.mov_6.descripcion, thanas.mov_6.descripcion);
            Jugador_1.mov_6.potencia = thanas.mov_6.potencia;
            Jugador_1.mov_6.curacion = thanas.mov_6.curacion;
            Jugador_1.mov_6.presicion = thanas.mov_6.presicion;

            nombre_valido = 1;
        }

    } while (nombre_valido == 0);
    nombre_valido = 1;

    do
    {
        
    printf("ingrese el nombre del heroe / villano para el jugador 2 \n");
    scanf("%s", personaje_2);
        if (!((strcmp(personaje_1, azukita.nombre) == 0)||(strcmp(personaje_1, misil.nombre) == 0)||(strcmp(personaje_1, sanbaumaro.nombre) == 0)||(strcmp(personaje_1, thanas.nombre) == 0)))
        {
            printf("no ingresaste un nombre valido\n");
            nombre_valido = 0;
        }else if (strcmp(personaje_1, personaje_2) == 0)
        {
            printf("no se permite mirror match ingrese otro nombre \n");
            nombre_valido = 0;
        }else if(strcmp(personaje_2, azukita.nombre) == 0)
        {

            strcpy(Jugador_2.nombre, azukita.nombre);
            strcpy(Jugador_2.historia, azukita.historia);
            Jugador_2.vida = azukita.vida;
            Jugador_2.atq = azukita.atq;
            Jugador_2.def = azukita.def;
            Jugador_2.vel = azukita.vel;
            Jugador_2.daniocrit = azukita.daniocrit;
            Jugador_2.probcrit = azukita.probcrit;
            Jugador_2.evacion = azukita.evacion;
            Jugador_2.x_atq = azukita.x_atq;
            Jugador_2.x_def = azukita.x_def;
            Jugador_2.x_vel = azukita.x_vel;

            strcpy(Jugador_2.mov_1.nombre, azukita.mov_1.nombre);
            strcpy(Jugador_2.mov_1.tipo, azukita.mov_1.tipo);
            strcpy(Jugador_2.mov_1.descripcion, azukita.mov_1.descripcion);
            Jugador_2.mov_1.potencia = azukita.mov_1.potencia;
            Jugador_2.mov_1.curacion = azukita.mov_1.curacion;
            Jugador_2.mov_1.presicion = azukita.mov_1.presicion;

            strcpy(Jugador_2.mov_2.nombre, azukita.mov_2.nombre);
            strcpy(Jugador_2.mov_2.tipo, azukita.mov_2.tipo);
            strcpy(Jugador_2.mov_2.descripcion, azukita.mov_2.descripcion);
            Jugador_2.mov_2.potencia = azukita.mov_2.potencia;
            Jugador_2.mov_2.curacion = azukita.mov_2.curacion;
            Jugador_2.mov_2.presicion = azukita.mov_2.presicion;

            strcpy(Jugador_2.mov_1.nombre, azukita.mov_3.nombre);
            strcpy(Jugador_2.mov_1.tipo, azukita.mov_3.tipo);
            strcpy(Jugador_2.mov_1.descripcion, azukita.mov_3.descripcion);
            Jugador_2.mov_3.potencia = azukita.mov_3.potencia;
            Jugador_2.mov_3.curacion = azukita.mov_3.curacion;
            Jugador_2.mov_3.presicion = azukita.mov_3.presicion;

            strcpy(Jugador_2.mov_4.nombre, azukita.mov_4.nombre);
            strcpy(Jugador_2.mov_4.tipo, azukita.mov_4.tipo);
            strcpy(Jugador_2.mov_4.descripcion, azukita.mov_4.descripcion);
            Jugador_2.mov_4.potencia = azukita.mov_4.potencia;
            Jugador_2.mov_4.curacion = azukita.mov_4.curacion;
            Jugador_2.mov_4.presicion = azukita.mov_4.presicion;

            strcpy(Jugador_2.mov_5.nombre, azukita.mov_5.nombre);
            strcpy(Jugador_2.mov_5.tipo, azukita.mov_5.tipo);
            strcpy(Jugador_2.mov_5.descripcion, azukita.mov_5.descripcion);
            Jugador_2.mov_5.potencia = azukita.mov_5.potencia;
            Jugador_2.mov_5.curacion = azukita.mov_5.curacion;
            Jugador_2.mov_5.presicion = azukita.mov_5.presicion;

            strcpy(Jugador_2.mov_6.nombre, azukita.mov_6.nombre);
            strcpy(Jugador_2.mov_6.tipo, azukita.mov_6.tipo);
            strcpy(Jugador_2.mov_6.descripcion, azukita.mov_6.descripcion);
            Jugador_2.mov_6.potencia = azukita.mov_6.potencia;
            Jugador_2.mov_6.curacion = azukita.mov_6.curacion;
            Jugador_2.mov_6.presicion = azukita.mov_6.presicion;

            nombre_valido = 1;


        }else if(strcmp(personaje_2, misil.nombre) == 0){

            strcpy(Jugador_2.nombre, misil.nombre);
            strcpy(Jugador_2.historia, misil.historia);
            Jugador_2.vida = misil.vida;
            Jugador_2.atq = misil.atq;
            Jugador_2.def = misil.def;
            Jugador_2.vel = misil.vel;
            Jugador_2.daniocrit = misil.daniocrit;
            Jugador_2.probcrit = misil.probcrit;
            Jugador_2.evacion = misil.evacion;
            Jugador_2.x_atq = misil.x_atq;
            Jugador_2.x_def = misil.x_def;
            Jugador_2.x_vel = misil.x_vel;

            strcpy(Jugador_2.mov_1.nombre, misil.mov_1.nombre);
            strcpy(Jugador_2.mov_1.tipo, misil.mov_1.tipo);
            strcpy(Jugador_2.mov_1.descripcion, misil.mov_1.descripcion);
            Jugador_2.mov_1.potencia = misil.mov_1.potencia;
            Jugador_2.mov_1.curacion = misil.mov_1.curacion;
            Jugador_2.mov_1.presicion = misil.mov_1.presicion;

            strcpy(Jugador_2.mov_2.nombre, misil.mov_2.nombre);
            strcpy(Jugador_2.mov_2.tipo, misil.mov_2.tipo);
            strcpy(Jugador_2.mov_2.descripcion, misil.mov_2.descripcion);
            Jugador_2.mov_2.potencia = misil.mov_2.potencia;
            Jugador_2.mov_2.curacion = misil.mov_2.curacion;
            Jugador_2.mov_2.presicion = misil.mov_2.presicion;

            strcpy(Jugador_2.mov_1.nombre, misil.mov_3.nombre);
            strcpy(Jugador_2.mov_1.tipo, misil.mov_3.tipo);
            strcpy(Jugador_2.mov_1.descripcion, misil.mov_3.descripcion);
            Jugador_2.mov_3.potencia = misil.mov_3.potencia;
            Jugador_2.mov_3.curacion = misil.mov_3.curacion;
            Jugador_2.mov_3.presicion = misil.mov_3.presicion;

            strcpy(Jugador_2.mov_4.nombre, misil.mov_4.nombre);
            strcpy(Jugador_2.mov_4.tipo, misil.mov_4.tipo);
            strcpy(Jugador_2.mov_4.descripcion, misil.mov_4.descripcion);
            Jugador_2.mov_4.potencia = misil.mov_4.potencia;
            Jugador_2.mov_4.curacion = misil.mov_4.curacion;
            Jugador_2.mov_4.presicion = misil.mov_4.presicion;

            strcpy(Jugador_2.mov_5.nombre, misil.mov_5.nombre);
            strcpy(Jugador_2.mov_5.tipo, misil.mov_5.tipo);
            strcpy(Jugador_2.mov_5.descripcion, misil.mov_5.descripcion);
            Jugador_2.mov_5.potencia = misil.mov_5.potencia;
            Jugador_2.mov_5.curacion = misil.mov_5.curacion;
            Jugador_2.mov_5.presicion = misil.mov_5.presicion;

            strcpy(Jugador_2.mov_6.nombre, misil.mov_6.nombre);
            strcpy(Jugador_2.mov_6.tipo, misil.mov_6.tipo);
            strcpy(Jugador_2.mov_6.descripcion, misil.mov_6.descripcion);
            Jugador_2.mov_6.potencia = misil.mov_6.potencia;
            Jugador_2.mov_6.curacion = misil.mov_6.curacion;

            nombre_valido = 1;

        }else if(strcmp(personaje_1, sanbaumaro.nombre) == 0){

            strcpy(Jugador_2.nombre, sanbaumaro.nombre);
            strcpy(Jugador_2.historia, sanbaumaro.historia);
            Jugador_2.vida = sanbaumaro.vida;
            Jugador_2.atq = sanbaumaro.atq;
            Jugador_2.def = sanbaumaro.def;
            Jugador_2.vel = sanbaumaro.vel;
            Jugador_2.daniocrit = sanbaumaro.daniocrit;
            Jugador_2.probcrit = sanbaumaro.probcrit;
            Jugador_2.evacion = sanbaumaro.evacion;
            Jugador_2.x_atq = sanbaumaro.x_atq;
            Jugador_2.x_def = sanbaumaro.x_def;
            Jugador_2.x_vel = sanbaumaro.x_vel;

            strcpy(Jugador_2.mov_1.nombre, sanbaumaro.mov_1.nombre);
            strcpy(Jugador_2.mov_1.tipo, sanbaumaro.mov_1.tipo);
            strcpy(Jugador_2.mov_1.descripcion, sanbaumaro.mov_1.descripcion);
            Jugador_2.mov_1.potencia = sanbaumaro.mov_1.potencia;
            Jugador_2.mov_1.curacion = sanbaumaro.mov_1.curacion;
            Jugador_2.mov_1.presicion = sanbaumaro.mov_1.presicion;

            strcpy(Jugador_2.mov_2.nombre, sanbaumaro.mov_2.nombre);
            strcpy(Jugador_2.mov_2.tipo, sanbaumaro.mov_2.tipo);
            strcpy(Jugador_2.mov_2.descripcion, sanbaumaro.mov_2.descripcion);
            Jugador_2.mov_2.potencia = sanbaumaro.mov_2.potencia;
            Jugador_2.mov_2.curacion = sanbaumaro.mov_2.curacion;
            Jugador_2.mov_2.presicion = sanbaumaro.mov_2.presicion;

            strcpy(Jugador_2.mov_1.nombre, sanbaumaro.mov_3.nombre);
            strcpy(Jugador_2.mov_1.tipo, sanbaumaro.mov_3.tipo);
            strcpy(Jugador_2.mov_1.descripcion, sanbaumaro.mov_3.descripcion);
            Jugador_2.mov_3.potencia = sanbaumaro.mov_3.potencia;
            Jugador_2.mov_3.curacion = sanbaumaro.mov_3.curacion;
            Jugador_2.mov_3.presicion = sanbaumaro.mov_3.presicion;

            strcpy(Jugador_2.mov_4.nombre, sanbaumaro.mov_4.nombre);
            strcpy(Jugador_2.mov_4.tipo, sanbaumaro.mov_4.tipo);
            strcpy(Jugador_2.mov_4.descripcion, sanbaumaro.mov_4.descripcion);
            Jugador_2.mov_4.potencia = sanbaumaro.mov_4.potencia;
            Jugador_2.mov_4.curacion = sanbaumaro.mov_4.curacion;
            Jugador_2.mov_4.presicion = sanbaumaro.mov_4.presicion;

            strcpy(Jugador_2.mov_5.nombre, sanbaumaro.mov_5.nombre);
            strcpy(Jugador_2.mov_5.tipo, sanbaumaro.mov_5.tipo);
            strcpy(Jugador_2.mov_5.descripcion, sanbaumaro.mov_5.descripcion);
            Jugador_2.mov_5.potencia = sanbaumaro.mov_5.potencia;
            Jugador_2.mov_5.curacion = sanbaumaro.mov_5.curacion;
            Jugador_2.mov_5.presicion = sanbaumaro.mov_5.presicion;

            strcpy(Jugador_2.mov_6.nombre, sanbaumaro.mov_6.nombre);
            strcpy(Jugador_2.mov_6.tipo, sanbaumaro.mov_6.tipo);
            strcpy(Jugador_2.mov_6.descripcion, sanbaumaro.mov_6.descripcion);
            Jugador_2.mov_6.potencia = sanbaumaro.mov_6.potencia;
            Jugador_2.mov_6.curacion = sanbaumaro.mov_6.curacion;
            Jugador_2.mov_6.presicion = sanbaumaro.mov_6.presicion;

            nombre_valido = 1;

        }else if(strcmp(personaje_1, thanas.nombre) == 0){

            strcpy(Jugador_2.nombre, thanas.nombre);
            strcpy(Jugador_2.historia, thanas.historia);
            Jugador_2.vida = thanas.vida;
            Jugador_2.atq = thanas.atq;
            Jugador_2.def = thanas.def;
            Jugador_2.vel = thanas.vel;
            Jugador_2.daniocrit = thanas.daniocrit;
            Jugador_2.probcrit = thanas.probcrit;
            Jugador_2.evacion = thanas.evacion;
            Jugador_2.x_atq = thanas.x_atq;
            Jugador_2.x_def = thanas.x_def;
            Jugador_2.x_vel = thanas.x_vel;

            strcpy(Jugador_2.mov_1.nombre, thanas.mov_1.nombre);
            strcpy(Jugador_2.mov_1.tipo, thanas.mov_1.tipo);
            strcpy(Jugador_2.mov_1.descripcion, thanas.mov_1.descripcion);
            Jugador_2.mov_1.potencia = thanas.mov_1.potencia;
            Jugador_2.mov_1.curacion = thanas.mov_1.curacion;
            Jugador_2.mov_1.presicion = thanas.mov_1.presicion;

            strcpy(Jugador_2.mov_2.nombre, thanas.mov_2.nombre);
            strcpy(Jugador_2.mov_2.tipo, thanas.mov_2.tipo);
            strcpy(Jugador_2.mov_2.descripcion, thanas.mov_2.descripcion);
            Jugador_2.mov_2.potencia = thanas.mov_2.potencia;
            Jugador_2.mov_2.curacion = thanas.mov_2.curacion;
            Jugador_2.mov_2.presicion = thanas.mov_2.presicion;

            strcpy(Jugador_2.mov_1.nombre, thanas.mov_3.nombre);
            strcpy(Jugador_2.mov_1.tipo, thanas.mov_3.tipo);
            strcpy(Jugador_2.mov_1.descripcion, thanas.mov_3.descripcion);
            Jugador_2.mov_3.potencia = thanas.mov_3.potencia;
            Jugador_2.mov_3.curacion = thanas.mov_3.curacion;
            Jugador_2.mov_3.presicion = thanas.mov_3.presicion;

            strcpy(Jugador_2.mov_4.nombre, thanas.mov_4.nombre);
            strcpy(Jugador_2.mov_4.tipo, thanas.mov_4.tipo);
            strcpy(Jugador_2.mov_4.descripcion, thanas.mov_4.descripcion);
            Jugador_2.mov_4.potencia = thanas.mov_4.potencia;
            Jugador_2.mov_4.curacion = thanas.mov_4.curacion;
            Jugador_2.mov_4.presicion = thanas.mov_4.presicion;

            strcpy(Jugador_2.mov_5.nombre, thanas.mov_5.nombre);
            strcpy(Jugador_2.mov_5.tipo, thanas.mov_5.tipo);
            strcpy(Jugador_2.mov_5.descripcion, thanas.mov_5.descripcion);
            Jugador_2.mov_5.potencia = thanas.mov_5.potencia;
            Jugador_2.mov_5.curacion = thanas.mov_5.curacion;
            Jugador_2.mov_5.presicion = thanas.mov_5.presicion;

            strcpy(Jugador_2.mov_6.nombre, thanas.mov_6.nombre);
            strcpy(Jugador_2.mov_6.tipo, thanas.mov_6.tipo);
            strcpy(Jugador_2.mov_6.descripcion, thanas.mov_6.descripcion);
            Jugador_2.mov_6.potencia = thanas.mov_6.potencia;
            Jugador_2.mov_6.curacion = thanas.mov_6.curacion;
            Jugador_2.mov_6.presicion = thanas.mov_6.presicion;

            nombre_valido = 1;

        }
        
    }while (nombre_valido == 0);

    printf("¡ QUE INICIE LA BATALLA !\n");
    while(batalla == 1){

        printf("Turno del jugador 1\n");
        printf("si desea ver las caracteristicas de los heroes / villanos ingrese un 1 \n");
        scanf("%i", &caracteristicas);

        if (caracteristicas == 1)
        {
            info(azukita, misil);
            caracteristicas = 0;
        }

        printf("Jugador 1 ingrese el nombre del movimiento que desea usar\n");
        scanf("%s", movimiento_actual);

        if (strcmp(movimiento_actual, Jugador_1.mov_1.nombre) == 0)
        {
            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_1.mov_1.presicion - Jugador_2.evacion * Jugador_2.x_evacion))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                numero_de_respaldo_gp = Jugador_1.daniocrit;
                Jugador_1.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_2.vida = Jugador_2.vida - (((Jugador_1.mov_1.potencia + Jugador_1.atq * Jugador_1.x_atq * Jugador_1.daniocrit)* evadir)/(Jugador_2.def * Jugador_2.x_def));
            
            Jugador_1.vida = Jugador_1.vida + Jugador_1.mov_1.curacion;

            if (numero_aleatorio_evadir > ( Jugador_1.mov_1.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                Jugador_1.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }

        }else if (strcmp(movimiento_actual, Jugador_1.mov_2.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;

            if (numero_aleatorio_evadir > (Jugador_1.mov_2.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                numero_de_respaldo_gp = Jugador_1.daniocrit;
                Jugador_1.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }

            Jugador_2.vida = Jugador_2.vida - (((Jugador_1.mov_2.potencia + Jugador_1.atq * Jugador_1.x_atq * Jugador_1.daniocrit)* evadir)/(Jugador_2.def * Jugador_2.x_def));

            Jugador_1.vida = Jugador_1.vida + Jugador_1.mov_2.curacion;

            if (numero_aleatorio_evadir > (Jugador_1.mov_2.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                Jugador_1.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }

        }else if (strcmp(movimiento_actual, Jugador_1.mov_3.nombre) == 0){

                numero_aleatorio_evadir = rand() % 100 + 1;
                numero_aleatorio_golpecrit = rand() % 100 + 1;

            if (numero_aleatorio_evadir > (Jugador_1.mov_3.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                numero_de_respaldo_gp = Jugador_1.daniocrit;
                Jugador_1.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }

            Jugador_2.vida = Jugador_2.vida - (((Jugador_1.mov_3.potencia + Jugador_1.atq * Jugador_1.x_atq * Jugador_1.daniocrit)* evadir)/(Jugador_2.def * Jugador_2.x_def));

            Jugador_1.vida = Jugador_1.vida + Jugador_1.mov_3.curacion;

            if (numero_aleatorio_evadir > (Jugador_1.mov_3.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 1;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                Jugador_1.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }


        }else if (strcmp(movimiento_actual, Jugador_1.mov_4.nombre) == 0){

                numero_aleatorio_evadir = rand() % 100 + 1;
                numero_aleatorio_golpecrit = rand() % 100 + 1;

            if (numero_aleatorio_evadir > (Jugador_1.mov_4.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                numero_de_respaldo_gp = Jugador_1.daniocrit;
                Jugador_1.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }

            Jugador_2.vida = Jugador_2.vida - (((Jugador_1.mov_4.potencia + Jugador_1.atq * Jugador_1.x_atq * Jugador_1.daniocrit)* evadir)/(Jugador_2.def * Jugador_2.x_def));

            Jugador_1.vida = Jugador_1.vida + Jugador_1.mov_4.curacion;

            if (numero_aleatorio_evadir > (Jugador_1.mov_4.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                Jugador_1.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }


        }else if (strcmp(movimiento_actual, Jugador_1.mov_5.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;

            if (numero_aleatorio_evadir > (Jugador_1.mov_5.presicion - Jugador_2.evacion * Jugador_2.x_evacion))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                numero_de_respaldo_gp = Jugador_1.daniocrit;
                Jugador_1.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }

            Jugador_2.vida = Jugador_2.vida - (((Jugador_1.mov_5.potencia + Jugador_1.atq * Jugador_1.x_atq * Jugador_1.daniocrit)* evadir)/(Jugador_2.def * Jugador_2.x_def));

            Jugador_1.vida = Jugador_1.vida + Jugador_1.mov_5.curacion;

            if (numero_aleatorio_evadir > (Jugador_1.mov_5.presicion - + Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                Jugador_1.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }


        }else if (strcmp(movimiento_actual, Jugador_1.mov_6.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;

            if (numero_aleatorio_evadir > (Jugador_1.mov_6.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                numero_de_respaldo_gp = Jugador_1.daniocrit;
                Jugador_1.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }

            Jugador_2.vida = Jugador_2.vida - (((Jugador_1.mov_6.potencia + Jugador_1.atq * Jugador_1.x_atq * Jugador_1.daniocrit)* evadir)/(Jugador_2.def * Jugador_2.x_def));

            Jugador_1.vida = Jugador_1.vida + Jugador_1.mov_6.curacion;

            if (numero_aleatorio_evadir > (Jugador_1.mov_6.presicion - Jugador_2.evacion * Jugador_2.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_1.probcrit)
            {
                Jugador_1.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }

        }else{
                printf("no introduciste un movimiento valido, pierdes el turno\n");
        }

        printf("Turno del jugador 2\n");
        printf("si desea ver las caracteristicas de los heroes / villanos ingrese un 1 \n");
        scanf("%i", &caracteristicas);

        if (caracteristicas =! 0)
        {
            info(Jugador_1, Jugador_2);
            caracteristicas = 0;
        }

        printf("Jugador 2 ingrese el nombre del movimiento que desea usar\n");
        scanf("%s", movimiento_actual);


        if (strcmp(movimiento_actual, Jugador_2.mov_1.nombre) == 0)
        {
            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_2.mov_1.presicion - Jugador_1.evacion * Jugador_1.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                numero_de_respaldo_gp = Jugador_2.daniocrit;
                Jugador_2.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_1.vida = Jugador_1.vida - (((Jugador_2.mov_1.potencia + Jugador_2.atq * Jugador_2.x_atq * Jugador_2.daniocrit)* evadir)/(Jugador_1.def * Jugador_1.x_def));
            Jugador_2.vida = Jugador_2.vida + Jugador_2.mov_1.curacion;

            if (numero_aleatorio_evadir > (Jugador_2.mov_1.presicion - Jugador_1.evacion * Jugador_1.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                Jugador_2.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }

        }else if (strcmp(movimiento_actual, Jugador_2.mov_2.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_2.mov_2.presicion - Jugador_1.evacion * Jugador_1.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                numero_de_respaldo_gp = Jugador_2.daniocrit;
                Jugador_2.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_1.vida = Jugador_1.vida - (((Jugador_2.mov_2.potencia + Jugador_2.atq * Jugador_2.x_atq * Jugador_2.daniocrit)* evadir)/(Jugador_1.def * Jugador_1.x_def));
            Jugador_2.vida = Jugador_2.vida + Jugador_2.mov_2.curacion;

            if (numero_aleatorio_evadir > (Jugador_2.mov_2.presicion - Jugador_1.evacion * Jugador_1.x_evacion ))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                Jugador_2.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }

        }else if (strcmp(movimiento_actual, Jugador_1.mov_3.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_2.mov_3.presicion - Jugador_1.evacion * Jugador_1.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                numero_de_respaldo_gp = Jugador_2.daniocrit;
                Jugador_2.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_1.vida = Jugador_1.vida - (((Jugador_2.mov_3.potencia + Jugador_2.atq * Jugador_2.x_atq * Jugador_2.daniocrit)* evadir)/(Jugador_1.def * Jugador_1.x_def));
            Jugador_2.vida = Jugador_2.vida + Jugador_2.mov_3.curacion;

            if (numero_aleatorio_evadir > (Jugador_2.mov_3.presicion - Jugador_1.evacion * Jugador_1.x_evacion))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                Jugador_2.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
                
            }

        }else if (strcmp(movimiento_actual, Jugador_1.mov_4.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_2.mov_4.presicion - Jugador_1.evacion * Jugador_1.x_evacion))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                numero_de_respaldo_gp = Jugador_2.daniocrit;
                Jugador_2.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_1.vida = Jugador_1.vida - (((Jugador_2.mov_4.potencia + Jugador_2.atq * Jugador_2.x_atq * Jugador_2.daniocrit)* evadir)/(Jugador_1.def * Jugador_1.x_def));
            Jugador_2.vida = Jugador_2.vida + Jugador_2.mov_4.curacion;

            if (numero_aleatorio_evadir > (Jugador_2.mov_4.presicion - Jugador_1.evacion * Jugador_1.x_evacion))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                Jugador_2.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }

        }else if (strcmp(movimiento_actual, Jugador_1.mov_5.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_2.mov_5.presicion - Jugador_1.evacion * Jugador_1.x_evacion))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                numero_de_respaldo_gp = Jugador_2.daniocrit;
                Jugador_2.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_1.vida = Jugador_1.vida - (((Jugador_2.mov_5.potencia + Jugador_2.atq * Jugador_2.x_atq * Jugador_2.daniocrit)* evadir)/(Jugador_1.def * Jugador_1.x_def));
            Jugador_2.vida = Jugador_2.vida + Jugador_2.mov_5.curacion;

            if (numero_aleatorio_evadir > (Jugador_2.mov_5.presicion - Jugador_1.evacion * Jugador_1.x_evacion))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                Jugador_2.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }


        }else if (strcmp(movimiento_actual, Jugador_1.mov_6.nombre) == 0){

            numero_aleatorio_evadir = rand() % 100 + 1;
            numero_aleatorio_golpecrit = rand() % 100 + 1;
            if (numero_aleatorio_evadir > (Jugador_2.mov_6.presicion - Jugador_1.evacion * Jugador_1.x_evacion ))
            {
                evadir = 0;
                printf("HAN EVADIDO TU MOVIMIENTO\n\n");
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                numero_de_respaldo_gp = Jugador_2.daniocrit;
                Jugador_2.daniocrit = 1;
                printf("GOLPE CRITICO\n\n");
            }
            
            
            Jugador_1.vida = Jugador_1.vida - (((Jugador_2.mov_6.potencia + Jugador_2.atq * Jugador_2.x_atq * Jugador_2.daniocrit)* evadir)/(Jugador_1.def * Jugador_1.x_def));
            Jugador_2.vida = Jugador_2.vida + Jugador_2.mov_6.curacion;

            if (numero_aleatorio_evadir > (Jugador_2.mov_6.presicion - Jugador_1.evacion * Jugador_1.x_evacion))
            {
                evadir = 1;
            }

            if (numero_aleatorio_golpecrit > Jugador_2.probcrit)
            {
                Jugador_2.daniocrit = numero_de_respaldo_gp;
                numero_de_respaldo_gp = 1;
            }
        }

        if(Jugador_1.vida < 0)
        {
            batalla = 0;
            printf("La batalla a terminado ! El ganador es el jugador 2");
        }else if ((Jugador_2.vida < 0))
        {
            batalla = 0;
            printf("La batalla a terminado ! El ganador es el jugador 1");
        }
    }
}




void bienvenida(void) {
    printf("Bienvenido a heroes vs villanos\n");
    printf("El sistema de combate va a ser por turnos, ambos jugadores eligen 1 Heroe o Villano, cada heroe o villano tiene 3 ataques y 3 defensas, el jugador que ataca primero se define mediante las velosidades de sus respectivos personajes\n");
}

void lista_personajes(void){
    printf("PERSONAJES \n");
    printf("AZUKITA \n");
    printf("MISIL \n");
    printf("SAN BAUMARO\n");
    printf("THANAS\n");
}

void info(personaje_t Jugador_1, personaje_t Jugador_2) {
    char personaje_ele_caracteristicas[10]; 
    printf("De que personaje desea ver las estadisticas o si desea de ambos ingrese \"ambos\"\n");
    scanf("%s", personaje_ele_caracteristicas);
    
    if (strcmp(personaje_ele_caracteristicas, Jugador_1.nombre) == 0) {
        printf("\nNombre: %s\n", Jugador_1.nombre);
        printf("Historia: %s\n", Jugador_1.historia);
        printf("Vida: %i\n", Jugador_1.vida);
        printf("Atq: %i\n", Jugador_1.atq); 
        printf("Def: %i\n", Jugador_1.def); 
        printf("Vel: %i\n", Jugador_1.vel); 
        printf("Daniocrit: %i\n", Jugador_1.daniocrit); 
        printf("Probcrit: %i\n", Jugador_1.probcrit); 
        printf("Evacion: %i\n", Jugador_1.evacion); 
        printf("X_evacion: %i\n", Jugador_1.x_evacion);
        printf("X_atq: %i\n", Jugador_1.x_atq);
        printf("X_def: %i\n", Jugador_1.x_def);
        printf("X_vel: %i\n", Jugador_1.x_vel);
        
        printf("Nombre del movimiento 1: %s\n", Jugador_1.mov_1.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_1.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_1.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_1.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_1.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_1.presicion);

        printf("Nombre del movimiento 2: %s\n", Jugador_1.mov_2.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_2.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_2.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_2.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_2.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_2.presicion); 

        printf("Nombre del movimiento 3: %s\n", Jugador_1.mov_3.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_3.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_3.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_3.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_3.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_3.presicion); 

        printf("Nombre del movimiento 4: %s\n", Jugador_1.mov_4.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_4.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_4.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_4.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_4.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_4.presicion); 

        printf("Nombre del movimiento 5: %s\n", Jugador_1.mov_5.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_5.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_5.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_5.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_5.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_5.presicion); 

        printf("Nombre del movimiento 6: %s\n", Jugador_1.mov_6.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_6.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_6.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_6.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_6.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_6.presicion); 
        
    } else if (strcmp(personaje_ele_caracteristicas, Jugador_2.nombre) == 0) {
        
        printf("\nNombre: %s\n", Jugador_2.nombre);
        printf("Historia: %s\n", Jugador_2.historia);
        printf("Vida: %i\n", Jugador_2.vida);
        printf("Atq: %i\n", Jugador_2.atq);
        printf("Def: %i\n", Jugador_2.def); 
        printf("Vel: %i\n", Jugador_2.vel); 
        printf("Daniocrit: %i\n", Jugador_2.daniocrit); 
        printf("Probcrit: %i\n", Jugador_2.probcrit); 
        printf("Evacion: %i\n", Jugador_2.evacion); 
        printf("X_evacion: %i\n", Jugador_2.x_evacion);
        printf("X_atq: %i\n", Jugador_2.x_atq);
        printf("X_def: %i\n", Jugador_2.x_def);
        printf("X_vel: %i\n", Jugador_2.x_vel);
        
        printf("\nNombre del movimiento 1: %s\n", Jugador_2.mov_1.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_1.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_1.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_1.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_1.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_1.presicion); 

        printf("\nNombre del movimiento 2: %s\n", Jugador_2.mov_2.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_2.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_2.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_2.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_2.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_2.presicion); 

        printf("\nNombre del movimiento 3: %s\n", Jugador_2.mov_3.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_3.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_3.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_3.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_3.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_3.presicion); 
        printf("Nombre del movimiento 4: %s\n", Jugador_2.mov_4.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_4.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_4.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_4.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_4.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_4.presicion); 

        printf("\nNombre del movimiento 5: %s\n", Jugador_2.mov_5.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_5.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_5.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_5.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_5.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_5.presicion);

        printf("\nNombre del movimiento 6: %s\n", Jugador_2.mov_6.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_6.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_6.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_6.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_6.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_6.presicion); 
    } else if (strcmp(personaje_ele_caracteristicas, "ambos") == 0) {
        
        printf("JUGADOR 2\n");
        
        printf("\nNombre: %s\n", Jugador_2.nombre);
        printf("Historia: %s\n", Jugador_2.historia);
        printf("Vida: %i\n", Jugador_2.vida);
        printf("Atq: %i\n", Jugador_2.atq);
        printf("Def: %i\n", Jugador_2.def); 
        printf("Vel: %i\n", Jugador_2.vel); 
        printf("Daniocrit: %i\n", Jugador_2.daniocrit); 
        printf("Probcrit: %i\n", Jugador_2.probcrit); 
        printf("Evacion: %i\n", Jugador_2.evacion); 
        printf("X_evacion: %i\n", Jugador_2.x_evacion);
        printf("X_atq: %i\n", Jugador_2.x_atq);
        printf("X_def: %i\n", Jugador_2.x_def);
        printf("X_vel: %i\n", Jugador_2.x_vel);
        
        printf("Nombre del movimiento 1: %s\n", Jugador_2.mov_1.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_1.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_1.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_1.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_1.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_1.presicion); 

        printf("Nombre del movimiento 2: %s\n", Jugador_2.mov_2.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_2.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_2.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_2.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_2.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_2.presicion); 

        printf("Nombre del movimiento 3: %s\n", Jugador_2.mov_3.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_3.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_3.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_3.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_3.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_3.presicion); 
        printf("Nombre del movimiento 4: %s\n", Jugador_2.mov_4.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_4.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_4.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_4.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_4.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_4.presicion); 

        printf("Nombre del movimiento 5: %s\n", Jugador_2.mov_5.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_5.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_5.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_5.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_5.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_5.presicion);

        printf("Nombre del movimiento 6: %s\n", Jugador_2.mov_6.nombre);
        printf("Tipo: %s\n", Jugador_2.mov_6.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_2.mov_6.descripcion);
        printf("Potencia: %i\n", Jugador_2.mov_6.potencia);
        printf("Curacion: %i\n", Jugador_2.mov_6.curacion);
        printf("Presicion: %i\n", Jugador_2.mov_6.presicion); 
        
        printf("JUGADOR 1\n");
        
        printf("\nNombre: %s\n", Jugador_1.nombre);
        printf("Historia: %s\n", Jugador_1.historia);
        printf("Vida: %i\n", Jugador_1.vida);
        printf("Atq: %i\n", Jugador_1.atq); 
        printf("Def: %i\n", Jugador_1.def); 
        printf("Vel: %i\n", Jugador_1.vel); 
        printf("Daniocrit: %i\n", Jugador_1.daniocrit); 
        printf("Probcrit: %i\n", Jugador_1.probcrit); 
        printf("Evacion: %i\n", Jugador_1.evacion); 
        printf("X_evacion: %i\n", Jugador_1.x_evacion);
        printf("X_atq: %i\n", Jugador_1.x_atq);
        printf("X_def: %i\n", Jugador_1.x_def);
        printf("X_vel: %i\n", Jugador_1.x_vel);
        
        printf("Nombre del movimiento 1: %s\n", Jugador_1.mov_1.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_1.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_1.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_1.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_1.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_1.presicion);

        printf("Nombre del movimiento 2: %s\n", Jugador_1.mov_2.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_2.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_2.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_2.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_2.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_2.presicion); 

        printf("Nombre del movimiento 3: %s\n", Jugador_1.mov_3.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_3.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_3.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_3.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_3.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_3.presicion); 

        printf("Nombre del movimiento 4: %s\n", Jugador_1.mov_4.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_4.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_4.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_4.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_4.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_4.presicion); 

        printf("Nombre del movimiento 5: %s\n", Jugador_1.mov_5.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_5.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_5.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_5.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_5.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_5.presicion); 

        printf("Nombre del movimiento 6: %s\n", Jugador_1.mov_6.nombre);
        printf("Tipo: %s\n", Jugador_1.mov_6.tipo);
        printf("Descripcion del movimiento: %s\n", Jugador_1.mov_6.descripcion);
        printf("Potencia: %i\n", Jugador_1.mov_6.potencia);
        printf("Curacion: %i\n", Jugador_1.mov_6.curacion);
        printf("Presicion: %i\n", Jugador_1.mov_6.presicion); 
        
        
    } else {
        printf("Personaje no reconocido.\n");
    }
}
