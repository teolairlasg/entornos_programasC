#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void imprimir_ayuda(char const*);
int suma(int, int);
int resta(int, int);
int multiplicacion(int, int);
int division(int, int);

int main(int argc, char const *argv[])
{
	if (argc != 3){
		imprimir_ayuda(argv[0]);
		exit(-1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int resultado;
	resultado = suma(num1, num2);
	printf("%d + %d = %d\n", num1, num2, resultado );
	resultado = resta(num1, num2);
	printf("%d - %d = %d\n", num1, num2, resultado );
	resultado = multiplicacion(num1, num2);
	printf("%d * %d = %d\n", num1, num2, resultado );
	resultado = division(num1, num2);
	printf("%d / %d = %d\n", num1, num2, resultado );
	return 0;
}

void imprimir_ayuda(char const *programa){
	printf("Error en el número de parámetros:\n");
	printf("Uso:\n\t%s operando1 operando2\n\n", programa);
}

int suma( int op1, int op2 ){
	int res;
	res = op1 + op2;
	return res;
}

int resta( int op1, int op2 ){
	int res;
	res = op1 - op2;
	return res;
}

int multiplicacion( int op1, int op2 ){
	int res;
	res = op1 * op2;
	return res;
}

int division( int op1, int op2 ){
	int res;
	res = op1 / op2;
	return res;
}