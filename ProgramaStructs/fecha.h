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
//A partir de aquí podríamos (tanto en este archivo como en archivos que lo incluyan como fecha.c)
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


bool fecha_correcta(fecha);

bool anyo_bisiesto(short int anyo);

fecha dia_siguiente(fecha);

fecha dia_anterior(fecha);

fecha crear_fecha(short int anyo, short int mes, short int dia);

#endif