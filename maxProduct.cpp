// Producto máximo de dos números en una secuencia
// • Dada una secuencia de n números no negativos y mayores que cero.
// • El objetivo es encontrar el mayor número que se pueda obtener
// multiplicando dos números de esta secuencia.
// • En tiempo lineal

#include<bits/stdc++.h>
using namespace std;

// maximo largo del array 200k o 2e5 o 200 000 (se puede cambiar si se necesita)
int arr[200005];

int MaxProduct(int* arr, int n){
    // Respuestas directas
    if(n == 0 || n == 1) return -1;
    if(n == 2) return arr[0]*arr[1];

    // MAX1 mayor de todo el array
    int max1 = max(arr[0], arr[1]);

    // MAX2 segundo mayor de todo el array
    int max2 = min(arr[0], arr[1]);
    for(int i = 2; i < n; i++){

        // Actualizamos max1 y max2
        if(arr[i] >= max1){
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] >= max2){
            max2 = arr[i];
        }
    }
    /*
    Retornamos el producto de los dos nuúmeros mayores
    del array esto solo se cumple gracias a que las entradas
    son estrictamente postivas.
    */
    return max1*max2;
}
int main(){
    int n;
    // Lectura de datos
    cin >>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // Salida de datos
    cout << MaxProduct(arr,n);
}
