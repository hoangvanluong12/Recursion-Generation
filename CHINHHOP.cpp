#include <bits/stdc++.h>

using namespace std;


int n, k, a[10001], stored[10002];


void print()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;

}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(stored[j] == 0)
        {
            a[i] = j;
            stored[j] = 1;
            if(i == k)
                print();
            else
            {
               Try(i+1);
            }
            stored[j] = 0;
        }
    }
}

int main()
{
	
    freopen("CHINHHOP.inp", "r", stdin);
    freopen("CHINHHOP.out", "w", stdout);
	
    memset(stored, 0, sizeof(stored));
    cin >> n >> k;

    Try(1);

    return 0;
}
    
