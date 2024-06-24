Algoritmo calcular_impedancia_C_L
	Escribir 'bienvenido al programa para calcular impedancias'
	Repetir
		Escribir '(0) - calcular impedancia'
		Escribir '(1) - calcular inductancia/capacitancia'
		Leer Calculo
		Segun Calculo  Hacer
			0:
				M_Z <- calcular_impedancia_M()
				A_Z <- calcular_impedancia_A()
				X <- P_B_R(M_Z,A_Z)
				I <- P_B_J(M_Z,A_Z)
				calculo_C_L_2(X,I)
			1:
				calculo_C_L()
			De Otro Modo:
				Escribir 'no introduciste un valor valido'
		FinSegun
		Escribir '(0) - apagar'
		Leer apagar
	Mientras Que apagar<>0
FinAlgoritmo

Funcion calculo_C_L()
	Escribir 'introduce el valor real'
	Leer R
	Escribir 'introduce el valor imaginario'
	Leer I
	Escribir 'introduce la frecuencia de trabajo'
	Leer F
	W <- 2*pi*F
	Si I=0 O F==0 Entonces
		Escribir 'el circuito no tiene capacitancia ni inductancia'
		Escribir 'la resistencia es ',R
	SiNo
		Si I>0 Entonces
			L <- I/W
			Escribir 'la inductancia es ',L,' H y la resistencia ',R,' Ohm'
		SiNo
			C <- -1/(W*I)
			Escribir 'la capacitancia es ',C,' F y la resistencia ',R,' Ohm'
		FinSi
	FinSi
FinFuncion

Funcion calculo_C_L_2(X,I)
	Escribir 'introduce la frecuencia de trabajo'
	Leer F
	W <- 2*pi*F
	Si I=0 O F==0 Entonces
		Escribir 'el circuito no tiene capacitancia ni inductancia'
		Escribir ' la resistencia es',R
	SiNo
		Si I>0 Entonces
			L <- I/W
			Escribir 'la inductancia es ',L,' H y la resistencia ',X,' Ohm'
		SiNo
			C <- -1/(W*I)
			Escribir 'la capacitancia es ',C,' F y la resistencia ',X,' Ohm'
		FinSi
	FinSi
FinFuncion

Funcion M_Z = calcular_impedancia_M()
	Escribir 'ingresa el modulo del voltaje'
	Leer M_V
	Escribir 'ingresa el modulo de la corriente'
	Leer M_I
	M_Z <- M_V/M_I
FinFuncion

Funcion A_Z = calcular_impedancia_A()
	Escribir 'ingresa el angulo del voltaje'
	Leer A_V
	Escribir 'ingrese el angulo de la corriente'
	Leer A_I
	Si A_V>=A_I Entonces
		A_Z <- A_V-A_I
	SiNo
		A_Z <- A_V-A_I+360
	FinSi
FinFuncion

Funcion X = P_B_R(M_Z,A_Z)
	A_Z <- (A_Z*pi)/180
	X <- cos(A_Z)*M_Z
	Escribir X,' es la parte real de la impedancia'
FinFuncion

Funcion I = P_B_J(M_Z,A_Z)
	A_Z <- (A_Z*pi)/180
	I <- sen(A_Z)*M_Z
	Escribir I,"J es la parte imaginaria de la impedancia'
FinFuncion
