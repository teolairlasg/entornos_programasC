#include "fecha.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	fecha f_nac;
	f_nac.anyo = 1950;
	f_nac.mes = 10;
	f_nac.dia = 16;

	printf("La fecha es %d-%d-%d\n",f_nac.dia, f_nac.mes, f_nac.anyo ); 

	return 0;
}