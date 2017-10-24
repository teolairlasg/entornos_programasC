void imprimir_ayuda(char const*);
float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);
void imprmir_menu();

void imprimir_ayuda(char const *programa){
	printf("Error en el número de parámetros:\n");
	printf("Uso:\n\t%s operando1 operando2\n\n", programa);
}

float suma( float op1, float op2 ){
	float res;
	res = op1 + op2;
	return res;
}

float resta( float op1, float op2 ){
	float res;
	res = op1 - op2;
	return res;
}

float multiplicacion( float op1, float op2 ){
	float res;
	res = op1 * op2;
	return res;
}

float division( float op1, float op2 ){
	float res;
	res = op1 / op2;
	return res;
}

void imprmir_menu(){
	printf("Selecciona la operación:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Multiplicación\n");
	printf("\t 4.- División\n");
}