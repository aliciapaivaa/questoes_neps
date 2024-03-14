#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
   
    string b;

    for(int i = 0; i < a.size(); i++){
        if (a[i] == 'a' ||
            a[i] == 'e' || 
            a[i] == 'i' ||
            a[i] == 'o' ||
            a[i] == 'u' ){
                b.push_back(a[i]);
            }
    }

    int flag = 0;

    for(int i = 0; i < b.size(); i++){
        if(b[i] == b[b.size() - i - 1] ) {

        } 
        else {
            flag = 1;
        }
    }

    if(flag == 0){
        cout << "S";
    }
    else{
        cout << "N";
    }
    return 0;
}
