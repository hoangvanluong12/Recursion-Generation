#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, check = 0;
	char binary[10008];

	freopen("BINARYGEN.inp", "r", stdin);
    freopen("BINARYGEN.out", "w", stdout);



	cin >> n;
	cin >> binary;

	for(int i = 0; i < n; i++)
	{
		if(binary[i] == '1')
			check++;
	}

	if(check == n)
	{
		cout << -1;
		return 0;
	}

	for(int i = n-1; i >= 0; --i)
	{
		if(binary[i] == '0')
		{
			binary[i] = '1';
			break;
		}
		else if(binary[i] == '1')
		{
			binary[i] = '0';
		}
	}

	cout << binary;


	return 0;
}
