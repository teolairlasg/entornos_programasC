#include "libreria_areas.h"
#include <stdio.h>

void imprimir_menu(){

	printf("Bienvenido al programa de Areas.\n");

};
int pedir_numero_lados(){
	int lados;
	printf("Escribe el número de lados de tu polígono:\n");
	return pedir_entero();
};
float pedir_base(){
	return pedir_decimal("base");
};
float pedir_altura(){
	return pedir_decimal("altura");

};
float pedir_apotema(){
	
	return pedir_decimal("apotema");

};
float pedir_perimetro(){
	return pedir_decimal("perímetro");

};
void imprimir_resultado(float resultado, int lados){
	printf("El polígono de %d lados tiene un área de %.2f resultado\n", lados, resultado );

};
void imprimir_error_lados(){

	printf("Error en el número de lados. Escribre un número mayor que 2.\n");

};

float pedir_decimal(char* dimension){

	float entrada_teclado;
	printf("Escribe el valor de %s:\n", dimension);
	scanf("%f",&entrada_teclado);
	return entrada_teclado;

};

int pedir_entero(char* variable){

	int entrada_teclado;
	printf("Escribe el valor de %d:\n", entero);
	scanf("%d",&entrada_teclado);
	return entrada_teclado;

};