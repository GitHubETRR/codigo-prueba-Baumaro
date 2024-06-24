Algoritmo Suma_Convercion_de_complejos
	Escribir 'este es el programa de convercion y suma de numeros complejos'
	Repetir
		Repetir
			Escribir '(0) - suma de numeros complejos'
			Escribir '(1) - Cambio de forma'
			Leer Programa
			Segun Programa  Hacer
				0:
					Escribir '(0) - suma en binomica'
					Escribir '(1) - suma en polar'
					Repetir
						Leer F_suma
						Segun F_suma  Hacer
							0:
								Escribir 'ingrese la parte real de el primer numero'
								Leer X
								Escribir 'ingrese la parte imaginaria del primer numero'
								Leer I
								Escribir 'ingresa la parte real del segundo numero'
								Leer R
								Escribir 'ingrese la parte imaginaria de el segundo numero'
								Leer J
								X <- X+R
								I <- I+R
							1:
								Escribir 'introduce un modulo 1: '
								Leer M
								Escribir 'introduce un angulo 1: '
								Leer A
								Escribir 'introduce un modulo 2: '
								Leer M_1
								Escribir 'introduce un angulo 2: '
								Leer A_1
								I <- Suma_P_I(M,A,M_1,A_1)
								X <- Suma_P_X(M,A,M_1,A_1)
							De Otro Modo:
								Escribir 'no ingresaste un valor valido'
						FinSegun
					Mientras Que F_suma<>0 Y F_suma<>1
					Escribir '(1) - resultado en binomica'
					Escribir '(0) - resultado en polar'
					Leer Forma
					Segun Forma  Hacer
						0:
							B_P_2(X,I)
						1:
							Escribir 'la forma binomica seria :',X,' + ',I,'j'
						De Otro Modo:
							Escribir 'no introduciste nungun valor valido'
					FinSegun
				1:
					Repetir
						Escribir '(0) - binomica a polar'
						Escribir '(1) - polar a binomica'
						Leer Forma
						Segun Forma  Hacer
							0:
								B_P()
							1:
								P_B()
							De Otro Modo:
								Escribir 'no introduciste ningun valor valido '
						FinSegun
					Mientras Que Forma<>0 Y Forma<>1
				De Otro Modo:
					Escribir 'no ingresaste ningun valor valido'
			FinSegun
		Mientras Que Programa<>0 Y Programa<>1
		Escribir '(0) - apagar'
		Leer Apagar
	Mientras Que Apagar<>0
FinAlgoritmo

Funcion B_P
	Escribir 'introduce el valor de la parte real'
	Leer X
	Escribir ' introduce el valor de la parte imaginaria'
	Leer I
	Si X==0 Entonces
		Si I==0 Entonces
			M <- X+I
			A <- 0
		SiNo
			Si I<0 Entonces
				M <- X+I
				A <- 270
			SiNo
				M <- X+I
				A <- 90
			FinSi
		FinSi
	SiNo
		Si I==0 Entonces
			Si X<0 Entonces
				M <- X+I
				A <- 180
			SiNo
				M <- X+I
				A <- 0
			FinSi
		SiNo
			Si X<0 Entonces
				Si I<0 Entonces
					M <- rc(I*I+X*X)
					A <- 270-atan(I/X)*180/pi
				SiNo
					M <- rc(I*I+X*X)
					A <- 180+atan(I/X)*180/pi
				FinSi
			SiNo
				Si I<0 Entonces
					M <- rc(I*I+X*X)
					A <- 360+atan(I/X)*180/pi
				SiNo
					M <- rc(I*I+X*X)
					A <- atan(I/X)*180/pi
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'el modulo del vector es: ',M,' y el angulo es: ',A
FinFuncion

Funcion P_B
	Escribir 'introduce el modulo: '
	Leer M
	Escribir 'introduce el angulo: '
	Leer A
	A <- (A*pi)/180
	X <- cos(A)*M
	I <- sen(A)*M
	Escribir 'la forma binomica seria :',X,' + ',I,'j'
FinFuncion

Funcion B_P_2 (X,I)
	Si X==0 Entonces
		Si I==0 Entonces
			M <- X+I
			A <- 0
		SiNo
			Si I<0 Entonces
				M <- X+I
				A <- 270
			SiNo
				M <- X+I
				A <- 90
			FinSi
		FinSi
	SiNo
		Si I==0 Entonces
			Si X<0 Entonces
				M <- X+I
				A <- 180
			SiNo
				M <- X+I
				A <- 0
			FinSi
		SiNo
			Si X<0 Entonces
				Si I<0 Entonces
					M <- rc(I*I+X*X)
					A <- 270-atan(I/X)*180/pi
				SiNo
					M <- rc(I*I+X*X)
					A <- 180+atan(I/X)*180/pi
				FinSi
			SiNo
				Si I<0 Entonces
					M <- rc(I*I+X*X)
					A <- 360+atan(I/X)*180/pi
				SiNo
					M <- rc(I*I+X*X)
					A <- atan(I/X)*180/pi
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'el modulo del vector es: ',M,' y el angulo es: ',A
FinFuncion

Funcion X = Suma_P_X (M,A,M_1,A_1)
	A <- (A*pi)/180
	X <- cos(A)*M
	A_1 <- (A_1*pi)/180
	R <- cos(A_1)*M_1
	X <- X+R
FinFuncion

Funcion I = Suma_P_I (M,A,M_1,A_1)
	A <- (A*pi)/180
	I <- sen(A)*M
	A_1 <- (A_1*pi)/180
	J <- sen(A_1)*M_1
	I <- I+J
FinFuncion
