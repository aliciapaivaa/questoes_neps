#include <bits/stdc++.h>

using namespace std;
int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        double numero;
        cin >> numero;
        
        cout << fixed << setprecision(4);

        cout << sqrt(numero) << endl; 
    }

}