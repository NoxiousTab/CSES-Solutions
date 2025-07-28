#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){


	int n; cin>>n;
	int sum = 0ll;
	for(int i = 1; i <= n - 1; i++){
		int k; cin>>k; sum += k;
	}

	cout<<(n*(n+1))/2 - sum<<"\n";


	return 0;
}
