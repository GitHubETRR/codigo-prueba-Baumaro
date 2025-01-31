#include <stdio.h>
#include <string.h>

struct coord{
    int x;
    int y;
};

struct piezas{
    struct coord pos;
    struct coord mov;
    int tipo;
    int color;
};
struct casilleros{
    int estado;
    struct piezas pieza;
    int color;
};







int main (void){
    return 0;
}

