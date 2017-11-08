#ifndef FECHA_H
#define FECHA_H

#include <stdbool.h> //Funcionalidad booleana true, false...

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
bool mes_largo(short int);
bool mes_corto(short int);
bool anyo_bisiesto(short int anyo);
fecha dia_siguiente(fecha);
fecha dia_anterior(fecha);
fecha crear_fecha(short int anyo, short int mes, short int dia);
fecha avanzar_dias(fecha, int);
fecha retroceder_dias(fecha, int);
void imprimir_fecha(fecha);


#endif