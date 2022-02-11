#include <bits/stdc++.h>

using namespace std;


int n, k, a[10001];


void print()
{
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << endl;

}

void Try(int i)
{
    for(int j = a[i-1] + 1; j <= n-k+i; j++)
    {
    	a[i] = j;
    	if(i == k)
    		print();
    	else
    		Try(i+1);
	}
}

int main()
{
		
    freopen("TOHOP.INP", "r", stdin);
    freopen("TOHOP.OUT", "w", stdout);
	
    cin >> n >> k;

    Try(1);

    return 0;
}
    
