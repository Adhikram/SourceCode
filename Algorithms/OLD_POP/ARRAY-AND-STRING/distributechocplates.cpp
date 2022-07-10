#include <bits/stdc++.h>
using namespace std;
// type the code here
int main()
{
	// type your code here
	int x;
	cin >> x;
	while (--x)
	{
		int n, k;
		cin >> k >> n;
		double a = (k / n) - ((n - 1) / 2);
		if (a < 0)
		{
			cout << k << end;
		}
		else
		{
			cout << (k - (n * a) - ((n - 1) / 2)) << endl;
		}
	}

	return 0;
}
