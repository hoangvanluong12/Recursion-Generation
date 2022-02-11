#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int x[1000000];

    freopen("HOANVI.inp", "r", stdin);
    freopen("HOANVI.out", "w", stdout);

    cin >> n;

    for(int i = 0; i < n; i++)
        x[i] = i + 1;

    do
    {
        for(int i = 0; i < n; i++)
            cout << x[i] << " ";
        cout << "\n";
    }
    while(next_permutation(x, x + n));

    return 0;
}
    
