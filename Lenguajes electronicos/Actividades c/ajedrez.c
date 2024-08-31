#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define MAX_TXT 30

#define BLANCO 1
#define NEGRO 0

#define CANT_PEONES 16
#define CANT_PIEZAS 32

#define VACIO ' '
#define PEON_BLANCO 0x265F
#define CABALLO_BLANCO 0x265E
#define ALFIL_BLANCO 0x265D
#define TORRE_BLANCO 0x265C
#define REINA_BLANCO 0x265B
#define REY_BLANCO 0x265A

#define PEON_NEGRO 0x2659
#define CABALLO_NEGRO 0x2658
#define ALFIL_NEGRO 0x2657
#define TORRE_NEGRO 0x2656
#define REINA_NEGRO 0x2655
#define REY_NEGRO 0x2654


void imprimir_tablero(wchar_t tablero[8][8]);
void reset(wchar_t tablero[8][8]);
void mov_peon(wchar_t tablero[8][8], int casilla_Mov_y, int casilla_Mov_x);

int main(void){
    setlocale(LC_CTYPE, "");
    int casilla_Mov_x, casilla_Mov_y;
    int Juego;
    int turnos;
    wprintf(L"bienvenido a AJEDREZ CON BAUMARO\n");
    wprintf(L"desea iniciar el juego? \n(1) - si \n(0) - no\n");
    scanf("%d", &Juego);
    wchar_t tablero[8][8];
    reset(tablero);
    while(Juego == 1){
        turnos++;
        imprimir_tablero(tablero);
        wprintf(L"ingrese la casilla de la pieza que quiere mover\n");
        scanf("%d\n", &casilla_Mov_x);
        scanf("%d", &casilla_Mov_y);
        if((tablero[casilla_Mov_y][casilla_Mov_x] == PEON_BLANCO)){
            mov_peon(tablero, casilla_Mov_y, casilla_Mov_x);
        }
    }
}


void imprimir_tablero(wchar_t tablero[8][8]){
    
    int For_2, For_3;
    
    for(For_2 = 0; For_2 < 8; For_2++){
        for(For_3 = 0; For_3 < 8; For_3++) {
            wprintf(L"  %lc   ",tablero[For_2][For_3]);
        }                              
        wprintf(L"\n");
    }
}

void reset(wchar_t tablero[8][8]) {
    
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

void mov_peon(wchar_t tablero[8][8], int casilla_Mov_y, int casilla_Mov_x){
    int comer, comer_direccion, mover_2_casillas;
    if(((tablero[casilla_Mov_y + 1][casilla_Mov_x + 1] != " " ) || (tablero[casilla_Mov_y + 1][casilla_Mov_x - 1] != " " )) && (((tablero[casilla_Mov_y + 1][casilla_Mov_x + 1] > 0x2654 ) && (tablero[casilla_Mov_y + 1][casilla_Mov_x + 1] > 0x2659 )) || ((tablero[casilla_Mov_y + 1][casilla_Mov_x - 1] > 0x2654 ) && (tablero[casilla_Mov_y + 1][casilla_Mov_x - 1] > 0x2659 ))))
    {
        wprintf(L"desea comer? \n(1) - si \n(0) - no");
        scanf("%d", &comer);
        if(((tablero[casilla_Mov_y + 1][casilla_Mov_x + 1] > 0x2654 ) && (tablero[casilla_Mov_y + 1][casilla_Mov_x + 1] > 0x2659 )) && (comer == 1)) 
        {
            wprintf(L"(1) - comer derecha \n(0) - no");
            scanf("%d", &comer_direccion);
        }else if(((tablero[casilla_Mov_y + 1][casilla_Mov_x - 1] > 0x2654 ) && (tablero[casilla_Mov_y + 1][casilla_Mov_x - 1] > 0x2659 )) && (comer == 1))
        {
            wprintf(L"(1) - comer izquierda \n(0) - no");
            scanf("%d", &comer_direccion);
            if (comer_direccion == 1)
            {
                tablero[casilla_Mov_y + 1][casilla_Mov_x - 1] = tablero[casilla_Mov_y][casilla_Mov_x];
                tablero[casilla_Mov_y][casilla_Mov_x] = " ";
            }
            
        }
    }
    if ((comer != 1) && (((casilla_Mov_x > 0) && (casilla_Mov_x < 8)) && (casilla_Mov_y == 1)))
    {
        wprintf(L"desea mover dos casillas? \n(1) - si \n(0) - no\n");
        scanf("%d", &mover_2_casillas);
        if (mover_2_casillas == 1)
        {
            tablero[casilla_Mov_y + 2][casilla_Mov_x] = tablero[casilla_Mov_y][casilla_Mov_x];
            tablero[casilla_Mov_y][casilla_Mov_x] = " ";
            mover_2_casillas = 0;
        }
    }
    
    if ((comer != 1) && (mover_2_casillas != 1))
    {
        tablero[casilla_Mov_y + 1][casilla_Mov_x] = tablero[casilla_Mov_y][casilla_Mov_x];
        tablero[casilla_Mov_y][casilla_Mov_x] = " ";
    }
}

