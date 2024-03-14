#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> t;

    int a;

    int tamanho; 
    cin >> tamanho;

    for(int i = 0; i < tamanho; i++){
        cin >> a;
        
        t.insert(a);
    }

    cout << t.size() << endl;
}