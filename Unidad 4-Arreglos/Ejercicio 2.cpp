/*
Autor: Jimmy Nathan Ojeda Arana
Entradas: Se generan numeros al azar del 1 al 49 para los elementos de las matrices A y B
Salidas: Se genera una matriz S como resultado de la suma de las matrices A y B
Proceso: Se suma el valor correspondiente de la matriz A con el de la matriz B y se asigna al valor correspondiente de la matris S
*/

#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void matrizS(),valoresA(),valoresB();
int A[3][4],B[3][4],S[3][4];

int main()
{
    srand(time(NULL));
    valoresA();
    valoresB();
    matrizS();
    return 0;
}

void valoresA(){
    //Se generan valores al azar para los elementos de A
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            A[i][j]=rand()%50;
            cout<<"A["<<i+1<<"]["<<j+1<<"] = "<<A[i][j]<<"\n";
        }
    }
}

void valoresB(){
    //Se generan valores al azar para los elementos de B
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            B[i][j]=rand()%50;
            cout<<"B["<<i+1<<"]["<<j+1<<"] = "<<B[i][j]<<"\n";
        }
    }
}

void matrizS(){
    //Se suman los valores correspondientes entre la matriz A y la matriz B para generar la matriz S
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            S[i][j]=A[i][j]+B[i][j];
            cout<<"S["<<i+1<<"]["<<j+1<<"] = "<<S[i][j]<<"\n";
        }
    }
}

/*
QA: Jose Mendez Verdejo

Entradas: ninguna
Salidas:
S[1][1] = 33
S[1][2] = 30
S[1][3] = 47
S[1][4] = 52
S[2][1] = 63
S[2][2] = 48
S[2][3] = 68
S[2][4] = 47
S[3][1] = 59
S[3][2] = 45
S[3][3] = 64
S[3][4] = 83

Salidas correctas, cumplen con la suma de los dos vectores( A y B).

Funcion valoresA(): añade correctamente los valores del vectorA

Funcion valoresB(): añade correctamente los valores del vectorB

funcion matrizS(): Realiza la suma de los dos vectores correctamente.

Comentarios: Estaria bien poder definir uno el tamaño de las natrices,
pero en general cumple con el proposito de la suma de las matrices.

Muy bien hecho  :)

*/
