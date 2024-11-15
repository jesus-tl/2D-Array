

#include <iostream>
#include <iomanip>
using namespace std;


//Funcion suma


int array_Suma (const int arreglo [] [COLMS], int filas){

    int sum = 0;

    for(int i = 0; i < filas; i++){

        for(int j = 0; j < COLMS; j++){

            sum += arreglo[i][j];

        }
    }
return 0;

}