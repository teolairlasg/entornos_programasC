#include "fecha.h"
#include <stdio.h>
/*
Precondición:
	-anyo es un entero corto.

Postcondición:
	-devuelve true si un año es bisiesto según el calendario gregoriano.
	-devuelve false si no lo es.
	 los años múltiplos de 4 son bisiestos (febrero 29 días) siempre que no sean múltiplos de 100
	 (1900 no fue bisiesto) a no ser que sean múltiplos de 400 (2000 sí fue bisiesto)

*/

bool anyo_bisiesto(short int anyo){

	bool retorno;

	if (anyo%400 == 0){
		retorno = true;
	}else if(anyo%100 == 0){
		retorno = false;
	}else if(anyo%4==0){
		retorno = true;
	}else{
		retorno=false;
	}
/*
	if ( (anyo%4==0 && anyo%100!=0) || anyo%400==0 ){
		retorno = true;
	}else{
		retorno = false;
	}*/
	return retorno;
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

	bool fecha_correcta;
	if(f.dia <= 0 || f.mes <= 0 || f.mes > 12){
		fecha_correcta = false;
	}else if( mes_largo(f.mes) && f.dia > 31 ){
		fecha_correcta = false;
	}else if( mes_corto(f.mes) && f.dia > 30){
		fecha_correcta = false;
	}else if(f.mes == 2 && anyo_bisiesto(f.anyo) && f.dia > 29){
		fecha_correcta = false;
	}else if(f.mes == 2 && !anyo_bisiesto(f.anyo) && f.dia > 28){
		fecha_correcta = false;
	}else{
		fecha_correcta = true;
	}
	return fecha_correcta;
}

bool mes_corto(short int mes){
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
		return true;
	}else{
		return false;
	}
}

bool mes_largo(short int mes){
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		return true;
	}else{
		return false;
	}
}



/*
Precondición: 
	-f es una fecha correcta (validada con la función)
Postcondición:
	-devuelve un struct fecha rellenado con los valores año, mes y día del día siguiente a f según el
	 calendario gregoriano.
	f_nueva = dia_siguiente(f);
*/
fecha dia_siguiente(fecha f){

	if(mes_largo(f.mes)){
		if(f.dia<31){
			f.dia++;
		}else if(f.mes==12){
			f.mes=1;
			f.dia=1;
			f.anyo++;
		}else{
			f.dia=1;
			f.mes++;
		}
	}else if(mes_corto(f.mes)){
		if(f.dia<30){
			f.dia++;
		}else{
			f.dia=1;
			f.mes++;
		}
	}else if(f.mes==2){
		if(f.dia<28 || (f.dia<29 && anyo_bisiesto(f.anyo)) ){
			f.dia++;
		}else{
			f.dia=1;
			f.mes++;
		}
	}else{
		fprintf(stderr, "La fecha %d/%d/%d no es correcta.\n", f.dia, f.mes, f.anyo);
	}
	return f;

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
	short int mes_anterior=f.mes-1; //calculamos el mes anterior.
	if (f.dia!=1){
		f.dia--;
	}else if(mes_corto(mes_anterior)){ //si es corto (30 días) el anterior
		f.dia=30;
		f.mes--;
	}else if(f.mes==1){ //si el mes es enero (largo)
		f.dia=31;
		f.mes=12;
		f.anyo--;
	}else if(f.mes==3){ //si el mes es marzo (el anterior es febrero)
		f.mes=2;
		if(anyo_bisiesto(f.anyo)){
			f.dia=29;
		}else{
			f.dia=28;
		}
	}else{
		f.dia=31;
		f.mes--;
	}
	return f;
}

/*
Precondición: 
	anyo, mes y dia son enteros cortos (short int)
Postcondición:
	-devuelve un struct fecha rellenado con los valores año, mes y día de la fecha pasados, sólo si la fecha que 
	 producen es correcta, en caso de que la fecha fuera incorrecta mostraría un mensaje de error por pantalla
	 y devolvería un struct con la fecha 01 de enero de 1970.

*/

fecha crear_fecha(short int parametro_anyo, short int parametro_mes, short int parametro_dia){

	//TODO: Rellenar el código de la función para que cumpla la postcondición, basándose en la precondición.
	fecha f;
	f.anyo=parametro_anyo;
	f.mes=parametro_mes;
	f.dia=parametro_dia;
	if(!fecha_correcta(f)){
		f.anyo=1970;
		f.mes=1;
		f.dia=1;
	}
	return f;
}

void imprimir_fecha(fecha f){
	printf("%d/%d/%d\n",f.dia,f.mes,f.anyo);
}

/* Precondición: 
   -f es una fecha válida.
   -n_dias es un entero positivo.
   Post-condición:
   -devuelve la fecha de dentro de n_dias días.
*/

fecha avanzar_dias(fecha f, int n_dias){

	int i;
	for(i=0;i<n_dias;i++){
		f=dia_siguiente(f);
	}
	return f;
}
/* Precondición: 
   -f es una fecha válida.
   -n_dias es un entero positivo.
   Post-condición:
   -devuelve la fecha de hace n_dias días.
*/

fecha retroceder_dias(fecha f, int n_dias){
	int i;
	for(i=0;i<n_dias;i++){
		f=dia_anterior(f);
	}
	return f;
}


