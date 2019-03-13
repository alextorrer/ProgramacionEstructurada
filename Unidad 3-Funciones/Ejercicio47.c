/*Autor: Guillermo Canto Dzul
Entradas: Nombre, edad, salario por hora, horas trabajadas, impuesto.
Salidas: El sueldo neto.
*/
#include <stdio.h>
//Entradas
char getName();
int getAge();
int getSalary();
int getHours();
int getTax();
//Proceso
int proceso(int salary, int hours, int tax);
//Salidas
void salida(int sueldoNeto);

int main(int argc, char *argv[]) {
	char name[15];
	int age, salary, hours, tax, sueldoNeto;
	//Entradas
	name[15] = getName();
	age = getAge();
	salary = getSalary();
	hours = getHours();
	tax = getTax();
	//Proceso
	sueldoNeto = proceso(salary, hours, tax);
	//Salida
	salida(sueldoNeto);
	return 0;
}
//Las funciones get leen la entrada correspondiente
char getName(){
	char name[15];
	printf("Ingrese su nombre: ");
	scanf ("%s", &name);
	return name[15];
}
int getAge(){
	int age;
	do{
		printf("Ingrese su edad: ");
		scanf("%d", &age);
	} while (age<=0);
	return age;
}
int getSalary(){
	int salary;
	do{
		printf("Ingrese su sueldo por hora: ");
		scanf("%d", &salary);
	} while (salary<=0);
	return salary;
}
int getHours(){
	int hours;
	do{
		printf("Ingrese horas trabajadas en la semana: ");
		scanf("%d", &hours);
	}while (hours <= 0);
	return hours;
}
int getTax(){
	int tax;
	do{
		printf("Porcentaje de impuestos: ");
		scanf("%d", &tax);	
	}while (tax<=0);
	return tax;
}
//Calcula el sueldo neto de acuerdo a las condiciones del problema
int proceso(int salary, int hours, int tax){
	int horas_extra, horas_tot, impuestos_tot, sueldoNeto;

	if(hours > 40){ //condicional en caso de que el empleado haya trabajado más de 40 horas.
		horas_extra = hours - 40;
		horas_tot = ((salary)*(hours))+((salary)*(horas_extra)); //En caso verdadero; se paga doble.
	}
	else{
		horas_tot = ((salary)*(hours)); //Caso contrario se paga normal.
	}
	
	impuestos_tot = ((tax)*(horas_tot)/(100));
	sueldoNeto = ((horas_tot) - (impuestos_tot));
	return sueldoNeto;
}
//imprime el sueldo neto
void salida(int sueldoNeto){
	printf("SUELDO NETO: %d", sueldoNeto);
}

/*
QA: Realizó: Jose Mendez
Entradas: (Martin , 26, 100, 45, 10)
Salidas: 3 positivps y 3 negativos
Funciona Correctamente. pero no deberia aceptar numeros negativos. (corregido)
*/
