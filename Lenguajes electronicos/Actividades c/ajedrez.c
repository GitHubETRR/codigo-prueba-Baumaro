#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define MAX_TXT 30

#define BLANCO 1
#define NEGRO 0

#define CANT_PEONES 16
#define CANT_PIEZAS 32

#define VACIO ' '
#define PEON_BLANCO 0x2659
#define CABALLO_BLANCO 0x2655
#define ALFIL_BLANCO 0x2658
#define TORRE_BLANCO 0x2656
#define REINA_BLANCO 0x2657
#define REY_BLANCO 0x2654

#define PEON_NEGRO 0x265A
#define CABALLO_NEGRO 0x265B
#define ALFIL_NEGRO 0x265C
#define TORRE_NEGRO 0x265D
#define REINA_NEGRO 0x265E
#define REY_NEGRO 0x265F



void reset(int tablero[8][8]);
void mov_peon(int tablero[8][8]);

int main(void){
    setlocale(LC_CTYPE, "");
    int casilla_Mov_x, casilla_Mov_y;
    int Juego;
    int turnos, For_2, For_3;
    wprintf(L"bienvenido a AJEDREZ CON BAUMARO\n");
    wprintf(L"desea iniciar el juego \n(1) - si \n(0) - no\n");
    scanf("%d", &Juego);
    wchar_t tablero[8][8];
    reset(tablero);
    while(Juego == 1){
        turnos++;
        for(For_2 = 0; For_2 < 8; For_2++){
            for(For_3 = 0; For_3 < 8; For_3++) {
                setlocale(LC_CTYPE, "");
                int a=0x2657;
                wprintf(L" %lc ",tablero[For_2][For_3]);
            }
            wprintf(L"\n");
        }
        wprintf(L"ingrese la casilla de la pieza que quiere mover\n");
        scanf("%d\n", &casilla_Mov_x);
        scanf("%d", &casilla_Mov_y);
        printf("%d", tablero[casilla_Mov_y][casilla_Mov_x]);
        return 0;
    }
}

void reset(int tablero[8][8]) {
    int i, j;

    // Inicializar el tablero vacío
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tablero[i][j] = VACIO;
        }
    }

    // Colocar peones
    for(i = 0; i < 8; i++) {
        tablero[1][i] = PEON_BLANCO;
        tablero[6][i] = PEON_NEGRO;
    }

    // Colocar alfiles
    tablero[0][2] = ALFIL_BLANCO;
    tablero[0][5] = ALFIL_BLANCO;
    tablero[7][2] = ALFIL_NEGRO;
    tablero[7][5] = ALFIL_NEGRO;

    // Colocar caballos
    tablero[0][1] = CABALLO_BLANCO;
    tablero[0][6] = CABALLO_BLANCO;
    tablero[7][1] = CABALLO_NEGRO;
    tablero[7][6] = CABALLO_NEGRO;

    // Colocar torres
    tablero[0][0] = TORRE_BLANCO;
    tablero[0][7] = TORRE_BLANCO;
    tablero[7][0] = TORRE_NEGRO;
    tablero[7][7] = TORRE_NEGRO;

    // Colocar reyes y reinas
    tablero[0][3] = REINA_BLANCO;
    tablero[0][4] = REY_BLANCO;
    tablero[7][3] = REINA_NEGRO;
    tablero[7][4] = REY_NEGRO;
}


