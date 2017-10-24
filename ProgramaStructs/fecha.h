#ifndef FECHA_H
#define FECHA_H

/*
La librería stdbool.h da la 
funcionalidad de las variables
booleanas. true y false.
el tipo de datos será bool
*/

#include <stdbool.h>

/*
//A partir de aquí podemos
//usar cosas como: 
bool correcto;
correcto = true;
correcto = false;
if(!correcto){
	
}

while(correcto){
	correcto = !correcto;
}

*/

//Definimos el contenido
//de la estructura fecha.
typedef struct{
	short int anyo;
	short int mes;
	short int dia;
}fecha;

/*
//Esto es equivalente 
//a lo de arriba:
struct s_fecha{
	short int anyo;
	short int mes;
	short int dia;
};

typedef struct s_fecha fecha;

*/

//Devuelve true si la fecha es correcta
//Devuelve false si la fecha no lo es.
bool fecha_correcta(fecha);

//Devuelve true si el año pasado por parámetro
// es bisiesto y false en caso contrario.
bool anyo_bisiesto(short int anyo);

//Devuelve la fecha correspondiente
//al día siguiente del parámetro
//La fecha será válida.
fecha dia_siguiente(fecha);

//Devuelve la fecha correspondiente
// al día anterior del parametro
//La fecha será válida.
fecha dia_anterior(fecha);

//Devuelve una estructura
//de tipo fecha con los valores
//anyo, mes y dia pasados por parámetro.
//En el caso de que la fecha no sea correcta
//se imprime un mensaje de error y se 
//devuelve la estructura de la fecha
//de tu día de nacimiento.
fecha crear_fecha(short int anyo, short int mes, short int dia);

#endif