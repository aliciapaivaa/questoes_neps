#include <bits/stdc++.h>

using namespace std;

int main(){

    //vai ser com vector? 
    vector<int> fila; // pessoas q entraram na fila  

    vector<int> fila2; //pessoas q sairam
    

    int tamanho_da_fila;

    cin >> tamanho_da_fila; // N - numero de pessoas q estao na fila

    int identificador; // identificador de qm esta na fila

    for(int i = 0; i < tamanho_da_fila; i++){
        cin >> identificador;
        fila.push_back(identificador); 
    }

    int pessoas_que_sairam; // M - numero de pessoas q sairam da fila

    cin >> pessoas_que_sairam;

    int id; // identificador de qm saiu da fila

    for(int i = 0; i < pessoas_que_sairam; i++){
        cin >> id;
        fila2.push_back(id);
    }


    for(int i = 0; i < fila.size(); i++ ){
        for(int a = 0; a < pessoas_que_sairam; a++){
            if(fila[i] == fila2[a]){
                fila.erase(fila.begin()+i);
            }

        }
    }
    for(int i = 0; i < fila.size(); i++){
        cout << fila[i] << " ";
    }
}