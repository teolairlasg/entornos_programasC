#include "fecha.h"
#include <stdio.h>
#include <stdbool.h>
//prueba_anyo_bisiesto.c
int main(int argc, char const *argv[])
{
	int anyo;
	for (anyo=0;anyo<2017;anyo++){
		if(anyo_bisiesto(anyo) == true ){
			printf("%d, ", anyo);
		}
	}
	return 0;
}