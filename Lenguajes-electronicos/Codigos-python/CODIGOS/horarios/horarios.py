from pathlib import Path
from datetime import time
import pandas as pd



def crear_df():

    dictt = {
        "Hora" : [],
        "Lunes" : [],
        "Martes" : [],
        "Miercoles" : [],
        "Jueves" : [],
        "Viernes" : [],
        "Sabado" : [],
        "Domingo" : [],
    }
    ruta = Path("C:\\Users\\bauti\\OneDrive\\Documentos\\GitHub\\codigo-prueba-Baumaro\\Lenguajes-electronicos\\Codigos-python\\CODIGOS\\horarios\\horarios.xlsx")

    if not ruta.exists():

        df = pd.DataFrame(dictt)

        df.to_excel(ruta,index = False, engine = "openpyxl")

    return ruta

def horas(ruta):

    sep_horas = time(0,int(input("ingrese la separacion de las horas: ")))

    time_min = time(int(input("ingrese hora minima: ")))

    time_max = time(int(input("ingrese hora maxima: ")))

    df = pd.read_excel(ruta,engine = "openpyxl")

    df[0, "Hora"] = time_min  

    i = 0

    while  time_min < time_max:
    
        time_min += sep_horas

        i += 1

        df[i, "Hora"] = time_min

    print(df)



def main():

    ruta = crear_df()

    horas(ruta)




if "__main__" == __name__:
    main()