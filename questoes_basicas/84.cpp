#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int a, m;

    cin >> a >> m;

    if((a + m)/2 >= 7)
        cout << "Aprovado" << endl;
    else if((a + m)/2 < 7 && (a + m)/2 >= 4)
        cout << "Recuperacao" << endl;
    else    
        cout << "Reprovado" << endl;
}