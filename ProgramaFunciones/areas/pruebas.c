#include <stdio.h>
#include "libs/libreria_areas.h"

int main(int argc, char const *argv[])
{
	int lados = pedir_numero_lados();
	printf("Lados introducidos %d\n", lados);
	float base = pedir_base();
	printf("El valor de base introducido es: %f\n", base);
}