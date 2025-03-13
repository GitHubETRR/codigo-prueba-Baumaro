import MODULOS_BAUMARO.Usos_Comunes as MB
import pandas as pd
from pathlib import Path




        


def main():

    apagar = False

    MB.bienvenida()

    while apagar == False:






class Producto():

    def __init__(self, Nombre, Precio, Categoria, Codigo):

        self.Nombre = Nombre
        self.Precio = Precio
        self.Categoria = Categoria
        self.Codigo = Codigo
    def Comprar():

        print(f"Has comprado el producto {self.Nombre} Codigo: {self.Codigo}")

    def Devolucion():

        print(f"Has devuelto el producto {self.Nombre} Codigo: {self.Codigo}")

class Disp_electronico(Producto):

    def __init__(self,Nombre, Precio, Categoria, Consumo, Tamaño):

        super().__init__(self,Nombre, Precio, Categoria)
        self.Consumo = Consumo
        self.Tamaño = Tamaño

    def Turn_ON():

        print(f"El Dispositivo {self.Nombre} se ha encendido")

    def Turn_OFF():

        print(f"El Dispositivo {self.Nombre} se ha apagado")

class Moda(Producto):

    def __init__(self, Nombre, Precio, Categoria, Talle, Tela):

        super().__init__(Nombre, Precio, Categoria)
        self.Talle = Talle
        self.Tela = Tela

class Consumibles(Producto):

    def __init__(self, Nombre, Precio, Categoria, Codigo,):
        super().__init__(Nombre, Precio, Categoria, Codigo)



class Arte(Producto):

    def __init__(self, Nombre, Precio, Categoria, Año, Tipo):
        super().__init__(Nombre, Precio, Categoria)
        self.Año = Año
        self.Tipo = Tipo

class Marca(Producto):

    def __init__(self, Nombre, Precio, Categoria, Linea, Año):
        super().__init__(Nombre, Precio, Categoria)
        self.Linea = Linea
        self.Año = Año

class Marca_Electronica(Marca, Disp_electronico):


if __name__ == "__main__":
    main()

