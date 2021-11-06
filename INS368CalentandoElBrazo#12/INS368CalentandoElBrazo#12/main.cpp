//
//  main.cpp
//  INS368CalentandoElBrazo#12
//
//  Created by Vicente Fernando Vargas Grullon on 5/11/21.
//

#include <iostream>
using namespace std;

int main()
{
    int arrayA[5], cantidad, escalar, arrayB[5];
    
    cout << "Ingrese la cantidad de valores a guardar: "; cin >> cantidad;
    
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese un numero en la posicion " << i << " del array A: "; cin >> arrayA[i];
        cout << endl;
    }
    
    cout << "Ingrese que cantidad escalar desea agregar al array: "; cin >> escalar;
    
    for (int i = 0; i < cantidad; i++)
    {
        arrayB[i] = arrayA[i] + escalar;
        cout << arrayB[i] << endl;
    }
    return 0;
}
