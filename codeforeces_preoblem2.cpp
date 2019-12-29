//Standard template file
#include <bits/stdc++.h>

using namespace std;

int main() 
{

	freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n, k;
		cin >> n >> k;
		int full = n - n % k;
		full += min(n % k, k / 2);
		cout << full << endl;
	}
	
	return 0;
}