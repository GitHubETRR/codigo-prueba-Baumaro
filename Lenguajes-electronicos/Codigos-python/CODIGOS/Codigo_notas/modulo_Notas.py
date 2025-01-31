

from datetime import datetime



def Aniadir_Nota(Lista_Notas):

    with open("Codigo_Notas\\Notas.txt","w", encoding = "UTF-8") as Notas:

        for i in range(int(input("Ingrese el numero de notas que quiere escribir: ")))

            Notas.writelines(f"Nota: {input(f"Escribe la Nota numero {i} que desea ingresar: ")} Fecha: {datetime.today().strftime("%Y-%m-%d %H:%M:%S")}\n")

        Lista_Notas = Notas.readlines() 

    return Lista_Notas



def Ver_Notas(Lista_Notas):

    for indice,Nota in enumerate(Lista_Notas):

        print(f"[{indice}] - Nota: {Nota} ")

    return None





def Eliminar_Nota(Lista_Notas):


    Ver_Notas(Lista_Notas):

    for E_Nota in range(int(input("Ingrese el numero de notas que quiere eliminar: "))):

        Lista_Notas.pop(int(input(f"Ingrese el numero de indice de la nota numero {E_Nota} que quiere borrar: ")))
    
    return Lista_Notas
