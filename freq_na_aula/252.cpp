#include <bits/stdc++.h>

using namespace std;

int v[100000];

int main(){
    int n; 
    cin >> n;
    int contador = 1;

    for(int i = 0; i < n; i++){
        cin >> v[i]; 
    }
    sort(v, v+n);

    for(int i = 1 ; i < n ; i++){
        if(v[i] != v[i-1]){
            contador++;
        } 
    }

    cout << contador << "\n";
}