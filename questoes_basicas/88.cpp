#include <bits/stdc++.h>

using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && a == c && b == c)
        cout << "*" << endl;
    
    else if(a != b && a != c && b == c)
        cout << "A" << endl; 
    
    else if(a != b && b != c && a == c)
        cout << "B" << endl;
    
    else if(c != b && c != a && a == b)
        cout << "C" << endl;
    

}