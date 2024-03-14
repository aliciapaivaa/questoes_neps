#include <bits/stdc++.h>

using namespace std;
int main(){

    int n, m;
    cin >> n >> m;

    vector<set<int>> s;

    s.resize(100000);

    int t, a, b;

    for(int i = 0; i < m; i++){
        cin >> t >> a >> b;

        if(t == 0){

            if(s[a].find(b) != s[a].end()){
                cout << "1" << endl; 
            }
            else
                cout << "0" <<endl;
            
            //jeito simplificado de escrever:
            // cout << (s[a].find(b) != s[a].end()) << endl;  
        }

        else{
            s[b].insert(a);
            s[a].insert(b);
        }
    }


}