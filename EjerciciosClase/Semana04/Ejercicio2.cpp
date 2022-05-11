#include<bits/stdc++.h>
using namespace std;
void every_other(int *A, int n){
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            for(int j = 0; j < n; j++){
                cout << A[i] + A[j] << "\n";
            }
        }
    }
}
// ------------- PROPOSITO -------------
// Recorre todo el array y para cada elemento en una posicion par (x)
//      Recorre todo el array para cada elemento (y)
//          COUT<< x+y

// ------------- COMPLEJIDAD -------------
// La complejidad es cuadratica O (n^2)
// El primer for es recorrido n/2 veces
// El segundo for es recorrido n veces

int main(){
    int A[] = {0,1,2,3,4};
    every_other(A,5);
}