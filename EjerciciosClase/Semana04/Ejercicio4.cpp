#include<bits/stdc++.h>
using namespace std;
bool find_needle(string needle, string haystack){
    int needle_index = 0;
    int haystack_index = 0;
    while(haystack_index < haystack.length()){
        if(needle[needle_index] == haystack[haystack_index]){
            bool found_needle = true;
            while(needle_index < needle.length()){
                if(needle[needle_index] != haystack[haystack_index +needle_index]){
                    found_needle = false;
                    break;
                }
                needle_index++;
            }
            if(found_needle) return true;
            needle_index = 0;
        }
        haystack_index++;
    }
    return false;
}
// ------------- PROPOSITO -------------
// Saber si una cadena principal contiene a la cadena secundaria

// ------------- COMPLEJIDAD -------------
// La complejidad es O (m*n)
// El primer for es recorrido m-n veces en el peor de los casos
// El segundo for es recorrido n-1 veces en el peor de los casos
int main(){
    string a = "aab";
    string b = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    cout << find_needle(a,b);
}