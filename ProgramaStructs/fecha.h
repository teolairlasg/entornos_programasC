#ifndef FECHA_H
#define FECHA_H

/**struct s_fecha
{
	short int anyo;
	short int mes;
	short int dia;
};

typedef struct s_fecha fecha;

*/

typedef struct{
	short int anyo;
	short int mes;
	short int dia;
}fecha;


//Devuelve 0 si la fecha es correcta.
int fecha_correcta(fecha);
int anyo_bisiesto(short int);
fecha dia_siguiente(fecha);
fecha dia_anterior(fecha);
fecha crear_fecha(short int, short int, short int);





#endif