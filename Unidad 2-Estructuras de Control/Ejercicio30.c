#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Proceso: Calcular el M�ximo Com�n Divisor entre 2 n�meros enteros.
Entradas: 2 n�meros enteros
Salidas: El MCD correspondiente
*/

int main()
{
    int a,b;
    printf("Ingrese dos numeros enteros");
    scanf("%d", &a);
    scanf("%d", &b);

    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    printf("%d", a);
    return 0;
}
/*
QA
Autor QA:Eyder Antonio Concha Moreno
Entradas: (3, 4, 5), (9, 10, 5)
salidas: "Los datos corresponden a un triC!ngulo RectC!ngulo" Correcto, "Los valores introducidos NO corresponden a un triangulo rectangulo" Correcto
Proceso: Es correcto, sin embargo deber�a ser capaz de funcionar con valores indeterminados al inicio
*/
