#include <stdio.h>
#include <string.h>
#define MAX_TXT 30
#define BLANCO 1
#define NEGRO 0
#define CANT_PEONES 16
#define CANT_PIEZAS 32

#define PEON 0
#define ALFIL 1
#define CABALLO 2
#define TORRE 3
#define REINA 4
#define REY 5
struct coord{
    int x;
    int y;
};

struct pieza{
    struct coord pos;
    struct coord mov;
    int tipo;
    int color;
};
struct pieza piezas[32];

int main (void){
    return 0;
}

void reset(void){
    int i;
    for(i=0;i<(CANT_PEONES/2);i++){
        piezas[i].pos.x=i;
        piezas[i].pos.y=1;
        piezas[i].tipo=PEON;
        piezas[i].color=BLANCO;
        piezas[i].mov.x=0;
        piezas[i].mov.y=1;
    }
    for(;i<CANT_PEONES;i++){
        piezas[i].pos.x=i-(CANT_PEONES/2);
        piezas[i].pos.y=6;
        piezas[i].tipo=PEON;
        piezas[i].color=NEGRO;
        piezas[i].mov.x=0;
        piezas[i].mov.y=-1;
    
    }

}