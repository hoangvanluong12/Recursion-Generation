#include <bits/stdc++.h>

using namespace std;

int n;
string tow = "ABC";
int a, b, c;

void Tower(int n, int a, int b, int c)
{
    if(n == 1)
    {
        cout << tow[a] << "->" << tow[c] << "\n";
    }
    else
    {
        Tower(n-1, a, c, b);
        Tower(1, a, b, c);
        Tower(n-1, b, a, c);
    }
}

int main()
{
	freopen("THN.inp", "r", stdin);
	freopen("THN.out", "w", stdout);
	
	
    cin >> n;
    a = 0, b = 1, c = 2;
	
    Tower(n, a, b, c);


    return 0;
}
