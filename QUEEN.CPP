#include <bits/stdc++.h>

using namespace std;

int a[12], col[12], mainDiagonal[24], subDiagonal[25];
int n;

void print(int a[10])
{
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << "\n";
}


void arrange(int k)
{
    for(int i = 1; i <= n; i++)
    {
        if(col[i] == 0 && mainDiagonal[k-i] == 0 && subDiagonal[k+i] == 0)
        {
            a[k] = i;
            col[i] = 1;
            mainDiagonal[k-i] = 1;
            subDiagonal[k+i] = 1;
            if(k == n)
                print(a);
            else
                arrange(k+1);
            col[i] = 0;
            mainDiagonal[k-i] = 0;
            subDiagonal[k+i] = 0;
        }
    }
}

int main()
{
	
	
	freopen("QUEEN.inp", "r", stdin);
	freopen("QUEEN.out", "w", stdout);
	
    cin >> n;

    memset(col, 0, sizeof(col));
    memset(mainDiagonal, 0, sizeof(mainDiagonal));
    memset(subDiagonal, 0, sizeof(subDiagonal));

    arrange(1);


}
