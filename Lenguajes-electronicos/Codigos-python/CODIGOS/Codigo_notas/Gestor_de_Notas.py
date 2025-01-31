import sys 

sys.path.append("C:\Users\\bauti\OneDrive\Documentos\GitHub\codigo-prueba-Baumaro\Lenguajes-electronicos\Codigos-python")

from MODULOS_BAUMARO.Usos_Comunes import bienvenida,apagar_

import modulo_Notas as modulo 




def main():

    apagar = False

    with open("Codigo_Notas\\Notas.txt","w", encoding = "UTF-8") as Notas:

        Lista_Notas = Notas.readlines()

    bienvenida()

    print("este es el programa de gestor de notas")

    while apagar == False:

        



    
    







if __name__ == "__main__":
    main()