#include <stdio.h>
#include "libs/libreria_areas.h"

int main(int argc, char const *argv[])
{
	imprimir_menu();
	int lados;
	lados=pedir_numero_lados();
	float resultado = 0;

	if( lados == 3 ){
		float base = pedir_base();
		float altura = pedir_altura();
		resultado = base * altura / 2;
	}else if (lados == 4){
		float base = pedir_base();
		float altura = pedir_altura();
		resultado = base * altura;		
	}else if (lados > 4){
		float perimetro = pedir_perimetro();
		float apotema = pedir_apotema();
		resultado = perimetro * apotema / 2;
	}else{
		imprimir_error_lados();
	}
	imprimir_resultado(resultado, lados);
	return 0;
}