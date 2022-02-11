#include <bits/stdc++.h>

using namespace std;

bool check(int i, int k)
{
    int j = 1;
    while (i >= 0)
    {
        j *= i;
        if (j >= k) return true;
        i--;
    }
    return false;
}

int main()
{
    int n, k, c = 0;
    long long int x[100000];
//    
//    freopen("HVK.inp", "r", stdin);
//    freopen("HVK.out", "w", stdout);
    
    cin >> n >> k;
    
    if(check(n, k) == false)
    {
        cout << -1;
        return 0;
    }

    for(int i = 0; i < n; i++)
        x[i] = i + 1;

    do
    {
        c++;
        if(c == k)
        {
            for(int i = 0; i < n; i++)
                cout << x[i] << " ";
        }
    }
    while(next_permutation(x, x + n));

    return 0;
}
    
