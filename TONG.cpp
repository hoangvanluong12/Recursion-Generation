// 2 code phan tich tong nay in thu tu ket qua khac nhau

#include <bits/stdc++.h>

using namespace std;

int a[100];
int n, t = 0;

bool acceptable(int i, int k)
{
    if (k == 0)
        return true;
    else
    {
        if (i <= a[k-1])
            return true;
        else  
            return false;
    }
}

void print(int k)
{
    cout << n << " = ";
    
    for (int i = 0; i < k; ++i)
        cout << a[i] << " + ";
    cout << a[k] << "\n";
}

void Try(int k = 0)
{
    for (int i = 1; i <= n; ++i)
    {
        if (acceptable(i, k))
        {
            a[k] = i;
            t += i;
            if (t == n)
                print(k);
            else if (t < n)
                Try(k+1);
            t -= i;
        }
    }
}


int main()
{
//    
//    freopen("TONG.inp", "r", stdin);
//    freopen("TONG.out", "w", stdout);
    
    cin >> n;

    Try();

    return 0;
} 

#include <bits/stdc++.h>

using namespace std;

int n;
int a[100], t[100];


void DoPrint(int last)
{
    cout << n << " = ";
    for(int index = 1; index < last; index++)
    {

        cout << a[index] << " + ";
    }
    cout << a[last] << "\n";
}


void DoTry(int i)
{
    for(int j = a[i-1]; j <= ((n - t[i-1]) / 2); j++)
    {
        a[i] = j;
        t[i] = t[i - 1] + j;
        DoTry(i+1);
    }
    a[i] = n - t[i-1];
    DoPrint(i);
}


int main()
{
	freopen("TONG.inp", "r", stdin);
	freopen("TONG.out", "w", stdout);
	
    cin >> n;
    
    a[0] = 1;
	t[0] = 0;


    DoTry(1);

    return 0;
}
