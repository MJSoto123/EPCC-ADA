#include<bits/stdc++.h>
using namespace std;
bool twoSum(int* A, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && A[i] + A[j] == 10){
                return true;
            } 
        }
    }
    return false;
}
// ------------- PROPOSITO -------------
// Saber si dos números en diferentes indices
// el array pueden sumar 10

// ------------- COMPLEJIDAD -------------
// La complejidad es cuadratica O (n^2)
// El primer for es recorrido n veces en el peor de los casos
// El segundo for es recorrido n veces en el peor de los casos
int main(){
    int A[] = {0,1,2,4,5};
    cout << twoSum(A,5);
}