/*
Autor: Amílcar A. Ramírez Patrón
Entradas: El dia, mes y año de dos fechas distintas
Proceso: Verificar, en orden año, mes, día, qué numero de ambas fechas es mayor y escribir la fecha que es, a la vez
que procurar continuar en orden en caso de empate, hasta que se concluya que ambas fechas son iguales
Salidas: La fecha mayor
*/
#include <stdio.h>

void leerAmbasFechas(int*, int*, int*, int*, int*, int*);
void compararAmbasFechas(int*, int*, int*, int*, int*, int*);

/*15.Escribir el programa que lea dos fechas (día-mes-año) con tres cantidades
enteras e imprima la mayor, si son la misma imprima son iguales.
*/
int main(int argc, char *argv[]) {
	//entrada
	int diauno, mesuno, anouno, diados, mesdos, anodos;
	leerAmbasFechas(&diauno, &mesuno, &anouno, &diados, &mesdos, &anodos);
	//proceso
	compararAmbasFechas(&diauno, &mesuno, &anouno, &diados, &mesdos, &anodos);
	return 0;
}

void leerAmbasFechas(int *diauno, int *mesuno, int* anouno, int *diados, int *mesdos, int *anodos){
	printf("Escriba el dia uno:");
	scanf("%d", diauno);
	printf("Escriba el mes uno:");
	scanf("%d", mesuno);
	printf("Escriba el ano uno:");
	scanf("%d", anouno);
	printf("Escriba el dia dos:");
	scanf("%d", diados);
	printf("Escriba el mes dos:");
	scanf("%d", mesdos);
	printf("Escriba el ano dos:");
	scanf("%d", anodos);
}


void compararAmbasFechas(int *diauno, int *mesuno, int* anouno, int *diados, int *mesdos, int *anodos){
	if(*anouno < *anodos){
		printf("La segunda fecha ingresada es mayor: dia %d mes %d año %d\n", *diados, *mesdos, *anodos);
	}
	if(*anouno > *anodos){
		printf("La primera fecha ingresada es mayor: dia %d mes %d año %d\n", *diauno, *mesuno, *anouno);
	}
	else if (*anouno = *anodos){
		if(*mesuno < *mesdos){
			printf("La segunda fecha ingresada es mayor: dia %d mes %d año %d\n", *diados, *mesdos, *anodos);
		}
		if(*mesuno > *mesdos){
			printf("La primera fecha ingresada es mayor: dia %d mes %d año %d\n", *diauno, *mesuno, *anouno);
		}
		else if(*mesuno = *mesdos){
			if(*diauno < *diados){
				printf("La segunda fecha ingresada es mayor: dia %d mes %d año %d\n", *diados, *mesdos, *anodos);
			}
			if(*diauno > *diados){
				printf("La primera fecha ingresada es mayor: dia %d mes %d año %d\n", *diauno, *mesuno, *anouno);
			}
			else if(*diauno = *diados){
				printf("Las fechas son las mismas\n");
			}
		}
	}
}

/*
QA: Hector Abraham V. Cosgalla
Entradas:
Entradas:
10--|24--|10--|
2---|3---|2---|
1998|1995|1995|
24--|10--|10--|
3---|2---|2---|
1995|1998|1995|
Salidas:
La primera fecha ingresada es mayor | la segunda fecha ingresada es mayor | las fechas son las mismas
																		| La primera fecha ingresada es mayor |
Comentarios: Hay una pequeña falla en el segundo caso, hay que revisarlo, y se necesita un poco mas
de informacion al momento de solicitar los valores.
*/
