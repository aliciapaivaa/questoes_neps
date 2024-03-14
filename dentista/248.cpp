#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> h;
    int n, x, y;
    int cont = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        h.push_back(x);
        h.push_back(y);
    }
    for(int i = 1; i < h.size(); i+=2)
    {
        for(int j = i; j < h.size(); j++)
        {
            if(j%2 == 0)
            {
                if(h[i] <= h[j])
                {
                    cont++;
                    i = j-1;
                    break;
                }
            }
        }
    }
    cout << cont << endl;
}