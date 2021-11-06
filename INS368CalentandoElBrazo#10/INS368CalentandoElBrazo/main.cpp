//
//  main.cpp
//  INS368CalentandoElBrazo#10
//
//  Created by Vicente Fernando Vargas Grullon on 5/11/21.
//

#include <iostream>
using namespace std;

int main()
{
    int arrayA[5], arrayB[5], arrayC[5];
    int cantidad;
    
    cout << "Ingrese la cantidad de valores a guardar: "; cin >> cantidad;
    
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese un numero en la posicion " << i << " del array A: "; cin >> arrayA[i];
        cout << "Ingrese numero en la posicion " << i << " del array B: "; cin >> arrayB[i];
        cout << endl;
    }
    
    for (int i = 0; i < cantidad; i++)
    {
        arrayC[i] = arrayA[i] + arrayB[i];
        cout << arrayC[i] << endl;
    }
    
    return 0;
}
