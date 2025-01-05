import os
import sys

def main():
    print("bienvenido al programa del manipulacion de vectores")
    lista = []
    lista_usuarios = []

    for i in range(10):
        lista.append(int(input(f"ingrese el numero de la posicion {i}: ")))


def calcular_suma(lista):
    suma_lista = 0
    for i in range(10):
        suma_lista += lista[i]
    print(f"la sumatoria de todos los valores de la lista es: {suma_lista}")

def buscar_valor(lista):
    numero_buscado = int(input("ingresa el numero que deseas buscar en las lista: "))
    if lista in numero_buscado:
        for i in range(10):
            if numero_buscado == lista[i]:
                print(f"el numero {numero_buscado} que ingresaste esta en la posicion {i}")
    else:
        print(f"el numero {numero_buscado} no esta en la lista")

def calcular_min(lista):
    
    valor_min = min(lista)
    print(f"el numero mas chico de la lista es: {valor_min}")

def calcular_prom(lista):
    promedio = 0
    for i in range(10):
        promedio += lista[i]

    promedio /= 10  
    print(f"el promedio del vector es: {promedio}")
    return promedio  

def may_prom(promedio):
    num_may_prom = []
    for i in range(10):

        if i > promedio:

            num_may_prom.append(i)

    print(f"los numeros mayores al promedio {promedio} son {num_may_prom}")

def multi_ult_num(lista):

    multiplos = []

    for i in range(lista[10]):
        if (lista[10] % i) == 0:
            multiplos.append(i)
    
    print(multiplos)

def registrar(lista_usuarios):

    lista_usuarios.append(Usuario(input("ingrese un nombre de usuario: ") ,input("ingrese su nombre: ") ,input("ingrese su apellido: "), input("ingrese una contraseña: ")))

    return lista_usuarios





class Usuario:
    def __init__(self, n_usuario, nombre, apellido, contraseña):
        
        self.n_usuario = n_usuario
        self.nombre = nombre
        self.apellido = apellido
        self.contraseña = contraseña

    def Iniciar_secion(lista_usuarios, U_ingresado):

        for i in lista_usuarios:

            U_valido = lista_usuarios.n_usuario == U_ingresado
            
        return U_valido

    

if __name__ == "__main__":
    main()


        



    

        



        

