#include <bits/stdc++.h>

using namespace std;

int main(){
    int dimensao_do_tabuleiro;

    cin >> dimensao_do_tabuleiro;

    int posicao;

    int soma = 0;
    int soma_linhas = 0;
    int soma_colunas = 0;

    vector < vector <int> > mat;

    for(int i = 0; i < dimensao_do_tabuleiro; i++) {
    
        for(int j = 0; j < dimensao_do_tabuleiro; j++){
            cin >> posicao;
            //soma de todos os valores da matriz
            soma = soma + mat[i][j];

            cout << soma;
        }
    }


    // cout << "soma linhas " << soma_linhas;
    // cout << "soma colunas " << soma_colunas;
    // cout << "soma " << soma;

    

}
