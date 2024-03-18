#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int n;
    cin >> n;

    int valor; //? numeros 0 e 1 escritos no vetor

    int contador = 0;

    int v[n];

    for(int i = 0; i < n; i++){
        cin >> valor;
        v[i] = valor;
    }

    for(int i = 0; i < n-2; i++){
        if(v[i] == 1){
            if(v[i+1] == 0 && v[i+2] == 0){
                contador++;
            }
        }
    }
    cout << contador << endl;
}
// neps nao aceitou pois eu estava acessando espaço de memoria ndv no for
//! errado => for(int i = 0; i < n ; i++){
