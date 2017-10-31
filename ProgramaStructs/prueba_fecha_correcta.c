#include "fecha.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	fecha f;
	f.dia = 30;
	f.mes = 2;
	f.anyo = 2000;

	printf("fecha %d-%d-%d correcta?\n", f.dia, f.mes, f.anyo );
	if(fecha_correcta(f)){
		printf("true\n");
	}else{
		printf("false\n");
	}


	return 0;
}

//prueba_fecha_correcta.c