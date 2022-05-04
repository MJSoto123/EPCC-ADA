#include<bits/stdc++.h>
using namespace std;

void InsertSort(int * A, int n){
    for(int i = 1 ; i < n ; i++){
        int key = A[i];
        int j = i - 1;
        //Se cambio  A[j] > key por A[j] < key
        while(j >= 0 && A[j] < key){
            A[j + 1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {14,27,134,289,951,32,20,1};
    int B[] = {12,17,900,543,76,12,56,34,993,4,32};
    InsertSort(A,8);
    InsertSort(B,11);
    for(auto x : A) cout << x << " ";
    cout << "\n";
    for(auto x : B) cout << x << " ";
}