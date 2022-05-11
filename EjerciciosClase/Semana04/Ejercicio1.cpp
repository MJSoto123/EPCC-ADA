#include<bits/stdc++.h>
using namespace std;
int greatestNumber(int* A, int n){
    for(int i = 0; i < n; i++){
        bool isIValTheGreatest = true;
        for(int j = 0; j < n; j++){
            if(A[j] > A[i])isIValTheGreatest =false;
        }
        if(isIValTheGreatest) return i;
    }
}
// ------------- PROPOSITO -------------
// Encontrar al mayor numero del array

// ------------- COMPLEJIDAD -------------
// La complejidad es cuadratica O (n^2)
// El primer for es recorrido n veces en el peor de los casos
// El segundo for es recorrido n veces
int main(){
    int A[] = {0,1,2,3,4};
    cout << greatestNumber(A,5);
}