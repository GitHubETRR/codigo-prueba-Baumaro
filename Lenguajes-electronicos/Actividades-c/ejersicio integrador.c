#include <stdio.h>
#include <stdbool.h>

#define TAM_TXT 20


typedef struct{
    int dia;
    int mes;
    int anio;
}fecha_venta_t;

typedef struct{
    char nombre[TAM_TXT];
    char apellido[TAM_TXT];
    fecha_venta_t fecha_venta;
    bool estado;  		// Estado: DISPONIBLE (0) o VENDIDO (1)	
}reservas_t;

void bienvenida(void);

int main(){
    reservas_t asientos[100]
    int reservar_turno;
    int asiento_reservado
    time_t tiempo_reserva;
    printf("bienvenido al sistema de reservas de vuelos\n");
    printf("desea reservar un turno?\n (1) - si")
    scanf("%d" &reservar_turno);
    if (reservar_turno == 1)
    {
        do
        {
            printf("que haciento desea reservar?");
            scanf("%d", &asiento_reservado);
            if ((asiento_reservado > 99) || (asiento_reservado < 0))
            {
                printf("ese haciento no existe ingrese otro");
            }
        } while ((asiento_reservado > 99) || (asiento_reservado < 0));

        asientos[asiento_reservado] = 
        

        
        
        
        struct tm *tiempo_reserva = localtime(&reservar_turno);
        
    }
    

    
}

