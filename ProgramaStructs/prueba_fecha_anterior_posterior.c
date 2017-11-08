#include "fecha.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	fecha f;
	f.dia = 1;
	f.mes = 3;
	f.anyo = 2000;

	if(fecha_correcta(f)){
		fecha f_anterior = dia_anterior(f);
		fecha f_posterior = dia_siguiente(f);
		fecha f_365 = avanzar_dias(f,365);
		fecha f_menos365 = retroceder_dias(f,365);
		imprimir_fecha(f);
		imprimir_fecha(f_anterior);
		imprimir_fecha(f_posterior);
		imprimir_fecha(f_365);
		imprimir_fecha(f_menos365);
	}
	return 0;
}

//prueba_fecha_correcta.c