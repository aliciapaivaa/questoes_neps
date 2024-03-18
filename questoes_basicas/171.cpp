#include <bits/stdc++.h>

using namespace std;
int main(){
    
    double a, b, resposta;

    cin >> a >> b;

    resposta = pow(a, b);

    // for(int i = 0; i < b; i++){
    //     resposta = resposta * a;
    // }
    
    cout << fixed << setprecision(4);

    cout << resposta << endl;
}
//neps nao aceita meu código pois fala que tem casos de teste que estao diferentes