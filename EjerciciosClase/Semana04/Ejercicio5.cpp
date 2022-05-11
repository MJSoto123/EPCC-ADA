#include<bits/stdc++.h>
using namespace std;
char pick_resume(string resumes){
    string eliminate = "top";
    int inicio, largo;
    while(resumes.length()>1){
        if(eliminate == "top"){
            inicio = resumes.length()/2;
            largo = resumes.length()-inicio;
            resumes = resumes.substr(inicio,largo);
            cout << resumes<< "\n"; 
            eliminate = "bottom";
        }else if(eliminate == "bottom"){
            resumes = resumes.substr(0,resumes.length()/2);
            cout << resumes<< "\n"; 
            eliminate = "top";
        }
    }
    return resumes[0];
}
// ------------- PROPOSITO -------------
// Eliminar la mitad del array actual alternando entre la mitad
// de adelante y luego la mitad de atras.

// ------------- COMPLEJIDAD -------------
// La complejidad es logaritmica O (log(n))
// Siempre eliminamos la mitad del array
// Luego necesitamos log2(n) que es equivalente a log(n)
int main(){
    string resumes = "ABCDEFGHRSTUVWXYZ";
    cout << pick_resume(resumes);
}