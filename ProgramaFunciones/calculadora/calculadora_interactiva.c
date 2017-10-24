#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libs/libreria_calculadora.c"

int main(int argc, char const *argv[])
{
	if (argc != 3){
		imprimir_ayuda(argv[0]);
		exit(-1);
	}
	float num1 = atof(argv[1]);
	float num2 = atof(argv[2]);
	float resultado;

	imprmir_menu();
	char operacion;

	scanf("%c",&operacion);

	switch(operacion){
		case '1':
			resultado = suma(num1, num2);
			break;
		case '2':
			resultado = resta(num1, num2);
			break;
		case '3':
			resultado = multiplicacion(num1, num2);
			break;
		case '4':
			resultado = division(num1, num2);
			break;
		default:
			printf("Opción %c incorrecta.\n", operacion);
			exit(-1);
	}
	printf("Resultado: %f", resultado );
	return 0;
}

