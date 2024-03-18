#include <bits/stdc++.h>

using namespace std;
int main(){
    
    int num_band;
    cin >> num_band;

    int lata, copo;

    int quebrados = 0;

    for(int i = 0; i < num_band; i++){
        cin >> lata >> copo;
        if(lata > copo){
            quebrados += copo;
        }
    }

    cout << quebrados << endl;
}