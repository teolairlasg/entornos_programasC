#include "fecha.h"
/*
Precondición:
	-anyo es un entero corto.

Postcondición:
	-devuelve true si un año es bisiesto según el calendario gragoriano.
	-devuelve false si no lo es.
	 los años múltiplos de 4 son bisiestos (febrero 29 días) siempre que no sean múltiplos de 100
	 (1900 no fue bisiesto) a no ser que sean múltiplos de 400 (2000 sí fue bisiesto)

*/

bool anyo_bisiesto(short int anyo){

	//TODO: Rellenar el código de la función para que cumpla la postcondición, basándose en la precondición.

}

/*
Precondición:
	-fecha es un struct de tipo fecha.

Postcondición:
	-devuelve true si el struct de tipo fecha está rellenado con una fecha correcta.
	-devuelve false si el struct de tipo fecha está rellenado con una fecha incorrecta.
	-Para determinar si una fecha es correcta hay que tener en cuenta el número de días
	 que tiene cada mes, el número de meses que tiene el año y que el año sea o no bisiesto.


*/
bool fecha_correcta(fecha f) {

	//TODO: Rellenar el código de la función para que cumpla la postcondición, basándose en la precondición.

}


/*
Precondición: 
	-f es una fecha correcta (validada con la función)
Postcondición:
	-devuelve un struct fecha rellenado con los valores año, mes y día del día siguiente a f según el
	 calendario gregoriano.

*/
fecha dia_siguiente(fecha f){

	//TODO: Rellenar el código de la función para que cumpla la postcondición, basándose en la precondición.

}


/*
Precondición: 
	-f es una fecha correcta (validada con la función)
Postcondición:
	-devuelve un struct fecha rellenado con los valores año, mes y día del día anterior a f según el
	 calendario gregoriano.

*/


fecha dia_anterior(fecha f){

	//TODO: Rellenar el código de la función para que cumpla la postcondición, basándose en la precondición.

}

/*
Precondición: 
	anyo, mes y dia son enteros cortos (short int)
Postcondición:
	-devuelve un struct fecha rellenado con los valores año, mes y día del día pasados, sólo si la fecha que 
	 producen es correcta, en caso de que la fecha fuera incorrecta mostraría un mensaje de error por pantalla
	 y devolvería un struct con la fecha 01 de enero de 1970.

*/

fecha crear_fecha(short int anyo, short int mes, short int dia){

	//TODO: Rellenar el código de la función para que cumpla la postcondición, basándose en la precondición.
	
}
