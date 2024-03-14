#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main(){
    int valor; //valor inicial em centavos
    cin >> valor;

    int contador = 0;

    int v[6] = {100, 50, 25, 10, 5, 1};
    vector<int> vic;

    for(int i = 0; i < 6; i++){
        contador += valor/v[i];
        // cout << valor/v[i]<< " " << v[i]<< " centavos"<< "\n";  
        vic.push_back(valor/v[i]);
        valor = valor%v[i];
    }

    cout << contador << "\n";

    for(int i = 0; i < 6 ; i++){
        cout << vic[i] << "\n";
    }

}