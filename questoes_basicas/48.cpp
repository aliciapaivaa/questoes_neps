#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int n; //numero de dias q a lista contem
    cin >> n;

    int total = 0;

    int v[1000];

    for (int i = 0; i < n; i++)
    {
        int num_de_acessos;
        cin >> num_de_acessos;
        v[i] = num_de_acessos;

        total += num_de_acessos;

        if(total >= 1000000){
            cout << i + 1; 
            break;
        }
    }
}