#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		ll k;
		cin >> k;
		if(k%2==0)
			cout << (k/2)*(k/2) << "\n";
		else
			cout << (k/2)*(k/2+1) << "\n";
	}
}
