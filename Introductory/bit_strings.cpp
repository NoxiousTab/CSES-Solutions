#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){

	int mod = 1e9 + 7ll;
	int n; cin>>n;
	int res = 1;
	for(int i = 1; i <= n; i++){
		res*=2;
		res %= mod;
	}

	cout<<res;
	return 0;
}
